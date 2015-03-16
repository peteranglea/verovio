/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.5
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA


#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include <string>


    #include "../include/vrv/toolkit.h"
    
    using namespace vrv;
    using namespace std;


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jint JNICALL Java_org_rism_verovio_verovioJNI_meiFile_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  vrv::_file_formats result;
  
  (void)jenv;
  (void)jcls;
  result = (vrv::_file_formats)vrv::mei_file;
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_rism_verovio_verovioJNI_new_1toolkit_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jboolean jarg1) {
  jlong jresult = 0 ;
  bool arg1 ;
  vrv::Toolkit *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1 ? true : false; 
  result = (vrv::Toolkit *)new vrv::Toolkit(arg1);
  *(vrv::Toolkit **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_org_rism_verovio_verovioJNI_new_1toolkit_1_1SWIG_11(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  vrv::Toolkit *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (vrv::Toolkit *)new vrv::Toolkit();
  *(vrv::Toolkit **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_rism_verovio_verovioJNI_delete_1toolkit(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jboolean JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1loadFile(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jboolean jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  std::string *arg2 = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  result = (bool)(arg1)->LoadFile((std::string const &)*arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1loadString(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jboolean jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  std::string *arg2 = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  result = (bool)(arg1)->LoadString((std::string const &)*arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1saveFile(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jboolean jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  std::string *arg2 = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  result = (bool)(arg1)->SaveFile((std::string const &)*arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1edit(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jboolean jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  std::string *arg2 = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  result = (bool)(arg1)->Edit((std::string const &)*arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1renderToSvg_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jboolean jarg3) {
  jstring jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int arg2 ;
  bool arg3 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = jarg3 ? true : false; 
  result = (arg1)->RenderToSvg(arg2,arg3);
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1renderToSvg_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jstring jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int arg2 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (arg1)->RenderToSvg(arg2);
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1renderToSvg_1_1SWIG_12(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  result = (arg1)->RenderToSvg();
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1renderToSvgFile_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jint jarg3) {
  jboolean jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  std::string *arg2 = 0 ;
  int arg3 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  arg3 = (int)jarg3; 
  result = (bool)(arg1)->RenderToSvgFile((std::string const &)*arg2,arg3);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1renderToSvgFile_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jboolean jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  std::string *arg2 = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  result = (bool)(arg1)->RenderToSvgFile((std::string const &)*arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1getMEI_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jstring jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int arg2 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (arg1)->GetMEI(arg2);
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1getMEI_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  result = (arg1)->GetMEI();
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1getElementAttr(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jstring jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  std::string *arg2 = 0 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  result = (arg1)->GetElementAttr((std::string const &)*arg2);
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1redoLayout(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  (arg1)->RedoLayout();
}


SWIGEXPORT jint JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1getPageWithElement(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jint jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  std::string *arg2 = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  result = (int)(arg1)->GetPageWithElement((std::string const &)*arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1setBorder(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jboolean jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (bool)(arg1)->SetBorder(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1getBorder(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  result = (int)(arg1)->GetBorder();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1setScale(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jboolean jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (bool)(arg1)->SetScale(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1getScale(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  result = (int)(arg1)->GetScale();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1setPageHeight(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jboolean jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (bool)(arg1)->SetPageHeight(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1getPageHeight(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  result = (int)(arg1)->GetPageHeight();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1setPageWidth(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jboolean jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (bool)(arg1)->SetPageWidth(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1getPageWidth(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  result = (int)(arg1)->GetPageWidth();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1setSpacingStaff(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jboolean jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (bool)(arg1)->SetSpacingStaff(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1setSpacingSystem(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jboolean jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int arg2 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (bool)(arg1)->SetSpacingSystem(arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1getSpacingStaff(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  result = (int)(arg1)->GetSpacingStaff();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1getSpacingSystem(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  result = (int)(arg1)->GetSpacingSystem();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1setNoLayout(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2) {
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  bool arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  (arg1)->SetNoLayout(arg2);
}


SWIGEXPORT jint JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1getNoLayout(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  result = (int)(arg1)->GetNoLayout();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1setIgnoreLayout(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2) {
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  bool arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  (arg1)->SetIgnoreLayout(arg2);
}


SWIGEXPORT jint JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1getIgnoreLayout(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  result = (int)(arg1)->GetIgnoreLayout();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1setAdjustPageHeight(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2) {
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  bool arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  (arg1)->SetAdjustPageHeight(arg2);
}


SWIGEXPORT jint JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1getAdjustPageHeight(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  result = (int)(arg1)->GetAdjustPageHeight();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1setNoJustification(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2) {
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  bool arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  arg2 = jarg2 ? true : false; 
  (arg1)->SetNoJustification(arg2);
}


SWIGEXPORT jint JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1getNoJustification(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  result = (int)(arg1)->GetNoJustification();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1setFormat_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jboolean jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  std::string *arg2 = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  result = (bool)(arg1)->SetFormat((std::string const &)*arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1setFormat_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  vrv::ConvertFileFormat arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  arg2 = (vrv::ConvertFileFormat)jarg2; 
  (arg1)->SetFormat(arg2);
}


SWIGEXPORT jint JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1getFormat(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  result = (int)(arg1)->GetFormat();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1setRdgXPathQuery(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  std::string *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  (arg1)->SetRdgXPathQuery((std::string const &)*arg2);
}


SWIGEXPORT jstring JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1getRdgXPathQuery(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  result = (arg1)->GetRdgXPathQuery();
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1setFont(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jboolean jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  std::string *arg2 = 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  std::string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  result = (bool)(arg1)->SetFont((std::string const &)*arg2);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1getPageCount(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  result = (int)(arg1)->GetPageCount();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1drag(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jint jarg3, jint jarg4) {
  jboolean jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  std::string arg2 ;
  int arg3 ;
  int arg4 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  (&arg2)->assign(arg2_pstr);
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  arg3 = (int)jarg3; 
  arg4 = (int)jarg4; 
  result = (bool)(arg1)->Drag(arg2,arg3,arg4);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1insert(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jstring jarg3, jstring jarg4) {
  jboolean jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  std::string arg2 ;
  std::string arg3 ;
  std::string arg4 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  (&arg2)->assign(arg2_pstr);
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return 0;
  (&arg3)->assign(arg3_pstr);
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  if(!jarg4) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg4_pstr = (const char *)jenv->GetStringUTFChars(jarg4, 0); 
  if (!arg4_pstr) return 0;
  (&arg4)->assign(arg4_pstr);
  jenv->ReleaseStringUTFChars(jarg4, arg4_pstr); 
  result = (bool)(arg1)->Insert(arg2,arg3,arg4);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jboolean JNICALL Java_org_rism_verovio_verovioJNI_toolkit_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jstring jarg3, jstring jarg4) {
  jboolean jresult = 0 ;
  vrv::Toolkit *arg1 = (vrv::Toolkit *) 0 ;
  std::string arg2 ;
  std::string arg3 ;
  std::string arg4 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(vrv::Toolkit **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  (&arg2)->assign(arg2_pstr);
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return 0;
  (&arg3)->assign(arg3_pstr);
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  if(!jarg4) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg4_pstr = (const char *)jenv->GetStringUTFChars(jarg4, 0); 
  if (!arg4_pstr) return 0;
  (&arg4)->assign(arg4_pstr);
  jenv->ReleaseStringUTFChars(jarg4, arg4_pstr); 
  result = (bool)(arg1)->Set(arg2,arg3,arg4);
  jresult = (jboolean)result; 
  return jresult;
}


#ifdef __cplusplus
}
#endif

