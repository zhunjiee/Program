//
//  WebSocketManager.h
//  Socket
//
//  Created by Houge on 2020/1/7.
//  Copyright © 2020 ZHUNJIEE. All rights reserved.
//
// https://www.jianshu.com/p/6b870f503905

#import <Foundation/Foundation.h>
#import <SocketRocket/SocketRocket.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, WebSocketStatus){
    WebSocketStatusDefault = 0, //初始状态，未连接
    WebSocketStatusConnect,     //已连接
    WebSocketStatusDisConnect,  //断开连接
};

@protocol WebSocketManagerDelegate<NSObject>

-(void)webSocketDidReceiveMessage:(NSString *)string;

@end

@interface WebSocketManager : NSObject <SRWebSocketDelegate>

@property(nonatomic, strong) SRWebSocket *webScoket;
@property(nonatomic, weak) id<WebSocketManagerDelegate> delegate;
@property(nonatomic, assign) BOOL isConnect; //是否连接
@property(nonatomic, assign) WebSocketStatus socketStatus;

+(instancetype)shared;
-(void)connectServer;//建立长连接
-(void)reConnectServer;//重新连接
-(void)webSocketClose;//关闭连接
-(void)sendDataToServer:(NSString *)data; //向服务器发送数据

@end

NS_ASSUME_NONNULL_END
