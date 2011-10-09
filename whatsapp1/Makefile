SDKVER=3.0
SDK=/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS$(SDKVER).sdk
CC=/Developer/Platforms/iPhoneOS.platform/Developer/usr/bin/arm-apple-darwin9-g$
LD=$(CC)

LDFLAGS += -framework CoreFoundation
LDFLAGS += -framework Foundation
LDFLAGS += -framework CFNetwork

tweak1_OBJ_FILES = libchilkatIos.a
include theos/makefiles/common.mk

TWEAK_NAME = tweak1
tweak1_FILES = Tweak.xm SKPSMTPMessage.m HSK_CFUtilities.m NSStream+SKPSMTPExtensions.m

include $(THEOS_MAKE_PATH)/tweak.mk
