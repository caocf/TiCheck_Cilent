//
//  ServerRequest.h
//  TiCheck
//
//  Created by Boyi on 4/28/14.
//  Copyright (c) 2014 tac. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ASIHTTPRequest;

typedef NS_ENUM(NSInteger, ServerUserRequestType) {
    Create_User = 0,
    Modify_User,
    User_Login,
    User_Info,
    Add_Token,
    Remove_Token
};

typedef NS_ENUM(NSInteger, ServerSubscriptionRequestType) {
    Create_Subscription = 0,
    Cancel_Subscription,
    Modify_Subscription,
    Get_Subscription
};

typedef NS_ENUM(NSInteger, ServerOrderRequestType) {
    Create_Order = 0,
    Cancel_Order,
    Get_Order
};

typedef NS_ENUM(NSInteger, ServerContactRequestType) {
    Create_Contact = 0,
    Cancel_Contact,
    Modify_Contact,
    Get_Contact
};

typedef NS_ENUM(NSInteger, ServerAirlineRequestType) {
    Get_AirlineCompany = 0,
    Add_AirlineCount
};

@interface ServerRequest : NSObject

/**
 *  同步获取用户相关请求返回字符串
 *
 *  @param serverUrl       请求服务器url
 *  @param userRequestType 用户请求类型
 *  @param jsonData        请求的json数据
 *
 *  @return 请求返回数据
 */
+ (NSData *)getServerUserResponseWithServerURL:(NSString *)serverUrl
                                     requestType:(ServerUserRequestType)userRequestType
                                        jsonData:(NSData *)jsonData;

/**
 *  同步获取订阅相关请求字符串
 *
 *  @param serverUrl               请求服务器url
 *  @param subscriptionRequestType 订阅请求类型
 *  @param jsonData                请求的json数据
 *
 *  @return 请求返回数据
 */
+ (NSData *)getServerSubscriptionResponseWithServerURL:(NSString *)serverUrl
                                             requestType:(ServerSubscriptionRequestType)subscriptionRequestType
                                                jsonData:(NSData *)jsonData;


/**
 *  同步获取订单相关请求字符串
 *
 *  @param serverUrl               请求服务器url
 *  @param orderRequestType        订单请求类型
 *  @param jsonData                请求的json数据
 *
 *  @return 请求返回数据
 */
+ (NSData *)getServerOrderResponseWithServerURL:(NSString *)serverUrl
                                    requestType:(ServerOrderRequestType)orderRequestType
                                       jsonData:(NSData *)jsonData;
///**
// *  同步获取付款界面
// *
// *  @param serverUrl               请求服务器url
// *  @param subscriptionRequestType 请求类型
// *  @param jsonData                请求的json数据
// *
// *  @return 请求返回数据
// */
//+ (NSData *)getOTAPayResponseWithServerURL:(NSString *)serverUrl
//                                           requestType:(ServerSubscriptionRequestType)subscriptionRequestType
//                                              jsonData:(NSData *)jsonData;


/**
 *  同步获取订单相关请求字符串
 *
 *  @param serverUrl          请求服务器url
 *  @param contactRequestType 乘客列表请求类型
 *  @param jsonData           请求的json数据
 *
 *  @return 数据
 */
+ (NSData *)getServerContactResponseWithServerURL:(NSString *)serverUrl
                                    requestType:(ServerContactRequestType)contactRequestType
                                       jsonData:(NSData *)jsonData;

/**
 *  同步获取航空公司请求
 *
 *  @param serverUrl          请求服务器url
 *  @param airlineRequestType 航空公司请求类型
 *  @param jsonData           请求的json数据
 *
 *  @return 返回数据
 */
+ (NSData *)getServerAirlineResponseWithServerURL:(NSString *)serverUrl
                                      requestType:(ServerAirlineRequestType)airlineRequestType
                                         jsonData:(NSData *)jsonData;


@end
