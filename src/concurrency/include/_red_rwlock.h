/* Copyright (C) 2015, Redbeard Enterprises Ltd.
 *
 * Not to be used without express written consent.
 * All rights reserved.
 *
 * $Id: _he_rwlock.h 18 2010-04-17 05:57:03Z jason $
 */

#ifndef ___HE_RWLOCK_H__
#define ___HE_RWLOCK_H__

#include "red_context.h"

#include <pthread.h>

struct _RedRWLock {
  pthread_rwlock_t lock;

  RedContext       rCtx;
};

#endif /*___HE_RWLOCK_H__ */
