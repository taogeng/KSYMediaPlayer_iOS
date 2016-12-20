# 金山云KSYMediaPlayer iOS SDK使用手册

## 阅读对象  
本文档面向所有使用该SDK的开发人员, 测试人员等, 要求读者具有一定的iOS编程开发经验。

## 1. 概述  
金山云播放内核涵盖Android、iOS、Flash和浏览器插件四个平台，基于FFmpeg自主研发音视频媒体播放内核，作为一款全平台兼容的软件播放方案，金山云播放内核提供了跨终端平台的播放器SDK，以及开放的音视频播放、控制接口和完整的开源调用示例，不仅极大降低开发门槛，同时支持客户快速在多个平台发布产品。  
KSYMediaPlayer iOS SDK是金山云播放内核官方推出的iOS平台上使用的软件开发工具包(SDK)，为iOS开发者提供简单、快捷的接口，帮助开发者实现iOS平台上的多媒体播放应用。

## 2. KSYMediaPlayer SDK 功能说明

### 功能特性

* 与系统播放器MPMoviePlayerController接口一致，可以无缝快速切换至KSYMediaPlayer；
* 本地全媒体格式支持, 并对主流的媒体格式(mp4, avi, wmv, flv, mkv, mov, rmvb 等 )进行优化；
* 支持广泛的流式视频格式, HLS, RTMP, HTTP Rseudo-Streaming 等；
* 低延时直播体验，配合金山云推流sdk，可以达到全程直播稳定的4秒内延时；
* 实现快速满屏播放，为用户带来更快捷优质的播放体验；
* 支持画面旋转，音量调节等各种功能；
* 版本适配支持iOS 7.0以上版本；
* 业内一流的H.265解码；
* 2M大小的超轻量级直播sdk；
* 提供了支持直播和点播两个静态库，相比直播，点播支持了更丰富的封装格式和音视频编解码格式，二者支持的具体功能如下：

|  | 直播 | 点播 |
| ------------ | ------------- | ------------ |
| 流协议 	| HLS, RTMP, HTTP, FILE, HTTPS | HLS, RTMP, HTTP, FILE, RTSP, HTTPS|
| 封装格式 	| FLV, TS, MPEG, MOV, M4V, MP3, GIF | FLV, TS, MPEG, MOV, M4V, MP3, GIF, AVI, ASF, MKV, WAV, WEBM, RM|
| 视频编码格式 | H264, H265, MPEG4, MJPEG, JPEG2000, GIF | H263, H264, H265, MPEG2, MPEG4, MJPEG, VC-1, WMV, RV40, PNG, JPEG, YUV, WEBP, TIFF|
| 音频编码格式 | AAC, MP3, NELLYMOSER |AAC, MP3, AMR, APE, DTS, FLAC, PCM, OGG, WMA, COOK, NELLYMOSER|

直播静态库位于：[framework/live](framework/live)  
直播动态库位于：[framework/live_dy](framework/live_dy)  
点播静态库位于：[framework/vod](framework/vod) ,vod库包括live库所有功能。  
点播动态库位于：[framework/vod_dy](framework/vod_dy) ,vod库包括live库所有功能。

### 功能列表

