#include <jni.h>
#include <string>
#include "lxd.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_lxy_cmake_MainActivity_test(JNIEnv *env, jobject instance) {

    lxd *l = new lxd;
    std::string hello = l->getString();
    return env->NewStringUTF(hello.c_str());
}

extern "C"
jstring
Java_com_lxy_cmake_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
