// Generated by Haxe 3.4.7
#ifndef INCLUDED_GameOverState
#define INCLUDED_GameOverState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(GameOverState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES GameOverState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef GameOverState_obj OBJ_;
		GameOverState_obj();

	public:
		enum { _hx_ClassId = 0x08626ddf };

		void __construct(int Score);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="GameOverState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"GameOverState"); }
		static hx::ObjectPtr< GameOverState_obj > __new(int Score);
		static hx::ObjectPtr< GameOverState_obj > __alloc(hx::Ctx *_hx_ctx,int Score);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameOverState_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GameOverState","\xab","\x31","\xa0","\x87"); }

		int _score;
		 ::flixel::text::FlxText _txtTitle;
		 ::flixel::text::FlxText _txtMessage;
		 ::flixel::FlxSprite _sprScore;
		 ::flixel::text::FlxText _txtScore;
		 ::flixel::text::FlxText _txtHiScore;
		 ::flixel::ui::FlxButton _btnMainMenu;
		void create();

		int checkHiScore(int Score);
		::Dynamic checkHiScore_dyn();

		void goMainMenu();
		::Dynamic goMainMenu_dyn();

};


#endif /* INCLUDED_GameOverState */ 