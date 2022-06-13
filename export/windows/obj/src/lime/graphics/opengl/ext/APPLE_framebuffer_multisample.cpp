// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_framebuffer_multisample
#include <lime/graphics/opengl/ext/APPLE_framebuffer_multisample.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0dc663a6fc7d5e27_6_new,"lime.graphics.opengl.ext.APPLE_framebuffer_multisample","new",0x083f8a9c,"lime.graphics.opengl.ext.APPLE_framebuffer_multisample.new","lime/graphics/opengl/ext/APPLE_framebuffer_multisample.hx",6,0x7558ecf6)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void APPLE_framebuffer_multisample_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0dc663a6fc7d5e27_6_new)
HXLINE(  15)		this->READ_FRAMEBUFFER_BINDING_APPLE = (int)36010;
HXLINE(  14)		this->DRAW_FRAMEBUFFER_BINDING_APPLE = (int)36006;
HXLINE(  13)		this->DRAW_FRAMEBUFFER_APPLE = (int)36009;
HXLINE(  12)		this->READ_FRAMEBUFFER_APPLE = (int)36008;
HXLINE(  11)		this->MAX_SAMPLES_APPLE = (int)36183;
HXLINE(  10)		this->FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE = (int)36182;
HXLINE(   9)		this->RENDERBUFFER_SAMPLES_APPLE = (int)36011;
            	}

Dynamic APPLE_framebuffer_multisample_obj::__CreateEmpty() { return new APPLE_framebuffer_multisample_obj; }

void *APPLE_framebuffer_multisample_obj::_hx_vtable = 0;

Dynamic APPLE_framebuffer_multisample_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< APPLE_framebuffer_multisample_obj > _hx_result = new APPLE_framebuffer_multisample_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool APPLE_framebuffer_multisample_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x756f1b62;
}


APPLE_framebuffer_multisample_obj::APPLE_framebuffer_multisample_obj()
{
}

hx::Val APPLE_framebuffer_multisample_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_APPLE") ) { return hx::Val( MAX_SAMPLES_APPLE ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_APPLE") ) { return hx::Val( READ_FRAMEBUFFER_APPLE ); }
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_APPLE") ) { return hx::Val( DRAW_FRAMEBUFFER_APPLE ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_APPLE") ) { return hx::Val( RENDERBUFFER_SAMPLES_APPLE ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_BINDING_APPLE") ) { return hx::Val( DRAW_FRAMEBUFFER_BINDING_APPLE ); }
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_BINDING_APPLE") ) { return hx::Val( READ_FRAMEBUFFER_BINDING_APPLE ); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE") ) { return hx::Val( FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val APPLE_framebuffer_multisample_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_APPLE") ) { MAX_SAMPLES_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_APPLE") ) { READ_FRAMEBUFFER_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_APPLE") ) { DRAW_FRAMEBUFFER_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_APPLE") ) { RENDERBUFFER_SAMPLES_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_BINDING_APPLE") ) { DRAW_FRAMEBUFFER_BINDING_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_BINDING_APPLE") ) { READ_FRAMEBUFFER_BINDING_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE") ) { FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void APPLE_framebuffer_multisample_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("RENDERBUFFER_SAMPLES_APPLE","\xbb","\xd1","\x9e","\x08"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE","\xcf","\xcb","\x0a","\xc6"));
	outFields->push(HX_HCSTRING("MAX_SAMPLES_APPLE","\xe9","\x27","\x5b","\xb8"));
	outFields->push(HX_HCSTRING("READ_FRAMEBUFFER_APPLE","\x9f","\x82","\x80","\x93"));
	outFields->push(HX_HCSTRING("DRAW_FRAMEBUFFER_APPLE","\xcd","\x26","\xe5","\xbc"));
	outFields->push(HX_HCSTRING("DRAW_FRAMEBUFFER_BINDING_APPLE","\xf3","\x81","\xe9","\xbf"));
	outFields->push(HX_HCSTRING("READ_FRAMEBUFFER_BINDING_APPLE","\xc5","\xff","\xdf","\x03"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo APPLE_framebuffer_multisample_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,RENDERBUFFER_SAMPLES_APPLE),HX_HCSTRING("RENDERBUFFER_SAMPLES_APPLE","\xbb","\xd1","\x9e","\x08")},
	{hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE),HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE","\xcf","\xcb","\x0a","\xc6")},
	{hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,MAX_SAMPLES_APPLE),HX_HCSTRING("MAX_SAMPLES_APPLE","\xe9","\x27","\x5b","\xb8")},
	{hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,READ_FRAMEBUFFER_APPLE),HX_HCSTRING("READ_FRAMEBUFFER_APPLE","\x9f","\x82","\x80","\x93")},
	{hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,DRAW_FRAMEBUFFER_APPLE),HX_HCSTRING("DRAW_FRAMEBUFFER_APPLE","\xcd","\x26","\xe5","\xbc")},
	{hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,DRAW_FRAMEBUFFER_BINDING_APPLE),HX_HCSTRING("DRAW_FRAMEBUFFER_BINDING_APPLE","\xf3","\x81","\xe9","\xbf")},
	{hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,READ_FRAMEBUFFER_BINDING_APPLE),HX_HCSTRING("READ_FRAMEBUFFER_BINDING_APPLE","\xc5","\xff","\xdf","\x03")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *APPLE_framebuffer_multisample_obj_sStaticStorageInfo = 0;
#endif

static ::String APPLE_framebuffer_multisample_obj_sMemberFields[] = {
	HX_HCSTRING("RENDERBUFFER_SAMPLES_APPLE","\xbb","\xd1","\x9e","\x08"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE","\xcf","\xcb","\x0a","\xc6"),
	HX_HCSTRING("MAX_SAMPLES_APPLE","\xe9","\x27","\x5b","\xb8"),
	HX_HCSTRING("READ_FRAMEBUFFER_APPLE","\x9f","\x82","\x80","\x93"),
	HX_HCSTRING("DRAW_FRAMEBUFFER_APPLE","\xcd","\x26","\xe5","\xbc"),
	HX_HCSTRING("DRAW_FRAMEBUFFER_BINDING_APPLE","\xf3","\x81","\xe9","\xbf"),
	HX_HCSTRING("READ_FRAMEBUFFER_BINDING_APPLE","\xc5","\xff","\xdf","\x03"),
	::String(null()) };

static void APPLE_framebuffer_multisample_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(APPLE_framebuffer_multisample_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void APPLE_framebuffer_multisample_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(APPLE_framebuffer_multisample_obj::__mClass,"__mClass");
};

#endif

hx::Class APPLE_framebuffer_multisample_obj::__mClass;

void APPLE_framebuffer_multisample_obj::__register()
{
	hx::Object *dummy = new APPLE_framebuffer_multisample_obj;
	APPLE_framebuffer_multisample_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.APPLE_framebuffer_multisample","\xaa","\x4c","\xcf","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = APPLE_framebuffer_multisample_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(APPLE_framebuffer_multisample_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< APPLE_framebuffer_multisample_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = APPLE_framebuffer_multisample_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = APPLE_framebuffer_multisample_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = APPLE_framebuffer_multisample_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
