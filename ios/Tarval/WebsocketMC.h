//
//  WebsocketMC.h
//  Tarval
//
//  Created by Steve Gattuso on 8/3/13.
//  Copyright (c) 2013 hackNY. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SocketRocket/SRWebSocket.h>

@interface WebsocketMC : NSObject<SRWebSocketDelegate> {
    NSNotificationCenter *_notification_center;
}

@property (strong, nonatomic) SRWebSocket *websocket;

-(void)connect;
-(void)sendEvent: (NSString*)event_name data: (NSDictionary*)data;

@end