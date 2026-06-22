#
# Copyright (C) 2016 The CyanogenMod Project
# Copyright (C) 2017-2024 The LineageOS Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

$(call inherit-product, device/samsung/lt03lte/full_lt03lte.mk)

# Inherit some common Lineage stuff.
$(call inherit-product, vendor/lineage/config/common_full_tablet.mk)

BOARD_VENDOR := samsung
PRODUCT_DEVICE := lt03lte
PRODUCT_NAME := lineage_lt03lte
PRODUCT_BRAND := samsung
PRODUCT_MODEL := Samsung Galaxy Tab Pro 10.1 LTE
PRODUCT_MANUFACTURER := samsung
TARGET_VENDOR := samsung

PRODUCT_BUILD_PROP_OVERRIDES += \
    PRIVATE_BUILD_DESC="lt03ltexx-user 5.1.1 LMY47X lt03ltexxu1bpd1 release-keys"

BUILD_FINGERPRINT := samsung/lt03ltexx/lt03lte:5.1.1/LMY47X/lt03ltexxu1bpd1:user/release-keys
