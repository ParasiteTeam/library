//
//  PSRuntime.m
//  ParasiteRuntime
//
//  Created by Alexander Zielenski on 4/7/16.
//  Copyright © 2016 ParasiteTeam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ParasiteRuntime.h"

extern void _PSRegisterCallback(PSLoaderCallback callback) WEAK_IMPORT_ATTRIBUTE;

void PSRegisterCallback(PSLoaderCallback callback) {
    _PSRegisterCallback(callback);
}
