// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime__internal_graphics_ImageDataUtil
#include <lime/_internal/graphics/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
#ifndef INCLUDED_openfl_filters_GlowFilter
#include <openfl/filters/GlowFilter.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowFilter_GlowShader
#include <openfl/filters/_GlowFilter/GlowShader.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f54e58291eefcbc3_213_new,"openfl.filters.GlowFilter","new",0xf734d428,"openfl.filters.GlowFilter.new","openfl/filters/GlowFilter.hx",213,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_235_clone,"openfl.filters.GlowFilter","clone",0x7c629925,"openfl.filters.GlowFilter.clone","openfl/filters/GlowFilter.hx",235,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_240___applyFilter,"openfl.filters.GlowFilter","__applyFilter",0x0cceae6e,"openfl.filters.GlowFilter.__applyFilter","openfl/filters/GlowFilter.hx",240,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_259___initShader,"openfl.filters.GlowFilter","__initShader",0x188dd8ad,"openfl.filters.GlowFilter.__initShader","openfl/filters/GlowFilter.hx",259,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_296_get_alpha,"openfl.filters.GlowFilter","get_alpha",0x780a0d7d,"openfl.filters.GlowFilter.get_alpha","openfl/filters/GlowFilter.hx",296,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_301_set_alpha,"openfl.filters.GlowFilter","set_alpha",0x5b5af989,"openfl.filters.GlowFilter.set_alpha","openfl/filters/GlowFilter.hx",301,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_311_get_blurX,"openfl.filters.GlowFilter","get_blurX",0x0b7475f0,"openfl.filters.GlowFilter.get_blurX","openfl/filters/GlowFilter.hx",311,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_316_set_blurX,"openfl.filters.GlowFilter","set_blurX",0xeec561fc,"openfl.filters.GlowFilter.set_blurX","openfl/filters/GlowFilter.hx",316,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_331_get_blurY,"openfl.filters.GlowFilter","get_blurY",0x0b7475f1,"openfl.filters.GlowFilter.get_blurY","openfl/filters/GlowFilter.hx",331,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_336_set_blurY,"openfl.filters.GlowFilter","set_blurY",0xeec561fd,"openfl.filters.GlowFilter.set_blurY","openfl/filters/GlowFilter.hx",336,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_351_get_color,"openfl.filters.GlowFilter","get_color",0xa0cfd782,"openfl.filters.GlowFilter.get_color","openfl/filters/GlowFilter.hx",351,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_356_set_color,"openfl.filters.GlowFilter","set_color",0x8420c38e,"openfl.filters.GlowFilter.set_color","openfl/filters/GlowFilter.hx",356,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_366_get_inner,"openfl.filters.GlowFilter","get_inner",0x148f97b5,"openfl.filters.GlowFilter.get_inner","openfl/filters/GlowFilter.hx",366,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_371_set_inner,"openfl.filters.GlowFilter","set_inner",0xf7e083c1,"openfl.filters.GlowFilter.set_inner","openfl/filters/GlowFilter.hx",371,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_381_get_knockout,"openfl.filters.GlowFilter","get_knockout",0xe353a13b,"openfl.filters.GlowFilter.get_knockout","openfl/filters/GlowFilter.hx",381,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_386_set_knockout,"openfl.filters.GlowFilter","set_knockout",0xf84cc4af,"openfl.filters.GlowFilter.set_knockout","openfl/filters/GlowFilter.hx",386,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_396_get_quality,"openfl.filters.GlowFilter","get_quality",0xaafc709e,"openfl.filters.GlowFilter.get_quality","openfl/filters/GlowFilter.hx",396,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_401_set_quality,"openfl.filters.GlowFilter","set_quality",0xb56977aa,"openfl.filters.GlowFilter.set_quality","openfl/filters/GlowFilter.hx",401,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_418_get_strength,"openfl.filters.GlowFilter","get_strength",0x023cc9c2,"openfl.filters.GlowFilter.get_strength","openfl/filters/GlowFilter.hx",418,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_423_set_strength,"openfl.filters.GlowFilter","set_strength",0x1735ed36,"openfl.filters.GlowFilter.set_strength","openfl/filters/GlowFilter.hx",423,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_f54e58291eefcbc3_76_boot,"openfl.filters.GlowFilter","boot",0x4f1dcf6a,"openfl.filters.GlowFilter.boot","openfl/filters/GlowFilter.hx",76,0x5f568606)
namespace openfl{
namespace filters{

void GlowFilter_obj::__construct(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout){
int color = __o_color.Default(16711680);
Float alpha = __o_alpha.Default(1);
Float blurX = __o_blurX.Default(6);
Float blurY = __o_blurY.Default(6);
Float strength = __o_strength.Default(2);
int quality = __o_quality.Default(1);
bool inner = __o_inner.Default(false);
bool knockout = __o_knockout.Default(false);
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_213_new)
HXLINE( 215)		super::__construct();
HXLINE( 217)		this->_hx___color = color;
HXLINE( 218)		this->_hx___alpha = alpha;
HXLINE( 219)		this->set_blurX(blurX);
HXLINE( 220)		this->set_blurY(blurY);
HXLINE( 221)		this->_hx___strength = strength;
HXLINE( 222)		this->set_quality(quality);
HXLINE( 223)		this->_hx___inner = inner;
HXLINE( 224)		this->_hx___knockout = knockout;
HXLINE( 226)		this->_hx___needSecondBitmapData = true;
HXLINE( 227)		this->_hx___preserveObject = true;
HXLINE( 228)		this->_hx___renderDirty = true;
            	}

Dynamic GlowFilter_obj::__CreateEmpty() { return new GlowFilter_obj; }

void *GlowFilter_obj::_hx_vtable = 0;

Dynamic GlowFilter_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GlowFilter_obj > _hx_result = new GlowFilter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool GlowFilter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4f68d692) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4f68d692;
	} else {
		return inClassId==(int)0x65fc6b28;
	}
}

 ::openfl::filters::BitmapFilter GlowFilter_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_235_clone)