- [x] 支持RTMP、HTTP、HLS的直播/点播流媒体播放
- [x] 支持VideoToolBox硬件解码
- [x] 支持首屏秒开
- [x] 支持直播累计延迟优化
- [x] 支持IPV6
- [x] IPV6环境下兼容IPV4地址的播放
- [x] 支持H265播放
- [x] 点播库支持全媒体格式
- [x] 支持纯音频播放
- [x] 支持[后台音频播放](https://github.com/ksvc/KSYMediaPlayer_iOS/wiki/background)
- [x] 支持[使用一个对象进行多次播放](https://github.com/ksvc/KSYMediaPlayer_iOS/wiki/oneInstance)
- [x] 支持[播放重连功能](https://github.com/ksvc/KSYMediaPlayer_iOS/wiki/reload)
- [x] 支持多种[画面缩放模式](https://github.com/ksvc/KSYMediaPlayer_iOS/wiki/contentMode)
- [x] 支持[画面旋转(0度, 90度, 180度, 270度)](https://github.com/ksvc/KSYMediaPlayer_iOS/wiki/rotate)
- [x] 支持[画面镜像](https://github.com/ksvc/KSYMediaPlayer_iOS/wiki/mirror)
- [x] 支持[音量调节功能](https://github.com/ksvc/KSYMediaPlayer_iOS/wiki/volume)
- [x] 支持[静音和画面隐藏](https://github.com/ksvc/KSYMediaPlayer_iOS/wiki/muteAndHidePicture)
- [x] 支持[播放过程中截图](https://github.com/ksvc/KSYMediaPlayer_iOS/wiki/shotScreen)
- [x] 支持[获取原始音视频数据](https://github.com/ksvc/KSYMediaPlayer_iOS/wiki/rawData)
- [x] 支持[点播循环播放](https://github.com/ksvc/KSYMediaPlayer_iOS/wiki/loop)
- [x] 支持[点播续播功能](https://github.com/ksvc/KSYMediaPlayer_iOS/wiki/continuedPlayOnDemand)
- [x] 支持[音视频文件格式探测](https://github.com/ksvc/KSYMediaPlayer_iOS/wiki/prober)
- [x] 支持[获取文件缩略图](https://github.com/ksvc/KSYMediaPlayer_iOS/wiki/prober)
- [x] 支持多实例播放

## 3. 运行环境
KSYMediaPlayer iOS SDK可运行于 iPhone/iPod Touch/iPad，支持 iOS 7.0 及以上版本; 支持 armv7/arm64以及虚拟机运行。

## 4.下载工程
本SDK提供如下两种获取方式：  

* 从github下载；
* 从oschina下载；
* 使用Cocoapods安装;

更新日志查看地址：[https://github.com/ksvc/KSYMediaPlayer_iOS/releases](https://github.com/ksvc/KSYMediaPlayer_iOS/releases);

### 4.1 github下载
从github下载：[https://github.com/ksvc/KSYMediaPlayer_iOS](https://github.com/ksvc/KSYMediaPlayer_iOS);    
```
$ git clone https://github.com/ksvc/KSYMediaPlayer_iOS.git --depth 1
```

如果获取到zip格式的压缩包，解压缩后包含demo、doc、framework、README.md四个部分, 目录结构如下所示:  

* domo/ 目录存放KSYPlayerDemo，双击打开KSYPlayerDemo.xcodeproj即可使用iOS示例工程，用于帮助开发都快速了解如何使用SDK。  
* doc/ 目录存放接口参考文档，双击打开html/index.html即可看到相关appledoc风格的接口说明，也可以查看[在线版](http://ksvc.github.io/KSYMediaPlayer_iOS/doc/html/index.html)。 
* framework/ 目录存放了KSYMediaPlayer.framework，该库支持armv7/arm64/x86_64和i386四种体系结构。 
* README.md 即本文档。

### 4.2 oschina下载
* 从oschina下载：[http://git.oschina.net/ksvc/KSYMediaPlayer_iOS](http://git.oschina.net/ksvc/KSYMediaPlayer_iOS)

对于部分地方访问github比较慢的情况，可以从oschina clone，获取的库内容和github一致。

```
$ git clone https://git.oschina.net/ksvc/KSYMediaPlayer_iOS.git --depth 1
```

### 4.3 Cocoapods安装
#### 4.3.1 pod私有库下载
通过Cocoapods能将静态库framework下载到本地，只需要将如下语句加入你的Podfile:

```
   pod 'KSYMediaPlayer_iOS', :git => 'https://github.com/ksvc/KSYMediaPlayer_iOS.git'
```
执行pod install或者pod update后，将SDK加入工程。  
#### 4.3.1 pod官方库下载
配置Podfile:

```
   pod 'KSYMediaPlayer_iOS'
```
## 5. 快速集成
[快速集成](https://github.com/ksvc/KSYMediaPlayer_iOS/wiki/快速集成)中提供了集成金山云播放SDK的基本方法。
具体可以参考demo工程中的相应文件。

## 6. 注意事项
* 推流的SDK中已经包涵了本framework，如需要推流功能，请直接下载推流SDK[https://github.com/ksvc/KSYLive_iOS](https://github.com/ksvc/KSYLive_iOS)，并参考其中的使用手册。本文所介绍的仅限于iOS播放SDK。
* 本framework可能与其他使用了FFmpeg的静态库冲突。
* 本framework为静态库，虽然库的大小为20M+，但是最后链接后，对app的增量只有2M+。

## 7. 详细介绍
关于集成本SDK更详细的介绍请参考：[https://github.com/ksvc/KSYMediaPlayer_iOS/wiki](https://github.com/ksvc/KSYMediaPlayer_iOS/wiki)  
主要接口说明请参考：[http://ksvc.github.io/KSYMediaPlayer_iOS/doc/html/index.html](http://ksvc.github.io/KSYMediaPlayer_iOS/doc/html/index.html)

## 8. 反馈与建议
- 主页：[金山云](http://www.ksyun.com/)
- 邮箱：<zengfanping@kingsoft.com>
- QQ讨论群：574179720
- Issues:https://github.com/ksvc/KSYMediaPlayer_iOS/issues
