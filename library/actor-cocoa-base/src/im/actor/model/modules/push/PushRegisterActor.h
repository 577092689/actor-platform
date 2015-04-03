//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/library/actor-cocoa-base/build/java/im/actor/model/modules/push/PushRegisterActor.java
//

#ifndef _ImActorModelModulesPushPushRegisterActor_H_
#define _ImActorModelModulesPushPushRegisterActor_H_

@class AMRpcException;
@class ImActorModelApiRpcResponseVoid;
@class ImActorModelModulesModules;

#include "J2ObjC_header.h"
#include "im/actor/model/modules/utils/ModuleActor.h"
#include "im/actor/model/network/RpcCallback.h"

@interface ImActorModelModulesPushPushRegisterActor : ImActorModelModulesUtilsModuleActor {
}

- (instancetype)initWithImActorModelModulesModules:(ImActorModelModulesModules *)modules;

- (void)preStart;

- (void)onReceiveWithId:(id)message;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorModelModulesPushPushRegisterActor)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ImActorModelModulesPushPushRegisterActor)

@interface ImActorModelModulesPushPushRegisterActor_RegisterGooglePush : NSObject {
}

- (instancetype)initWithLong:(jlong)projectId
                withNSString:(NSString *)token;

- (jlong)getProjectId;

- (NSString *)getToken;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorModelModulesPushPushRegisterActor_RegisterGooglePush)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ImActorModelModulesPushPushRegisterActor_RegisterGooglePush)

@interface ImActorModelModulesPushPushRegisterActor_RegisterApplePush : NSObject {
}

- (instancetype)initWithInt:(jint)apnsKey
               withNSString:(NSString *)token;

- (jint)getApnsKey;

- (NSString *)getToken;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorModelModulesPushPushRegisterActor_RegisterApplePush)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ImActorModelModulesPushPushRegisterActor_RegisterApplePush)

@interface ImActorModelModulesPushPushRegisterActor_$1 : NSObject < AMRpcCallback > {
}

- (void)onResultWithImActorModelNetworkParserResponse:(ImActorModelApiRpcResponseVoid *)response;

- (void)onErrorWithAMRpcException:(AMRpcException *)e;

- (instancetype)initWithImActorModelModulesPushPushRegisterActor:(ImActorModelModulesPushPushRegisterActor *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorModelModulesPushPushRegisterActor_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ImActorModelModulesPushPushRegisterActor_$1)

@interface ImActorModelModulesPushPushRegisterActor_$2 : NSObject < AMRpcCallback > {
}

- (void)onResultWithImActorModelNetworkParserResponse:(ImActorModelApiRpcResponseVoid *)response;

- (void)onErrorWithAMRpcException:(AMRpcException *)e;

- (instancetype)initWithImActorModelModulesPushPushRegisterActor:(ImActorModelModulesPushPushRegisterActor *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorModelModulesPushPushRegisterActor_$2)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ImActorModelModulesPushPushRegisterActor_$2)

#endif // _ImActorModelModulesPushPushRegisterActor_H_
