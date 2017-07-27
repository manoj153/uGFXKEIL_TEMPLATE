/******************************************************************************/
/* This file has been generated by the uGFX-Studio                            */
/*                                                                            */
/* http://ugfx.org                                                            */
/******************************************************************************/

#ifndef _GFXCONF_H
#define _GFXCONF_H


/********************************************************/
/* GDISP stuff                                          */
/********************************************************/
#define GFX_USE_GDISP TRUE

#define GDISP_NEED_CONTROL TRUE
#define GDISP_NEED_VALIDATION TRUE
#define GDISP_NEED_CLIP TRUE
#define GDISP_NEED_ARC TRUE
#define GDISP_NEED_CONVEX_POLYGON FALSE
#define GDISP_NEED_IMAGE TRUE
	#define GDISP_NEED_IMAGE_BMP TRUE
	#define GDISP_NEED_IMAGE_GIF FALSE
#define GDISP_NEED_STARTUP_LOGO FALSE
#define GDISP_NEED_CIRCLE TRUE
#define GDISP_NEED_MULTITHREAD TRUE
#define GDISP_DEFAULT_ORIENTATION GDISP_ROTATE_0
#define GDISP_STARTUP_COLOR HTML2COLOR(0xFFFFFF)


/********************************************************/
/* Font stuff                                           */
/********************************************************/
#define GDISP_NEED_TEXT TRUE
#define GDISP_NEED_ANTIALIAS FALSE
#define GDISP_NEED_TEXT_KERNING FALSE
#define GDISP_NEED_UTF8 FALSE
#define GDISP_INCLUDE_USER_FONTS TRUE


/********************************************************/
/* GWIN stuff                                           */
/********************************************************/
#define GFX_USE_GWIN TRUE

#define GWIN_NEED_WINDOWMANAGER TRUE
    #define GWIN_REDRAW_IMMEDIATE TRUE
    #define GWIN_REDRAW_SINGLEOP TRUE

#define GWIN_NEED_WIDGET TRUE
    #define GWIN_NEED_LABEL TRUE
    #define GWIN_NEED_BUTTON TRUE
        #define GWIN_BUTTON_LAZY_RELEASE FALSE
    #define GWIN_NEED_IMAGE TRUE
        #define GWIN_NEED_IMAGE_ANIMATION FALSE
    #define GWIN_FLAT_STYLING FALSE

    #define GWIN_NEED_KEYBOARD TRUE
    #define GWIN_NEED_TEXTEDIT TRUE
#define GWIN_NEED_CONTAINERS TRUE
    #define GWIN_NEED_CONTAINER TRUE
    #define GWIN_NEED_FRAME FALSE
    #define GWIN_NEED_TABSET FALSE


/********************************************************/
/* GTIMER stuff                                         */
/********************************************************/
#define GFX_USE_GTIMER TRUE

#define GTIMER_THREAD_PRIORITY NORMAL_PRIORITY
#define GTIMER_THREAD_WORKAREA_SIZE 2048


/********************************************************/
/* GINPUT stuff                                         */
/********************************************************/
#define GFX_USE_GINPUT TRUE

#define GINPUT_NEED_MOUSE TRUE
#define GINPUT_TOUCH_USER_CALIBRATION_LOAD FALSE
#define GINPUT_NEED_KEYBOARD FALSE


/********************************************************/
/* GEVENT stuff                                         */
/********************************************************/
#define GFX_USE_GEVENT TRUE

#define GEVENT_ASSERT_NO_RESOURCE FALSE
#define GEVENT_MAXIMUM_SIZE 32
#define GEVENT_MAX_SOURCE_LISTENERS 32


/********************************************************/
/* GEVENT stuff                                         */
/********************************************************/
#define GFX_USE_GQUEUE TRUE

#define GQUEUE_NEED_ASYNC TRUE


/********************************************************/
/* GFILE stuff                                          */
/********************************************************/
#define GFX_USE_GFILE TRUE

#define GFILE_NEED_NATIVEFS TRUE
#define GFILE_NEED_ROMFS FALSE
#define GFILE_MAX_GFILES 2



#endif /* _GFXCONF_H */
