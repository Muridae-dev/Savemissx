// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif

namespace openfl{
namespace display{


static void IGraphicsPath_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IGraphicsPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IGraphicsPath_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IGraphicsPath_obj::__mClass,"__mClass");
};

#endif

hx::Class IGraphicsPath_obj::__mClass;

void IGraphicsPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.IGraphicsPath","\x6f","\xa3","\x19","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IGraphicsPath_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TIsInterface< (int)0xc9667d87 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IGraphicsPath_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
