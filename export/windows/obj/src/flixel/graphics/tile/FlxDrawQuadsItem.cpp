// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawItemType
#include <flixel/graphics/tile/FlxDrawItemType.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawQuadsItem
#include <flixel/graphics/tile/FlxDrawQuadsItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6d98322fc3998392_26_new,"flixel.graphics.tile.FlxDrawQuadsItem","new",0x0e2f86ca,"flixel.graphics.tile.FlxDrawQuadsItem.new","flixel/graphics/tile/FlxDrawQuadsItem.hx",26,0x0f089c65)
HX_LOCAL_STACK_FRAME(_hx_pos_6d98322fc3998392_35_reset,"flixel.graphics.tile.FlxDrawQuadsItem","reset",0xebcdeeb9,"flixel.graphics.tile.FlxDrawQuadsItem.reset","flixel/graphics/tile/FlxDrawQuadsItem.hx",35,0x0f089c65)
HX_LOCAL_STACK_FRAME(_hx_pos_6d98322fc3998392_47_dispose,"flixel.graphics.tile.FlxDrawQuadsItem","dispose",0x48b4b409,"flixel.graphics.tile.FlxDrawQuadsItem.dispose","flixel/graphics/tile/FlxDrawQuadsItem.hx",47,0x0f089c65)
HX_LOCAL_STACK_FRAME(_hx_pos_6d98322fc3998392_57_addQuad,"flixel.graphics.tile.FlxDrawQuadsItem","addQuad",0x14afaef2,"flixel.graphics.tile.FlxDrawQuadsItem.addQuad","flixel/graphics/tile/FlxDrawQuadsItem.hx",57,0x0f089c65)
HX_LOCAL_STACK_FRAME(_hx_pos_6d98322fc3998392_125_render,"flixel.graphics.tile.FlxDrawQuadsItem","render",0x6514132c,"flixel.graphics.tile.FlxDrawQuadsItem.render","flixel/graphics/tile/FlxDrawQuadsItem.hx",125,0x0f089c65)
HX_LOCAL_STACK_FRAME(_hx_pos_6d98322fc3998392_148_setParameterValue,"flixel.graphics.tile.FlxDrawQuadsItem","setParameterValue",0x1b657834,"flixel.graphics.tile.FlxDrawQuadsItem.setParameterValue","flixel/graphics/tile/FlxDrawQuadsItem.hx",148,0x0f089c65)
HX_LOCAL_STACK_FRAME(_hx_pos_6d98322fc3998392_15_boot,"flixel.graphics.tile.FlxDrawQuadsItem","boot",0x537f6a88,"flixel.graphics.tile.FlxDrawQuadsItem.boot","flixel/graphics/tile/FlxDrawQuadsItem.hx",15,0x0f089c65)
namespace flixel{
namespace graphics{
namespace tile{

void FlxDrawQuadsItem_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_6d98322fc3998392_26_new)
HXLINE(  27)		super::__construct();
HXLINE(  28)		this->type = ::flixel::graphics::tile::FlxDrawItemType_obj::TILES_dyn();
HXLINE(  29)		int length = null();
HXDLIN(  29)		bool fixed = null();
HXDLIN(  29)		this->rects =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,null(),true);
HXLINE(  30)		int length1 = null();
HXDLIN(  30)		bool fixed1 = null();
HXDLIN(  30)		this->transforms =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,null(),true);
HXLINE(  31)		this->alphas = ::Array_obj< Float >::__new(0);
            	}

Dynamic FlxDrawQuadsItem_obj::__CreateEmpty() { return new FlxDrawQuadsItem_obj; }

void *FlxDrawQuadsItem_obj::_hx_vtable = 0;

Dynamic FlxDrawQuadsItem_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxDrawQuadsItem_obj > _hx_result = new FlxDrawQuadsItem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxDrawQuadsItem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x18d0451d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x18d0451d;
	} else {
		return inClassId==(int)0x31181b86;
	}
}

void FlxDrawQuadsItem_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_6d98322fc3998392_35_reset)
HXLINE(  36)		this->super::reset();
HXLINE(  37)		this->rects->set_length((int)0);
HXLINE(  38)		this->transforms->set_length((int)0);
HXLINE(  39)		this->alphas->removeRange((int)0,this->alphas->length);
HXLINE(  40)		if (hx::IsNotNull( this->colorMultipliers )) {
HXLINE(  41)			this->colorMultipliers->removeRange((int)0,this->colorMultipliers->length);
            		}
HXLINE(  42)		if (hx::IsNotNull( this->colorOffsets )) {
HXLINE(  43)			this->colorOffsets->removeRange((int)0,this->colorOffsets->length);
            		}
            	}


