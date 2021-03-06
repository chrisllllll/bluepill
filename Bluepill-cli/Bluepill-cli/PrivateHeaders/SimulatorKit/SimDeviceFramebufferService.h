//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import Foundation;

#import "SimDeviceIOPortConsumer-Protocol.h"
#import "SimDisplayDamageRectangleDelegate-Protocol.h"
#import "SimDisplayIOSurfaceRenderableDelegate-Protocol.h"
#import "SimDisplayRotationAngleDelegate-Protocol.h"

@class SimDevice;

@interface SimDeviceFramebufferService : NSObject <SimDeviceIOPortConsumer, SimDisplayDamageRectangleDelegate, SimDisplayIOSurfaceRenderableDelegate, SimDisplayRotationAngleDelegate>
{
    BOOL _consumerAttached;
    int _displayClass;
    SimDevice *_device;
    NSString *_consumerIdentifier;
    NSUUID *_consumerUUID;
    NSObject *_executionQueue;
    NSMapTable *_clientsToCallbackQueue;
}

+ (id)framebufferServiceWithName:(id)arg1 device:(id)arg2 error:(id *)arg3;
+ (id)tvOutFramebufferServiceForDevice:(id)arg1 error:(id *)arg2;
+ (id)mainScreenFramebufferServiceForDevice:(id)arg1 error:(id *)arg2;
+ (id)portForDisplayClass:(int)arg1 io:(id)arg2;
@property(retain, nonatomic) NSMapTable *clientsToCallbackQueue; // @synthesize clientsToCallbackQueue=_clientsToCallbackQueue;
@property(retain, nonatomic) NSObject *executionQueue; // @synthesize executionQueue=_executionQueue;
@property(nonatomic) int displayClass; // @synthesize displayClass=_displayClass;
@property(retain, nonatomic) NSUUID *consumerUUID; // @synthesize consumerUUID=_consumerUUID;
@property(retain, nonatomic) NSString *consumerIdentifier; // @synthesize consumerIdentifier=_consumerIdentifier;
@property(nonatomic) BOOL consumerAttached; // @synthesize consumerAttached=_consumerAttached;
@property(nonatomic) __weak SimDevice *device; // @synthesize device=_device;
//- (void).cxx_destruct;
- (void)didReceiveDamageRect:(struct CGRect)arg1;
- (void)didChangeIOSurface:(id)arg1;
- (void)didChangeDisplayAngle:(double)arg1;
- (void)requestDeviceDimensions:(struct CGSize)arg1 scaledDimensions:(struct CGSize)arg2;
- (void)resume;
- (void)_ON_EXECUTION_QUEUE_sendSetIOSurfaceToClients:(struct __IOSurface *)arg1;
- (void)unregisterClient:(id)arg1;
- (void)registerClient:(id)arg1 onQueue:(id)arg2;
- (void)invalidate;
- (void)dealloc;

@end

