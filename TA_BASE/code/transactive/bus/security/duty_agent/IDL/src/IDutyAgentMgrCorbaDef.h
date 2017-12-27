// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __IDutyAgentMgrCorbaDef_hh__
#define __IDutyAgentMgrCorbaDef_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_IDutyAgentMgrCorbaDef
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_IDutyAgentMgrCorbaDef
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_IDutyAgentMgrCorbaDef
#endif



#ifndef __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#define __CommonExceptionsCorbaDef_hh_EXTERNAL_GUARD__
#include <CommonExceptionsCorbaDef.h>
#endif
#ifndef __IDutyAgentRespCorbaDef_hh_EXTERNAL_GUARD__
#define __IDutyAgentRespCorbaDef_hh_EXTERNAL_GUARD__
#include <IDutyAgentRespCorbaDef.h>
#endif
#ifndef __DutyAgentTypeCorbaDef_hh_EXTERNAL_GUARD__
#define __DutyAgentTypeCorbaDef_hh_EXTERNAL_GUARD__
#include <DutyAgentTypeCorbaDef.h>
#endif
#ifndef __IAuthenticationAgentCorbaDef_hh_EXTERNAL_GUARD__
#define __IAuthenticationAgentCorbaDef_hh_EXTERNAL_GUARD__
#include <IAuthenticationAgentCorbaDef.h>
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





_CORBA_MODULE TA_Base_Bus

_CORBA_MODULE_BEG

#ifndef __TA__Base__Bus_mIDutyAgentMgrCorbaDef__
#define __TA__Base__Bus_mIDutyAgentMgrCorbaDef__

  class IDutyAgentMgrCorbaDef;
  class _objref_IDutyAgentMgrCorbaDef;
  class _impl_IDutyAgentMgrCorbaDef;
  
  typedef _objref_IDutyAgentMgrCorbaDef* IDutyAgentMgrCorbaDef_ptr;
  typedef IDutyAgentMgrCorbaDef_ptr IDutyAgentMgrCorbaDefRef;

  class IDutyAgentMgrCorbaDef_Helper {
  public:
    typedef IDutyAgentMgrCorbaDef_ptr _ptr_type;

    static _ptr_type _nil();
    static _CORBA_Boolean is_nil(_ptr_type);
    static void release(_ptr_type);
    static void duplicate(_ptr_type);
    static void marshalObjRef(_ptr_type, cdrStream&);
    static _ptr_type unmarshalObjRef(cdrStream&);
  };

  typedef _CORBA_ObjRef_Var<_objref_IDutyAgentMgrCorbaDef, IDutyAgentMgrCorbaDef_Helper> IDutyAgentMgrCorbaDef_var;
  typedef _CORBA_ObjRef_OUT_arg<_objref_IDutyAgentMgrCorbaDef,IDutyAgentMgrCorbaDef_Helper > IDutyAgentMgrCorbaDef_out;

