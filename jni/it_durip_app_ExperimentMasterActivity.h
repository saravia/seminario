/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class it_durip_app_ServerSocketCmd */
//SERVER MAC READ DURIP
#ifndef _Included_it_durip_app_ExperimentMasterActivity
#define _Included_it_durip_app_ExperimentMasterActivity
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     it_durip_app_ServerSocketCmd
 * Method:    mainJNI
 * Signature: (I[Ljava/lang/String;)I
 */
//JNIEXPORT jint JNICALL Java_it_durip_1app_ExperimentMasterActivity_mainJNI
//  (JNIEnv *, jobject, jint, jobjectArray);


JNIEXPORT jint JNICALL Java_it_durip_1app_ExperimentMasterActivity_startExperiment
  (JNIEnv *, jobject, jint, jobjectArray);

JNIEXPORT jint JNICALL Java_it_durip_1app_ExperimentMasterActivity_stopExperiment
  (JNIEnv *, jobject, jint, jobjectArray);


JNIEXPORT jint Java_it_durip_1app_ExperimentMasterActivity_killApp
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
