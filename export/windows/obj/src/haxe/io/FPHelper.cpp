// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_haxe_io_FPHelper
#include <haxe/io/FPHelper.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_55a9efbb872ea49e_77_i32ToFloat,"haxe.io.FPHelper","i32ToFloat",0x7999b6cf,"haxe.io.FPHelper.i32ToFloat","C:\\HaxeToolkit\\haxe\\std/haxe/io/FPHelper.hx",77,0x66948f4d)
HX_LOCAL_STACK_FRAME(_hx_pos_55a9efbb872ea49e_118_floatToI32,"haxe.io.FPHelper","floatToI32",0xff5a7c67,"haxe.io.FPHelper.floatToI32","C:\\HaxeToolkit\\haxe\\std/haxe/io/FPHelper.hx",118,0x66948f4d)
HX_LOCAL_STACK_FRAME(_hx_pos_55a9efbb872ea49e_172_i64ToDouble,"haxe.io.FPHelper","i64ToDouble",0xc51d801d,"haxe.io.FPHelper.i64ToDouble","C:\\HaxeToolkit\\haxe\\std/haxe/io/FPHelper.hx",172,0x66948f4d)
HX_LOCAL_STACK_FRAME(_hx_pos_55a9efbb872ea49e_246_doubleToI64,"haxe.io.FPHelper","doubleToI64",0xe6926a85,"haxe.io.FPHelper.doubleToI64","C:\\HaxeToolkit\\haxe\\std/haxe/io/FPHelper.hx",246,0x66948f4d)
namespace haxe{
namespace io{

void FPHelper_obj::__construct() { }

Dynamic FPHelper_obj::__CreateEmpty() { return new FPHelper_obj; }

void *FPHelper_obj::_hx_vtable = 0;

Dynamic FPHelper_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FPHelper_obj > _hx_result = new FPHelper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FPHelper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x349ee9e4;
}

Float FPHelper_obj::i32ToFloat(int i){
            	HX_STACKFRAME(&_hx_pos_55a9efbb872ea49e_77_i32ToFloat)
HXDLIN(  77)		return ::__hxcpp_reinterpret_le_int32_as_float32(i);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FPHelper_obj,i32ToFloat,return )

int FPHelper_obj::floatToI32(Float f){
            	HX_STACKFRAME(&_hx_pos_55a9efbb872ea49e_118_floatToI32)
HXDLIN( 118)		return ::__hxcpp_reinterpret_float32_as_le_int32(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FPHelper_obj,floatToI32,return )

Float FPHelper_obj::i64ToDouble(int low,int high){
            	HX_STACKFRAME(&_hx_pos_55a9efbb872ea49e_172_i64ToDouble)
HXDLIN( 172)		return ::__hxcpp_reinterpret_le_int32s_as_float64(low,high);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FPHelper_obj,i64ToDouble,return )

 cpp::Int64Struct FPHelper_obj::doubleToI64(Float v){
            	HX_STACKFRAME(&_hx_pos_55a9efbb872ea49e_246_doubleToI64)
HXDLIN( 246)		int high = ::__hxcpp_reinterpret_float64_as_le_int32_high(v);
HXDLIN( 246)		return _hx_int64_make(high,::__hxcpp_reinterpret_float64_as_le_int32_low(v));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FPHelper_obj,doubleToI64,return )


FPHelper_obj::FPHelper_obj()
{
}

bool FPHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"i32ToFloat") ) { outValue = i32ToFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"floatToI32") ) { outValue = floatToI32_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"i64ToDouble") ) { outValue = i64ToDouble_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"doubleToI64") ) { outValue = doubleToI64_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FPHelper_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FPHelper_obj_sStaticStorageInfo = 0;
#endif

static void FPHelper_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FPHelper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FPHelper_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FPHelper_obj::__mClass,"__mClass");
};

#endif

hx::Class FPHelper_obj::__mClass;

static ::String FPHelper_obj_sStaticFields[] = {
	HX_HCSTRING("i32ToFloat","\xb9","\x99","\xe9","\xac"),
	HX_HCSTRING("floatToI32","\x51","\x5f","\xaa","\x32"),
	HX_HCSTRING("i64ToDouble","\xf3","\x29","\xb4","\x77"),
	HX_HCSTRING("doubleToI64","\x5b","\x14","\x29","\x99"),
	::String(null())
};

void FPHelper_obj::__register()
{
	hx::Object *dummy = new FPHelper_obj;
	FPHelper_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.FPHelper","\x98","\x9f","\xc6","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FPHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FPHelper_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FPHelper_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FPHelper_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FPHelper_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FPHelper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FPHelper_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
