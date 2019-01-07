#include <jni.h>
#include <string>
#include "libmp3lame/lame.h"

extern "C" JNIEXPORT jstring

JNICALL
Java_com_trj_testcmake_MainActivity_getLameVersion(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(get_lame_version());
}