HXDLIN( 235)		return  ::openfl::filters::GlowFilter_obj::__alloc( HX_CTX ,this->_hx___color,this->_hx___alpha,this->_hx___blurX,this->_hx___blurY,this->_hx___strength,this->_hx___quality,this->_hx___inner,this->_hx___knockout);
            	}


 ::openfl::display::BitmapData GlowFilter_obj::_hx___applyFilter( ::openfl::display::BitmapData bitmapData, ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint){
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_240___applyFilter)
HXLINE( 245)		int r = ((int)((int)this->_hx___color >> (int)(int)16) & (int)(int)255);
HXLINE( 246)		int g = ((int)((int)this->_hx___color >> (int)(int)8) & (int)(int)255);
HXLINE( 247)		int b = ((int)this->_hx___color & (int)(int)255);
HXLINE( 249)		 ::lime::graphics::Image bitmapData1 = bitmapData->image;
HXDLIN( 249)		 ::lime::graphics::Image sourceBitmapData1 = sourceBitmapData->image;
HXDLIN( 249)		 ::lime::math::Rectangle finalImage = sourceRect->_hx___toLimeRectangle();
HXDLIN( 249)		 ::lime::math::Vector2 finalImage1 = destPoint->_hx___toLimeVector2();
HXDLIN( 249)		 ::lime::graphics::Image finalImage2 = ::lime::_internal::graphics::ImageDataUtil_obj::gaussianBlur(bitmapData1,sourceBitmapData1,finalImage,finalImage1,this->_hx___blurX,this->_hx___blurY,this->_hx___quality,this->_hx___strength,null());
HXLINE( 250)		 ::lime::math::Rectangle _hx_tmp = finalImage2->get_rect();
HXDLIN( 250)		finalImage2->colorTransform(_hx_tmp, ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,(int)0,(int)0,(int)0,this->_hx___alpha,r,g,b,(int)0)->_hx___toLimeColorMatrix());
HXLINE( 252)		if (hx::IsEq( finalImage2,bitmapData->image )) {
HXLINE( 252)			return bitmapData;
            		}
