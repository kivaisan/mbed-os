/*
 * Copyright (c) 2017, Arm Limited and affiliates.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "QUECTEL_BC95_CellularSMS.h"
#include "CellularLog.h"

using namespace mbed;

QUECTEL_BC95_CellularSMS::QUECTEL_BC95_CellularSMS(ATHandler &atHandler) : AT_CellularSMS(atHandler)
{
    _mode = CellularSMSMmodePDU;
}

QUECTEL_BC95_CellularSMS::~QUECTEL_BC95_CellularSMS()
{
}

nsapi_error_t QUECTEL_BC95_CellularSMS::initialize(CellularSMSMmode mode)
{
    if (mode == CellularSMSMmodePDU) {
        return NSAPI_ERROR_OK;
    } else {
        return NSAPI_ERROR_UNSUPPORTED;
    }
}
