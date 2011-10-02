SYSROOT=/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS4.3.sdk

include theos/makefiles/common.mk

TOOL_NAME = tool5
tool5_FILES = main.mm
tool5_FRAMEWORKS = UIKit QuartzCore CoreGraphics IOKit AVFoundation CoreMedia CoreVideo
tool5_PRIVATEFRAMEWORKS = UIKit QuartzCore CoreGraphics AVFoundation CoreMedia CoreVideo
tool5_CFLAGS = -arch armv7



include $(THEOS_MAKE_PATH)/tool.mk
