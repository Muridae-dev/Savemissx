// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_math__RGBA_RGBA_Impl_
#include <lime/math/_RGBA/RGBA_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7fcfbbd74e9c398a_56___init__,"::lime::math::_RGBA::RGBA_Impl__obj","__init__",0x1ae221dc,"::lime::math::_RGBA::RGBA_Impl__obj.__init__","lime/math/RGBA.hx",56,0x0518ba7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d0d9611196b7dff8_120__new,"lime.math._RGBA.RGBA_Impl_","_new",0x44207173,"lime.math._RGBA.RGBA_Impl_._new","lime/math/RGBA.hx",120,0x0518ba7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d0d9611196b7dff8_135_create,"lime.math._RGBA.RGBA_Impl_","create",0xc92d6b8e,"lime.math._RGBA.RGBA_Impl_.create","lime/math/RGBA.hx",135,0x0518ba7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d0d9611196b7dff8_149_multiplyAlpha,"lime.math._RGBA.RGBA_Impl_","multiplyAlpha",0x864c8448,"lime.math._RGBA.RGBA_Impl_.multiplyAlpha","lime/math/RGBA.hx",149,0x0518ba7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d0d9611196b7dff8_174_readUInt8,"lime.math._RGBA.RGBA_Impl_","readUInt8",0x9e5b3ef6,"lime.math._RGBA.RGBA_Impl_.readUInt8","lime/math/RGBA.hx",174,0x0518ba7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d0d9611196b7dff8_210_set,"lime.math._RGBA.RGBA_Impl_","set",0x1878e7d0,"lime.math._RGBA.RGBA_Impl_.set","lime/math/RGBA.hx",210,0x0518ba7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d0d9611196b7dff8_220_unmultiplyAlpha,"lime.math._RGBA.RGBA_Impl_","unmultiplyAlpha",0x1c10a1cf,"lime.math._RGBA.RGBA_Impl_.unmultiplyAlpha","lime/math/RGBA.hx",220,0x0518ba7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d0d9611196b7dff8_237_writeUInt8,"lime.math._RGBA.RGBA_Impl_","writeUInt8",0x0228ffb1,"lime.math._RGBA.RGBA_Impl_.writeUInt8","lime/math/RGBA.hx",237,0x0518ba7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d0d9611196b7dff8_275___fromARGB,"lime.math._RGBA.RGBA_Impl_","__fromARGB",0x20512068,"lime.math._RGBA.RGBA_Impl_.__fromARGB","lime/math/RGBA.hx",275,0x0518ba7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d0d9611196b7dff8_282___fromBGRA,"lime.math._RGBA.RGBA_Impl_","__fromBGRA",0x20f207d0,"lime.math._RGBA.RGBA_Impl_.__fromBGRA","lime/math/RGBA.hx",282,0x0518ba7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d0d9611196b7dff8_296_get_a,"lime.math._RGBA.RGBA_Impl_","get_a",0xed8fd8e6,"lime.math._RGBA.RGBA_Impl_.get_a","lime/math/RGBA.hx",296,0x0518ba7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d0d9611196b7dff8_301_set_a,"lime.math._RGBA.RGBA_Impl_","set_a",0xd65ecef2,"lime.math._RGBA.RGBA_Impl_.set_a","lime/math/RGBA.hx",301,0x0518ba7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d0d9611196b7dff8_311_get_b,"lime.math._RGBA.RGBA_Impl_","get_b",0xed8fd8e7,"lime.math._RGBA.RGBA_Impl_.get_b","lime/math/RGBA.hx",311,0x0518ba7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d0d9611196b7dff8_316_set_b,"lime.math._RGBA.RGBA_Impl_","set_b",0xd65ecef3,"lime.math._RGBA.RGBA_Impl_.set_b","lime/math/RGBA.hx",316,0x0518ba7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d0d9611196b7dff8_326_get_g,"lime.math._RGBA.RGBA_Impl_","get_g",0xed8fd8ec,"lime.math._RGBA.RGBA_Impl_.get_g","lime/math/RGBA.hx",326,0x0518ba7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d0d9611196b7dff8_331_set_g,"lime.math._RGBA.RGBA_Impl_","set_g",0xd65ecef8,"lime.math._RGBA.RGBA_Impl_.set_g","lime/math/RGBA.hx",331,0x0518ba7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d0d9611196b7dff8_341_get_r,"lime.math._RGBA.RGBA_Impl_","get_r",0xed8fd8f7,"lime.math._RGBA.RGBA_Impl_.get_r","lime/math/RGBA.hx",341,0x0518ba7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d0d9611196b7dff8_346_set_r,"lime.math._RGBA.RGBA_Impl_","set_r",0xd65ecf03,"lime.math._RGBA.RGBA_Impl_.set_r","lime/math/RGBA.hx",346,0x0518ba7d)
namespace lime{
namespace math{
namespace _RGBA{

void RGBA_Impl__obj::__construct() { }

Dynamic RGBA_Impl__obj::__CreateEmpty() { return new RGBA_Impl__obj; }

void *RGBA_Impl__obj::_hx_vtable = 0;

Dynamic RGBA_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RGBA_Impl__obj > _hx_result = new RGBA_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RGBA_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7488762a;
}

void RGBA_Impl__obj::__init__(){
            	HX_GC_STACKFRAME(&_hx_pos_7fcfbbd74e9c398a_56___init__)
HXLINE(  61)		 ::lime::utils::ArrayBufferView this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)256,(int)7);
HXDLIN(  61)		::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16 = this1;
HXLINE(  63)		{
HXLINE(  63)			int _g = (int)0;
HXDLIN(  63)			while((_g < (int)256)){
HXLINE(  63)				_g = (_g + (int)1);
HXDLIN(  63)				int i = (_g - (int)1);
HXLINE(  65)				{
HXLINE(  65)					 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN(  65)					int val = ::Math_obj::ceil((i * ((Float)257.00392156862745)));
HXDLIN(  65)					{
HXLINE(  65)						int this3 = this2->byteOffset;
HXDLIN(  65)						::__hxcpp_memory_set_ui32(this2->buffer->b,(this3 + (i * (int)4)),val);
            					}
            				}
            			}
            		}
HXLINE(  69)		 ::lime::utils::ArrayBufferView this4 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)511,(int)4);
HXDLIN(  69)		::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp = this4;
HXLINE(  71)		{
HXLINE(  71)			int _g1 = (int)0;
HXDLIN(  71)			while((_g1 < (int)255)){
HXLINE(  71)				_g1 = (_g1 + (int)1);
HXDLIN(  71)				int i1 = (_g1 - (int)1);
HXLINE(  73)				{
HXLINE(  73)					 ::lime::utils::ArrayBufferView this5 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  73)					::__hxcpp_memory_set_byte(this5->buffer->b,(this5->byteOffset + i1),i1);
            				}
            			}
            		}
