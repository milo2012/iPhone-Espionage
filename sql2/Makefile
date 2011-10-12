SDKVER=4.3
SDK=/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS$(SDKVER).sdk
CC=/Developer/Platforms/iPhoneOS.platform/Developer/usr/bin/arm-apple-darwin9-g$
LD=$(CC)

LDFLAGS += -lz
LDFLAGS += -framework CoreFoundation
LDFLAGS += -framework CFNetwork
LDFLAGS += -framework Foundation
LDFLAGS += -framework UIKit
LDFLAGS += -framework QuartzCore
LDFLAGS += -framework IOKit
LDFLAGS += -framework ImageIO
LDFLAGS += libchilkatIos.a
LDFLAGS += -ObjC 

CFLAGS  += -I"/Developer/Platforms/iPhoneOS.platform/Developer/usr/lib/gcc/arm-apple-darwin9/4.0.1/include/"
CFLAGS  += -I"$(SDK)/usr/include"
CFLAGS  += -I"/Developer/Platforms/iPhoneOS.platform/Developer/usr/include/"
CFLAGS  += -I"/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS4.3.sdk/usr/lib/"
CFLAGS  += -Diphoneos_version_min=2.0

include theos/makefiles/common.mk

TOOL_NAME = sql2
sql2_FILES = main.mm 
include $(THEOS_MAKE_PATH)/tool.mk
