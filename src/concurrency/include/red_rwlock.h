/* Copyright (C) 2015, Redbeard Enterprises Ltd.
 *
 * Not to be used without express written consent.
 * All rights reserved.
 *
 * $Id: he_rwlock.h 18 2010-04-17 05:57:03Z jason $
 */

#ifndef __HE_RWLOCK_H__
#define __HE_RWLOCK_H__


#include "red_context.h"

#ifdef __cplusplus
extern "C" {
#endif



struct _RedRWLock;
typedef struct _RedRWLock* RedRWLock;


extern
int
redRWLockCreate(
    RedRWLock* lock,
    RedContext rCtx
    );

extern
int
redRWLockDestroy(
    RedRWLock* lock
    );

extern
int
redRWLockTakeRead(
    RedRWLock lock
    );

extern
int
redRWLockTakeWrite(
    RedRWLock lock
    );

extern
int
redRWLockGive(
    RedRWLock lock
    );



#ifdef __cplusplus
}
#endif


#endif /* __HE_RWLOCK_H__ */
