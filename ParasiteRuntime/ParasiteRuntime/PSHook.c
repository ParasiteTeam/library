//
//  PSHook.c
//  ParasiteRuntime
//
//  Created by Alexander Zielenski on 3/31/16.
//  Copyright © 2016 ParasiteTeam. All rights reserved.
//

#include "PSHook.h"

typedef void *MSImageRef;

MSImageRef MSGetImageByName(const char *file)
__asm__("SubGetImageByName");
void *MSFindSymbol(MSImageRef image, const char *name)
__asm__("SubFindSymbol");

void MSHookFunction(void *symbol, void *replace, void **result)
__asm__("SubHookFunction");

int PSHookFunctionPtr(void *symbol, void *replace, void **result) {
    MSHookFunction(symbol, replace, result);
    return 0;
}

void *PSGetImageByName(const char *file) {
    return MSGetImageByName(file);
}

void *PSFindSymbol(const void *image, const char *name) {
    return MSFindSymbol((MSImageRef)image, name);
}