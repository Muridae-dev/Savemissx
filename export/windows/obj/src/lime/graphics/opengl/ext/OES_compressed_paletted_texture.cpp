// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_compressed_paletted_texture
#include <lime/graphics/opengl/ext/OES_compressed_paletted_texture.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_169dd139fd8d75fb_6_new,"lime.graphics.opengl.ext.OES_compressed_paletted_texture","new",0x4e71e5b1,"lime.graphics.opengl.ext.OES_compressed_paletted_texture.new","lime/graphics/opengl/ext/OES_compressed_paletted_texture.hx",6,0x52203801)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_compressed_paletted_texture_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_169dd139fd8d75fb_6_new)
HXLINE(  18)		this->PALETTE8_RGB5_A1_OES = (int)35737;
HXLINE(  17)		this->PALETTE8_RGBA4_OES = (int)35736;
HXLINE(  16)		this->PALETTE8_R5_G6_B5_OES = (int)35735;
HXLINE(  15)		this->PALETTE8_RGBA8_OES = (int)35734;
HXLINE(  14)		this->PALETTE8_RGB8_OES = (int)35733;
HXLINE(  13)		this->PALETTE4_RGB5_A1_OES = (int)35732;
HXLINE(  12)		this->PALETTE4_RGBA4_OES = (int)35731;
HXLINE(  11)		this->PALETTE4_R5_G6_B5_OES = (int)35730;
HXLINE(  10)		this->PALETTE4_RGBA8_OES = (int)35729;
HXLINE(   9)		this->PALETTE4_RGB8_OES = (int)35728;
            	}

Dynamic OES_compressed_paletted_texture_obj::__CreateEmpty() { return new OES_compressed_paletted_texture_obj; }

void *OES_compressed_paletted_texture_obj::_hx_vtable = 0;

Dynamic OES_compressed_paletted_texture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OES_compressed_paletted_texture_obj > _hx_result = new OES_compressed_paletted_texture_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_compressed_paletted_texture_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7c63e92f;
}


OES_compressed_paletted_texture_obj::OES_compressed_paletted_texture_obj()
{
}

