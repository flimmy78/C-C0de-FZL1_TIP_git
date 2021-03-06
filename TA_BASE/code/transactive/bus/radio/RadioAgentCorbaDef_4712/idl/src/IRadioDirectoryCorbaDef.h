// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __IRadioDirectoryCorbaDef_hh__
#define __IRadioDirectoryCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_IRadioDirectoryCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_IRadioDirectoryCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_IRadioDirectoryCorbaDef
#endif



#ifndef __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#define __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#include <CommonExceptionsCorbaDef.h>
#endif



#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif





_CORBA_MODULE TA_Base_Bus_4712

_CORBA_MODULE_BEG

#ifndef __TA__Base__Bus__4712_mIRadioDirectoryCorbaDef__
#define __TA__Base__Bus__4712_mIRadioDirectoryCorbaDef__

  class IRadioDirectoryCorbaDef;
  class _objref_IRadioDirectoryCorbaDef;
  class _impl_IRadioDirectoryCorbaDef;
  
  typedef _objref_IRadioDirectoryCorbaDef* IRadioDirectoryCorbaDef_ptr;
  typedef IRadioDirectoryCorbaDef_ptr IRadioDirectoryCorbaDefRef;

  class IRadioDirectoryCorbaDef_Helper {
  public:
    typedef IRadioDirectoryCorbaDef_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_IRadioDirectoryCorbaDef, IRadioDirectoryCorbaDef_Helper> IRadioDirectoryCorbaDef_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_IRadioDirectoryCorbaDef,IRadioDirectoryCorbaDef_Helper > IRadioDirectoryCorbaDef_out;

#endif

  // interface IRadioDirectoryCorbaDef
  class IRadioDirectoryCorbaDef {
  public:
    // Declarations for this interface type.
    typedef IRadioDirectoryCorbaDef_ptr _ptr_type;
    typedef IRadioDirectoryCorbaDef_var _var_type;

    static _ptr_type _duplicate(_ptr_type);
    static _ptr_type _narrow(::CORBA::Object_ptr);
    static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
    
    static _ptr_type _nil();

    static inline void _marshalObjRef(_ptr_type, cdrStream&);

    static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
      omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
      if (o)
        return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
      else
        return _nil();
    }

    static _core_attr const char* _PD_repoId;

    // Other IDL defined within this scope.
    class radioDirectoryError : public ::CORBA::UserException {
    public:
      
      ::CORBA::String_member what;

    

      inline radioDirectoryError() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      radioDirectoryError(const radioDirectoryError&);
      radioDirectoryError(const char* i_what);
      radioDirectoryError& operator=(const radioDirectoryError&);
      virtual ~radioDirectoryError();
      virtual void _raise() const;
      static radioDirectoryError* _downcast(::CORBA::Exception*);
      static const radioDirectoryError* _downcast(const ::CORBA::Exception*);
      static inline radioDirectoryError* _narrow(::CORBA::Exception* _e) {
        return _downcast(_e);
      }
      
      void operator>>=(cdrStream&) const ;
      void operator<<=(cdrStream&) ;

      static _core_attr insertExceptionToAny    insertToAnyFn;
      static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

      virtual ::CORBA::Exception* _NP_duplicate() const;

      static _core_attr const char* _PD_repoId;
      static _core_attr const char* _PD_typeId;

    private:
      virtual const char* _NP_typeId() const;
      virtual const char* _NP_repoId(int*) const;
      virtual void _NP_marshal(cdrStream&) const;
    };

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_radioDirectoryError;

    class radioInvalidSubscriberException : public ::CORBA::UserException {
    public:
      
      

      inline radioInvalidSubscriberException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      radioInvalidSubscriberException(const radioInvalidSubscriberException&);
      
      radioInvalidSubscriberException& operator=(const radioInvalidSubscriberException&);
      virtual ~radioInvalidSubscriberException();
      virtual void _raise() const;
      static radioInvalidSubscriberException* _downcast(::CORBA::Exception*);
      static const radioInvalidSubscriberException* _downcast(const ::CORBA::Exception*);
      static inline radioInvalidSubscriberException* _narrow(::CORBA::Exception* _e) {
        return _downcast(_e);
      }
      
      inline void operator>>=(cdrStream&) const { }
      inline void operator<<=(cdrStream&) { }

      static _core_attr insertExceptionToAny    insertToAnyFn;
      static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

      virtual ::CORBA::Exception* _NP_duplicate() const;

      static _core_attr const char* _PD_repoId;
      static _core_attr const char* _PD_typeId;

    private:
      virtual const char* _NP_typeId() const;
      virtual const char* _NP_repoId(int*) const;
      virtual void _NP_marshal(cdrStream&) const;
    };

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_radioInvalidSubscriberException;

    enum SubscriberType { INDIVIDUAL_SUBSCRIBER, GROUP_SUBSCRIBER, PATCH_SUBSCRIBER /*, __max_SubscriberType=0xffffffff */ };
    typedef SubscriberType& SubscriberType_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_SubscriberType;

    struct SubscriberDetails {
      typedef _CORBA_ConstrType_Variable_Var<SubscriberDetails> _var_type;

      
      ::CORBA::String_member TSI;

      ::CORBA::String_member subscriberName;

      ::CORBA::String_member locationName;

      ::CORBA::Long locationKey;

      ::CORBA::String_member ownerTSI;

      SubscriberType type;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef SubscriberDetails::_var_type SubscriberDetails_var;

    typedef _CORBA_ConstrType_Variable_OUT_arg< SubscriberDetails,SubscriberDetails_var > SubscriberDetails_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_SubscriberDetails;

    enum SubscriberNotificationType { NEW_SUBSCRIBER, UPDATE_SUBSCRIBER, DELETE_SUBSCRIBER, SCAN_SUBSCRIBERS /*, __max_SubscriberNotificationType=0xffffffff */ };
    typedef SubscriberNotificationType& SubscriberNotificationType_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_SubscriberNotificationType;

    struct SubscriberDetailsNotification {
      typedef _CORBA_ConstrType_Variable_Var<SubscriberDetailsNotification> _var_type;

      
      SubscriberNotificationType notifyType;

      SubscriberDetails details;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef SubscriberDetailsNotification::_var_type SubscriberDetailsNotification_var;

    typedef _CORBA_ConstrType_Variable_OUT_arg< SubscriberDetailsNotification,SubscriberDetailsNotification_var > SubscriberDetailsNotification_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_SubscriberDetailsNotification;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_SubscriberList;

    class SubscriberList_var;

    class SubscriberList : public _CORBA_Unbounded_Sequence< SubscriberDetails >  {
    public:
      typedef SubscriberList_var _var_type;
      inline SubscriberList() {}
      inline SubscriberList(const SubscriberList& _s)
        : _CORBA_Unbounded_Sequence< SubscriberDetails > (_s) {}

      inline SubscriberList(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence< SubscriberDetails > (_max) {}
      inline SubscriberList(_CORBA_ULong _max, _CORBA_ULong _len, SubscriberDetails* _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence< SubscriberDetails > (_max, _len, _val, _rel) {}

    

      inline SubscriberList& operator = (const SubscriberList& _s) {
        _CORBA_Unbounded_Sequence< SubscriberDetails > ::operator=(_s);
        return *this;
      }
    };

    class SubscriberList_out;

    class SubscriberList_var {
    public:
      inline SubscriberList_var() : _pd_seq(0) {}
      inline SubscriberList_var(SubscriberList* _s) : _pd_seq(_s) {}
      inline SubscriberList_var(const SubscriberList_var& _s) {
        if( _s._pd_seq )  _pd_seq = new SubscriberList(*_s._pd_seq);
        else              _pd_seq = 0;
      }
      inline ~SubscriberList_var() { if( _pd_seq )  delete _pd_seq; }
        
      inline SubscriberList_var& operator = (SubscriberList* _s) {
        if( _pd_seq )  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline SubscriberList_var& operator = (const SubscriberList_var& _s) {
        if( _s._pd_seq ) {
          if( !_pd_seq )  _pd_seq = new SubscriberList;
          *_pd_seq = *_s._pd_seq;
        } else if( _pd_seq ) {
          delete _pd_seq;
          _pd_seq = 0;
        }
        return *this;
      }
      inline SubscriberDetails& operator [] (_CORBA_ULong _s) {
        return (*_pd_seq)[_s];
      }

    

      inline SubscriberList* operator -> () { return _pd_seq; }
      inline const SubscriberList* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator SubscriberList& () const { return *_pd_seq; }
#else
      inline operator const SubscriberList& () const { return *_pd_seq; }
      inline operator SubscriberList& () { return *_pd_seq; }
#endif
        
      inline const SubscriberList& in() const { return *_pd_seq; }
      inline SubscriberList&       inout()    { return *_pd_seq; }
      inline SubscriberList*&      out() {
        if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline SubscriberList* _retn() { SubscriberList* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class SubscriberList_out;
      
    private:
      SubscriberList* _pd_seq;
    };

    class SubscriberList_out {
    public:
      inline SubscriberList_out(SubscriberList*& _s) : _data(_s) { _data = 0; }
      inline SubscriberList_out(SubscriberList_var& _s)
        : _data(_s._pd_seq) { _s = (SubscriberList*) 0; }
      inline SubscriberList_out(const SubscriberList_out& _s) : _data(_s._data) {}
      inline SubscriberList_out& operator = (const SubscriberList_out& _s) {
        _data = _s._data;
        return *this;
      }
      inline SubscriberList_out& operator = (SubscriberList* _s) {
        _data = _s;
        return *this;
      }
      inline operator SubscriberList*&()  { return _data; }
      inline SubscriberList*& ptr()       { return _data; }
      inline SubscriberList* operator->() { return _data; }

      inline SubscriberDetails& operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      SubscriberList*& _data;

    private:
      SubscriberList_out();
      SubscriberList_out& operator=(const SubscriberList_var&);
    };

    class invalidSpeedDialSetException : public ::CORBA::UserException {
    public:
      
      

      inline invalidSpeedDialSetException() {
        pd_insertToAnyFn    = insertToAnyFn;
        pd_insertToAnyFnNCP = insertToAnyFnNCP;
      }
      invalidSpeedDialSetException(const invalidSpeedDialSetException&);
      
      invalidSpeedDialSetException& operator=(const invalidSpeedDialSetException&);
      virtual ~invalidSpeedDialSetException();
      virtual void _raise() const;
      static invalidSpeedDialSetException* _downcast(::CORBA::Exception*);
      static const invalidSpeedDialSetException* _downcast(const ::CORBA::Exception*);
      static inline invalidSpeedDialSetException* _narrow(::CORBA::Exception* _e) {
        return _downcast(_e);
      }
      
      inline void operator>>=(cdrStream&) const { }
      inline void operator<<=(cdrStream&) { }

      static _core_attr insertExceptionToAny    insertToAnyFn;
      static _core_attr insertExceptionToAnyNCP insertToAnyFnNCP;

      virtual ::CORBA::Exception* _NP_duplicate() const;

      static _core_attr const char* _PD_repoId;
      static _core_attr const char* _PD_typeId;

    private:
      virtual const char* _NP_typeId() const;
      virtual const char* _NP_repoId(int*) const;
      virtual void _NP_marshal(cdrStream&) const;
    };

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_invalidSpeedDialSetException;

    struct SpeedDialEntry {
      typedef _CORBA_ConstrType_Variable_Var<SpeedDialEntry> _var_type;

      
      ::CORBA::String_member label;

      ::CORBA::String_member TSI;

      ::CORBA::Octet position;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef SpeedDialEntry::_var_type SpeedDialEntry_var;

    typedef _CORBA_ConstrType_Variable_OUT_arg< SpeedDialEntry,SpeedDialEntry_var > SpeedDialEntry_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_SpeedDialEntry;

    struct SpeedDialSet {
      typedef _CORBA_ConstrType_Variable_Var<SpeedDialSet> _var_type;

      
      ::CORBA::String_member setName;

      ::CORBA::Boolean isSystem;

      ::CORBA::Long profileID;

      ::CORBA::Long operatorID;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef SpeedDialSet::_var_type SpeedDialSet_var;

    typedef _CORBA_ConstrType_Variable_OUT_arg< SpeedDialSet,SpeedDialSet_var > SpeedDialSet_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_SpeedDialSet;

    enum EUserSetTypeMatch { PROFILE, USER, COMBINED /*, __max_EUserSetTypeMatch=0xffffffff */ };
    typedef EUserSetTypeMatch& EUserSetTypeMatch_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_EUserSetTypeMatch;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_SpeedDialList;

    class SpeedDialList_var;

    class SpeedDialList : public _CORBA_Unbounded_Sequence< SpeedDialEntry >  {
    public:
      typedef SpeedDialList_var _var_type;
      inline SpeedDialList() {}
      inline SpeedDialList(const SpeedDialList& _s)
        : _CORBA_Unbounded_Sequence< SpeedDialEntry > (_s) {}

      inline SpeedDialList(_CORBA_ULong _max)
        : _CORBA_Unbounded_Sequence< SpeedDialEntry > (_max) {}
      inline SpeedDialList(_CORBA_ULong _max, _CORBA_ULong _len, SpeedDialEntry* _val, _CORBA_Boolean _rel=0)
        : _CORBA_Unbounded_Sequence< SpeedDialEntry > (_max, _len, _val, _rel) {}

    

      inline SpeedDialList& operator = (const SpeedDialList& _s) {
        _CORBA_Unbounded_Sequence< SpeedDialEntry > ::operator=(_s);
        return *this;
      }
    };

    class SpeedDialList_out;

    class SpeedDialList_var {
    public:
      inline SpeedDialList_var() : _pd_seq(0) {}
      inline SpeedDialList_var(SpeedDialList* _s) : _pd_seq(_s) {}
      inline SpeedDialList_var(const SpeedDialList_var& _s) {
        if( _s._pd_seq )  _pd_seq = new SpeedDialList(*_s._pd_seq);
        else              _pd_seq = 0;
      }
      inline ~SpeedDialList_var() { if( _pd_seq )  delete _pd_seq; }
        
      inline SpeedDialList_var& operator = (SpeedDialList* _s) {
        if( _pd_seq )  delete _pd_seq;
        _pd_seq = _s;
        return *this;
      }
      inline SpeedDialList_var& operator = (const SpeedDialList_var& _s) {
        if( _s._pd_seq ) {
          if( !_pd_seq )  _pd_seq = new SpeedDialList;
          *_pd_seq = *_s._pd_seq;
        } else if( _pd_seq ) {
          delete _pd_seq;
          _pd_seq = 0;
        }
        return *this;
      }
      inline SpeedDialEntry& operator [] (_CORBA_ULong _s) {
        return (*_pd_seq)[_s];
      }

    

      inline SpeedDialList* operator -> () { return _pd_seq; }
      inline const SpeedDialList* operator -> () const { return _pd_seq; }
#if defined(__GNUG__)
      inline operator SpeedDialList& () const { return *_pd_seq; }
#else
      inline operator const SpeedDialList& () const { return *_pd_seq; }
      inline operator SpeedDialList& () { return *_pd_seq; }
#endif
        
      inline const SpeedDialList& in() const { return *_pd_seq; }
      inline SpeedDialList&       inout()    { return *_pd_seq; }
      inline SpeedDialList*&      out() {
        if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
        return _pd_seq;
      }
      inline SpeedDialList* _retn() { SpeedDialList* tmp = _pd_seq; _pd_seq = 0; return tmp; }
        
      friend class SpeedDialList_out;
      
    private:
      SpeedDialList* _pd_seq;
    };

    class SpeedDialList_out {
    public:
      inline SpeedDialList_out(SpeedDialList*& _s) : _data(_s) { _data = 0; }
      inline SpeedDialList_out(SpeedDialList_var& _s)
        : _data(_s._pd_seq) { _s = (SpeedDialList*) 0; }
      inline SpeedDialList_out(const SpeedDialList_out& _s) : _data(_s._data) {}
      inline SpeedDialList_out& operator = (const SpeedDialList_out& _s) {
        _data = _s._data;
        return *this;
      }
      inline SpeedDialList_out& operator = (SpeedDialList* _s) {
        _data = _s;
        return *this;
      }
      inline operator SpeedDialList*&()  { return _data; }
      inline SpeedDialList*& ptr()       { return _data; }
      inline SpeedDialList* operator->() { return _data; }

      inline SpeedDialEntry& operator [] (_CORBA_ULong _i) {
        return (*_data)[_i];
      }

    

      SpeedDialList*& _data;

    private:
      SpeedDialList_out();
      SpeedDialList_out& operator=(const SpeedDialList_var&);
    };

    struct SpeedDialUpdateNotification {
      typedef _CORBA_ConstrType_Variable_Var<SpeedDialUpdateNotification> _var_type;

      
      ::CORBA::String_member sessionID;

      SpeedDialEntry updateEntry;

    

      void operator>>= (cdrStream &) const;
      void operator<<= (cdrStream &);
    };

    typedef SpeedDialUpdateNotification::_var_type SpeedDialUpdateNotification_var;

    typedef _CORBA_ConstrType_Variable_OUT_arg< SpeedDialUpdateNotification,SpeedDialUpdateNotification_var > SpeedDialUpdateNotification_out;

    static _dyn_attr const ::CORBA::TypeCode_ptr _tc_SpeedDialUpdateNotification;

  
  };

  class _objref_IRadioDirectoryCorbaDef :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    IRadioDirectoryCorbaDef::SubscriberList* getGroupSubscribers();
    IRadioDirectoryCorbaDef::SubscriberList* getPatchSubscribers();
    IRadioDirectoryCorbaDef::SubscriberList* getIndividualSubscribers();
    IRadioDirectoryCorbaDef::SubscriberDetails* getSubscriberDetails(const char* TSI);
    IRadioDirectoryCorbaDef::SubscriberList* getGroupMembers(const char* TSI);
    IRadioDirectoryCorbaDef::SubscriberList* getPatchMembers(const char* TSI);
    IRadioDirectoryCorbaDef::SubscriberList* searchSubscriber(const char* searchTxt);
    ::CORBA::Long getLastDirectorySynchronisationTime();
    char* getUserSetName(const char* sessionID, ::TA_Base_Bus_4712::IRadioDirectoryCorbaDef::EUserSetTypeMatch typeMatch);
    IRadioDirectoryCorbaDef::SpeedDialList* getSpeedDialSet(const char* setName);
    void updateSpeedDialSet(const ::TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialSet& setDetails, const char* sessionID);
    void updateSpeedDial(const char* setName, const ::TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialEntry& newEntry, const char* sessionID);
    ::CORBA::UShort getFlexibleTimeOutValue();

    inline _objref_IRadioDirectoryCorbaDef()  { _PR_setobj(0); }  // nil
    _objref_IRadioDirectoryCorbaDef(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_IRadioDirectoryCorbaDef();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_IRadioDirectoryCorbaDef(const _objref_IRadioDirectoryCorbaDef&);
    _objref_IRadioDirectoryCorbaDef& operator = (const _objref_IRadioDirectoryCorbaDef&);
    // not implemented

    friend class IRadioDirectoryCorbaDef;
  };

  class _pof_IRadioDirectoryCorbaDef : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_IRadioDirectoryCorbaDef() : _OMNI_NS(proxyObjectFactory)(IRadioDirectoryCorbaDef::_PD_repoId) {}
    virtual ~_pof_IRadioDirectoryCorbaDef();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_IRadioDirectoryCorbaDef :
    public virtual omniServant
  {
  public:
    virtual ~_impl_IRadioDirectoryCorbaDef();

    virtual IRadioDirectoryCorbaDef::SubscriberList* getGroupSubscribers() = 0;
    virtual IRadioDirectoryCorbaDef::SubscriberList* getPatchSubscribers() = 0;
    virtual IRadioDirectoryCorbaDef::SubscriberList* getIndividualSubscribers() = 0;
    virtual IRadioDirectoryCorbaDef::SubscriberDetails* getSubscriberDetails(const char* TSI) = 0;
    virtual IRadioDirectoryCorbaDef::SubscriberList* getGroupMembers(const char* TSI) = 0;
    virtual IRadioDirectoryCorbaDef::SubscriberList* getPatchMembers(const char* TSI) = 0;
    virtual IRadioDirectoryCorbaDef::SubscriberList* searchSubscriber(const char* searchTxt) = 0;
    virtual ::CORBA::Long getLastDirectorySynchronisationTime() = 0;
    virtual char* getUserSetName(const char* sessionID, ::TA_Base_Bus_4712::IRadioDirectoryCorbaDef::EUserSetTypeMatch typeMatch) = 0;
    virtual IRadioDirectoryCorbaDef::SpeedDialList* getSpeedDialSet(const char* setName) = 0;
    virtual void updateSpeedDialSet(const ::TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialSet& setDetails, const char* sessionID) = 0;
    virtual void updateSpeedDial(const char* setName, const ::TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialEntry& newEntry, const char* sessionID) = 0;
    virtual ::CORBA::UShort getFlexibleTimeOutValue() = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_IRadioDirectoryCorbaDef;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Bus_4712
_CORBA_MODULE_BEG

  class IRadioDirectoryCorbaDef :
    public virtual TA_Base_Bus_4712::_impl_IRadioDirectoryCorbaDef,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~IRadioDirectoryCorbaDef();

    inline ::TA_Base_Bus_4712::IRadioDirectoryCorbaDef_ptr _this() {
      return (::TA_Base_Bus_4712::IRadioDirectoryCorbaDef_ptr) _do_this(::TA_Base_Bus_4712::IRadioDirectoryCorbaDef::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Bus_4712
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::radioDirectoryError& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::radioDirectoryError* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::radioDirectoryError*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::radioInvalidSubscriberException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::radioInvalidSubscriberException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::radioInvalidSubscriberException*& _sp);

inline void operator >>=(TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberType _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberType& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= TA_Base_Bus_4712::IRadioDirectoryCorbaDef::PATCH_SUBSCRIBER) {
    _e = (TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberType) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberType _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberType& _s);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberDetails& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberDetails* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberDetails*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberDetails*& _sp);

inline void operator >>=(TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberNotificationType _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberNotificationType& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SCAN_SUBSCRIBERS) {
    _e = (TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberNotificationType) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberNotificationType _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberNotificationType& _s);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberDetailsNotification& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberDetailsNotification* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberDetailsNotification*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberDetailsNotification*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberList& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberList* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberList*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SubscriberList*& _sp);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::invalidSpeedDialSetException& _s);
void operator<<=(::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::invalidSpeedDialSetException* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::invalidSpeedDialSetException*& _sp);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialEntry& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialEntry* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialEntry*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialEntry*& _sp);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialSet& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialSet* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialSet*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialSet*& _sp);

inline void operator >>=(TA_Base_Bus_4712::IRadioDirectoryCorbaDef::EUserSetTypeMatch _e, cdrStream& s) {
  ::operator>>=((::CORBA::ULong)_e, s);
}

inline void operator <<= (TA_Base_Bus_4712::IRadioDirectoryCorbaDef::EUserSetTypeMatch& _e, cdrStream& s) {
  ::CORBA::ULong _0RL_e;
  ::operator<<=(_0RL_e,s);
  if (_0RL_e <= TA_Base_Bus_4712::IRadioDirectoryCorbaDef::COMBINED) {
    _e = (TA_Base_Bus_4712::IRadioDirectoryCorbaDef::EUserSetTypeMatch) _0RL_e;
  }
  else {
    OMNIORB_THROW(MARSHAL,_OMNI_NS(MARSHAL_InvalidEnumValue),
                  (::CORBA::CompletionStatus)s.completion());
  }
}

void operator<<=(::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::EUserSetTypeMatch _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::EUserSetTypeMatch& _s);

void operator<<=(::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialList& _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialList* _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialList*& _sp);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialList*& _sp);

extern void operator<<=(::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialUpdateNotification& _s);
extern void operator<<=(::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialUpdateNotification* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialUpdateNotification*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const TA_Base_Bus_4712::IRadioDirectoryCorbaDef::SpeedDialUpdateNotification*& _sp);

void operator<<=(::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus_4712::IRadioDirectoryCorbaDef_ptr& _s);



inline void
TA_Base_Bus_4712::IRadioDirectoryCorbaDef::_marshalObjRef(::TA_Base_Bus_4712::IRadioDirectoryCorbaDef_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_IRadioDirectoryCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_IRadioDirectoryCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_IRadioDirectoryCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_IRadioDirectoryCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_IRadioDirectoryCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_IRadioDirectoryCorbaDef
#endif

#endif  // __IRadioDirectoryCorbaDef_hh__

