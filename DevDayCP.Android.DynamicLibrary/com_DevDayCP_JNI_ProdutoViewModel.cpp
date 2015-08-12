#include "..\DevDayCP.Shared\ProdutoViewModel.h"
#include "handle.h"
#include "com_DevDayCP_JNI_ProdutoViewModel.h"

//jint JNI_OnLoad(JavaVM* vm, void* reserved)
//{
//	JNIEnv* env;
//	if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) != JNI_OK) {
//		return -1;
//	}
//
//	// Get jclass with env->FindClass.
//	// Register methods with env->RegisterNatives.
//
//	return JNI_VERSION_1_6;
//}

void Java_com_DevDayCP_JNI_ProdutoViewModel_initialize(JNIEnv *env, jobject obj) {	
	setHandle(env, obj, new DevDayCpShared::ProdutoViewModel());
}

jstring Java_com_DevDayCP_JNI_ProdutoViewModel_toString(JNIEnv *env, jobject obj) {
	DevDayCpShared::ProdutoViewModel* inst = getHandle<DevDayCpShared::ProdutoViewModel>(env, obj);	
	return env->NewString((jchar *)inst->ToString().c_str(), inst->ToString().length());
}