// Generated by Haxe 3.4.7
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_type_2_10_10_10_REV
#define INCLUDED_lime_graphics_opengl_ext_EXT_texture_type_2_10_10_10_REV

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d9ba4fd59f8a4b9b_9_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_texture_type_2_10_10_10_REV)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_texture_type_2_10_10_10_REV_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef EXT_texture_type_2_10_10_10_REV_obj OBJ_;
		EXT_texture_type_2_10_10_10_REV_obj();

	public:
		enum { _hx_ClassId = 0x6d989885 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_texture_type_2_10_10_10_REV")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_texture_type_2_10_10_10_REV"); }

		hx::ObjectPtr< EXT_texture_type_2_10_10_10_REV_obj > __new() {
			hx::ObjectPtr< EXT_texture_type_2_10_10_10_REV_obj > __this = new EXT_texture_type_2_10_10_10_REV_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< EXT_texture_type_2_10_10_10_REV_obj > __alloc(hx::Ctx *_hx_ctx) {
			EXT_texture_type_2_10_10_10_REV_obj *__this = (EXT_texture_type_2_10_10_10_REV_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(EXT_texture_type_2_10_10_10_REV_obj), false, "lime.graphics.opengl.ext.EXT_texture_type_2_10_10_10_REV"));
			*(void **)__this = EXT_texture_type_2_10_10_10_REV_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d9ba4fd59f8a4b9b_9_new)
HXDLIN(   9)		( ( ::lime::graphics::opengl::ext::EXT_texture_type_2_10_10_10_REV)(__this) )->UNSIGNED_INT_2_10_10_10_REV_EXT = (int)33640;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EXT_texture_type_2_10_10_10_REV_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("EXT_texture_type_2_10_10_10_REV","\x93","\x7e","\x34","\xb8"); }

		int UNSIGNED_INT_2_10_10_10_REV_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_texture_type_2_10_10_10_REV */ 