hx::Val OES_compressed_paletted_texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"PALETTE4_RGB8_OES") ) { return hx::Val( PALETTE4_RGB8_OES ); }
		if (HX_FIELD_EQ(inName,"PALETTE8_RGB8_OES") ) { return hx::Val( PALETTE8_RGB8_OES ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"PALETTE4_RGBA8_OES") ) { return hx::Val( PALETTE4_RGBA8_OES ); }
		if (HX_FIELD_EQ(inName,"PALETTE4_RGBA4_OES") ) { return hx::Val( PALETTE4_RGBA4_OES ); }
		if (HX_FIELD_EQ(inName,"PALETTE8_RGBA8_OES") ) { return hx::Val( PALETTE8_RGBA8_OES ); }
		if (HX_FIELD_EQ(inName,"PALETTE8_RGBA4_OES") ) { return hx::Val( PALETTE8_RGBA4_OES ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"PALETTE4_RGB5_A1_OES") ) { return hx::Val( PALETTE4_RGB5_A1_OES ); }
		if (HX_FIELD_EQ(inName,"PALETTE8_RGB5_A1_OES") ) { return hx::Val( PALETTE8_RGB5_A1_OES ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"PALETTE4_R5_G6_B5_OES") ) { return hx::Val( PALETTE4_R5_G6_B5_OES ); }
		if (HX_FIELD_EQ(inName,"PALETTE8_R5_G6_B5_OES") ) { return hx::Val( PALETTE8_R5_G6_B5_OES ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val OES_compressed_paletted_texture_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"PALETTE4_RGB8_OES") ) { PALETTE4_RGB8_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PALETTE8_RGB8_OES") ) { PALETTE8_RGB8_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"PALETTE4_RGBA8_OES") ) { PALETTE4_RGBA8_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PALETTE4_RGBA4_OES") ) { PALETTE4_RGBA4_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PALETTE8_RGBA8_OES") ) { PALETTE8_RGBA8_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PALETTE8_RGBA4_OES") ) { PALETTE8_RGBA4_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"PALETTE4_RGB5_A1_OES") ) { PALETTE4_RGB5_A1_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PALETTE8_RGB5_A1_OES") ) { PALETTE8_RGB5_A1_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"PALETTE4_R5_G6_B5_OES") ) { PALETTE4_R5_G6_B5_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PALETTE8_R5_G6_B5_OES") ) { PALETTE8_R5_G6_B5_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_compressed_paletted_texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("PALETTE4_RGB8_OES","\x6f","\x94","\x1b","\x77"));
	outFields->push(HX_HCSTRING("PALETTE4_RGBA8_OES","\xfc","\xe0","\x36","\xf0"));
	outFields->push(HX_HCSTRING("PALETTE4_R5_G6_B5_OES","\x0b","\x45","\x14","\x23"));
	outFields->push(HX_HCSTRING("PALETTE4_RGBA4_OES","\xf8","\x8e","\x9c","\xa2"));
	outFields->push(HX_HCSTRING("PALETTE4_RGB5_A1_OES","\x3f","\x5b","\x48","\x08"));
	outFields->push(HX_HCSTRING("PALETTE8_RGB8_OES","\xeb","\x73","\x45","\x78"));
	outFields->push(HX_HCSTRING("PALETTE8_RGBA8_OES","\x00","\x8e","\xb0","\xf3"));
	outFields->push(HX_HCSTRING("PALETTE8_R5_G6_B5_OES","\x87","\x92","\xc9","\x2d"));
	outFields->push(HX_HCSTRING("PALETTE8_RGBA4_OES","\xfc","\x3b","\x16","\xa6"));
	outFields->push(HX_HCSTRING("PALETTE8_RGB5_A1_OES","\x43","\x51","\x4a","\x1f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo OES_compressed_paletted_texture_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE4_RGB8_OES),HX_HCSTRING("PALETTE4_RGB8_OES","\x6f","\x94","\x1b","\x77")},
	{hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE4_RGBA8_OES),HX_HCSTRING("PALETTE4_RGBA8_OES","\xfc","\xe0","\x36","\xf0")},
	{hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE4_R5_G6_B5_OES),HX_HCSTRING("PALETTE4_R5_G6_B5_OES","\x0b","\x45","\x14","\x23")},
	{hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE4_RGBA4_OES),HX_HCSTRING("PALETTE4_RGBA4_OES","\xf8","\x8e","\x9c","\xa2")},
	{hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE4_RGB5_A1_OES),HX_HCSTRING("PALETTE4_RGB5_A1_OES","\x3f","\x5b","\x48","\x08")},
	{hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE8_RGB8_OES),HX_HCSTRING("PALETTE8_RGB8_OES","\xeb","\x73","\x45","\x78")},
	{hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE8_RGBA8_OES),HX_HCSTRING("PALETTE8_RGBA8_OES","\x00","\x8e","\xb0","\xf3")},
	{hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE8_R5_G6_B5_OES),HX_HCSTRING("PALETTE8_R5_G6_B5_OES","\x87","\x92","\xc9","\x2d")},
	{hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE8_RGBA4_OES),HX_HCSTRING("PALETTE8_RGBA4_OES","\xfc","\x3b","\x16","\xa6")},
	{hx::fsInt,(int)offsetof(OES_compressed_paletted_texture_obj,PALETTE8_RGB5_A1_OES),HX_HCSTRING("PALETTE8_RGB5_A1_OES","\x43","\x51","\x4a","\x1f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *OES_compressed_paletted_texture_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_compressed_paletted_texture_obj_sMemberFields[] = {
	HX_HCSTRING("PALETTE4_RGB8_OES","\x6f","\x94","\x1b","\x77"),
	HX_HCSTRING("PALETTE4_RGBA8_OES","\xfc","\xe0","\x36","\xf0"),
	HX_HCSTRING("PALETTE4_R5_G6_B5_OES","\x0b","\x45","\x14","\x23"),
	HX_HCSTRING("PALETTE4_RGBA4_OES","\xf8","\x8e","\x9c","\xa2"),
	HX_HCSTRING("PALETTE4_RGB5_A1_OES","\x3f","\x5b","\x48","\x08"),
	HX_HCSTRING("PALETTE8_RGB8_OES","\xeb","\x73","\x45","\x78"),
	HX_HCSTRING("PALETTE8_RGBA8_OES","\x00","\x8e","\xb0","\xf3"),
	HX_HCSTRING("PALETTE8_R5_G6_B5_OES","\x87","\x92","\xc9","\x2d"),
	HX_HCSTRING("PALETTE8_RGBA4_OES","\xfc","\x3b","\x16","\xa6"),
	HX_HCSTRING("PALETTE8_RGB5_A1_OES","\x43","\x51","\x4a","\x1f"),
	::String(null()) };

static void OES_compressed_paletted_texture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_compressed_paletted_texture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OES_compressed_paletted_texture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_compressed_paletted_texture_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_compressed_paletted_texture_obj::__mClass;

void OES_compressed_paletted_texture_obj::__register()
{
	hx::Object *dummy = new OES_compressed_paletted_texture_obj;
	OES_compressed_paletted_texture_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_compressed_paletted_texture","\x3f","\x39","\xe7","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = OES_compressed_paletted_texture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(OES_compressed_paletted_texture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_compressed_paletted_texture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OES_compressed_paletted_texture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_compressed_paletted_texture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_compressed_paletted_texture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
