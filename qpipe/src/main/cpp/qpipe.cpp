#include <jni.h>
#include <string>
#include <dlfcn.h>
//#include <wels/codec_api.h>

using namespace std;

class MyClass {
public:
    static int myStaticField;
};

int MyClass::myStaticField = 0;

extern "C" jstring
Java_com_fivesoft_qpipe_NativeLib_stringFromJNI(JNIEnv* env, jobject /* this */) {

    /*
     * Try loading library
     */

    void *handle = dlopen("libopenh264.so", RTLD_LAZY);

    if (handle == nullptr) {
        return env->NewStringUTF("Failed to load libopenh264.so");
    } else {
        return env->NewStringUTF("Loaded libopenh264.so");
    }

}