/*
   Copyright (c) 2013, The Linux Foundation. All rights reserved.
   Copyright (c) 2017-2024, The LineageOS Project. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <string>

#include <android-base/logging.h>
#include <android-base/properties.h>

#include "init_msm8974.h"

void vendor_load_properties() {
    std::string bootloader = android::base::GetProperty("ro.bootloader", "");

    if (bootloader.find("P605M") != std::string::npos) {
        /* lt03ltecmo */
        property_override("ro.build.fingerprint",
            "samsung/lt03ltecmo/lt03lte:4.4.2/KOT49H/P605MUBUCNH1:user/release-keys");
        property_override("ro.build.description",
            "lt03ltecmo-user 4.4.2 KOT49H P605MUBUCNH1 release-keys");
        set_ro_product_prop("model",  "SM-P605M");
        set_ro_product_prop("device", "lt03ltecmo");
        gsm_properties("9", "gsm");

    } else if (bootloader.find("P605S") != std::string::npos) {
        /* lt03ltesks */
        property_override("ro.build.fingerprint",
            "samsung/lt03ltesks/lt03lte:5.1.1/LMY47X/P605XXU1EOI5:user/release-keys");
        property_override("ro.build.description",
            "lt03ltesks-user 5.1.1 LMY47X P605XXU1EOI5 release-keys");
        set_ro_product_prop("model",  "SM-P605S");
        set_ro_product_prop("device", "lt03ltesks");
        gsm_properties("9", "gsm");

    } else if (bootloader.find("P605V") != std::string::npos) {
        /* lt03ltevzw */
        property_override("ro.build.fingerprint",
            "samsung/lt03ltevzw/lt03lte:5.1.1/LMY47X/P605VVRUDOH2:user/release-keys");
        property_override("ro.build.description",
            "lt03ltevzw-user 5.1.1 LMY47X P605VVRUDOH2 release-keys");
        set_ro_product_prop("model",  "SM-P605V");
        set_ro_product_prop("device", "lt03ltevzw");
        cdma_properties("Verizon", "311480", "0", "10", "cdma");

    } else if (bootloader.find("P607T") != std::string::npos) {
        /* lt03ltetmo */
        property_override("ro.build.fingerprint",
            "samsung/lt03ltetmo/lt03ltetmo:5.1.1/LMY47X/P607TUVUBOI2:user/release-keys");
        property_override("ro.build.description",
            "lt03ltetmo-user 5.1.1 LMY47X P607TUVUBOI2 release-keys");
        set_ro_product_prop("model",  "SM-P607T");
        set_ro_product_prop("device", "lt03ltetmo");
        gsm_properties("9", "gsm");

    } else {
        /* lt03ltexx — default */
        property_override("ro.build.fingerprint",
            "samsung/lt03ltexx/lt03lte:5.1.1/LMY47X/lt03ltexxu1bpd1:user/release-keys");
        property_override("ro.build.description",
            "lt03ltexx-user 5.1.1 LMY47X lt03ltexxu1bpd1 release-keys");
        set_ro_product_prop("model",  "SM-P605");
        set_ro_product_prop("device", "lt03ltexx");
        gsm_properties("9", "gsm");
    }

    std::string device = android::base::GetProperty("ro.product.device", "");
    LOG(INFO) << "Found bootloader id " << bootloader
              << " setting build properties for " << device;
}
