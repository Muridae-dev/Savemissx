// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_interaction_tools_GraphicTransformCursorScaleXY
#include <flixel/system/debug/interaction/tools/GraphicTransformCursorScaleXY.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bd54bd9b78ccbfae_51_new,"flixel.system.debug.interaction.tools.GraphicTransformCursorScaleXY","new",0x65042dac,"flixel.system.debug.interaction.tools.GraphicTransformCursorScaleXY.new","openfl/_internal/macros/AssetsMacro.hx",51,0xf7db08ab)
HX_LOCAL_STACK_FRAME(_hx_pos_b789f9eaf907b65e_1_boot,"flixel.system.debug.interaction.tools.GraphicTransformCursorScaleXY","boot",0xf6bcc966,"flixel.system.debug.interaction.tools.GraphicTransformCursorScaleXY.boot","?",1,0x0000003f)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{

void GraphicTransformCursorScaleXY_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
 ::Dynamic transparent = __o_transparent.Default(true);
 ::Dynamic fillRGBA = __o_fillRGBA.Default(-1);
            	HX_STACKFRAME(&_hx_pos_bd54bd9b78ccbfae_51_new)
HXLINE(  83)		super::__construct((int)0,(int)0,transparent,fillRGBA);
HXLINE(  85)		 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::_hx_system::debug::interaction::tools::GraphicTransformCursorScaleXY_obj::resourceName));
HXLINE(  86)		{
HXLINE(  86)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(byteArray));
HXDLIN(  86)			this->_hx___fromImage(image);
            		}
            	}

Dynamic GraphicTransformCursorScaleXY_obj::__CreateEmpty() { return new GraphicTransformCursorScaleXY_obj; }

void *GraphicTransformCursorScaleXY_obj::_hx_vtable = 0;

Dynamic GraphicTransformCursorScaleXY_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicTransformCursorScaleXY_obj > _hx_result = new GraphicTransformCursorScaleXY_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicTransformCursorScaleXY_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x28c743a7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x28c743a7;
	} else {
		return inClassId==(int)0x3ad41c60;
	}
}

::String GraphicTransformCursorScaleXY_obj::resourceName;


hx::ObjectPtr< GraphicTransformCursorScaleXY_obj > GraphicTransformCursorScaleXY_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	hx::ObjectPtr< GraphicTransformCursorScaleXY_obj > __this = new GraphicTransformCursorScaleXY_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

hx::ObjectPtr< GraphicTransformCursorScaleXY_obj > GraphicTransformCursorScaleXY_obj::__alloc(hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicTransformCursorScaleXY_obj *__this = (GraphicTransformCursorScaleXY_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GraphicTransformCursorScaleXY_obj), true, "flixel.system.debug.interaction.tools.GraphicTransformCursorScaleXY"));
	*(void **)__this = GraphicTransformCursorScaleXY_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicTransformCursorScaleXY_obj::GraphicTransformCursorScaleXY_obj()
{
}

bool GraphicTransformCursorScaleXY_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicTransformCursorScaleXY_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GraphicTransformCursorScaleXY_obj_sMemberStorageInfo = 0;
static hx::StaticInfo GraphicTransformCursorScaleXY_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &GraphicTransformCursorScaleXY_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GraphicTransformCursorScaleXY_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicTransformCursorScaleXY_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicTransformCursorScaleXY_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicTransformCursorScaleXY_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicTransformCursorScaleXY_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicTransformCursorScaleXY_obj::resourceName,"resourceName");
};

#endif

hx::Class GraphicTransformCursorScaleXY_obj::__mClass;

static ::String GraphicTransformCursorScaleXY_obj_sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null())
};

void GraphicTransformCursorScaleXY_obj::__register()
{
	hx::Object *dummy = new GraphicTransformCursorScaleXY_obj;
	GraphicTransformCursorScaleXY_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.interaction.tools.GraphicTransformCursorScaleXY","\xba","\x27","\xa1","\x28");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicTransformCursorScaleXY_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicTransformCursorScaleXY_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicTransformCursorScaleXY_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GraphicTransformCursorScaleXY_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicTransformCursorScaleXY_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicTransformCursorScaleXY_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicTransformCursorScaleXY_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicTransformCursorScaleXY_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicTransformCursorScaleXY_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b789f9eaf907b65e_1_boot)
HXDLIN(   1)		resourceName = HX_("__ASSET__:bitmap_flixel_system_debug_interaction_tools_GraphicTransformCursorScaleXY",81,97,49,9f);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
