//
//  VKSdkFramework.h
//
//  Copyright (c) 2015 VK.com
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of
//  this software and associated documentation files (the "Software"), to deal in
//  the Software without restriction, including without limitation the rights to
//  use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
//  the Software, and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
//  FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
//  COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
//  IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


#import <UIKit/UIKit.h>

//! Project version number for VKSdkFramework.
FOUNDATION_EXPORT double VKSdkFrameworkVersionNumber;

//! Project version string for VKSdkFramework.
FOUNDATION_EXPORT const unsigned char VKSdkFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <VKSdkFramework/PublicHeader.h>
#import "Source/VKSdk.h"
#import "Source/VKAccessToken.h"
#import "Source/VKPermissions.h"
#import "Source/Utils/VKUtil.h"
#import "Source/API/VKApi.h"
#import "Source/API/methods/VKApiConst.h"
#import "Source/VKSdkVersion.h"
#import "Source/Views/VKCaptchaViewController.h"
#import "Source/Core/VKRequest.h"
#import "Source/VKBatchRequest.h"
#import "Source/Core/NSError+VKError.h"
#import "Source/API/methods/VKApiModels.h"
#import "Source/Image/VKUploadImage.h"
#import "Source/Views/VKShareDialogController.h"
#import "Source/Views/VKActivity.h"
#import "Source/Utils/OrderedDictionary.h"
#import "Source/Views/VKAuthorizeController.h"
#import "Source/VKBundle.h"
#import "Source/Views/VKCaptchaView.h"
#import "Source/API/upload/VKUploadMessagesPhotoRequest.h"
#import "Source/API/upload/VKUploadPhotoBase.h"
#import "Source/API/upload/VKUploadPhotoRequest.h"
#import "Source/API/upload/VKUploadWallPhotoRequest.h"
#import "Source/Core/VKHTTPClient.h"
#import "Source/Core/VKHTTPOperation.h"
#import "Source/Core/VKJSONOperation.h"
#import "Source/Core/VKRequestsScheduler.h"
#import "Source/Views/VKSharedTransitioningObject.h"
#import "Source/Utils/NSString+MD5.h"
