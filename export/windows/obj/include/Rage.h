// Generated by Haxe 3.4.7
#ifndef INCLUDED_Rage
#define INCLUDED_Rage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Rage)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES Rage_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Rage_obj OBJ_;
		Rage_obj();

	public:
		enum { _hx_ClassId = 0x367d73ad };

		void __construct( ::Dynamic __o_X, ::Dynamic __o_Y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Rage")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"Rage"); }
		static hx::ObjectPtr< Rage_obj > __new( ::Dynamic __o_X, ::Dynamic __o_Y);
		static hx::ObjectPtr< Rage_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic __o_X, ::Dynamic __o_Y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Rage_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Rage","\xad","\x73","\x7d","\x36"); }

		void update(Float elapsed);

};


#endif /* INCLUDED_Rage */ 