HXLINE( 254)		return sourceBitmapData;
            	}


 ::openfl::display::Shader GlowFilter_obj::_hx___initShader( ::openfl::display::DisplayObjectRenderer renderer,int pass){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_259___initShader)
HXLINE( 262)		if ((pass <= this->_hx___horizontalPasses)) {
HXLINE( 264)			Float scale = ::Math_obj::pow(((Float)0.5),((int)pass >> (int)(int)1));
HXLINE( 265)			::Array< Float > _hx_tmp = ::openfl::filters::GlowFilter_obj::_hx___glowShader->uRadius->value;
HXDLIN( 265)			_hx_tmp[(int)0] = (this->get_blurX() * scale);
HXLINE( 266)			::openfl::filters::GlowFilter_obj::_hx___glowShader->uRadius->value[(int)1] = (int)0;
            		}
            		else {
HXLINE( 270)			Float scale1 = ::Math_obj::pow(((Float)0.5),((int)(pass - this->_hx___horizontalPasses) >> (int)(int)1));
HXLINE( 271)			::openfl::filters::GlowFilter_obj::_hx___glowShader->uRadius->value[(int)0] = (int)0;
HXLINE( 272)			::Array< Float > _hx_tmp1 = ::openfl::filters::GlowFilter_obj::_hx___glowShader->uRadius->value;
HXDLIN( 272)			_hx_tmp1[(int)1] = (this->get_blurY() * scale1);
            		}
HXLINE( 276)		::Array< Float > _hx_tmp2 = ::openfl::filters::GlowFilter_obj::_hx___glowShader->uColor->value;
HXDLIN( 276)		_hx_tmp2[(int)0] = ((Float)((int)((int)this->get_color() >> (int)(int)16) & (int)(int)255) / (Float)(int)255);
HXLINE( 277)		::Array< Float > _hx_tmp3 = ::openfl::filters::GlowFilter_obj::_hx___glowShader->uColor->value;
HXDLIN( 277)		_hx_tmp3[(int)1] = ((Float)((int)((int)this->get_color() >> (int)(int)8) & (int)(int)255) / (Float)(int)255);
HXLINE( 278)		::Array< Float > _hx_tmp4 = ::openfl::filters::GlowFilter_obj::_hx___glowShader->uColor->value;
HXDLIN( 278)		_hx_tmp4[(int)2] = ((Float)((int)this->get_color() & (int)(int)255) / (Float)(int)255);
HXLINE( 279)		::Array< Float > _hx_tmp5 = ::openfl::filters::GlowFilter_obj::_hx___glowShader->uColor->value;
HXDLIN( 279)		Float _hx_tmp6 = this->get_alpha();
HXDLIN( 279)		_hx_tmp5[(int)3] = (_hx_tmp6 * ((Float)this->_hx___strength / (Float)this->_hx___numShaderPasses));
HXLINE( 282)		return ::openfl::filters::GlowFilter_obj::_hx___glowShader;
            	}


Float GlowFilter_obj::get_alpha(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_296_get_alpha)
HXDLIN( 296)		return this->_hx___alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_alpha,return )

Float GlowFilter_obj::set_alpha(Float value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_301_set_alpha)
HXLINE( 303)		if ((value != this->_hx___alpha)) {
HXLINE( 303)			this->_hx___renderDirty = true;
            		}
HXLINE( 304)		return (this->_hx___alpha = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_alpha,return )

Float GlowFilter_obj::get_blurX(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_311_get_blurX)
HXDLIN( 311)		return this->_hx___blurX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_blurX,return )

