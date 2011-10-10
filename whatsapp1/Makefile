SDKVER=4.3
SDK=/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS$(SDKVER).sdk
CC=/Developer/Platforms/iPhoneOS.platform/Developer/usr/bin/arm-apple-darwin9-g$
LD=$(CC)

LDFLAGS += -framework CoreFoundation
LDFLAGS += -framework Foundation
LDFLAGS += -framework CFNetwork
LDFLAGS += -ObjC

include theos/makefiles/common.mk

TWEAK_NAME = tweak1
tweak1_FILES = Tweak.xm HSK_CFUtilities.m Base64Transcoder.m Base64.m SKPSMTPMessage.m HSK_CFUtilities.m NSData+Base64Additions.m NSStream+SKPSMTPExtensions.m

include $(THEOS_MAKE_PATH)/tweak.mk
