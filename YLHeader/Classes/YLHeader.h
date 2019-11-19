//
//  YLHeader.h
//  YLHeader
//
//  Created by ylgwhyh on 2019/11/19.
//  Copyright © 2019 hyh. All rights reserved.
//

#ifndef YLHeader_h
#define YLHeader_h


#ifndef SCREEN_WIDTH
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#endif

#ifndef SCREEN_HEIGHT
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height
#endif

// iPhone X
#ifndef IPHONE_X
#define IPHONE_X ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(2436, 1125), [[UIScreen mainScreen] currentMode].size)) : NO)
#endif

// iPhone X系列
#ifndef IPHONE_X_SERIES
#define IPHONE_X_SERIES (IPHONE_X || IPHONE_XR || IPHONE_XS_MAX || IPHONE_XR_BIG_MODE)
#endif

// iPhone XR
#ifndef IPHONE_XR
#define IPHONE_XR ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(1792, 828), [[UIScreen mainScreen] currentMode].size)) : NO)
#endif

// iPhone Xs Max
#ifndef IPHONE_XS_MAX
#define IPHONE_XS_MAX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(2688, 1242), [[UIScreen mainScreen] currentMode].size)) : NO)
#endif

// iPhone XR 放大模式
#ifndef IPHONE_XR_BIG_MODE
#define IPHONE_XR_BIG_MODE ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(750, 1624), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(1624, 750), [[UIScreen mainScreen] currentMode].size)) : NO)
#endif

// Status bar height.
#ifndef STATUSBAR_HEIGHT
#define STATUSBAR_HEIGHT (IPHONE_X_SERIES ? 44.0f : 20.0f)
#endif

// Navigation bar height.
#ifndef NAVIGATIONBAR_HEIGHT
#define NAVIGATIONBAR_HEIGHT 44.0f
#endif

// Status bar & navigation bar height.
#ifndef STATUSBAR_AND_NAVIGATIONBAR_HEIGHT
#define STATUSBAR_AND_NAVIGATIONBAR_HEIGHT (IPHONE_X_SERIES ? 88.0f : 64.0f)
#endif

// Tabbar safe bottom margin.
#ifndef SAFE_BOTTOM_MARGIN
#define SAFE_BOTTOM_MARGIN (IPHONE_X_SERIES ? 34.0f : 0.0f)
#endif


#endif /* YLHeader_h */
