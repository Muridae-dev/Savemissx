// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif

namespace openfl{
namespace utils{


static ::String IAssetCache_obj_sMemberFields[] = {
	HX_HCSTRING("set_enabled","\xa4","\x6b","\x98","\x0e"),
	HX_HCSTRING("get_enabled","\x98","\x64","\x2b","\x04"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("hasBitmapData","\xb3","\x6d","\x17","\x4e"),
	HX_HCSTRING("hasFont","\x49","\x7e","\x04","\x13"),
	HX_HCSTRING("hasSound","\x15","\xd7","\x24","\x0d"),
	HX_HCSTRING("removeBitmapData","\x1d","\xd3","\x69","\xed"),
	HX_HCSTRING("removeFont","\x33","\x98","\xdf","\xc0"),
	HX_HCSTRING("removeSound","\xeb","\x69","\x00","\x7f"),
	HX_HCSTRING("setBitmapData","\xfb","\xf3","\x38","\xd5"),
	HX_HCSTRING("setFont","\x91","\x9e","\x44","\x09"),
	HX_HCSTRING("setSound","\xcd","\xf5","\x00","\x8f"),
	::String(null()) };

static void IAssetCache_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IAssetCache_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IAssetCache_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IAssetCache_obj::__mClass,"__mClass");
};

#endif

hx::Class IAssetCache_obj::__mClass;

void IAssetCache_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils.IAssetCache","\xc0","\x09","\x3d","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IAssetCache_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IAssetCache_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x8a5cf29a >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IAssetCache_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
