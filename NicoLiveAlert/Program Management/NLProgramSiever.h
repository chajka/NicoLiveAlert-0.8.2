//
//  NLProgramSiever.h
//  NicoLiveAlert
//
//  Created by Чайка on 7/7/15.
//  Copyright (c) 2015 Instrumentality of Mankind. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <dispatch/dispatch.h>
#import "NLStatusbar.h"
#import "NLAccounts.h"
#import "NLProgram.h"

@interface NLProgramSiever : NSObject<NLProgramController> {
	dispatch_queue_t					queue;
	dispatch_queue_t					mainQueue;
	NLAccounts							*accounts;
	NSDictionary						*watchlist;
	NLStatusbar							*statusbar;

	NSMutableDictionary					*activePrograms;
	NSXPCConnection						*connection;
}
@property (readwrite) NSXPCConnection	*connection;
- (id) initWithAccounts:(NLAccounts *)accnts statusbar:(NLStatusbar *)statusbar;

- (void) checkProgram:(NSArray *)programInfo;
@end
