// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

//#pragma once

#include "core/framework/provider_options.h"

namespace onnxruntime {

/**
  * Configuration information for a provider.
  */
struct CudaDeviceOptions : DeviceOptions {

    size_t cuda_mem_limit = std::numeric_limits<size_t>::max();
    onnxruntime::ArenaExtendStrategy arena_extend_strategy = onnxruntime::ArenaExtendStrategy::kNextPowerOfTwo;
};
}  // namespace onnxruntime