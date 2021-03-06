// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DDisplayObject
#include <openfl/_internal/renderer/context3D/Context3DDisplayObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DShape
#include <openfl/_internal/renderer/context3D/Context3DShape.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d8e5cd1b1e135cbb_27_render,"openfl._internal.renderer.context3D.Context3DDisplayObject","render",0x2e9ac55a,"openfl._internal.renderer.context3D.Context3DDisplayObject.render","openfl/_internal/renderer/context3D/Context3DDisplayObject.hx",27,0xcd6769d4)
HX_LOCAL_STACK_FRAME(_hx_pos_d8e5cd1b1e135cbb_64_renderMask,"openfl._internal.renderer.context3D.Context3DDisplayObject","renderMask",0x7920e766,"openfl._internal.renderer.context3D.Context3DDisplayObject.renderMask","openfl/_internal/renderer/context3D/Context3DDisplayObject.hx",64,0xcd6769d4)
namespace openfl{
namespace _internal{
namespace renderer{
namespace context3D{

void Context3DDisplayObject_obj::__construct() { }

Dynamic Context3DDisplayObject_obj::__CreateEmpty() { return new Context3DDisplayObject_obj; }

void *Context3DDisplayObject_obj::_hx_vtable = 0;

Dynamic Context3DDisplayObject_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Context3DDisplayObject_obj > _hx_result = new Context3DDisplayObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DDisplayObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x575f7016;
}

void Context3DDisplayObject_obj::render( ::openfl::display::DisplayObject displayObject, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_d8e5cd1b1e135cbb_27_render)
HXLINE(  29)		bool _hx_tmp;
HXDLIN(  29)		if (hx::IsNull( displayObject->opaqueBackground )) {
HXLINE(  29)			_hx_tmp = hx::IsNull( displayObject->_hx___graphics );
            		}
            		else {
HXLINE(  29)			_hx_tmp = false;
            		}
HXDLIN(  29)		if (_hx_tmp) {
HXLINE(  29)			return;
            		}
HXLINE(  30)		bool _hx_tmp1;
HXDLIN(  30)		if (!(!(displayObject->_hx___renderable))) {
HXLINE(  30)			_hx_tmp1 = (displayObject->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXLINE(  30)			_hx_tmp1 = true;
            		}
HXDLIN(  30)		if (_hx_tmp1) {
HXLINE(  30)			return;
            		}
HXLINE(  32)		bool _hx_tmp2;
HXDLIN(  32)		bool _hx_tmp3;
HXDLIN(  32)		bool _hx_tmp4;
HXDLIN(  32)		if (hx::IsNotNull( displayObject->opaqueBackground )) {
HXLINE(  32)			_hx_tmp4 = !(displayObject->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  32)			_hx_tmp4 = false;
            		}
HXDLIN(  32)		if (_hx_tmp4) {
HXLINE(  32)			_hx_tmp3 = (displayObject->get_width() > (int)0);
            		}
            		else {
HXLINE(  32)			_hx_tmp3 = false;
            		}
HXDLIN(  32)		if (_hx_tmp3) {
HXLINE(  32)			_hx_tmp2 = (displayObject->get_height() > (int)0);
            		}
            		else {
HXLINE(  32)			_hx_tmp2 = false;
            		}
HXDLIN(  32)		if (_hx_tmp2) {
HXLINE(  34)			renderer->_hx___setBlendMode(displayObject->_hx___worldBlendMode);
HXLINE(  35)			renderer->_hx___pushMaskObject(displayObject,null());
HXLINE(  37)			 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE(  39)			 ::openfl::geom::Rectangle rect = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(  40)			Float _hx_tmp5 = displayObject->get_width();
HXDLIN(  40)			rect->setTo((int)0,(int)0,_hx_tmp5,displayObject->get_height());
HXLINE(  41)			renderer->_hx___pushMaskRect(rect,displayObject->_hx___renderTransform);
HXLINE(  44)			int color = displayObject->opaqueBackground;
HXLINE(  45)			context->clear(((Float)((int)hx::UShr(color,(int)16) & (int)(int)255) / (Float)(int)255),((Float)((int)hx::UShr(color,(int)8) & (int)(int)255) / (Float)(int)255),((Float)((int)color & (int)(int)255) / (Float)(int)255),(int)1,(int)0,(int)0,(int)1);
HXLINE(  48)			renderer->_hx___popMaskRect();
HXLINE(  49)			renderer->_hx___popMaskObject(displayObject,null());
HXLINE(  51)			::openfl::geom::Rectangle_obj::_hx___pool->release(rect);
            		}
HXLINE(  55)		if (hx::IsNotNull( displayObject->_hx___graphics )) {
HXLINE(  57)			::openfl::_internal::renderer::context3D::Context3DShape_obj::render(displayObject,renderer);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DDisplayObject_obj,render,(void))

void Context3DDisplayObject_obj::renderMask( ::openfl::display::DisplayObject displayObject, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_d8e5cd1b1e135cbb_64_renderMask)
HXLINE(  66)		bool _hx_tmp;
HXDLIN(  66)		if (hx::IsNull( displayObject->opaqueBackground )) {
HXLINE(  66)			_hx_tmp = hx::IsNull( displayObject->_hx___graphics );
            		}
            		else {
HXLINE(  66)			_hx_tmp = false;
            		}
HXDLIN(  66)		if (_hx_tmp) {
HXLINE(  66)			return;
            		}
HXLINE(  68)		bool _hx_tmp1;
HXDLIN(  68)		bool _hx_tmp2;
HXDLIN(  68)		bool _hx_tmp3;
HXDLIN(  68)		if (hx::IsNotNull( displayObject->opaqueBackground )) {
HXLINE(  68)			_hx_tmp3 = !(displayObject->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  68)			_hx_tmp3 = false;
            		}
HXDLIN(  68)		if (_hx_tmp3) {
HXLINE(  68)			_hx_tmp2 = (displayObject->get_width() > (int)0);
            		}
            		else {
HXLINE(  68)			_hx_tmp2 = false;
            		}
HXDLIN(  68)		if (_hx_tmp2) {
HXLINE(  68)			_hx_tmp1 = (displayObject->get_height() > (int)0);
            		}
            		else {
HXLINE(  68)			_hx_tmp1 = false;
            		}
HXLINE(  89)		if (hx::IsNotNull( displayObject->_hx___graphics )) {
HXLINE(  91)			::openfl::_internal::renderer::context3D::Context3DShape_obj::renderMask(displayObject,renderer);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DDisplayObject_obj,renderMask,(void))


Context3DDisplayObject_obj::Context3DDisplayObject_obj()
{
}

bool Context3DDisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Context3DDisplayObject_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Context3DDisplayObject_obj_sStaticStorageInfo = 0;
#endif

static void Context3DDisplayObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DDisplayObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DDisplayObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DDisplayObject_obj::__mClass,"__mClass");
};

#endif

hx::Class Context3DDisplayObject_obj::__mClass;

static ::String Context3DDisplayObject_obj_sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderMask","\x62","\x3b","\x60","\xe5"),
	::String(null())
};

void Context3DDisplayObject_obj::__register()
{
	hx::Object *dummy = new Context3DDisplayObject_obj;
	Context3DDisplayObject_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.context3D.Context3DDisplayObject","\xea","\xed","\xcd","\x6e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DDisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DDisplayObject_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Context3DDisplayObject_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DDisplayObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DDisplayObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DDisplayObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DDisplayObject_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace context3D
