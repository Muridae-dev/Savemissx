// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bc09bde916c21592_13_new,"openfl.errors.RangeError","new",0xae8f9562,"openfl.errors.RangeError.new","openfl/errors/RangeError.hx",13,0xfc04662e)
namespace openfl{
namespace errors{

void RangeError_obj::__construct(::String __o_message){
::String message = __o_message.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_bc09bde916c21592_13_new)
HXLINE(  15)		super::__construct(message,(int)0);
HXLINE(  17)		this->name = HX_("RangeError",eb,ac,85,3c);
            	}

Dynamic RangeError_obj::__CreateEmpty() { return new RangeError_obj; }

void *RangeError_obj::_hx_vtable = 0;

Dynamic RangeError_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RangeError_obj > _hx_result = new RangeError_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RangeError_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x03d6f0ee) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x03d6f0ee;
	} else {
		return inClassId==(int)0x1fc85c4d;
	}
}


hx::ObjectPtr< RangeError_obj > RangeError_obj::__new(::String __o_message) {
	hx::ObjectPtr< RangeError_obj > __this = new RangeError_obj();
	__this->__construct(__o_message);
	return __this;
}

hx::ObjectPtr< RangeError_obj > RangeError_obj::__alloc(hx::Ctx *_hx_ctx,::String __o_message) {
	RangeError_obj *__this = (RangeError_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RangeError_obj), true, "openfl.errors.RangeError"));
	*(void **)__this = RangeError_obj::_hx_vtable;
	__this->__construct(__o_message);
	return __this;
}

RangeError_obj::RangeError_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *RangeError_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *RangeError_obj_sStaticStorageInfo = 0;
#endif

static void RangeError_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RangeError_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RangeError_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RangeError_obj::__mClass,"__mClass");
};

#endif

hx::Class RangeError_obj::__mClass;

void RangeError_obj::__register()
{
	hx::Object *dummy = new RangeError_obj;
	RangeError_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.errors.RangeError","\x70","\xfc","\xc4","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RangeError_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< RangeError_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RangeError_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RangeError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RangeError_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace errors
