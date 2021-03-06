// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxPrerotatedAnimation
#include <flixel/animation/FlxPrerotatedAnimation.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2fc827bb1ad10643_7_new,"flixel.animation.FlxPrerotatedAnimation","new",0x6966b47a,"flixel.animation.FlxPrerotatedAnimation.new","flixel/animation/FlxPrerotatedAnimation.hx",7,0x4a5f70b4)
HX_LOCAL_STACK_FRAME(_hx_pos_2fc827bb1ad10643_25_set_angle,"flixel.animation.FlxPrerotatedAnimation","set_angle",0x23607fd0,"flixel.animation.FlxPrerotatedAnimation.set_angle","flixel/animation/FlxPrerotatedAnimation.hx",25,0x4a5f70b4)
HX_LOCAL_STACK_FRAME(_hx_pos_2fc827bb1ad10643_48_set_curIndex,"flixel.animation.FlxPrerotatedAnimation","set_curIndex",0x8ed63595,"flixel.animation.FlxPrerotatedAnimation.set_curIndex","flixel/animation/FlxPrerotatedAnimation.hx",48,0x4a5f70b4)
HX_LOCAL_STACK_FRAME(_hx_pos_2fc827bb1ad10643_61_clone,"flixel.animation.FlxPrerotatedAnimation","clone",0x470ab1f7,"flixel.animation.FlxPrerotatedAnimation.clone","flixel/animation/FlxPrerotatedAnimation.hx",61,0x4a5f70b4)
HX_LOCAL_STACK_FRAME(_hx_pos_2fc827bb1ad10643_9_boot,"flixel.animation.FlxPrerotatedAnimation","boot",0xc89036d8,"flixel.animation.FlxPrerotatedAnimation.boot","flixel/animation/FlxPrerotatedAnimation.hx",9,0x4a5f70b4)
namespace flixel{
namespace animation{

void FlxPrerotatedAnimation_obj::__construct( ::flixel::animation::FlxAnimationController Parent,Float Baked){
            	HX_STACKFRAME(&_hx_pos_2fc827bb1ad10643_7_new)
HXLINE(  22)		this->angle = ((Float)0);
HXLINE(  17)		super::__construct(Parent,HX_("prerotated_animation",2b,0a,e7,ca));
HXLINE(  18)		this->baked = Baked;
HXLINE(  19)		this->rotations = ::Math_obj::round(((Float)(int)360 / (Float)Baked));
            	}

Dynamic FlxPrerotatedAnimation_obj::__CreateEmpty() { return new FlxPrerotatedAnimation_obj; }

void *FlxPrerotatedAnimation_obj::_hx_vtable = 0;

Dynamic FlxPrerotatedAnimation_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxPrerotatedAnimation_obj > _hx_result = new FlxPrerotatedAnimation_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxPrerotatedAnimation_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x53945929) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x53945929;
	} else {
		return inClassId==(int)0x76889a50;
	}
}

Float FlxPrerotatedAnimation_obj::set_angle(Float Value){
            	HX_STACKFRAME(&_hx_pos_2fc827bb1ad10643_25_set_angle)
HXLINE(  26)		if (::Math_obj::isNaN(Value)) {
HXLINE(  27)			HX_STACK_DO_THROW(HX_("angle must not be NaN",95,f5,3b,70));
            		}
HXLINE(  29)		int oldIndex = this->curIndex;
HXLINE(  30)		int angleHelper = ::Math_obj::floor(hx::Mod(Value,(int)360));
HXLINE(  32)		while((angleHelper < (int)0)){
HXLINE(  34)			angleHelper = (angleHelper + (int)360);
            		}
HXLINE(  37)		int newIndex = ::Math_obj::floor((((Float)angleHelper / (Float)this->baked) + ((Float)0.5)));
HXLINE(  38)		newIndex = ::Std_obj::_hx_int(hx::Mod(newIndex,this->rotations));
HXLINE(  39)		if ((oldIndex != newIndex)) {
HXLINE(  41)			this->set_curIndex(newIndex);
            		}
HXLINE(  44)		return (this->angle = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxPrerotatedAnimation_obj,set_angle,return )

int FlxPrerotatedAnimation_obj::set_curIndex(int Value){
            	HX_STACKFRAME(&_hx_pos_2fc827bb1ad10643_48_set_curIndex)
HXLINE(  49)		this->curIndex = Value;
HXLINE(  51)		if (hx::IsNotNull( this->parent )) {
HXLINE(  53)			this->parent->set_frameIndex(Value);
            		}
HXLINE(  56)		return Value;
            	}


 ::flixel::animation::FlxBaseAnimation FlxPrerotatedAnimation_obj::clone( ::flixel::animation::FlxAnimationController Parent){
            	HX_GC_STACKFRAME(&_hx_pos_2fc827bb1ad10643_61_clone)
HXDLIN(  61)		return  ::flixel::animation::FlxPrerotatedAnimation_obj::__alloc( HX_CTX ,Parent,this->baked);
            	}


::String FlxPrerotatedAnimation_obj::PREROTATED;


hx::ObjectPtr< FlxPrerotatedAnimation_obj > FlxPrerotatedAnimation_obj::__new( ::flixel::animation::FlxAnimationController Parent,Float Baked) {
	hx::ObjectPtr< FlxPrerotatedAnimation_obj > __this = new FlxPrerotatedAnimation_obj();
	__this->__construct(Parent,Baked);
	return __this;
}

hx::ObjectPtr< FlxPrerotatedAnimation_obj > FlxPrerotatedAnimation_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::animation::FlxAnimationController Parent,Float Baked) {
	FlxPrerotatedAnimation_obj *__this = (FlxPrerotatedAnimation_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxPrerotatedAnimation_obj), true, "flixel.animation.FlxPrerotatedAnimation"));
	*(void **)__this = FlxPrerotatedAnimation_obj::_hx_vtable;
	__this->__construct(Parent,Baked);
	return __this;
}