Float GlowFilter_obj::set_blurX(Float value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_316_set_blurX)
HXLINE( 318)		if ((value != this->_hx___blurX)) {
HXLINE( 319)			this->_hx___blurX = value;
HXLINE( 320)			this->_hx___renderDirty = true;
HXLINE( 321)			int _hx_tmp;
HXDLIN( 321)			if ((value > (int)0)) {
HXLINE( 321)				_hx_tmp = ::Math_obj::ceil((value * ((Float)1.5)));
            			}
            			else {
HXLINE( 321)				_hx_tmp = (int)0;
            			}
HXDLIN( 321)			this->_hx___leftExtension = _hx_tmp;
HXLINE( 322)			this->_hx___rightExtension = this->_hx___leftExtension;
            		}
HXLINE( 324)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_blurX,return )

Float GlowFilter_obj::get_blurY(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_331_get_blurY)
HXDLIN( 331)		return this->_hx___blurY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_blurY,return )

Float GlowFilter_obj::set_blurY(Float value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_336_set_blurY)
HXLINE( 338)		if ((value != this->_hx___blurY)) {
HXLINE( 339)			this->_hx___blurY = value;
HXLINE( 340)			this->_hx___renderDirty = true;
HXLINE( 341)			int _hx_tmp;
HXDLIN( 341)			if ((value > (int)0)) {
HXLINE( 341)				_hx_tmp = ::Math_obj::ceil((value * ((Float)1.5)));
            			}
            			else {
HXLINE( 341)				_hx_tmp = (int)0;
            			}
HXDLIN( 341)			this->_hx___topExtension = _hx_tmp;
HXLINE( 342)			this->_hx___bottomExtension = this->_hx___topExtension;
            		}
HXLINE( 344)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_blurY,return )

int GlowFilter_obj::get_color(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_351_get_color)
HXDLIN( 351)		return this->_hx___color;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_color,return )

int GlowFilter_obj::set_color(int value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_356_set_color)
HXLINE( 358)		if ((value != this->_hx___color)) {
HXLINE( 358)			this->_hx___renderDirty = true;
            		}
HXLINE( 359)		return (this->_hx___color = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_color,return )

bool GlowFilter_obj::get_inner(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_366_get_inner)
HXDLIN( 366)		return this->_hx___inner;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_inner,return )

bool GlowFilter_obj::set_inner(bool value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_371_set_inner)
HXLINE( 373)		if ((value != this->_hx___inner)) {
HXLINE( 373)			this->_hx___renderDirty = true;
            		}
HXLINE( 374)		return (this->_hx___inner = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_inner,return )

bool GlowFilter_obj::get_knockout(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_381_get_knockout)
HXDLIN( 381)		return this->_hx___knockout;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_knockout,return )

bool GlowFilter_obj::set_knockout(bool value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_386_set_knockout)
HXLINE( 388)		if ((value != this->_hx___knockout)) {
HXLINE( 388)			this->_hx___renderDirty = true;
            		}
HXLINE( 389)		return (this->_hx___knockout = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_knockout,return )

int GlowFilter_obj::get_quality(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_396_get_quality)
HXDLIN( 396)		return this->_hx___quality;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_quality,return )

int GlowFilter_obj::set_quality(int value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_401_set_quality)
HXLINE( 405)		int _hx_tmp;
HXDLIN( 405)		if ((this->_hx___blurX <= (int)0)) {
HXLINE( 405)			_hx_tmp = (int)0;
            		}
            		else {
HXLINE( 405)			Float _hx_tmp1 = this->_hx___blurX;
HXDLIN( 405)			_hx_tmp = (::Math_obj::round((_hx_tmp1 * ((Float)value / (Float)(int)4))) + (int)1);
            		}