void FlxDrawQuadsItem_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_6d98322fc3998392_47_dispose)
HXLINE(  48)		this->super::dispose();
HXLINE(  49)		this->rects = null();
HXLINE(  50)		this->transforms = null();
HXLINE(  51)		this->alphas = null();
HXLINE(  52)		this->colorMultipliers = null();
HXLINE(  53)		this->colorOffsets = null();
            	}


void FlxDrawQuadsItem_obj::addQuad( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxMatrix matrix, ::openfl::geom::ColorTransform transform){
            	HX_STACKFRAME(&_hx_pos_6d98322fc3998392_57_addQuad)
HXLINE(  58)		 ::flixel::math::FlxRect rect = frame->frame;
HXLINE(  59)		this->rects->push(rect->x);
HXLINE(  60)		this->rects->push(rect->y);
HXLINE(  61)		this->rects->push(rect->width);
HXLINE(  62)		this->rects->push(rect->height);
HXLINE(  64)		this->transforms->push(matrix->a);
HXLINE(  65)		this->transforms->push(matrix->b);
HXLINE(  66)		this->transforms->push(matrix->c);
HXLINE(  67)		this->transforms->push(matrix->d);
HXLINE(  68)		this->transforms->push(matrix->tx);
HXLINE(  69)		this->transforms->push(matrix->ty);
HXLINE(  71)		{
HXLINE(  71)			int _g = (int)0;
HXDLIN(  71)			while((_g < (int)4)){
HXLINE(  71)				_g = (_g + (int)1);
HXDLIN(  71)				int i = (_g - (int)1);
HXLINE(  72)				Float _hx_tmp;
HXDLIN(  72)				if (hx::IsNotNull( transform )) {
HXLINE(  72)					_hx_tmp = transform->alphaMultiplier;
            				}
            				else {
HXLINE(  72)					_hx_tmp = ((Float)1.0);
            				}
HXDLIN(  72)				this->alphas->push(_hx_tmp);
            			}
            		}
HXLINE(  74)		if (this->colored) {
HXLINE(  76)			if (hx::IsNull( this->colorMultipliers )) {
HXLINE(  77)				this->colorMultipliers = ::Array_obj< Float >::__new(0);
            			}
HXLINE(  79)			{
HXLINE(  79)				int _g1 = (int)0;
HXDLIN(  79)				while((_g1 < (int)4)){
HXLINE(  79)					_g1 = (_g1 + (int)1);
HXDLIN(  79)					int i1 = (_g1 - (int)1);
HXLINE(  81)					if (hx::IsNotNull( transform )) {
HXLINE(  83)						this->colorMultipliers->push(transform->redMultiplier);
HXLINE(  84)						this->colorMultipliers->push(transform->greenMultiplier);
HXLINE(  85)						this->colorMultipliers->push(transform->blueMultiplier);
            					}
            					else {
HXLINE(  89)						this->colorMultipliers->push((int)1);
HXLINE(  90)						this->colorMultipliers->push((int)1);
HXLINE(  91)						this->colorMultipliers->push((int)1);
            					}
HXLINE(  94)					this->colorMultipliers->push((int)1);
            				}
            			}
            		}
HXLINE(  98)		if (this->hasColorOffsets) {
HXLINE( 100)			if (hx::IsNull( this->colorOffsets )) {
HXLINE( 101)				this->colorOffsets = ::Array_obj< Float >::__new(0);
            			}
HXLINE( 103)			{
HXLINE( 103)				int _g2 = (int)0;
HXDLIN( 103)				while((_g2 < (int)4)){
HXLINE( 103)					_g2 = (_g2 + (int)1);
HXDLIN( 103)					int i2 = (_g2 - (int)1);
HXLINE( 105)					if (hx::IsNotNull( transform )) {
HXLINE( 107)						this->colorOffsets->push(transform->redOffset);
HXLINE( 108)						this->colorOffsets->push(transform->greenOffset);
HXLINE( 109)						this->colorOffsets->push(transform->blueOffset);
HXLINE( 110)						this->colorOffsets->push(transform->alphaOffset);
            					}
            					else {
HXLINE( 114)						this->colorOffsets->push((int)0);
HXLINE( 115)						this->colorOffsets->push((int)0);
HXLINE( 116)						this->colorOffsets->push((int)0);
HXLINE( 117)						this->colorOffsets->push((int)0);
            					}
            				}
            			}
            		}
            	}


void FlxDrawQuadsItem_obj::render( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_6d98322fc3998392_125_render)
HXLINE( 126)		if ((this->rects->get_length() == (int)0)) {
HXLINE( 127)			return;
            		}
