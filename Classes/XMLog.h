//
//  XMLog.h
//  MaptimizeKit
//
//  Created by Oleg Shnitko on 5/20/10.
//  olegshnitko@gmail.com
//  
//  Copyright © 2010 Screen Customs s.r.o. All rights reserved.
//

#import "XMConfig.h"

#ifdef XM_LOG_LEVEL
#	define SC_LOG_LEVEL XM_LOG_LEVEL
#endif

#import "SCLog.h"

#define XM_LOG_CATEGORY @"MaptimizeKit"

#define XM_LOG_TRACE(MSG, ...)		SC_LOG_TRACE(XM_LOG_CATEGORY, MSG, ## __VA_ARGS__)
#define XM_LOG_DEBUG(MSG, ...)		SC_LOG_DEBUG(XM_LOG_CATEGORY, MSG, ## __VA_ARGS__)
#define XM_LOG_INFO(MSG, ...)		SC_LOG_INFO(XM_LOG_CATEGORY, MSG, ## __VA_ARGS__)
#define XM_LOG_WARNING(MSG, ...)	SC_LOG_WARNING(XM_LOG_CATEGORY, MSG, ## __VA_ARGS__)
#define XM_LOG_ERROR(MSG, ...)		SC_LOG_ERROR(XM_LOG_CATEGORY, MSG, ## __VA_ARGS__)