HXLINE(  77)		{
HXLINE(  77)			int _g11 = (int)255;
HXDLIN(  77)			int _g2 = (int)511;
HXDLIN(  77)			while((_g11 < _g2)){
HXLINE(  77)				_g11 = (_g11 + (int)1);
HXDLIN(  77)				int i2 = (_g11 - (int)1);
HXLINE(  79)				{
HXLINE(  79)					 ::lime::utils::ArrayBufferView this6 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN(  79)					::__hxcpp_memory_set_byte(this6->buffer->b,(this6->byteOffset + i2),(int)255);
            				}
            			}
            		}
            	}


 ::lime::utils::ArrayBufferView RGBA_Impl__obj::_hx___alpha16;

 ::lime::utils::ArrayBufferView RGBA_Impl__obj::_hx___clamp;

int RGBA_Impl__obj::a16;

Float RGBA_Impl__obj::unmult;

int RGBA_Impl__obj::_new(hx::Null< int >  __o_rgba){
int rgba = __o_rgba.Default(0);
            	HX_STACKFRAME(&_hx_pos_d0d9611196b7dff8_120__new)
HXDLIN( 120)		int this1 = rgba;
HXDLIN( 120)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGBA_Impl__obj,_new,return )

int RGBA_Impl__obj::create(int r,int g,int b,int a){
            	HX_STACKFRAME(&_hx_pos_d0d9611196b7dff8_135_create)
HXLINE( 137)		int this1 = (int)0;
HXDLIN( 137)		int rgba = this1;
HXLINE( 138)		rgba = ((int)((int)((int)((int)((int)r & (int)(int)255) << (int)(int)24) | (int)((int)((int)g & (int)(int)255) << (int)(int)16)) | (int)((int)((int)b & (int)(int)255) << (int)(int)8)) | (int)((int)a & (int)(int)255));
HXLINE( 139)		return rgba;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(RGBA_Impl__obj,create,return )

void RGBA_Impl__obj::multiplyAlpha(int this1){
            	HX_STACKFRAME(&_hx_pos_d0d9611196b7dff8_149_multiplyAlpha)
HXDLIN( 149)		if ((((int)this1 & (int)(int)255) == (int)0)) {
HXLINE( 151)			if ((this1 != (int)0)) {
HXLINE( 153)				this1 = (int)0;
            			}
            		}
            		else {
HXLINE( 157)			if ((((int)this1 & (int)(int)255) != (int)255)) {
HXLINE( 159)				 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN( 159)				int this3 = this2->byteOffset;
HXDLIN( 159)				::lime::math::_RGBA::RGBA_Impl__obj::a16 = ::__hxcpp_memory_get_ui32(this2->buffer->b,(this3 + (((int)this1 & (int)(int)255) * (int)4)));
HXLINE( 160)				this1 = ((int)((int)((int)((int)((int)((int)(((int)hx::UShr(this1,(int)24) & (int)(int)255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> (int)(int)16) & (int)(int)255) << (int)(int)24) | (int)((int)((int)((int)(((int)hx::UShr(this1,(int)16) & (int)(int)255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> (int)(int)16) & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)(((int)hx::UShr(this1,(int)8) & (int)(int)255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> (int)(int)16) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)this1 & (int)(int)255) & (int)(int)255));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGBA_Impl__obj,multiplyAlpha,(void))

void RGBA_Impl__obj::readUInt8(int this1, ::lime::utils::ArrayBufferView data,int offset,hx::Null< int >  __o_format,hx::Null< bool >  __o_premultiplied){
int format = __o_format.Default(0);
bool premultiplied = __o_premultiplied.Default(false);
            	HX_STACKFRAME(&_hx_pos_d0d9611196b7dff8_174_readUInt8)
HXLINE( 176)		switch((int)(format)){
            			case (int)0: {
HXLINE( 184)				int r = ((int)::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & (int)(int)255);
HXDLIN( 184)				int data1 = data->byteOffset;
HXDLIN( 184)				int g = ((int)::__hxcpp_memory_get_byte(data->buffer->b,(data1 + (offset + (int)1))) & (int)(int)255);
HXDLIN( 184)				int data2 = data->byteOffset;
HXDLIN( 184)				int b = ((int)::__hxcpp_memory_get_byte(data->buffer->b,(data2 + (offset + (int)2))) & (int)(int)255);
HXDLIN( 184)				int data3 = data->byteOffset;
HXDLIN( 184)				this1 = ((int)((int)((int)((int)((int)r & (int)(int)255) << (int)(int)24) | (int)((int)((int)g & (int)(int)255) << (int)(int)16)) | (int)((int)((int)b & (int)(int)255) << (int)(int)8)) | (int)((int)((int)::__hxcpp_memory_get_byte(data->buffer->b,(data3 + (offset + (int)3))) & (int)(int)255) & (int)(int)255));
            			}
            			break;
            			case (int)1: {
HXLINE( 188)				int data4 = data->byteOffset;
HXDLIN( 188)				int r1 = ((int)::__hxcpp_memory_get_byte(data->buffer->b,(data4 + (offset + (int)1))) & (int)(int)255);
HXDLIN( 188)				int data5 = data->byteOffset;
HXDLIN( 188)				int g1 = ((int)::__hxcpp_memory_get_byte(data->buffer->b,(data5 + (offset + (int)2))) & (int)(int)255);
HXDLIN( 188)				int data6 = data->byteOffset;
HXDLIN( 188)				int b1 = ((int)::__hxcpp_memory_get_byte(data->buffer->b,(data6 + (offset + (int)3))) & (int)(int)255);
HXDLIN( 188)				this1 = ((int)((int)((int)((int)((int)r1 & (int)(int)255) << (int)(int)24) | (int)((int)((int)g1 & (int)(int)255) << (int)(int)16)) | (int)((int)((int)b1 & (int)(int)255) << (int)(int)8)) | (int)((int)((int)::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & (int)(int)255) & (int)(int)255));
            			}
            			break;
            			case (int)2: {
HXLINE( 180)				int data7 = data->byteOffset;
HXDLIN( 180)				int r2 = ((int)::__hxcpp_memory_get_byte(data->buffer->b,(data7 + (offset + (int)2))) & (int)(int)255);
HXDLIN( 180)				int data8 = data->byteOffset;
HXDLIN( 180)				int g2 = ((int)::__hxcpp_memory_get_byte(data->buffer->b,(data8 + (offset + (int)1))) & (int)(int)255);
HXDLIN( 180)				int b2 = ((int)::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset)) & (int)(int)255);
HXDLIN( 180)				int data9 = data->byteOffset;
HXDLIN( 180)				this1 = ((int)((int)((int)((int)((int)r2 & (int)(int)255) << (int)(int)24) | (int)((int)((int)g2 & (int)(int)255) << (int)(int)16)) | (int)((int)((int)b2 & (int)(int)255) << (int)(int)8)) | (int)((int)((int)::__hxcpp_memory_get_byte(data->buffer->b,(data9 + (offset + (int)3))) & (int)(int)255) & (int)(int)255));
            			}
            			break;
            		}
HXLINE( 192)		if (premultiplied) {
HXLINE( 194)			bool _hx_tmp;
HXDLIN( 194)			if ((((int)this1 & (int)(int)255) != (int)0)) {
HXLINE( 194)				_hx_tmp = (((int)this1 & (int)(int)255) != (int)255);
            			}
            			else {
HXLINE( 194)				_hx_tmp = false;
            			}
HXDLIN( 194)			if (_hx_tmp) {
HXLINE( 194)				::lime::math::_RGBA::RGBA_Impl__obj::unmult = ((Float)((Float)255.0) / (Float)((int)this1 & (int)(int)255));
HXDLIN( 194)				{
HXLINE( 194)					 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 194)					int r3 = ((int)::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((((int)hx::UShr(this1,(int)24) & (int)(int)255) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & (int)(int)255);
HXDLIN( 194)					 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 194)					int g3 = ((int)::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((((int)hx::UShr(this1,(int)16) & (int)(int)255) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & (int)(int)255);
HXDLIN( 194)					 ::lime::utils::ArrayBufferView this4 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 194)					this1 = ((int)((int)((int)((int)((int)r3 & (int)(int)255) << (int)(int)24) | (int)((int)((int)g3 & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)::__hxcpp_memory_get_byte(this4->buffer->b,(this4->byteOffset + ::Math_obj::round((((int)hx::UShr(this1,(int)8) & (int)(int)255) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & (int)(int)255) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)this1 & (int)(int)255) & (int)(int)255));
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(RGBA_Impl__obj,readUInt8,(void))

void RGBA_Impl__obj::set(int this1,int r,int g,int b,int a){
            	HX_STACKFRAME(&_hx_pos_d0d9611196b7dff8_210_set)
HXDLIN( 210)		this1 = ((int)((int)((int)((int)((int)r & (int)(int)255) << (int)(int)24) | (int)((int)((int)g & (int)(int)255) << (int)(int)16)) | (int)((int)((int)b & (int)(int)255) << (int)(int)8)) | (int)((int)a & (int)(int)255));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(RGBA_Impl__obj,set,(void))

void RGBA_Impl__obj::unmultiplyAlpha(int this1){
            	HX_STACKFRAME(&_hx_pos_d0d9611196b7dff8_220_unmultiplyAlpha)
HXDLIN( 220)		bool _hx_tmp;
HXDLIN( 220)		if ((((int)this1 & (int)(int)255) != (int)0)) {
HXDLIN( 220)			_hx_tmp = (((int)this1 & (int)(int)255) != (int)255);
            		}
            		else {
HXDLIN( 220)			_hx_tmp = false;
            		}
HXDLIN( 220)		if (_hx_tmp) {
HXLINE( 222)			::lime::math::_RGBA::RGBA_Impl__obj::unmult = ((Float)((Float)255.0) / (Float)((int)this1 & (int)(int)255));
HXLINE( 223)			{
HXLINE( 223)				 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 223)				int r = ((int)::__hxcpp_memory_get_byte(this2->buffer->b,(this2->byteOffset + ::Math_obj::round((((int)hx::UShr(this1,(int)24) & (int)(int)255) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & (int)(int)255);
HXDLIN( 223)				 ::lime::utils::ArrayBufferView this3 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 223)				int g = ((int)::__hxcpp_memory_get_byte(this3->buffer->b,(this3->byteOffset + ::Math_obj::round((((int)hx::UShr(this1,(int)16) & (int)(int)255) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & (int)(int)255);
HXDLIN( 223)				 ::lime::utils::ArrayBufferView this4 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___clamp;
HXDLIN( 223)				this1 = ((int)((int)((int)((int)((int)r & (int)(int)255) << (int)(int)24) | (int)((int)((int)g & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)::__hxcpp_memory_get_byte(this4->buffer->b,(this4->byteOffset + ::Math_obj::round((((int)hx::UShr(this1,(int)8) & (int)(int)255) * ::lime::math::_RGBA::RGBA_Impl__obj::unmult)))) & (int)(int)255) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)this1 & (int)(int)255) & (int)(int)255));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGBA_Impl__obj,unmultiplyAlpha,(void))

void RGBA_Impl__obj::writeUInt8(int this1, ::lime::utils::ArrayBufferView data,int offset,hx::Null< int >  __o_format,hx::Null< bool >  __o_premultiplied){
int format = __o_format.Default(0);
bool premultiplied = __o_premultiplied.Default(false);
            	HX_STACKFRAME(&_hx_pos_d0d9611196b7dff8_237_writeUInt8)
HXLINE( 239)		if (premultiplied) {
HXLINE( 241)			if ((((int)this1 & (int)(int)255) == (int)0)) {
HXLINE( 241)				if ((this1 != (int)0)) {
HXLINE( 241)					this1 = (int)0;
            				}
            			}
            			else {
HXLINE( 241)				if ((((int)this1 & (int)(int)255) != (int)255)) {
HXLINE( 241)					 ::lime::utils::ArrayBufferView this2 = ::lime::math::_RGBA::RGBA_Impl__obj::_hx___alpha16;
HXDLIN( 241)					int this3 = this2->byteOffset;
HXDLIN( 241)					::lime::math::_RGBA::RGBA_Impl__obj::a16 = ::__hxcpp_memory_get_ui32(this2->buffer->b,(this3 + (((int)this1 & (int)(int)255) * (int)4)));
HXDLIN( 241)					this1 = ((int)((int)((int)((int)((int)((int)(((int)hx::UShr(this1,(int)24) & (int)(int)255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> (int)(int)16) & (int)(int)255) << (int)(int)24) | (int)((int)((int)((int)(((int)hx::UShr(this1,(int)16) & (int)(int)255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> (int)(int)16) & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)(((int)hx::UShr(this1,(int)8) & (int)(int)255) * ::lime::math::_RGBA::RGBA_Impl__obj::a16) >> (int)(int)16) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)this1 & (int)(int)255) & (int)(int)255));
            				}
            			}
            		}
HXLINE( 245)		switch((int)(format)){
            			case (int)0: {
HXLINE( 256)				{
HXLINE( 256)					int val = ((int)hx::UShr(this1,(int)24) & (int)(int)255);
HXDLIN( 256)					::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
            				}
HXLINE( 257)				{
HXLINE( 257)					int val1 = ((int)hx::UShr(this1,(int)16) & (int)(int)255);
HXDLIN( 257)					{
HXLINE( 257)						int data1 = data->byteOffset;
HXDLIN( 257)						::__hxcpp_memory_set_byte(data->buffer->b,(data1 + (offset + (int)1)),val1);
            					}
            				}
HXLINE( 258)				{
HXLINE( 258)					int val2 = ((int)hx::UShr(this1,(int)8) & (int)(int)255);
HXDLIN( 258)					{
HXLINE( 258)						int data2 = data->byteOffset;
HXDLIN( 258)						::__hxcpp_memory_set_byte(data->buffer->b,(data2 + (offset + (int)2)),val2);
            					}
            				}
HXLINE( 259)				{
HXLINE( 259)					int val3 = ((int)this1 & (int)(int)255);
HXDLIN( 259)					{
HXLINE( 259)						int data3 = data->byteOffset;
HXDLIN( 259)						::__hxcpp_memory_set_byte(data->buffer->b,(data3 + (offset + (int)3)),val3);
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 263)				{
HXLINE( 263)					int val4 = ((int)this1 & (int)(int)255);
HXDLIN( 263)					::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val4);
            				}
HXLINE( 264)				{
HXLINE( 264)					int val5 = ((int)hx::UShr(this1,(int)24) & (int)(int)255);
HXDLIN( 264)					{
HXLINE( 264)						int data4 = data->byteOffset;
HXDLIN( 264)						::__hxcpp_memory_set_byte(data->buffer->b,(data4 + (offset + (int)1)),val5);
            					}
            				}
HXLINE( 265)				{
HXLINE( 265)					int val6 = ((int)hx::UShr(this1,(int)16) & (int)(int)255);
HXDLIN( 265)					{
HXLINE( 265)						int data5 = data->byteOffset;
HXDLIN( 265)						::__hxcpp_memory_set_byte(data->buffer->b,(data5 + (offset + (int)2)),val6);
            					}
            				}
HXLINE( 266)				{
HXLINE( 266)					int val7 = ((int)hx::UShr(this1,(int)8) & (int)(int)255);
HXDLIN( 266)					{
HXLINE( 266)						int data6 = data->byteOffset;
HXDLIN( 266)						::__hxcpp_memory_set_byte(data->buffer->b,(data6 + (offset + (int)3)),val7);
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 249)				{
HXLINE( 249)					int val8 = ((int)hx::UShr(this1,(int)8) & (int)(int)255);
HXDLIN( 249)					::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val8);
            				}
HXLINE( 250)				{
HXLINE( 250)					int val9 = ((int)hx::UShr(this1,(int)16) & (int)(int)255);
HXDLIN( 250)					{
HXLINE( 250)						int data7 = data->byteOffset;
HXDLIN( 250)						::__hxcpp_memory_set_byte(data->buffer->b,(data7 + (offset + (int)1)),val9);
            					}
            				}
HXLINE( 251)				{
HXLINE( 251)					int val10 = ((int)hx::UShr(this1,(int)24) & (int)(int)255);
HXDLIN( 251)					{
HXLINE( 251)						int data8 = data->byteOffset;
HXDLIN( 251)						::__hxcpp_memory_set_byte(data->buffer->b,(data8 + (offset + (int)2)),val10);
            					}
            				}
HXLINE( 252)				{
HXLINE( 252)					int val11 = ((int)this1 & (int)(int)255);
HXDLIN( 252)					{
HXLINE( 252)						int data9 = data->byteOffset;
HXDLIN( 252)						::__hxcpp_memory_set_byte(data->buffer->b,(data9 + (offset + (int)3)),val11);
            					}
            				}
            			}
            			break;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(RGBA_Impl__obj,writeUInt8,(void))

int RGBA_Impl__obj::_hx___fromARGB(int argb){
            	HX_STACKFRAME(&_hx_pos_d0d9611196b7dff8_275___fromARGB)
HXDLIN( 275)		int this1 = (int)0;
HXDLIN( 275)		int rgba = this1;
HXDLIN( 275)		rgba = ((int)((int)((int)((int)((int)((int)hx::UShr(argb,(int)16) & (int)(int)255) & (int)(int)255) << (int)(int)24) | (int)((int)((int)((int)hx::UShr(argb,(int)8) & (int)(int)255) & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)argb & (int)(int)255) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)hx::UShr(argb,(int)24) & (int)(int)255) & (int)(int)255));
HXDLIN( 275)		return rgba;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGBA_Impl__obj,_hx___fromARGB,return )

int RGBA_Impl__obj::_hx___fromBGRA(int bgra){
            	HX_STACKFRAME(&_hx_pos_d0d9611196b7dff8_282___fromBGRA)
HXDLIN( 282)		int this1 = (int)0;
HXDLIN( 282)		int rgba = this1;
HXDLIN( 282)		rgba = ((int)((int)((int)((int)((int)((int)hx::UShr(bgra,(int)8) & (int)(int)255) & (int)(int)255) << (int)(int)24) | (int)((int)((int)((int)hx::UShr(bgra,(int)16) & (int)(int)255) & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)hx::UShr(bgra,(int)24) & (int)(int)255) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)bgra & (int)(int)255) & (int)(int)255));
HXDLIN( 282)		return rgba;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGBA_Impl__obj,_hx___fromBGRA,return )

int RGBA_Impl__obj::get_a(int this1){
            	HX_STACKFRAME(&_hx_pos_d0d9611196b7dff8_296_get_a)
HXDLIN( 296)		return ((int)this1 & (int)(int)255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGBA_Impl__obj,get_a,return )

int RGBA_Impl__obj::set_a(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_d0d9611196b7dff8_301_set_a)
HXLINE( 303)		this1 = ((int)((int)((int)((int)((int)((int)hx::UShr(this1,(int)24) & (int)(int)255) & (int)(int)255) << (int)(int)24) | (int)((int)((int)((int)hx::UShr(this1,(int)16) & (int)(int)255) & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)hx::UShr(this1,(int)8) & (int)(int)255) & (int)(int)255) << (int)(int)8)) | (int)((int)value & (int)(int)255));
HXLINE( 304)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RGBA_Impl__obj,set_a,return )

int RGBA_Impl__obj::get_b(int this1){
            	HX_STACKFRAME(&_hx_pos_d0d9611196b7dff8_311_get_b)
HXDLIN( 311)		return ((int)hx::UShr(this1,(int)8) & (int)(int)255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGBA_Impl__obj,get_b,return )

int RGBA_Impl__obj::set_b(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_d0d9611196b7dff8_316_set_b)
HXLINE( 318)		this1 = ((int)((int)((int)((int)((int)((int)hx::UShr(this1,(int)24) & (int)(int)255) & (int)(int)255) << (int)(int)24) | (int)((int)((int)((int)hx::UShr(this1,(int)16) & (int)(int)255) & (int)(int)255) << (int)(int)16)) | (int)((int)((int)value & (int)(int)255) << (int)(int)8)) | (int)((int)((int)this1 & (int)(int)255) & (int)(int)255));
HXLINE( 319)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RGBA_Impl__obj,set_b,return )

int RGBA_Impl__obj::get_g(int this1){
            	HX_STACKFRAME(&_hx_pos_d0d9611196b7dff8_326_get_g)
HXDLIN( 326)		return ((int)hx::UShr(this1,(int)16) & (int)(int)255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGBA_Impl__obj,get_g,return )

int RGBA_Impl__obj::set_g(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_d0d9611196b7dff8_331_set_g)
HXLINE( 333)		this1 = ((int)((int)((int)((int)((int)((int)hx::UShr(this1,(int)24) & (int)(int)255) & (int)(int)255) << (int)(int)24) | (int)((int)((int)value & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)hx::UShr(this1,(int)8) & (int)(int)255) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)this1 & (int)(int)255) & (int)(int)255));
HXLINE( 334)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RGBA_Impl__obj,set_g,return )

int RGBA_Impl__obj::get_r(int this1){
            	HX_STACKFRAME(&_hx_pos_d0d9611196b7dff8_341_get_r)
HXDLIN( 341)		return ((int)hx::UShr(this1,(int)24) & (int)(int)255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RGBA_Impl__obj,get_r,return )

int RGBA_Impl__obj::set_r(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_d0d9611196b7dff8_346_set_r)
HXLINE( 348)		this1 = ((int)((int)((int)((int)((int)value & (int)(int)255) << (int)(int)24) | (int)((int)((int)((int)hx::UShr(this1,(int)16) & (int)(int)255) & (int)(int)255) << (int)(int)16)) | (int)((int)((int)((int)hx::UShr(this1,(int)8) & (int)(int)255) & (int)(int)255) << (int)(int)8)) | (int)((int)((int)this1 & (int)(int)255) & (int)(int)255));
HXLINE( 349)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(RGBA_Impl__obj,set_r,return )


RGBA_Impl__obj::RGBA_Impl__obj()
{
}

bool RGBA_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_a") ) { outValue = get_a_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_a") ) { outValue = set_a_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_b") ) { outValue = get_b_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_b") ) { outValue = set_b_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_g") ) { outValue = get_g_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_g") ) { outValue = set_g_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_r") ) { outValue = get_r_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_r") ) { outValue = set_r_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readUInt8") ) { outValue = readUInt8_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeUInt8") ) { outValue = writeUInt8_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__fromARGB") ) { outValue = _hx___fromARGB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__fromBGRA") ) { outValue = _hx___fromBGRA_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiplyAlpha") ) { outValue = multiplyAlpha_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unmultiplyAlpha") ) { outValue = unmultiplyAlpha_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *RGBA_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo RGBA_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(void *) &RGBA_Impl__obj::_hx___alpha16,HX_HCSTRING("__alpha16","\xa3","\x36","\x64","\x33")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(void *) &RGBA_Impl__obj::_hx___clamp,HX_HCSTRING("__clamp","\xdb","\xcb","\xb6","\xb2")},
	{hx::fsInt,(void *) &RGBA_Impl__obj::a16,HX_HCSTRING("a16","\x86","\xc5","\x49","\x00")},
	{hx::fsFloat,(void *) &RGBA_Impl__obj::unmult,HX_HCSTRING("unmult","\xc9","\x6e","\x3a","\x66")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void RGBA_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RGBA_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RGBA_Impl__obj::_hx___alpha16,"__alpha16");
	HX_MARK_MEMBER_NAME(RGBA_Impl__obj::_hx___clamp,"__clamp");
	HX_MARK_MEMBER_NAME(RGBA_Impl__obj::a16,"a16");
	HX_MARK_MEMBER_NAME(RGBA_Impl__obj::unmult,"unmult");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RGBA_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RGBA_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RGBA_Impl__obj::_hx___alpha16,"__alpha16");
	HX_VISIT_MEMBER_NAME(RGBA_Impl__obj::_hx___clamp,"__clamp");
	HX_VISIT_MEMBER_NAME(RGBA_Impl__obj::a16,"a16");
	HX_VISIT_MEMBER_NAME(RGBA_Impl__obj::unmult,"unmult");
};

#endif

hx::Class RGBA_Impl__obj::__mClass;

static ::String RGBA_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("__alpha16","\xa3","\x36","\x64","\x33"),
	HX_HCSTRING("__clamp","\xdb","\xcb","\xb6","\xb2"),
	HX_HCSTRING("a16","\x86","\xc5","\x49","\x00"),
	HX_HCSTRING("unmult","\xc9","\x6e","\x3a","\x66"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("multiplyAlpha","\x9a","\xf2","\x1c","\x6b"),
	HX_HCSTRING("readUInt8","\x48","\x9c","\x5d","\x5f"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("unmultiplyAlpha","\xa1","\xc8","\x96","\x28"),
	HX_HCSTRING("writeUInt8","\x1f","\x4a","\x38","\x23"),
	HX_HCSTRING("__fromARGB","\xd6","\x6a","\x60","\x41"),
	HX_HCSTRING("__fromBGRA","\x3e","\x52","\x01","\x42"),
	HX_HCSTRING("get_a","\x38","\xa5","\x60","\x91"),
	HX_HCSTRING("set_a","\x44","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_b","\x39","\xa5","\x60","\x91"),
	HX_HCSTRING("set_b","\x45","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_g","\x3e","\xa5","\x60","\x91"),
	HX_HCSTRING("set_g","\x4a","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_r","\x49","\xa5","\x60","\x91"),
	HX_HCSTRING("set_r","\x55","\x9b","\x2f","\x7a"),
	::String(null())
};

void RGBA_Impl__obj::__register()
{
	hx::Object *dummy = new RGBA_Impl__obj;
	RGBA_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.math._RGBA.RGBA_Impl_","\x9c","\x7d","\xb4","\xa6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RGBA_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RGBA_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(RGBA_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< RGBA_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RGBA_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RGBA_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RGBA_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void RGBA_Impl__obj::__boot()
{
}

} // end namespace lime
} // end namespace math
} // end namespace _RGBA
