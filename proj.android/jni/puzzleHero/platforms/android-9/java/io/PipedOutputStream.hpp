/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.PipedOutputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_PIPEDOUTPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_IO_PIPEDOUTPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }
namespace j2cpp { namespace java { namespace io { class PipedInputStream; } } }
namespace j2cpp { namespace java { namespace io { class Flushable; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }


#include <java/io/Closeable.hpp>
#include <java/io/Flushable.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/PipedInputStream.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace io {

	class PipedOutputStream;
	class PipedOutputStream
		: public object<PipedOutputStream>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)

		explicit PipedOutputStream(jobject jobj)
		: object<PipedOutputStream>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Closeable>() const;
		operator local_ref<java::io::Flushable>() const;
		operator local_ref<java::io::OutputStream>() const;


		PipedOutputStream();
		PipedOutputStream(local_ref< java::io::PipedInputStream > const&);
		void close();
		void connect(local_ref< java::io::PipedInputStream >  const&);
		void flush();
		void write(local_ref< array<jbyte,1> >  const&, jint, jint);
		void write(jint);
	}; //class PipedOutputStream

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_PIPEDOUTPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_PIPEDOUTPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_IO_PIPEDOUTPUTSTREAM_HPP_IMPL

namespace j2cpp {



java::io::PipedOutputStream::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::io::PipedOutputStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}

java::io::PipedOutputStream::operator local_ref<java::io::Flushable>() const
{
	return local_ref<java::io::Flushable>(get_jobject());
}

java::io::PipedOutputStream::operator local_ref<java::io::OutputStream>() const
{
	return local_ref<java::io::OutputStream>(get_jobject());
}


java::io::PipedOutputStream::PipedOutputStream()
: object<java::io::PipedOutputStream>(
	call_new_object<
		java::io::PipedOutputStream::J2CPP_CLASS_NAME,
		java::io::PipedOutputStream::J2CPP_METHOD_NAME(0),
		java::io::PipedOutputStream::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::io::PipedOutputStream::PipedOutputStream(local_ref< java::io::PipedInputStream > const &a0)
: object<java::io::PipedOutputStream>(
	call_new_object<
		java::io::PipedOutputStream::J2CPP_CLASS_NAME,
		java::io::PipedOutputStream::J2CPP_METHOD_NAME(1),
		java::io::PipedOutputStream::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


void java::io::PipedOutputStream::close()
{
	return call_method<
		java::io::PipedOutputStream::J2CPP_CLASS_NAME,
		java::io::PipedOutputStream::J2CPP_METHOD_NAME(2),
		java::io::PipedOutputStream::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

void java::io::PipedOutputStream::connect(local_ref< java::io::PipedInputStream > const &a0)
{
	return call_method<
		java::io::PipedOutputStream::J2CPP_CLASS_NAME,
		java::io::PipedOutputStream::J2CPP_METHOD_NAME(3),
		java::io::PipedOutputStream::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void java::io::PipedOutputStream::flush()
{
	return call_method<
		java::io::PipedOutputStream::J2CPP_CLASS_NAME,
		java::io::PipedOutputStream::J2CPP_METHOD_NAME(4),
		java::io::PipedOutputStream::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}

void java::io::PipedOutputStream::write(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::PipedOutputStream::J2CPP_CLASS_NAME,
		java::io::PipedOutputStream::J2CPP_METHOD_NAME(5),
		java::io::PipedOutputStream::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::io::PipedOutputStream::write(jint a0)
{
	return call_method<
		java::io::PipedOutputStream::J2CPP_CLASS_NAME,
		java::io::PipedOutputStream::J2CPP_METHOD_NAME(6),
		java::io::PipedOutputStream::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::io::PipedOutputStream,"java/io/PipedOutputStream")
J2CPP_DEFINE_METHOD(java::io::PipedOutputStream,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::io::PipedOutputStream,1,"<init>","(Ljava/io/PipedInputStream;)V")
J2CPP_DEFINE_METHOD(java::io::PipedOutputStream,2,"close","()V")
J2CPP_DEFINE_METHOD(java::io::PipedOutputStream,3,"connect","(Ljava/io/PipedInputStream;)V")
J2CPP_DEFINE_METHOD(java::io::PipedOutputStream,4,"flush","()V")
J2CPP_DEFINE_METHOD(java::io::PipedOutputStream,5,"write","([BII)V")
J2CPP_DEFINE_METHOD(java::io::PipedOutputStream,6,"write","(I)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_PIPEDOUTPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
