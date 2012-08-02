/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDelegate-Protocol.h"

@class LUImageView, NSDictionary, NSImage, NSMutableData, NSString, NSURL;

@interface LUImageInfo : NSObject <NSURLConnectionDelegate>
{
    NSString *_title;
    NSURL *_imageURL;
    struct CGSize _imageSize;
    NSURL *_thumbnailURL;
    struct CGSize _thumbnailSize;
    NSURL *_refererURL;
    NSDictionary *_thumbnailHeaders;
    NSImage *_image;
    NSImage *_icon;
    NSImage *_preview;
    LUImageView *_imageView;
    NSMutableData *_data;
    struct CGRect _viewDesiredFrame;
    BOOL _viewDesiredHidden;
    BOOL _downloadStarted;
}

+ (id)previewForImage:(id)arg1 caption:(id)arg2;
+ (id)iconForImage:(id)arg1;
@property BOOL downloadStarted; // @synthesize downloadStarted=_downloadStarted;
@property BOOL viewDesiredHidden; // @synthesize viewDesiredHidden=_viewDesiredHidden;
@property struct CGRect viewDesiredFrame; // @synthesize viewDesiredFrame=_viewDesiredFrame;
@property(retain) NSMutableData *data; // @synthesize data=_data;
@property(retain) LUImageView *imageView; // @synthesize imageView=_imageView;
@property(retain) NSImage *preview; // @synthesize preview=_preview;
@property(retain) NSImage *icon; // @synthesize icon=_icon;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(retain) NSDictionary *thumbnailHeaders; // @synthesize thumbnailHeaders=_thumbnailHeaders;
@property(retain) NSURL *refererURL; // @synthesize refererURL=_refererURL;
@property struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain) NSString *title; // @synthesize title=_title;
- (void)setPreviewImageData:(id)arg1;
- (void)loadThumbnailImageFromConnection:(struct _xpc_connection_s *)arg1;
- (void)observeImageViewNotification:(id)arg1;
- (id)description;
- (void)commonLUImageInfoTeardown;
- (void)finalize;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 imageURL:(id)arg2 imageSize:(struct CGSize)arg3 thumbnailURL:(id)arg4 thumbnailSize:(struct CGSize)arg5 refererURL:(id)arg6 thumbnailHeaders:(id)arg7;

@end

