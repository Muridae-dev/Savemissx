// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif

namespace lime{
namespace app{


static ::String IModule_obj_sMemberFields[] = {
	HX_HCSTRING("__registerLimeModule","\x04","\xfd","\x1b","\xaf"),
	HX_HCSTRING("__unregisterLimeModule","\x9d","\xf5","\x2e","\x8f"),
	::String(null()) };

static void IModule_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IModule_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IModule_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IModule_obj::__mClass,"__mClass");
};

#endif

hx::Class IModule_obj::__mClass;

void IModule_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.IModule","\x2f","\xa2","\x39","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IModule_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IModule_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0xf464d6e9 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IModule_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace app
