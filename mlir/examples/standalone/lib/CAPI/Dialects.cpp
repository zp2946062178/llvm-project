//===- Dialects.cpp - CAPI for dialects -----------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "Standalone-c/Dialects.h"

#include "Standalone/StandaloneDialect.h"
#include "Dog/DogDialect.h"
#include "Cat/Cat.h"
#include "mlir/CAPI/Registration.h"

MLIR_DEFINE_CAPI_DIALECT_REGISTRATION(Standalone, standalone,
                                      mlir::standalone::StandaloneDialect)

MLIR_DEFINE_CAPI_DIALECT_REGISTRATION(Dog, dog, mlir::dog::DogDialect)
MLIR_DEFINE_CAPI_DIALECT_REGISTRATION(Cat, cat, mlir::cat::CatDialect)