#endif

  // interface IDutyAgentMgrCorbaDef
  class IDutyAgentMgrCorbaDef {
  public:
    // Declarations for this interface type.
    typedef IDutyAgentMgrCorbaDef_ptr _ptr_type;
    typedef IDutyAgentMgrCorbaDef_var _var_type;

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
    
  };

  class _objref_IDutyAgentMgrCorbaDef :
    public virtual ::CORBA::Object,
    public virtual omniObjRef
  {
  public:
    void mgrTransferRegionDuty(const ::TA_Base_Bus::IAuthenticationAgentCorbaDef::SessionInfoCorbaDef& session, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& regions);
    void mgrTransferSubsystemDuty(const ::TA_Base_Bus::IAuthenticationAgentCorbaDef::SessionInfoCorbaDef& session, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::SubsystemTreeSequence& subsystems);
    void mgrTransferAllSubsystemDuty(const ::TA_Base_Bus::IAuthenticationAgentCorbaDef::SessionInfoCorbaDef& session);
    void mgrDelegateSubsystemDuty(const char* session, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& regions, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& subsystems);
    void mgrDegradeAllSubsystems(const char* session);
    void mgrGetDutyState(const char* session, ::TA_Base_Bus::DutyAgentTypeCorbaDef::SubsystemStateSequence_out subState, ::TA_Base_Bus::DutyAgentTypeCorbaDef::SubsystemDutySequence_out subDuty, ::TA_Base_Bus::DutyAgentTypeCorbaDef::RegionDutySequence_out regDuty);
    void mgrGetSessionDutyState(const char* session, ::TA_Base_Bus::DutyAgentTypeCorbaDef::SubsystemStateSequence_out subState, ::TA_Base_Bus::DutyAgentTypeCorbaDef::SubsystemDutySequence_out subDuty, ::TA_Base_Bus::DutyAgentTypeCorbaDef::RegionDutySequence_out regDuty);
    DutyAgentTypeCorbaDef::SubsystemStateSequence* mgrGetSubsystemDutyState(const char* session, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& subKeys, ::TA_Base_Bus::DutyAgentTypeCorbaDef::Key locationKey);
    DutyAgentTypeCorbaDef::TransferableRegionSequence* mgrGetTransferableRegions(const ::TA_Base_Bus::IAuthenticationAgentCorbaDef::SessionInfoCorbaDef& session);
    DutyAgentTypeCorbaDef::TransferableSubsystemSequence* mgrGetTransferableSubsystems(const ::TA_Base_Bus::IAuthenticationAgentCorbaDef::SessionInfoCorbaDef& session, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& regions);
    DutyAgentTypeCorbaDef::TransferableRegionSequence* regMgrGetTransferableRegions(const char* session, ::TA_Base_Bus::DutyAgentTypeCorbaDef::SubsystemTreeSequence_out uncontrolledSubs);
    void regMgrTransferRegionDuty(const char* user, const char* session, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& regions);
    DutyAgentTypeCorbaDef::SubsystemTreeSequence* regMgrGetRemovableRegions(const char* session);
    void regMgrRemoveRegionDuty(const char* user, const char* session, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& regions);
    void mgrDegradeSubsystemsAtLocation(const char* session, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& subsystems, ::TA_Base_Bus::DutyAgentTypeCorbaDef::Key locationKey);
    void mgrDegradeSubsystemsAtRegions(const char* session, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& subsystems, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& regions);

    inline _objref_IDutyAgentMgrCorbaDef()  { _PR_setobj(0); }  // nil
    _objref_IDutyAgentMgrCorbaDef(omniIOR*, omniIdentity*);

  protected:
    virtual ~_objref_IDutyAgentMgrCorbaDef();

    
  private:
    virtual void* _ptrToObjRef(const char*);

    _objref_IDutyAgentMgrCorbaDef(const _objref_IDutyAgentMgrCorbaDef&);
    _objref_IDutyAgentMgrCorbaDef& operator = (const _objref_IDutyAgentMgrCorbaDef&);
    // not implemented

    friend class IDutyAgentMgrCorbaDef;
  };

  class _pof_IDutyAgentMgrCorbaDef : public _OMNI_NS(proxyObjectFactory) {
  public:
    inline _pof_IDutyAgentMgrCorbaDef() : _OMNI_NS(proxyObjectFactory)(IDutyAgentMgrCorbaDef::_PD_repoId) {}
    virtual ~_pof_IDutyAgentMgrCorbaDef();

    virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
    virtual _CORBA_Boolean is_a(const char*) const;
  };

  class _impl_IDutyAgentMgrCorbaDef :
    public virtual omniServant
  {
  public:
    virtual ~_impl_IDutyAgentMgrCorbaDef();

    virtual void mgrTransferRegionDuty(const ::TA_Base_Bus::IAuthenticationAgentCorbaDef::SessionInfoCorbaDef& session, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& regions) = 0;
    virtual void mgrTransferSubsystemDuty(const ::TA_Base_Bus::IAuthenticationAgentCorbaDef::SessionInfoCorbaDef& session, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::SubsystemTreeSequence& subsystems) = 0;
    virtual void mgrTransferAllSubsystemDuty(const ::TA_Base_Bus::IAuthenticationAgentCorbaDef::SessionInfoCorbaDef& session) = 0;
    virtual void mgrDelegateSubsystemDuty(const char* session, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& regions, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& subsystems) = 0;
    virtual void mgrDegradeAllSubsystems(const char* session) = 0;
    virtual void mgrGetDutyState(const char* session, ::TA_Base_Bus::DutyAgentTypeCorbaDef::SubsystemStateSequence_out subState, ::TA_Base_Bus::DutyAgentTypeCorbaDef::SubsystemDutySequence_out subDuty, ::TA_Base_Bus::DutyAgentTypeCorbaDef::RegionDutySequence_out regDuty) = 0;
    virtual void mgrGetSessionDutyState(const char* session, ::TA_Base_Bus::DutyAgentTypeCorbaDef::SubsystemStateSequence_out subState, ::TA_Base_Bus::DutyAgentTypeCorbaDef::SubsystemDutySequence_out subDuty, ::TA_Base_Bus::DutyAgentTypeCorbaDef::RegionDutySequence_out regDuty) = 0;
    virtual DutyAgentTypeCorbaDef::SubsystemStateSequence* mgrGetSubsystemDutyState(const char* session, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& subKeys, ::TA_Base_Bus::DutyAgentTypeCorbaDef::Key locationKey) = 0;
    virtual DutyAgentTypeCorbaDef::TransferableRegionSequence* mgrGetTransferableRegions(const ::TA_Base_Bus::IAuthenticationAgentCorbaDef::SessionInfoCorbaDef& session) = 0;
    virtual DutyAgentTypeCorbaDef::TransferableSubsystemSequence* mgrGetTransferableSubsystems(const ::TA_Base_Bus::IAuthenticationAgentCorbaDef::SessionInfoCorbaDef& session, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& regions) = 0;
    virtual DutyAgentTypeCorbaDef::TransferableRegionSequence* regMgrGetTransferableRegions(const char* session, ::TA_Base_Bus::DutyAgentTypeCorbaDef::SubsystemTreeSequence_out uncontrolledSubs) = 0;
    virtual void regMgrTransferRegionDuty(const char* user, const char* session, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& regions) = 0;
    virtual DutyAgentTypeCorbaDef::SubsystemTreeSequence* regMgrGetRemovableRegions(const char* session) = 0;
    virtual void regMgrRemoveRegionDuty(const char* user, const char* session, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& regions) = 0;
    virtual void mgrDegradeSubsystemsAtLocation(const char* session, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& subsystems, ::TA_Base_Bus::DutyAgentTypeCorbaDef::Key locationKey) = 0;
    virtual void mgrDegradeSubsystemsAtRegions(const char* session, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& subsystems, const ::TA_Base_Bus::DutyAgentTypeCorbaDef::KeySequence& regions) = 0;
    
  public:  // Really protected, workaround for xlC
    virtual _CORBA_Boolean _dispatch(omniCallHandle&);

  private:
    virtual void* _ptrToInterface(const char*);
    virtual const char* _mostDerivedRepoId();
    
  };


  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_IDutyAgentMgrCorbaDef;

