// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_system_JNIMemberField
#include <lime/system/JNIMemberField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6a03f50885e20814_222_new,"lime.system.JNIMemberField","new",0x7a00f0f3,"lime.system.JNIMemberField.new","lime/system/JNI.hx",222,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_6a03f50885e20814_232_get,"lime.system.JNIMemberField","get",0x79fba129,"lime.system.JNIMemberField.get","lime/system/JNI.hx",232,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_6a03f50885e20814_243_set,"lime.system.JNIMemberField","set",0x7a04bc35,"lime.system.JNIMemberField.set","lime/system/JNI.hx",243,0x21970b7f)
namespace lime{
namespace _hx_system{

void JNIMemberField_obj::__construct( ::Dynamic field){
            	HX_STACKFRAME(&_hx_pos_6a03f50885e20814_222_new)
HXDLIN( 222)		this->field = field;
            	}

Dynamic JNIMemberField_obj::__CreateEmpty() { return new JNIMemberField_obj; }

void *JNIMemberField_obj::_hx_vtable = 0;

Dynamic JNIMemberField_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< JNIMemberField_obj > _hx_result = new JNIMemberField_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool JNIMemberField_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x21350247;
}

 ::Dynamic JNIMemberField_obj::get( ::Dynamic jobject){
            	HX_STACKFRAME(&_hx_pos_6a03f50885e20814_232_get)
HXDLIN( 232)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(JNIMemberField_obj,get,return )

 ::Dynamic JNIMemberField_obj::set( ::Dynamic jobject, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_6a03f50885e20814_243_set)
HXDLIN( 243)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC2(JNIMemberField_obj,set,return )


JNIMemberField_obj::JNIMemberField_obj()
{
}

void JNIMemberField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JNIMemberField);
	HX_MARK_MEMBER_NAME(field,"field");
	HX_MARK_END_CLASS();
}

void JNIMemberField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(field,"field");
}

hx::Val JNIMemberField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { return hx::Val( field ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val JNIMemberField_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { field=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JNIMemberField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("field","\xba","\x94","\x93","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo JNIMemberField_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JNIMemberField_obj,field),HX_HCSTRING("field","\xba","\x94","\x93","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *JNIMemberField_obj_sStaticStorageInfo = 0;
#endif

static ::String JNIMemberField_obj_sMemberFields[] = {
	HX_HCSTRING("field","\xba","\x94","\x93","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void JNIMemberField_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNIMemberField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JNIMemberField_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNIMemberField_obj::__mClass,"__mClass");
};

#endif

hx::Class JNIMemberField_obj::__mClass;

void JNIMemberField_obj::__register()
{
	hx::Object *dummy = new JNIMemberField_obj;
	JNIMemberField_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.JNIMemberField","\x81","\xfb","\xfa","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = JNIMemberField_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(JNIMemberField_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JNIMemberField_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JNIMemberField_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JNIMemberField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JNIMemberField_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace system
