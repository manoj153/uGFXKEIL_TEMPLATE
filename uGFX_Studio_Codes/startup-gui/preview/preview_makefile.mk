GFXBOARD			= Win32
OPT_OS				= win32
OPT_LINK_OPTIMIZE	= yes

PROJECT             = preview

OPT_CPU             = x86
OPT_COPY_EXE        = yes
GFXSINGLEFILE       = yes

GFXLIB              = C:/Users/Manojkumar/Desktop/ugfx_studio_0.15_windows/ugfx_studio_0.15_windows/ugfx_library
GFXDEMO				= 

DEFS               += GDISP_SCREEN_WIDTH=480
DEFS               += GDISP_SCREEN_HEIGHT=272

ARCH                = i686-pc-mingw32-
XCC                 = i686-pc-mingw32-gcc
XCXX                = i686-pc-mingw32-g++
XAS                 = i686-pc-mingw32-gcc -x assembler-with-cpp
XLD                 = i686-pc-mingw32-gcc
XOC                 = i686-pc-mingw32-objcopy
XOD                 = i686-pc-mingw32-objdump
XSZ                 = i686-pc-mingw32-size
XAR                 = i686-pc-mingw32-ar
SRCFLAGS            = -ggdb -O0

SRC                 = gui.c main.c

include $(GFXLIB)/tools/gmake_scripts/library_ugfx.mk
include $(GFXLIB)/tools/gmake_scripts/os_$(OPT_OS).mk
include $(GFXLIB)/tools/gmake_scripts/compiler_gcc.mk
