// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DCompareMode_Context3DCompareMode_Impl_
#include <openfl/display3D/_Context3DCompareMode/Context3DCompareMode_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_22_fromString,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","fromString",0x9ed2cd41,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.fromString","openfl/display3D/Context3DCompareMode.hx",22,0x9103941b)
HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_40_toString,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","toString",0xbdb6aa92,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.toString","openfl/display3D/Context3DCompareMode.hx",40,0x9103941b)
HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_11_boot,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","boot",0xb0eaf318,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.boot","openfl/display3D/Context3DCompareMode.hx",11,0x9103941b)
HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_12_boot,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","boot",0xb0eaf318,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.boot","openfl/display3D/Context3DCompareMode.hx",12,0x9103941b)
HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_13_boot,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","boot",0xb0eaf318,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.boot","openfl/display3D/Context3DCompareMode.hx",13,0x9103941b)
HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_14_boot,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","boot",0xb0eaf318,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.boot","openfl/display3D/Context3DCompareMode.hx",14,0x9103941b)
HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_15_boot,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","boot",0xb0eaf318,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.boot","openfl/display3D/Context3DCompareMode.hx",15,0x9103941b)
HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_16_boot,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","boot",0xb0eaf318,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.boot","openfl/display3D/Context3DCompareMode.hx",16,0x9103941b)
HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_17_boot,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","boot",0xb0eaf318,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.boot","openfl/display3D/Context3DCompareMode.hx",17,0x9103941b)
HX_LOCAL_STACK_FRAME(_hx_pos_a405bb176409d231_18_boot,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","boot",0xb0eaf318,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.boot","openfl/display3D/Context3DCompareMode.hx",18,0x9103941b)
namespace openfl{
namespace display3D{
namespace _Context3DCompareMode{

void Context3DCompareMode_Impl__obj::__construct() { }

Dynamic Context3DCompareMode_Impl__obj::__CreateEmpty() { return new Context3DCompareMode_Impl__obj; }

void *Context3DCompareMode_Impl__obj::_hx_vtable = 0;

Dynamic Context3DCompareMode_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Context3DCompareMode_Impl__obj > _hx_result = new Context3DCompareMode_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DCompareMode_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4ebd56b0;
}

 ::Dynamic Context3DCompareMode_Impl__obj::ALWAYS;

 ::Dynamic Context3DCompareMode_Impl__obj::EQUAL;

 ::Dynamic Context3DCompareMode_Impl__obj::GREATER;

 ::Dynamic Context3DCompareMode_Impl__obj::GREATER_EQUAL;

 ::Dynamic Context3DCompareMode_Impl__obj::LESS;

 ::Dynamic Context3DCompareMode_Impl__obj::LESS_EQUAL;

 ::Dynamic Context3DCompareMode_Impl__obj::NEVER;

 ::Dynamic Context3DCompareMode_Impl__obj::NOT_EQUAL;

 ::Dynamic Context3DCompareMode_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_22_fromString)
HXDLIN(  22)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("always",cf,0e,d7,46)) ){
HXLINE(  24)			return (int)0;
HXDLIN(  24)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("equal",b4,cf,82,72)) ){
HXLINE(  25)			return (int)1;
HXDLIN(  25)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("greater",fa,90,c0,b7)) ){
HXLINE(  26)			return (int)2;
HXDLIN(  26)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("greaterEqual",5a,e4,1d,8f)) ){
HXLINE(  27)			return (int)3;
HXDLIN(  27)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("less",59,13,b0,47)) ){
HXLINE(  28)			return (int)4;
HXDLIN(  28)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lessEqual",9b,69,9e,3d)) ){
HXLINE(  29)			return (int)5;
HXDLIN(  29)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("never",8c,3e,30,99)) ){
HXLINE(  30)			return (int)6;
HXDLIN(  30)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("notEqual",a1,a1,91,02)) ){
HXLINE(  31)			return (int)7;
HXDLIN(  31)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  32)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  22)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DCompareMode_Impl__obj,fromString,return )

