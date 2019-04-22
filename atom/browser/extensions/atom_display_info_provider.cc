// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "atom/browser/extensions/atom_display_info_provider.h"

namespace extensions {

AtomDisplayInfoProvider::AtomDisplayInfoProvider() = default;

// static
DisplayInfoProvider* DisplayInfoProvider::Create() {
  return new AtomDisplayInfoProvider();
}

}  // namespace extensions