FlxPrerotatedAnimation_obj::FlxPrerotatedAnimation_obj()
{
}

hx::Val FlxPrerotatedAnimation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"baked") ) { return hx::Val( baked ); }
		if (HX_FIELD_EQ(inName,"angle") ) { return hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rotations") ) { return hx::Val( rotations ); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return hx::Val( set_angle_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_curIndex") ) { return hx::Val( set_curIndex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxPrerotatedAnimation_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"baked") ) { baked=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_angle(inValue.Cast< Float >()) );angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rotations") ) { rotations=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPrerotatedAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("rotations","\x75","\x59","\xef","\x6c"));
	outFields->push(HX_HCSTRING("baked","\x2b","\x15","\xb4","\xad"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxPrerotatedAnimation_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxPrerotatedAnimation_obj,rotations),HX_HCSTRING("rotations","\x75","\x59","\xef","\x6c")},
	{hx::fsFloat,(int)offsetof(FlxPrerotatedAnimation_obj,baked),HX_HCSTRING("baked","\x2b","\x15","\xb4","\xad")},
	{hx::fsFloat,(int)offsetof(FlxPrerotatedAnimation_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo FlxPrerotatedAnimation_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FlxPrerotatedAnimation_obj::PREROTATED,HX_HCSTRING("PREROTATED","\xe6","\xf7","\x22","\x84")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxPrerotatedAnimation_obj_sMemberFields[] = {
	HX_HCSTRING("rotations","\x75","\x59","\xef","\x6c"),
	HX_HCSTRING("baked","\x2b","\x15","\xb4","\xad"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"),
	HX_HCSTRING("set_curIndex","\xef","\x6c","\xd5","\xcf"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void FlxPrerotatedAnimation_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPrerotatedAnimation_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxPrerotatedAnimation_obj::PREROTATED,"PREROTATED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxPrerotatedAnimation_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPrerotatedAnimation_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxPrerotatedAnimation_obj::PREROTATED,"PREROTATED");
};

#endif

hx::Class FlxPrerotatedAnimation_obj::__mClass;

static ::String FlxPrerotatedAnimation_obj_sStaticFields[] = {
	HX_HCSTRING("PREROTATED","\xe6","\xf7","\x22","\x84"),
	::String(null())
};

void FlxPrerotatedAnimation_obj::__register()
{
	hx::Object *dummy = new FlxPrerotatedAnimation_obj;
	FlxPrerotatedAnimation_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.animation.FlxPrerotatedAnimation","\x88","\xaf","\xa8","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxPrerotatedAnimation_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxPrerotatedAnimation_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxPrerotatedAnimation_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxPrerotatedAnimation_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxPrerotatedAnimation_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxPrerotatedAnimation_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxPrerotatedAnimation_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxPrerotatedAnimation_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2fc827bb1ad10643_9_boot)
HXDLIN(   9)		PREROTATED = HX_("prerotated_animation",2b,0a,e7,ca);
            	}
}

} // end namespace flixel
} // end namespace animation
