/* Copyright (C) 2010, Redbeard Enterprises Ltd.
 *
 * Not to be used without express written consent.
 * All rights reserved.
 *
 * $Id: _he_context.h 18 2010-04-17 05:57:03Z jason $
 */

#ifndef ___HE_CONTEXT_H__
#define ___HE_CONTEXT_H__


struct _RedContext {
  redfuncMalloc rfMalloc;
  redfuncFree   rfFree;
  redfuncMemcpy rfMemcpy;
  redfuncMemset rfMemset;
  redfuncMemcmp rfMemcmp;

  void* data;
};


#endif /* __coreGlobalContext_h__ */