HXLINE( 129)		 ::flixel::graphics::tile::FlxGraphicsShader shader;
HXDLIN( 129)		if (hx::IsNotNull( this->shader )) {
HXLINE( 129)			shader = this->shader;
            		}
            		else {
HXLINE( 129)			shader = this->graphics->shader;
            		}
HXLINE( 130)		shader->bitmap->input = this->graphics->bitmap;
HXLINE( 131)		 ::Dynamic _hx_tmp;
HXDLIN( 131)		bool _hx_tmp1;
HXDLIN( 131)		if (!(camera->antialiasing)) {
HXLINE( 131)			_hx_tmp1 = this->antialiasing;
            		}
            		else {
HXLINE( 131)			_hx_tmp1 = true;
            		}
HXDLIN( 131)		if (_hx_tmp1) {
HXLINE( 131)			_hx_tmp = (int)4;
            		}
            		else {
HXLINE( 131)			_hx_tmp = (int)5;
            		}
HXDLIN( 131)		shader->bitmap->filter = _hx_tmp;
HXLINE( 132)		shader->alpha->value = this->alphas;
HXLINE( 134)		if (this->colored) {
HXLINE( 135)			shader->colorMultiplier->value = this->colorMultipliers;
            		}
HXLINE( 136)		if (this->hasColorOffsets) {
HXLINE( 137)			shader->colorOffset->value = this->colorOffsets;
            		}
HXLINE( 139)		{
HXLINE( 139)			 ::openfl::display::ShaderParameter_Bool parameter = shader->hasTransform;
HXDLIN( 139)			if (hx::IsNull( parameter->value )) {
HXLINE( 139)				parameter->value = ::Array_obj< bool >::__new(0);
            			}
HXDLIN( 139)			parameter->value[(int)0] = true;
            		}
HXLINE( 140)		{
HXLINE( 140)			 ::openfl::display::ShaderParameter_Bool parameter1 = shader->hasColorTransform;
HXDLIN( 140)			bool value;
HXDLIN( 140)			if (!(this->colored)) {
HXLINE( 140)				value = this->hasColorOffsets;
            			}
            			else {
HXLINE( 140)				value = true;
            			}
HXDLIN( 140)			if (hx::IsNull( parameter1->value )) {
HXLINE( 140)				parameter1->value = ::Array_obj< bool >::__new(0);
            			}
HXDLIN( 140)			parameter1->value[(int)0] = value;
            		}
HXLINE( 142)		camera->canvas->get_graphics()->beginShaderFill(shader,null());
HXLINE( 143)		camera->canvas->get_graphics()->drawQuads(this->rects,null(),this->transforms);
HXLINE( 144)		this->super::render(camera);
            	}


void FlxDrawQuadsItem_obj::setParameterValue( ::openfl::display::ShaderParameter_Bool parameter,bool value){
            	HX_STACKFRAME(&_hx_pos_6d98322fc3998392_148_setParameterValue)
HXLINE( 149)		if (hx::IsNull( parameter->value )) {
HXLINE( 150)			parameter->value = ::Array_obj< bool >::__new(0);
            		}
HXLINE( 151)		parameter->value[(int)0] = value;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxDrawQuadsItem_obj,setParameterValue,(void))

int FlxDrawQuadsItem_obj::VERTICES_PER_QUAD;


hx::ObjectPtr< FlxDrawQuadsItem_obj > FlxDrawQuadsItem_obj::__new() {
	hx::ObjectPtr< FlxDrawQuadsItem_obj > __this = new FlxDrawQuadsItem_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FlxDrawQuadsItem_obj > FlxDrawQuadsItem_obj::__alloc(hx::Ctx *_hx_ctx) {
	FlxDrawQuadsItem_obj *__this = (FlxDrawQuadsItem_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxDrawQuadsItem_obj), true, "flixel.graphics.tile.FlxDrawQuadsItem"));
	*(void **)__this = FlxDrawQuadsItem_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxDrawQuadsItem_obj::FlxDrawQuadsItem_obj()
{
}

void FlxDrawQuadsItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDrawQuadsItem);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(rects,"rects");
	HX_MARK_MEMBER_NAME(transforms,"transforms");
	HX_MARK_MEMBER_NAME(alphas,"alphas");
	HX_MARK_MEMBER_NAME(colorMultipliers,"colorMultipliers");
	HX_MARK_MEMBER_NAME(colorOffsets,"colorOffsets");
	 ::flixel::graphics::tile::FlxDrawBaseItem_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxDrawQuadsItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(rects,"rects");
	HX_VISIT_MEMBER_NAME(transforms,"transforms");
	HX_VISIT_MEMBER_NAME(alphas,"alphas");
	HX_VISIT_MEMBER_NAME(colorMultipliers,"colorMultipliers");
	HX_VISIT_MEMBER_NAME(colorOffsets,"colorOffsets");
	 ::flixel::graphics::tile::FlxDrawBaseItem_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxDrawQuadsItem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"rects") ) { return hx::Val( rects ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"alphas") ) { return hx::Val( alphas ); }
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"addQuad") ) { return hx::Val( addQuad_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transforms") ) { return hx::Val( transforms ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"colorOffsets") ) { return hx::Val( colorOffsets ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"colorMultipliers") ) { return hx::Val( colorMultipliers ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setParameterValue") ) { return hx::Val( setParameterValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxDrawQuadsItem_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"rects") ) { rects=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::flixel::graphics::tile::FlxGraphicsShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphas") ) { alphas=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transforms") ) { transforms=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"colorOffsets") ) { colorOffsets=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"colorMultipliers") ) { colorMultipliers=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxDrawQuadsItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("rects","\xcf","\x32","\xbc","\xe6"));
	outFields->push(HX_HCSTRING("transforms","\x87","\x91","\x34","\x9b"));
	outFields->push(HX_HCSTRING("alphas","\x55","\xcb","\x3b","\x42"));
	outFields->push(HX_HCSTRING("colorMultipliers","\x2f","\xd5","\x72","\x20"));
	outFields->push(HX_HCSTRING("colorOffsets","\x5d","\x02","\xbc","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxDrawQuadsItem_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::graphics::tile::FlxGraphicsShader*/ ,(int)offsetof(FlxDrawQuadsItem_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(FlxDrawQuadsItem_obj,rects),HX_HCSTRING("rects","\xcf","\x32","\xbc","\xe6")},
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(FlxDrawQuadsItem_obj,transforms),HX_HCSTRING("transforms","\x87","\x91","\x34","\x9b")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxDrawQuadsItem_obj,alphas),HX_HCSTRING("alphas","\x55","\xcb","\x3b","\x42")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxDrawQuadsItem_obj,colorMultipliers),HX_HCSTRING("colorMultipliers","\x2f","\xd5","\x72","\x20")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxDrawQuadsItem_obj,colorOffsets),HX_HCSTRING("colorOffsets","\x5d","\x02","\xbc","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo FlxDrawQuadsItem_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxDrawQuadsItem_obj::VERTICES_PER_QUAD,HX_HCSTRING("VERTICES_PER_QUAD","\x0f","\xbf","\x33","\x83")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxDrawQuadsItem_obj_sMemberFields[] = {
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("rects","\xcf","\x32","\xbc","\xe6"),
	HX_HCSTRING("transforms","\x87","\x91","\x34","\x9b"),
	HX_HCSTRING("alphas","\x55","\xcb","\x3b","\x42"),
	HX_HCSTRING("colorMultipliers","\x2f","\xd5","\x72","\x20"),
	HX_HCSTRING("colorOffsets","\x5d","\x02","\xbc","\x00"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("addQuad","\x88","\x7b","\x47","\x87"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("setParameterValue","\x4a","\x1c","\x87","\x10"),
	::String(null()) };

static void FlxDrawQuadsItem_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDrawQuadsItem_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxDrawQuadsItem_obj::VERTICES_PER_QUAD,"VERTICES_PER_QUAD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxDrawQuadsItem_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDrawQuadsItem_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxDrawQuadsItem_obj::VERTICES_PER_QUAD,"VERTICES_PER_QUAD");
};

#endif

hx::Class FlxDrawQuadsItem_obj::__mClass;

static ::String FlxDrawQuadsItem_obj_sStaticFields[] = {
	HX_HCSTRING("VERTICES_PER_QUAD","\x0f","\xbf","\x33","\x83"),
	::String(null())
};

void FlxDrawQuadsItem_obj::__register()
{
	hx::Object *dummy = new FlxDrawQuadsItem_obj;
	FlxDrawQuadsItem_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.tile.FlxDrawQuadsItem","\xd8","\x19","\x66","\xe1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxDrawQuadsItem_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxDrawQuadsItem_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxDrawQuadsItem_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxDrawQuadsItem_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxDrawQuadsItem_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxDrawQuadsItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxDrawQuadsItem_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxDrawQuadsItem_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6d98322fc3998392_15_boot)
HXDLIN(  15)		VERTICES_PER_QUAD = (int)4;
            	}
}

} // end namespace flixel
} // end namespace graphics
} // end namespace tile
