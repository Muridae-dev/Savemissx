// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_37f1448d22653c94_52_new,"haxe.ds.ObjectMap","new",0x27af5498,"haxe.ds.ObjectMap.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/ObjectMap.hx",52,0xd94cd95e)
HX_LOCAL_STACK_FRAME(_hx_pos_37f1448d22653c94_55_set,"haxe.ds.ObjectMap","set",0x27b31fda,"haxe.ds.ObjectMap.set","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/ObjectMap.hx",55,0xd94cd95e)
HX_LOCAL_STACK_FRAME(_hx_pos_37f1448d22653c94_59_get,"haxe.ds.ObjectMap","get",0x27aa04ce,"haxe.ds.ObjectMap.get","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/ObjectMap.hx",59,0xd94cd95e)
HX_LOCAL_STACK_FRAME(_hx_pos_37f1448d22653c94_63_exists,"haxe.ds.ObjectMap","exists",0xc8930ca4,"haxe.ds.ObjectMap.exists","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/ObjectMap.hx",63,0xd94cd95e)
HX_LOCAL_STACK_FRAME(_hx_pos_37f1448d22653c94_67_remove,"haxe.ds.ObjectMap","remove",0x0d3b8b0c,"haxe.ds.ObjectMap.remove","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/ObjectMap.hx",67,0xd94cd95e)
HX_LOCAL_STACK_FRAME(_hx_pos_37f1448d22653c94_70_keys,"haxe.ds.ObjectMap","keys",0x8fbf0ebc,"haxe.ds.ObjectMap.keys","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/ObjectMap.hx",70,0xd94cd95e)
namespace haxe{
namespace ds{

void ObjectMap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_37f1448d22653c94_52_new)
            	}

Dynamic ObjectMap_obj::__CreateEmpty() { return new ObjectMap_obj; }

void *ObjectMap_obj::_hx_vtable = 0;

Dynamic ObjectMap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ObjectMap_obj > _hx_result = new ObjectMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ObjectMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4a82dae8;
}

static ::haxe::IMap_obj _hx_haxe_ds_ObjectMap__hx_haxe_IMap= {
	(  ::Dynamic (hx::Object::*)( ::Dynamic))&::haxe::ds::ObjectMap_obj::get,
	( void (hx::Object::*)( ::Dynamic, ::Dynamic))&::haxe::ds::ObjectMap_obj::set_41d0cb46,
	( bool (hx::Object::*)( ::Dynamic))&::haxe::ds::ObjectMap_obj::exists,
	( bool (hx::Object::*)( ::Dynamic))&::haxe::ds::ObjectMap_obj::remove,
};

void ObjectMap_obj::set_41d0cb46( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}
void *ObjectMap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_haxe_ds_ObjectMap__hx_haxe_IMap;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void ObjectMap_obj::set( ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_37f1448d22653c94_55_set)
HXDLIN(  55)		::__object_hash_set(this->h,key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectMap_obj,set,(void))

 ::Dynamic ObjectMap_obj::get( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_37f1448d22653c94_59_get)
HXDLIN(  59)		return ::__object_hash_get(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMap_obj,get,return )

bool ObjectMap_obj::exists( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_37f1448d22653c94_63_exists)
HXDLIN(  63)		return ::__object_hash_exists(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMap_obj,exists,return )

bool ObjectMap_obj::remove( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_37f1448d22653c94_67_remove)
HXDLIN(  67)		return ::__object_hash_remove(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMap_obj,remove,return )

 ::Dynamic ObjectMap_obj::keys(){
            	HX_STACKFRAME(&_hx_pos_37f1448d22653c94_70_keys)
HXLINE(  71)		::cpp::VirtualArray a = ::__object_hash_keys(this->h);
HXLINE(  72)		return a->iterator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMap_obj,keys,return )


hx::ObjectPtr< ObjectMap_obj > ObjectMap_obj::__new() {
	hx::ObjectPtr< ObjectMap_obj > __this = new ObjectMap_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ObjectMap_obj > ObjectMap_obj::__alloc(hx::Ctx *_hx_ctx) {
	ObjectMap_obj *__this = (ObjectMap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ObjectMap_obj), true, "haxe.ds.ObjectMap"));
	*(void **)__this = ObjectMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ObjectMap_obj::ObjectMap_obj()
{
}

void ObjectMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectMap);
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_END_CLASS();
}

void ObjectMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(h,"h");
}

hx::Val ObjectMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return hx::Val( h ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return hx::Val( keys_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ObjectMap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ObjectMap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectMap_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ObjectMap_obj_sStaticStorageInfo = 0;
#endif

static ::String ObjectMap_obj_sMemberFields[] = {
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	::String(null()) };

static void ObjectMap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ObjectMap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectMap_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectMap_obj::__mClass;

void ObjectMap_obj::__register()
{
	hx::Object *dummy = new ObjectMap_obj;
	ObjectMap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.ObjectMap","\xa6","\x68","\x9b","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ObjectMap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ObjectMap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectMap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ObjectMap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ObjectMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ObjectMap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
