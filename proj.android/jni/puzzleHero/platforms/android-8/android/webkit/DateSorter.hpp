/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.webkit.DateSorter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_DATESORTER_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_DATESORTER_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class DateSorter;
	class DateSorter
		: public object<DateSorter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)

		explicit DateSorter(jobject jobj)
		: object<DateSorter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		DateSorter(local_ref< android::content::Context > const&);
		jint getIndex(jlong);
		local_ref< java::lang::String > getLabel(jint);
		jlong getBoundary(jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > DAY_COUNT;
	}; //class DateSorter

} //namespace webkit
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_DATESORTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_DATESORTER_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_DATESORTER_HPP_IMPL

namespace j2cpp {



android::webkit::DateSorter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::webkit::DateSorter::DateSorter(local_ref< android::content::Context > const &a0)
: object<android::webkit::DateSorter>(
	call_new_object<
		android::webkit::DateSorter::J2CPP_CLASS_NAME,
		android::webkit::DateSorter::J2CPP_METHOD_NAME(0),
		android::webkit::DateSorter::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


jint android::webkit::DateSorter::getIndex(jlong a0)
{
	return call_method<
		android::webkit::DateSorter::J2CPP_CLASS_NAME,
		android::webkit::DateSorter::J2CPP_METHOD_NAME(1),
		android::webkit::DateSorter::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject(), a0);
}

local_ref< java::lang::String > android::webkit::DateSorter::getLabel(jint a0)
{
	return call_method<
		android::webkit::DateSorter::J2CPP_CLASS_NAME,
		android::webkit::DateSorter::J2CPP_METHOD_NAME(2),
		android::webkit::DateSorter::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject(), a0);
}

jlong android::webkit::DateSorter::getBoundary(jint a0)
{
	return call_method<
		android::webkit::DateSorter::J2CPP_CLASS_NAME,
		android::webkit::DateSorter::J2CPP_METHOD_NAME(3),
		android::webkit::DateSorter::J2CPP_METHOD_SIGNATURE(3), 
		jlong
	>(get_jobject(), a0);
}


static_field<
	android::webkit::DateSorter::J2CPP_CLASS_NAME,
	android::webkit::DateSorter::J2CPP_FIELD_NAME(0),
	android::webkit::DateSorter::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::webkit::DateSorter::DAY_COUNT;


J2CPP_DEFINE_CLASS(android::webkit::DateSorter,"android/webkit/DateSorter")
J2CPP_DEFINE_METHOD(android::webkit::DateSorter,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::webkit::DateSorter,1,"getIndex","(J)I")
J2CPP_DEFINE_METHOD(android::webkit::DateSorter,2,"getLabel","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::webkit::DateSorter,3,"getBoundary","(I)J")
J2CPP_DEFINE_FIELD(android::webkit::DateSorter,0,"DAY_COUNT","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_DATESORTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
