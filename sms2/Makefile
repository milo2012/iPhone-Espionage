
SDKVER=3.0
SDK=/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS$(SDKVER).sdk
CC=/Developer/Platforms/iPhoneOS.platform/Developer/usr/bin/arm-apple-darwin9-gcc-4.0.1
LD=$(CC)

LDFLAGS += -framework CoreFoundation
LDFLAGS += -framework Foundation
LDFLAGS += -framework CoreTelephony

LDFLAGS += -L"$(SDK)/usr/lib"
LDFLAGS += -F"$(SDK)/System/Library/Frameworks"
LDFLAGS += -F"$(SDK)/System/Library/PrivateFrameworks"

CFLAGS  += -I"/Developer/Platforms/iPhoneOS.platform/Developer/usr/lib/gcc/arm-apple-darwin9/4.0.1/include/"
CFLAGS  += -I"$(SDK)/usr/include"
CFLAGS  += -I"/Developer/Platforms/iPhoneOS.platform/Developer/usr/include/"
CFLAGS  += -DDEBUG -std=c99
CFLAGS  += -Diphoneos_version_min=2.0

include theos/makefiles/common.mk

TOOL_NAME = sms2
sms2_FILES = main.m
include $(THEOS_MAKE_PATH)/tool.mk