HXDLIN( 405)		this->_hx___horizontalPasses = _hx_tmp;
HXLINE( 406)		int _hx_tmp2;
HXDLIN( 406)		if ((this->_hx___blurY <= (int)0)) {
HXLINE( 406)			_hx_tmp2 = (int)0;
            		}
            		else {
HXLINE( 406)			Float _hx_tmp3 = this->_hx___blurY;
HXDLIN( 406)			_hx_tmp2 = (::Math_obj::round((_hx_tmp3 * ((Float)value / (Float)(int)4))) + (int)1);
            		}
HXDLIN( 406)		this->_hx___verticalPasses = _hx_tmp2;
HXLINE( 408)		this->_hx___numShaderPasses = (this->_hx___horizontalPasses + this->_hx___verticalPasses);
HXLINE( 410)		if ((value != this->_hx___quality)) {
HXLINE( 410)			this->_hx___renderDirty = true;
            		}
HXLINE( 411)		return (this->_hx___quality = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_quality,return )

Float GlowFilter_obj::get_strength(){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_418_get_strength)
HXDLIN( 418)		return this->_hx___strength;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlowFilter_obj,get_strength,return )

Float GlowFilter_obj::set_strength(Float value){
            	HX_STACKFRAME(&_hx_pos_f54e58291eefcbc3_423_set_strength)
HXLINE( 425)		if ((value != this->_hx___strength)) {
HXLINE( 425)			this->_hx___renderDirty = true;
            		}
HXLINE( 426)		return (this->_hx___strength = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlowFilter_obj,set_strength,return )

 ::openfl::filters::_GlowFilter::GlowShader GlowFilter_obj::_hx___glowShader;


hx::ObjectPtr< GlowFilter_obj > GlowFilter_obj::__new(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout) {
	hx::ObjectPtr< GlowFilter_obj > __this = new GlowFilter_obj();
	__this->__construct(__o_color,__o_alpha,__o_blurX,__o_blurY,__o_strength,__o_quality,__o_inner,__o_knockout);
	return __this;
}

hx::ObjectPtr< GlowFilter_obj > GlowFilter_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout) {
	GlowFilter_obj *__this = (GlowFilter_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GlowFilter_obj), true, "openfl.filters.GlowFilter"));
	*(void **)__this = GlowFilter_obj::_hx_vtable;
	__this->__construct(__o_color,__o_alpha,__o_blurX,__o_blurY,__o_strength,__o_quality,__o_inner,__o_knockout);
	return __this;
}

GlowFilter_obj::GlowFilter_obj()
{
}

hx::Val GlowFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_alpha() ); }
		if (HX_FIELD_EQ(inName,"blurX") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_blurX() ); }
		if (HX_FIELD_EQ(inName,"blurY") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_blurY() ); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_color() ); }
		if (HX_FIELD_EQ(inName,"inner") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_inner() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_quality() ); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { return hx::Val( _hx___alpha ); }
		if (HX_FIELD_EQ(inName,"__blurX") ) { return hx::Val( _hx___blurX ); }
		if (HX_FIELD_EQ(inName,"__blurY") ) { return hx::Val( _hx___blurY ); }
		if (HX_FIELD_EQ(inName,"__color") ) { return hx::Val( _hx___color ); }
		if (HX_FIELD_EQ(inName,"__inner") ) { return hx::Val( _hx___inner ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"knockout") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_knockout() ); }
		if (HX_FIELD_EQ(inName,"strength") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_strength() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__quality") ) { return hx::Val( _hx___quality ); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return hx::Val( get_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_blurX") ) { return hx::Val( get_blurX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blurX") ) { return hx::Val( set_blurX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_blurY") ) { return hx::Val( get_blurY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blurY") ) { return hx::Val( set_blurY_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return hx::Val( get_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_inner") ) { return hx::Val( get_inner_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_inner") ) { return hx::Val( set_inner_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__knockout") ) { return hx::Val( _hx___knockout ); }
		if (HX_FIELD_EQ(inName,"__strength") ) { return hx::Val( _hx___strength ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_quality") ) { return hx::Val( get_quality_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_quality") ) { return hx::Val( set_quality_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__initShader") ) { return hx::Val( _hx___initShader_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_knockout") ) { return hx::Val( get_knockout_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_knockout") ) { return hx::Val( set_knockout_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_strength") ) { return hx::Val( get_strength_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_strength") ) { return hx::Val( set_strength_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__applyFilter") ) { return hx::Val( _hx___applyFilter_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__verticalPasses") ) { return hx::Val( _hx___verticalPasses ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__horizontalPasses") ) { return hx::Val( _hx___horizontalPasses ); }
	}
	return super::__Field(inName,inCallProp);
}

