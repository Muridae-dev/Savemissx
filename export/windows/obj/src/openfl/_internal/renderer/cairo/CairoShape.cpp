// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoShape
#include <openfl/_internal/renderer/cairo/CairoShape.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_1741ef9bf1a9c806_20_render,"openfl._internal.renderer.cairo.CairoShape","render",0x363dce2a,"openfl._internal.renderer.cairo.CairoShape.render","openfl/_internal/renderer/cairo/CairoShape.hx",20,0xfc9b2624)
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

void CairoShape_obj::__construct() { }

Dynamic CairoShape_obj::__CreateEmpty() { return new CairoShape_obj; }

void *CairoShape_obj::_hx_vtable = 0;

Dynamic CairoShape_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CairoShape_obj > _hx_result = new CairoShape_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoShape_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x79fd40fa;
}

void CairoShape_obj::render( ::openfl::display::DisplayObject shape, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_1741ef9bf1a9c806_20_render)
HXLINE(  23)		if (!(shape->_hx___renderable)) {
HXLINE(  23)			return;
            		}
HXLINE(  25)		Float alpha = renderer->_hx___getAlpha(shape->_hx___worldAlpha);
HXLINE(  26)		if ((alpha <= (int)0)) {
HXLINE(  26)			return;
            		}
HXLINE(  28)		 ::openfl::display::Graphics graphics = shape->_hx___graphics;
HXLINE(  30)		if (hx::IsNotNull( graphics )) {
HXLINE(  32)			::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(graphics,renderer);
HXLINE(  34)			 ::openfl::geom::Rectangle bounds = graphics->_hx___bounds;
HXLINE(  36)			bool _hx_tmp;
HXDLIN(  36)			bool _hx_tmp1;
HXDLIN(  36)			bool _hx_tmp2;
HXDLIN(  36)			bool _hx_tmp3;
HXDLIN(  36)			if (hx::IsNotNull( graphics->_hx___cairo )) {
HXLINE(  36)				_hx_tmp3 = graphics->_hx___visible;
            			}
            			else {
HXLINE(  36)				_hx_tmp3 = false;
            			}
HXDLIN(  36)			if (_hx_tmp3) {
HXLINE(  36)				_hx_tmp2 = hx::IsNotNull( bounds );
            			}
            			else {
HXLINE(  36)				_hx_tmp2 = false;
            			}
HXDLIN(  36)			if (_hx_tmp2) {
HXLINE(  36)				_hx_tmp1 = (graphics->_hx___width >= (int)1);
            			}
            			else {
HXLINE(  36)				_hx_tmp1 = false;
            			}
HXDLIN(  36)			if (_hx_tmp1) {
HXLINE(  36)				_hx_tmp = (graphics->_hx___height >= (int)1);
            			}
            			else {
HXLINE(  36)				_hx_tmp = false;
            			}
HXDLIN(  36)			if (_hx_tmp) {
HXLINE(  38)				 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXLINE(  40)				renderer->_hx___setBlendMode(shape->_hx___worldBlendMode);
HXLINE(  41)				renderer->_hx___pushMaskObject(shape,null());
HXLINE(  43)				renderer->applyMatrix(graphics->_hx___worldTransform,cairo);
HXLINE(  45)				cairo->setSourceSurface(graphics->_hx___cairo->get_target(),(int)0,(int)0);
HXLINE(  47)				if ((alpha >= (int)1)) {
HXLINE(  49)					cairo->paint();
            				}
            				else {
HXLINE(  53)					cairo->paintWithAlpha(alpha);
            				}
HXLINE(  57)				renderer->_hx___popMaskObject(shape,null());
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoShape_obj,render,(void))


CairoShape_obj::CairoShape_obj()
{
}

bool CairoShape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CairoShape_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CairoShape_obj_sStaticStorageInfo = 0;
#endif

static void CairoShape_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoShape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoShape_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoShape_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoShape_obj::__mClass;

static ::String CairoShape_obj_sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null())
};

void CairoShape_obj::__register()
{
	hx::Object *dummy = new CairoShape_obj;
	CairoShape_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoShape","\x1a","\xeb","\xc9","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoShape_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CairoShape_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CairoShape_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoShape_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoShape_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoShape_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoShape_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
