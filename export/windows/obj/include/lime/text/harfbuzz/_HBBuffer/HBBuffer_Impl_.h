// Generated by Haxe 3.4.7
#ifndef INCLUDED_lime_text_harfbuzz__HBBuffer_HBBuffer_Impl_
#define INCLUDED_lime_text_harfbuzz__HBBuffer_HBBuffer_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,text,harfbuzz,HBGlyphInfo)
HX_DECLARE_CLASS3(lime,text,harfbuzz,HBGlyphPosition)
HX_DECLARE_CLASS3(lime,text,harfbuzz,HBSegmentProperties)
HX_DECLARE_CLASS4(lime,text,harfbuzz,_HBBuffer,HBBuffer_Impl_)

namespace lime{
namespace text{
namespace harfbuzz{
namespace _HBBuffer{


class HXCPP_CLASS_ATTRIBUTES HBBuffer_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef HBBuffer_Impl__obj OBJ_;
		HBBuffer_Impl__obj();

	public:
		enum { _hx_ClassId = 0x125679e9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_"); }

		hx::ObjectPtr< HBBuffer_Impl__obj > __new() {
			hx::ObjectPtr< HBBuffer_Impl__obj > __this = new HBBuffer_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< HBBuffer_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			HBBuffer_Impl__obj *__this = (HBBuffer_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HBBuffer_Impl__obj), false, "lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_"));
			*(void **)__this = HBBuffer_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HBBuffer_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("HBBuffer_Impl_","\xba","\xd3","\x3b","\xa1"); }

		static  ::Dynamic _new();
		static ::Dynamic _new_dyn();

		static void add( ::Dynamic this1,int codepoint,int cluster);
		static ::Dynamic add_dyn();

		static void addCodepoints( ::Dynamic this1,Float text,int textLength,int itemOffset,int itemLength);
		static ::Dynamic addCodepoints_dyn();

		static void addUTF8( ::Dynamic this1,::String text,int itemOffset,int itemLength);
		static ::Dynamic addUTF8_dyn();

		static void addUTF16( ::Dynamic this1,Float text,int textLength,int itemOffset,int itemLength);
		static ::Dynamic addUTF16_dyn();

		static void addUTF32( ::Dynamic this1,Float text,int textLength,int itemOffset,int itemLength);
		static ::Dynamic addUTF32_dyn();

		static void clearContents( ::Dynamic this1);
		static ::Dynamic clearContents_dyn();

		static ::Array< ::Dynamic> getGlyphInfo( ::Dynamic this1);
		static ::Dynamic getGlyphInfo_dyn();

		static ::Array< ::Dynamic> getGlyphPositions( ::Dynamic this1);
		static ::Dynamic getGlyphPositions_dyn();

		static void guessSegmentProperties( ::Dynamic this1);
		static ::Dynamic guessSegmentProperties_dyn();

		static void normalizeGlyphs( ::Dynamic this1);
		static ::Dynamic normalizeGlyphs_dyn();

		static bool preallocate( ::Dynamic this1,int size);
		static ::Dynamic preallocate_dyn();

		static void reset( ::Dynamic this1);
		static ::Dynamic reset_dyn();

		static void reverse( ::Dynamic this1);
		static ::Dynamic reverse_dyn();

		static void reverseClusters( ::Dynamic this1);
		static ::Dynamic reverseClusters_dyn();

		static bool get_allocationSuccessful( ::Dynamic this1);
		static ::Dynamic get_allocationSuccessful_dyn();

		static int get_clusterLevel( ::Dynamic this1);
		static ::Dynamic get_clusterLevel_dyn();

		static int set_clusterLevel( ::Dynamic this1,int value);
		static ::Dynamic set_clusterLevel_dyn();

		static int get_contentType( ::Dynamic this1);
		static ::Dynamic get_contentType_dyn();

		static int set_contentType( ::Dynamic this1,int value);
		static ::Dynamic set_contentType_dyn();

		static int get_direction( ::Dynamic this1);
		static ::Dynamic get_direction_dyn();

		static int set_direction( ::Dynamic this1,int value);
		static ::Dynamic set_direction_dyn();

		static  ::Dynamic get_empty();
		static ::Dynamic get_empty_dyn();

		static int get_flags( ::Dynamic this1);
		static ::Dynamic get_flags_dyn();

		static int set_flags( ::Dynamic this1,int value);
		static ::Dynamic set_flags_dyn();

		static  ::Dynamic get_language( ::Dynamic this1);
		static ::Dynamic get_language_dyn();

		static  ::Dynamic set_language( ::Dynamic this1, ::Dynamic value);
		static ::Dynamic set_language_dyn();

		static int get_length( ::Dynamic this1);
		static ::Dynamic get_length_dyn();

		static int set_length( ::Dynamic this1,int value);
		static ::Dynamic set_length_dyn();

		static int get_replacementCodepoint( ::Dynamic this1);
		static ::Dynamic get_replacementCodepoint_dyn();

		static int set_replacementCodepoint( ::Dynamic this1,int value);
		static ::Dynamic set_replacementCodepoint_dyn();

		static int get_script( ::Dynamic this1);
		static ::Dynamic get_script_dyn();

		static int set_script( ::Dynamic this1,int value);
		static ::Dynamic set_script_dyn();

		static  ::lime::text::harfbuzz::HBSegmentProperties get_segmentProperties( ::Dynamic this1);
		static ::Dynamic get_segmentProperties_dyn();

		static  ::lime::text::harfbuzz::HBSegmentProperties set_segmentProperties( ::Dynamic this1, ::lime::text::harfbuzz::HBSegmentProperties value);
		static ::Dynamic set_segmentProperties_dyn();

};

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
} // end namespace _HBBuffer

#endif /* INCLUDED_lime_text_harfbuzz__HBBuffer_HBBuffer_Impl_ */ 
