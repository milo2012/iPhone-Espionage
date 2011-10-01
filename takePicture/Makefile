SYSROOT=/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS4.3.sdk
include theos/makefiles/common.mk

TOOL_NAME = tool7
tool7_FILES = main.mm  RootViewController.mm
tool7_FRAMEWORKS = UIKit QuartzCore CoreGraphics IOKit AVFoundation CoreMedia CoreVideo
tool7_PRIVATEFRAMEWORKS = UIKit QuartzCore CoreGraphics AVFoundation CoreMedia CoreVideo
tool7_CFLAGS = -arch armv7

include $(THEOS_MAKE_PATH)/tool.mk
