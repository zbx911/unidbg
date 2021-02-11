/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_github_unidbg_arm_backend_kvm_Kvm */

#ifndef _Included_com_github_unidbg_arm_backend_kvm_Kvm
#define _Included_com_github_unidbg_arm_backend_kvm_Kvm
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    getMaxSlots
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_getMaxSlots
  (JNIEnv *, jclass);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    getPageSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_getPageSize
  (JNIEnv *, jclass);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    nativeInitialize
 * Signature: (Z)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_nativeInitialize
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    nativeDestroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_nativeDestroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    set_user_memory_region
 * Signature: (JIJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_set_1user_1memory_1region
  (JNIEnv *, jclass, jlong, jint, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    reg_read_cpacr_el1
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_reg_1read_1cpacr_1el1
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    reg_set_cpacr_el1
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_reg_1set_1cpacr_1el1
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    reg_set_sp64
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_reg_1set_1sp64
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    reg_read_sp64
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_reg_1read_1sp64
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    reg_set_tpidr_el0
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_reg_1set_1tpidr_1el0
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    mem_write
 * Signature: (JJ[B)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_mem_1write
  (JNIEnv *, jclass, jlong, jlong, jbyteArray);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    mem_read
 * Signature: (JJI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_mem_1read
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    reg_write
 * Signature: (JIJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_reg_1write
  (JNIEnv *, jclass, jlong, jint, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    reg_read
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_reg_1read
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    emu_start
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_emu_1start
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    emu_stop
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_emu_1stop
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
