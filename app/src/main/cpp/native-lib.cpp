#include <jni.h>
#include <string>

extern "C" JNIEXPORT jfloat JNICALL
Java_com_shoxrux_calculator_MainActivity_addJNI(
        JNIEnv *env,
        jobject, /* this */
        jfloat a, jfloat b) {
    return a + b;
}

extern "C" JNIEXPORT jfloat JNICALL
Java_com_shoxrux_calculator_MainActivity_subJNI(
        JNIEnv *env,
        jobject, /* this */
        jfloat a, jfloat b) {
    return a - b;
}


extern "C" JNIEXPORT jfloat JNICALL
Java_com_shoxrux_calculator_MainActivity_multiJNI(
        JNIEnv *env,
        jobject, /* this */
        jfloat a, jfloat b) {
    return a * b;
}


extern "C" JNIEXPORT jfloat JNICALL
Java_com_shoxrux_calculator_MainActivity_divJNI(
        JNIEnv *env,
        jobject, /* this */
        jfloat a, jfloat b) {
    return a / b;
}