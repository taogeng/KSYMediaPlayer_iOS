//
//  KSYMoviePlayerDefine.h
//  KSYPlayerCore
//
//  Copyright © 2016 kingsoft. All rights reserved.
//

//----------------------------------------------
//Types

/*错误码*/
typedef NS_ENUM(NSInteger, KSYMPErrorCode) {
	KSYMPOK								= 0,			//正常
	KSYMPErrorCodeUnknownError			= 1,			//未知错误
	KSYMPErrorCodeFileIOError			= -1004,		//读写数据异常
	
	KSYMPErrorCodeUnsupportProtocol  	= -10001,		//不支持的流媒体协议
	KSYMPErrorCodeDNSParseFailed	  	= -10002,		//DNS解析失败
	KSYMPErrorCodeCreateSocketFailed 	= -10003,		//创建socket失败
	KSYMPErrorCodeConnectServerFailed	= -10004,		//连接服务器失败
	KSYMPErrorCodeBadRequest			= -10005,		//http请求返回400
	KSYMPErrorCodeUnauthorizedClient	= -10006,		//http请求返回401
	KSYMPErrorCodeAccessForbidden		= -10007,		//http请求返回403
	KSYMPErrorCodeTargetNotFound		= -10008,		//http请求返回404
	KSYMPErrorCodeOtherErrorCode		= -10009,		//http请求返回4xx
	KSYMPErrorCodeServerException		= -10010,		//http请求返回5xx
	KSYMPErrorCodeInvalidData			= -10011,		//无效的媒体数据
	KSYMPErrorCodeUnsupportVideoCodec	= -10012,		//不支持的视频编码类型
	KSYMPErrorCodeUnsupportAudioCodec	= -10013,		//不支持的音频编码类型
};

//----------------------------------------------
