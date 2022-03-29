// Copyright 2017 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef FXJS_XFA_CJX_BIND_H_
#define FXJS_XFA_CJX_BIND_H_

#include "fxjs/xfa/cjx_node.h"

class CXFA_Bind;

class CJX_Bind : public CJX_Node {
 public:
  explicit CJX_Bind(CXFA_Bind* node);
  ~CJX_Bind() override;

  JS_PROP(contentType);
  JS_PROP(match);
  JS_PROP(ref);
  JS_PROP(transferEncoding);
  JS_PROP(use);
  JS_PROP(usehref);
};

#endif  // FXJS_XFA_CJX_BIND_H_
