########################################################################
# sqldef.pl - Generates sqldef.h, which defines a number of macros
#	used in SQLCode.h that differ only in the number of arguments.  That
#	number limits the number of parameters a SQL statement can
#	accept.  This value can be changed from its default, below.
#
########################################################################


# The number of parameters a SQL statement can accept.  Make this value
# larger only at needed, as it adds code to the library proportionally.
# You should not reduce this value if programs you did not write may
# link to the library, as that would constitute an breakage.
# the perl command is:
# perl sqldef.pl -f 50
my $max_parameters = 50;


# No user-serviceable parts below.

use strict;
use Getopt::Std;

our $opt_f;
getopts('f:') or die "usage: $0 [-f fields]\n\n";
$max_parameters = int($opt_f) if defined $opt_f;

open (OUT, ">sqldef.h");

print OUT << "---";
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// This file is generated by the Perl script sqldef.pl. Please do 
// not modify this file directly. Change the script instead.
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#ifndef SQLDEF_H
#define SQLDEF_H

#if defined(_WIN32)
#define sql_snprintf _snprintf
#else
#define sql_snprintf  snprintf
#endif

#define SQL_MAX_PARAMETERS $max_parameters

---

## Build PURE_SQL_FUNCS macro
print OUT "#define PURE_SQL_FUNCS(RETURN, FUNC) \\\n";
for (my $i = 0; $i < $max_parameters; ++$i ) {
	print OUT "\tvirtual RETURN FUNC(SQLStatement&, ";
	for (my $j = 0; $j < $i + 1; ++$j) {
		print OUT 'const SQLTypeAdapter& arg', $j;
		print OUT ', ' unless $j == $i;
	}
	print OUT ") = 0; \\\n";
}
print OUT "\n\n\n";

## Build DEF_SQL_PARMS macro
print OUT "#define DEF_SQL_PARMS(RETURN, FUNC) \\\n";
for (my $i = 1; $i < $max_parameters; ++$i) {
	print OUT "\tRETURN FUNC(SQLStatement& rSqlStatment, ";
	for (my $j = 0; $j < $i + 1; ++$j) {
		print OUT 'const SQLTypeAdapter& arg', $j;
		print OUT ', ' unless $j == $i;
	}
	print OUT ") \\\n";

	print OUT "\t\t{ return FUNC(rSqlStatment, SQLVarParms() ";
	for (my $j = 0; $j < $i + 1; ++$j) {
		print OUT ' << arg', $j;
	}
	print OUT "); } \\\n";
}
print OUT "\n\n\n";

## Build DEF_CONSTRUCT_SQLCODE macro
print OUT "#define DEF_CONSTRUCT_SQLCODE(SQLSTRING_LEN,SQLTYPE) \\\n";
print OUT "\tswitch(uVarCount){ \\\n";
for(my $i = 2; $i < $max_parameters; ++$i){
	print OUT "\tcase " , $i , ':';
	print OUT " \\\n\t\tsql_snprintf(szSQL, SQLSTRING_LEN, strSQLFormat.c_str(), ";
	for(my $j = 1; $j < $i; ++$j){
		print OUT 'varParms[', $j, '].data(SQLTYPE)';
		print OUT ', ' unless $j + 1 == $i;
	}
	print OUT "); break; \\\n";
}
print OUT "} \n\n";

## Build DEF_CONSTRUCT_DYNAMIC_SQLCODE macro
#print OUT "#define DEF_CONSTRUCT_DYNAMIC_SQLCODE(SQLSTRING_LEN) \\\n";
#print OUT "\tswitch(uVarCount){ \\\n";
#for(my $i = 5; $i < $max_parameters; ++$i){
#	print OUT "\tcase " , $i , ':';
#	print OUT " \\\n\t\tsql_snprintf(szSQL, SQLSTRING_LEN, strSQLFormat.c_str(), ";
#	for(my $j = 4; $j < $i; ++$j){
#		print OUT 'varParms[', $j, '].data()';
#		print OUT ', ' unless $j + 1 == $i;
#	}
#	print OUT "); break; \\\n";
#}
#print OUT "} \n\n";

## That's all, folks!
print OUT "#endif // !defined(SQLDEF_H)\n";