::String Context3DCompareMode_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_40_toString)
HXDLIN(  40)		switch((int)(value)){
            			case (int)0: {
HXLINE(  42)				return HX_("always",cf,0e,d7,46);
            			}
            			break;
            			case (int)1: {
HXLINE(  43)				return HX_("equal",b4,cf,82,72);
            			}
            			break;
            			case (int)2: {
HXLINE(  44)				return HX_("greater",fa,90,c0,b7);
            			}
            			break;
            			case (int)3: {
HXLINE(  45)				return HX_("greaterEqual",5a,e4,1d,8f);
            			}
            			break;
            			case (int)4: {
HXLINE(  46)				return HX_("less",59,13,b0,47);
            			}
            			break;
            			case (int)5: {
HXLINE(  47)				return HX_("lessEqual",9b,69,9e,3d);
            			}
            			break;
            			case (int)6: {
HXLINE(  48)				return HX_("never",8c,3e,30,99);
            			}
            			break;
            			case (int)7: {
HXLINE(  49)				return HX_("notEqual",a1,a1,91,02);
            			}
            			break;
            			default:{
HXLINE(  50)				return null();
            			}
            		}
HXLINE(  40)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DCompareMode_Impl__obj,toString,return )


Context3DCompareMode_Impl__obj::Context3DCompareMode_Impl__obj()
{
}

bool Context3DCompareMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Context3DCompareMode_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo Context3DCompareMode_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DCompareMode_Impl__obj::ALWAYS,HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DCompareMode_Impl__obj::EQUAL,HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DCompareMode_Impl__obj::GREATER,HX_HCSTRING("GREATER","\xda","\x64","\x94","\x37")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DCompareMode_Impl__obj::GREATER_EQUAL,HX_HCSTRING("GREATER_EQUAL","\x2f","\xd3","\x96","\xd6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DCompareMode_Impl__obj::LESS,HX_HCSTRING("LESS","\x59","\xdb","\x70","\x32")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DCompareMode_Impl__obj::LESS_EQUAL,HX_HCSTRING("LESS_EQUAL","\xee","\xb2","\x55","\xe4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DCompareMode_Impl__obj::NEVER,HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DCompareMode_Impl__obj::NOT_EQUAL,HX_HCSTRING("NOT_EQUAL","\x08","\x7c","\x82","\x7d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Context3DCompareMode_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::ALWAYS,"ALWAYS");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::EQUAL,"EQUAL");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::GREATER,"GREATER");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::GREATER_EQUAL,"GREATER_EQUAL");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::LESS,"LESS");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::LESS_EQUAL,"LESS_EQUAL");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::NEVER,"NEVER");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::NOT_EQUAL,"NOT_EQUAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DCompareMode_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::ALWAYS,"ALWAYS");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::EQUAL,"EQUAL");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::GREATER,"GREATER");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::GREATER_EQUAL,"GREATER_EQUAL");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::LESS,"LESS");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::LESS_EQUAL,"LESS_EQUAL");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::NEVER,"NEVER");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::NOT_EQUAL,"NOT_EQUAL");
};

#endif

hx::Class Context3DCompareMode_Impl__obj::__mClass;

static ::String Context3DCompareMode_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9"),
	HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0"),
	HX_HCSTRING("GREATER","\xda","\x64","\x94","\x37"),
	HX_HCSTRING("GREATER_EQUAL","\x2f","\xd3","\x96","\xd6"),
	HX_HCSTRING("LESS","\x59","\xdb","\x70","\x32"),
	HX_HCSTRING("LESS_EQUAL","\xee","\xb2","\x55","\xe4"),
	HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17"),
	HX_HCSTRING("NOT_EQUAL","\x08","\x7c","\x82","\x7d"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void Context3DCompareMode_Impl__obj::__register()
{
	hx::Object *dummy = new Context3DCompareMode_Impl__obj;
	Context3DCompareMode_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","\x48","\x5b","\xc7","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DCompareMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DCompareMode_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Context3DCompareMode_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DCompareMode_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DCompareMode_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DCompareMode_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DCompareMode_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DCompareMode_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_11_boot)
HXDLIN(  11)		ALWAYS = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_12_boot)
HXDLIN(  12)		EQUAL = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_13_boot)
HXDLIN(  13)		GREATER = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_14_boot)
HXDLIN(  14)		GREATER_EQUAL = (int)3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_15_boot)
HXDLIN(  15)		LESS = (int)4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_16_boot)
HXDLIN(  16)		LESS_EQUAL = (int)5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_17_boot)
HXDLIN(  17)		NEVER = (int)6;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a405bb176409d231_18_boot)
HXDLIN(  18)		NOT_EQUAL = (int)7;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DCompareMode