bool GlowFilter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__glowShader") ) { outValue = ( _hx___glowShader ); return true; }
	}
	return false;
}

hx::Val GlowFilter_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_alpha(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"blurX") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_blurX(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"blurY") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_blurY(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_color(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"inner") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_inner(inValue.Cast< bool >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_quality(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { _hx___alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__blurX") ) { _hx___blurX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__blurY") ) { _hx___blurY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__color") ) { _hx___color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__inner") ) { _hx___inner=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"knockout") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_knockout(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"strength") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_strength(inValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__quality") ) { _hx___quality=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__knockout") ) { _hx___knockout=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__strength") ) { _hx___strength=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__verticalPasses") ) { _hx___verticalPasses=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__horizontalPasses") ) { _hx___horizontalPasses=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GlowFilter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__glowShader") ) { _hx___glowShader=ioValue.Cast<  ::openfl::filters::_GlowFilter::GlowShader >(); return true; }
	}
	return false;
}

void GlowFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5"));
	outFields->push(HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("inner","\x96","\x31","\x1c","\xbe"));
	outFields->push(HX_HCSTRING("knockout","\xfa","\xa9","\xa5","\x6f"));
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	outFields->push(HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e"));
	outFields->push(HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b"));
	outFields->push(HX_HCSTRING("__blurX","\xb1","\x68","\x5f","\x1f"));
	outFields->push(HX_HCSTRING("__blurY","\xb2","\x68","\x5f","\x1f"));
	outFields->push(HX_HCSTRING("__color","\x43","\xca","\xba","\xb4"));
	outFields->push(HX_HCSTRING("__horizontalPasses","\xa3","\x9a","\x5d","\x02"));
	outFields->push(HX_HCSTRING("__inner","\x76","\x8a","\x7a","\x28"));
	outFields->push(HX_HCSTRING("__knockout","\x1a","\x1d","\xde","\x12"));
	outFields->push(HX_HCSTRING("__quality","\x9f","\x55","\x9a","\xc5"));
	outFields->push(HX_HCSTRING("__strength","\xa1","\x45","\xc7","\x31"));
	outFields->push(HX_HCSTRING("__verticalPasses","\xb5","\x4b","\xf5","\xec"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GlowFilter_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,_hx___alpha),HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b")},
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,_hx___blurX),HX_HCSTRING("__blurX","\xb1","\x68","\x5f","\x1f")},
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,_hx___blurY),HX_HCSTRING("__blurY","\xb2","\x68","\x5f","\x1f")},
	{hx::fsInt,(int)offsetof(GlowFilter_obj,_hx___color),HX_HCSTRING("__color","\x43","\xca","\xba","\xb4")},
	{hx::fsInt,(int)offsetof(GlowFilter_obj,_hx___horizontalPasses),HX_HCSTRING("__horizontalPasses","\xa3","\x9a","\x5d","\x02")},
	{hx::fsBool,(int)offsetof(GlowFilter_obj,_hx___inner),HX_HCSTRING("__inner","\x76","\x8a","\x7a","\x28")},
	{hx::fsBool,(int)offsetof(GlowFilter_obj,_hx___knockout),HX_HCSTRING("__knockout","\x1a","\x1d","\xde","\x12")},
	{hx::fsInt,(int)offsetof(GlowFilter_obj,_hx___quality),HX_HCSTRING("__quality","\x9f","\x55","\x9a","\xc5")},
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,_hx___strength),HX_HCSTRING("__strength","\xa1","\x45","\xc7","\x31")},
	{hx::fsInt,(int)offsetof(GlowFilter_obj,_hx___verticalPasses),HX_HCSTRING("__verticalPasses","\xb5","\x4b","\xf5","\xec")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo GlowFilter_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::filters::_GlowFilter::GlowShader*/ ,(void *) &GlowFilter_obj::_hx___glowShader,HX_HCSTRING("__glowShader","\xb2","\xe4","\x70","\x07")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String GlowFilter_obj_sMemberFields[] = {
	HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b"),
	HX_HCSTRING("__blurX","\xb1","\x68","\x5f","\x1f"),
	HX_HCSTRING("__blurY","\xb2","\x68","\x5f","\x1f"),
	HX_HCSTRING("__color","\x43","\xca","\xba","\xb4"),
	HX_HCSTRING("__horizontalPasses","\xa3","\x9a","\x5d","\x02"),
	HX_HCSTRING("__inner","\x76","\x8a","\x7a","\x28"),
	HX_HCSTRING("__knockout","\x1a","\x1d","\xde","\x12"),
	HX_HCSTRING("__quality","\x9f","\x55","\x9a","\xc5"),
	HX_HCSTRING("__strength","\xa1","\x45","\xc7","\x31"),
	HX_HCSTRING("__verticalPasses","\xb5","\x4b","\xf5","\xec"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("__applyFilter","\xa6","\x20","\xa8","\x09"),
	HX_HCSTRING("__initShader","\x75","\x95","\xf9","\x59"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("get_blurX","\x28","\x6c","\xaa","\xf8"),
	HX_HCSTRING("set_blurX","\x34","\x58","\xfb","\xdb"),
	HX_HCSTRING("get_blurY","\x29","\x6c","\xaa","\xf8"),
	HX_HCSTRING("set_blurY","\x35","\x58","\xfb","\xdb"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_inner","\xed","\x8d","\xc5","\x01"),
	HX_HCSTRING("set_inner","\xf9","\x79","\x16","\xe5"),
	HX_HCSTRING("get_knockout","\x03","\x5e","\xbf","\x24"),
	HX_HCSTRING("set_knockout","\x77","\x81","\xb8","\x39"),
	HX_HCSTRING("get_quality","\xd6","\x64","\x46","\xca"),
	HX_HCSTRING("set_quality","\xe2","\x6b","\xb3","\xd4"),
	HX_HCSTRING("get_strength","\x8a","\x86","\xa8","\x43"),
	HX_HCSTRING("set_strength","\xfe","\xa9","\xa1","\x58"),
	::String(null()) };

static void GlowFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlowFilter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GlowFilter_obj::_hx___glowShader,"__glowShader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GlowFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::_hx___glowShader,"__glowShader");
};

#endif

hx::Class GlowFilter_obj::__mClass;

static ::String GlowFilter_obj_sStaticFields[] = {
	HX_HCSTRING("__glowShader","\xb2","\xe4","\x70","\x07"),
	::String(null())
};

void GlowFilter_obj::__register()
{
	hx::Object *dummy = new GlowFilter_obj;
	GlowFilter_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters.GlowFilter","\x36","\xe0","\x65","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GlowFilter_obj::__GetStatic;
	__mClass->mSetStaticField = &GlowFilter_obj::__SetStatic;
	__mClass->mMarkFunc = GlowFilter_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GlowFilter_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GlowFilter_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GlowFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GlowFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlowFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlowFilter_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GlowFilter_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_f54e58291eefcbc3_76_boot)
HXDLIN(  76)		_hx___glowShader =  ::openfl::filters::_GlowFilter::GlowShader_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace filters
