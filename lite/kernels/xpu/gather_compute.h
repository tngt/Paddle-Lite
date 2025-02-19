// Copyright (c) 2019 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include "lite/core/kernel.h"

namespace paddle {
namespace lite {
namespace kernels {
namespace xpu {

template <typename DataType, typename IndexType>
class GatherCompute : public KernelLite<TARGET(kXPU), PRECISION(kFloat)> {
 public:
  using param_t = operators::GatherParam;

  virtual void Run();

  virtual ~GatherCompute() = default;
};

}  // namespace xpu
}  // namespace kernels
}  // namespace lite
}  // namespace paddle

typedef paddle::lite::kernels::xpu::GatherCompute<int32_t, int32_t>
    GatherXPUInt32Int32;
typedef paddle::lite::kernels::xpu::GatherCompute<int32_t, int64_t>
    GatherXPUInt32Int64;
typedef paddle::lite::kernels::xpu::GatherCompute<float, int32_t>
    GatherXPUFloatInt32;
typedef paddle::lite::kernels::xpu::GatherCompute<float, int64_t>
    GatherXPUFloatInt64;
typedef paddle::lite::kernels::xpu::GatherCompute<int64_t, int32_t>
    GatherXPUInt64Int32;
typedef paddle::lite::kernels::xpu::GatherCompute<int64_t, int64_t>
    GatherXPUInt64Int64;