_CORBA_MODULE_END



_CORBA_MODULE POA_TA_Base_Bus
_CORBA_MODULE_BEG

  class IDutyAgentMgrCorbaDef :
    public virtual TA_Base_Bus::_impl_IDutyAgentMgrCorbaDef,
    public virtual ::PortableServer::ServantBase
  {
  public:
    virtual ~IDutyAgentMgrCorbaDef();

    inline ::TA_Base_Bus::IDutyAgentMgrCorbaDef_ptr _this() {
      return (::TA_Base_Bus::IDutyAgentMgrCorbaDef_ptr) _do_this(::TA_Base_Bus::IDutyAgentMgrCorbaDef::_PD_repoId);
    }
  };

_CORBA_MODULE_END



_CORBA_MODULE OBV_TA_Base_Bus
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IDutyAgentMgrCorbaDef_ptr _s);
void operator<<=(::CORBA::Any& _a, TA_Base_Bus::IDutyAgentMgrCorbaDef_ptr* _s);
_CORBA_Boolean operator>>=(const ::CORBA::Any& _a, TA_Base_Bus::IDutyAgentMgrCorbaDef_ptr& _s);



inline void
TA_Base_Bus::IDutyAgentMgrCorbaDef::_marshalObjRef(::TA_Base_Bus::IDutyAgentMgrCorbaDef_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_IDutyAgentMgrCorbaDef
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_IDutyAgentMgrCorbaDef
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_IDutyAgentMgrCorbaDef
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_IDutyAgentMgrCorbaDef
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_IDutyAgentMgrCorbaDef
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_IDutyAgentMgrCorbaDef
#endif

#endif  // __IDutyAgentMgrCorbaDef_hh__
