// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_FSM
#include <FSM.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fafc4564ec95dc87_15_new,"FSM","new",0x0313b752,"FSM.new","FSM.hx",15,0xfa46185e)
HX_LOCAL_STACK_FRAME(_hx_pos_fafc4564ec95dc87_21_update,"FSM","update",0x2caf0257,"FSM.update","FSM.hx",21,0xfa46185e)

void FSM_obj::__construct( ::Dynamic InitState){
            	HX_STACKFRAME(&_hx_pos_fafc4564ec95dc87_15_new)
HXDLIN(  15)		this->activeState = InitState;
            	}

Dynamic FSM_obj::__CreateEmpty() { return new FSM_obj; }

void *FSM_obj::_hx_vtable = 0;

Dynamic FSM_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FSM_obj > _hx_result = new FSM_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FSM_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x00356660;
}

void FSM_obj::update(){
            	HX_STACKFRAME(&_hx_pos_fafc4564ec95dc87_21_update)
HXDLIN(  21)		if (hx::IsNotNull( this->activeState )) {
HXLINE(  22)			this->activeState();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FSM_obj,update,(void))


FSM_obj::FSM_obj()
{
}

void FSM_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FSM);
	HX_MARK_MEMBER_NAME(activeState,"activeState");
	HX_MARK_END_CLASS();
}

void FSM_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(activeState,"activeState");
}

hx::Val FSM_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"activeState") ) { return hx::Val( activeState ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FSM_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"activeState") ) { activeState=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FSM_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FSM_obj,activeState),HX_HCSTRING("activeState","\x6b","\x76","\x50","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FSM_obj_sStaticStorageInfo = 0;
#endif

static ::String FSM_obj_sMemberFields[] = {
	HX_HCSTRING("activeState","\x6b","\x76","\x50","\xe0"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void FSM_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FSM_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FSM_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FSM_obj::__mClass,"__mClass");
};

#endif

hx::Class FSM_obj::__mClass;

void FSM_obj::__register()
{
	hx::Object *dummy = new FSM_obj;
	FSM_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("FSM","\x60","\x66","\x35","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FSM_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FSM_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FSM_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FSM_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FSM_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FSM_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

