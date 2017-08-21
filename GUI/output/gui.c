/******************************************************************************/
/* This file has been generated by the uGFX-Studio                            */
/*                                                                            */
/* http://ugfx.org                                                            */
/******************************************************************************/

#include "colors.h"
#include "widgetstyles.h"
#include "gui.h"
#include "ACCESS_CONTROL.h"
#include "dooropen.h"
char dynamic_array[5];
// GListeners //create a glistener
GListener glistener;
GWidgetInit wi;
static void createWidgets(void);
// GHandles // Smtg related to positioning, bg_colour etc. 
// Container holder of a age specefic page.
GHandle ghContainerPage0;
GHandle ghContainerPage1;
GHandle createDoorOpenBG;
GHandle default_pg; // image 
static gdispImage myImage;
GHandle touch_button_df_pg; // middle top button on main page
GHandle ghButton1;
char buffer1[4];
//GHandle ghKeyboard1;
GHandle ghTextedit1;
GHandle ghLabel1;
GHandle ghLabel2;
static GHandle		ghConsole;
static GHandle		ghKeyboard;
GHandle ghKeyboard1;
// Fonts
font_t dejavu_sans_16;
font_t dejavu_sans_12;
font_t dejavu_sans_24;


//font_t dejavu_sans_16 = gdispOpenFont("DejaVuSans16");//default fonts

// Images
static void createDoorOpen()
{
//	GWidgetInit wi;
//	gwinWidgetClearInit(&wi);
//	
//	// create container widget: createDoorOpenBG
//	wi.g.show = TRUE;
//	wi.g.x = 0;
//	wi.g.y = 0;
//	wi.g.width = 480;
//	wi.g.height = 272;
//	wi.g.parent = 0;
//	wi.text = "Container";
//	wi.customDraw = 0;
//	wi.customParam = 0;
//	wi.customStyle = 0;
//	createDoorOpenBG = gwinContainerCreate(0, &wi, 0);
//	
//	//Create the image object 
//	
//	// create button widget: default_pg
//	wi.g.show = TRUE;
//	wi.g.x = 0;
//	wi.g.y = 0;
//	wi.g.width = 480;
//	wi.g.height = 272;
//	wi.g.parent = ghContainerPage0;
//	default_pg = gwinImageCreate(0, &wi.g)z;
	


		gdispImageOpenFile(&myImage, "spices1.BMP");
		gdispImageDraw(&myImage, 0, 0, 480, 272, 0, 0);
		gdispImageClose(&myImage);
		gfxSleepMilliseconds(1000);                                                                                                                                                                                                                                   
		gdispImageOpenFile(&myImage, "spices.BMP");
		gdispImageDraw(&myImage, 0, 0, 480, 272, 0, 0);
		gdispImageClose(&myImage);
		//gwinImageCache(&myImage);
	//	gdispImageClose(&myImage);
	//gwinImageOpenMemory(default_pg , dooropenbg);
	
//gwinImageOpenMemory(default_pg, access_control);
}
static void createPagePage0(void)
{
	
	
	GWidgetInit wi;
	gwinWidgetClearInit(&wi);
	// create container widget: ghContainerPage0
	wi.g.show = TRUE;
	wi.g.x = 0;
	wi.g.y = 0;
	wi.g.width = 480;
	wi.g.height = 272;
	wi.g.parent = 0;
	wi.text = "Container";
	wi.customDraw = 0;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghContainerPage0 = gwinContainerCreate(0, &wi, 0);

	// create button widget: default_pg
	wi.g.show = TRUE;
	wi.g.x = 0;
	wi.g.y = 0;
	wi.g.width = 480;
	wi.g.height = 272;
	wi.g.parent = ghContainerPage0;
	default_pg = gwinImageCreate(0, &wi.g);
	//gwinImageOpenFile(default_pg, "rsc/ACCESS_CONTROL.BMP");
	gwinImageOpenMemory(default_pg, access_control);

	// create button widget: touch_button_df_pg
	wi.g.show = TRUE;  
	wi.g.x = 200;
	wi.g.y = 20;
	wi.g.width = 120;
	wi.g.height = 20;
	wi.g.parent = ghContainerPage0;
	wi.text = "DEMO";
	wi.customDraw = gwinButtonDraw_Rounded;
	wi.customParam = 0;
	wi.customStyle = &white;
	touch_button_df_pg = gwinButtonCreate(0, &wi);
	gwinSetFont(touch_button_df_pg, dejavu_sans_16);
	gwinRedraw(touch_button_df_pg);
}

static void createPagePage1(void)
{
	//GWidgetInit wi;
	gwinWidgetClearInit(&wi);


	// create container widget: ghContainerPage1
	wi.g.show = FALSE; // Default is TRUE :? I changed to false sinc it's just a container
	wi.g.x = 0;
	wi.g.y = 0;
	wi.g.width = 480;
	wi.g.height = 272;
	wi.g.parent = 0;
	wi.text = "Container";
	wi.customDraw = 0;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghContainerPage1 = gwinContainerCreate(0, &wi, 0); // Create a blank container

	// Create keyboard widget: ghKeyboard1
	wi.g.show = TRUE;
	wi.g.x = 0;
	wi.g.y = 124;
	wi.g.width = 483;
	wi.g.height = 148;
	wi.g.parent = ghContainerPage1;
	wi.text = "Keyboard1";
	wi.customDraw = gwinKeyboardDraw_Normal;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghKeyboard1 = gwinKeyboardCreate(0, &wi); // having keyboard capability 

	// Create textedit widget: ghTextedit1
	wi.g.show = TRUE;
	wi.g.x = 0;
	wi.g.y = 39;
	wi.g.width = 280;
	wi.g.height = 61;
	wi.g.parent = ghContainerPage1;
	wi.text = "Pin:";
	wi.customDraw = gwinTexteditDefaultDraw;
	wi.customParam = 0;
	wi.customStyle = &white;
	ghTextedit1 = gwinTexteditCreate(0, &wi, 5);
	gwinSetFont(ghTextedit1,dejavu_sans_16 );
	gwinRedraw(ghTextedit1);

	// Create label widget: ghLabel1
	wi.g.show = TRUE;
	wi.g.x = 405;
	wi.g.y = 0;
	wi.g.width = 78;
	wi.g.height = 18;
	wi.g.parent = ghContainerPage1;
	wi.text = "08:55:39";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabel1 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabel1, FALSE);

	// Create label widget: ghLabel2
	wi.g.show = TRUE;
	wi.g.x = 340;
	wi.g.y = 0;
	wi.g.width = 38;
	wi.g.height = 20;
	wi.g.parent = ghContainerPage1;
	wi.text = "Saturday";
	wi.customDraw = gwinLabelDrawJustifiedLeft;
	wi.customParam = 0;
	wi.customStyle = 0;
	ghLabel2 = gwinLabelCreate(0, &wi);
	gwinLabelSetBorder(ghLabel2, FALSE);
	
	
	wi.g.show = TRUE;
	wi.g.x = 380;
	wi.g.y = 30;
	wi.g.width = 97;
	wi.g.height = 53;
	wi.g.parent = ghContainerPage1;
	wi.text = "PG1";
	wi.customDraw = gwinButtonDraw_Rounded;
	wi.customParam = 0;
	wi.customStyle = &black;
	ghButton1 = gwinButtonCreate(0, &wi);
	gwinSetFont(ghButton1, dejavu_sans_16);
	gwinRedraw(ghButton1);
}

void guiShowPage(unsigned pageIndex)
{
	// Hide all pages
	gwinHide(ghContainerPage0);
	//gwinHide(ghContainerPage1);

	// Show page selected page
	switch (pageIndex) {
	case 0:
		gwinShow(ghContainerPage0);
		break;

	case 1:
		gwinShow(ghContainerPage1);
		break;

	default:
		break;
	}
}

void guiCreate(void)
{
	GWidgetInit wi;

	// Prepare fonts
	//dejavu_sans_16 = gdispOpenFont("DejaVuSans16");
	//dejavu_sans_12 = gdispOpenFont("DejaVuSans12");
	//dejavu_sans_24 = gdispOpenFont("DejaVuSans24");

	// Prepare images

	// GWIN settings
	gwinWidgetClearInit(&wi);
	gwinSetDefaultFont(dejavu_sans_16);
	gwinSetDefaultStyle(&white, FALSE);
	gwinSetDefaultColor(black_studio);
	gwinSetDefaultBgColor(white_studio);

	// Create all the display pages
	//createPagePage0();
	gwinHide(ghContainerPage0);
	createPagePage1();

	// Select the default display page
	guiShowPage(1);

}

void guiEventLoop(void)
{
	
	GEvent* pe;
	GEventKeyboard *	pk;
	unsigned			i;
	while (1) {
		// Get an event
		pe = geventEventWait(&glistener,TIME_INFINITE );
		switch (pe->type) {
			{
			case GEVENT_GWIN_BUTTON:
				if (((GEventGWinButton*)pe)->gwin == touch_button_df_pg) {

						gwinDestroy(ghContainerPage0);
						//guiCreate();
					//gwinPrintf(ghTextedit1, "fgdfg");
					createPagePage1();
					guiShowPage(1);
				
					//(((GEventGWinButton*)pe)->gwin == ghButton1)	
							
					break;
				}
				
				else if (((GEventGWinButton*)pe)->gwin == ghButton1)  // main page
					
				{
						gwinHide(ghContainerPage1);
						gwinDestroy(ghContainerPage1);
						
					//createPagePage0();
					//guiShowPage(0);
					createWidgets();
					break;
					
				}
				
			}
			break;
			
			
				case GEVENT_KEYBOARD:
			// This is a keyboard event from a keyboard source which must be separately listened to.
			// It is not sent on the gwin event source even though in this case it was generated by a gwin widget.
			pk = (GEventKeyboard *)pe;

			gwinPrintf(ghConsole, "KEYSTATE: 0x%04X [ %s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s]",
				pk->keystate,
				(!pk->keystate ? "NONE " : ""),
				((pk->keystate & GKEYSTATE_KEYUP) ? "KEYUP " : ""),
				((pk->keystate & GKEYSTATE_REPEAT) ? "REPEAT " : ""),
				((pk->keystate & GKEYSTATE_SPECIAL) ? "SPECIAL " : ""),
				((pk->keystate & GKEYSTATE_RAW) ? "RAW " : ""),
				((pk->keystate & GKEYSTATE_SHIFT_L) ? "LSHIFT " : ""),
				((pk->keystate & GKEYSTATE_SHIFT_R) ? "RSHIFT " : ""),
				((pk->keystate & GKEYSTATE_CTRL_L) ? "LCTRL " : ""),
				((pk->keystate & GKEYSTATE_CTRL_R) ? "RCTRL " : ""),
				((pk->keystate & GKEYSTATE_ALT_L) ? "LALT " : ""),
				((pk->keystate & GKEYSTATE_ALT_R) ? "RALT " : ""),
				((pk->keystate & GKEYSTATE_FN) ? "FN " : ""),
				((pk->keystate & GKEYSTATE_COMPOSE) ? "COMPOSE " : ""),
				((pk->keystate & GKEYSTATE_WINKEY) ? "WINKEY " : ""),
				((pk->keystate & GKEYSTATE_CAPSLOCK) ? "CAPSLOCK " : ""),
				((pk->keystate & GKEYSTATE_NUMLOCK) ? "NUMLOCK " : ""),
				((pk->keystate & GKEYSTATE_SCROLLLOCK) ? "SCROLLLOCK " : "")
				);
			if (pk->bytecount) {
				gwinPrintf(ghConsole, " Keys:");
				for (i = 0; i < pk->bytecount; i++)
					gwinPrintf(ghConsole, " 0x%02X", (uint8_t)pk->c[i]);
				gwinPrintf(ghConsole, " [");
				for (i = 0; i < pk->bytecount; i++)
					gwinPrintf(ghConsole, "%c", pk->c[i] >= ' ' && pk->c[i] <= '~' ? pk->c[i] : ' ');
				gwinPrintf(ghConsole, "]");
			}
			gwinPrintf(ghConsole, "\n");
			break;

					
					
			default:
							
				break;
		}

	
}
	}

void rundisplay()
{
	GEvent *			pe;
	GEventKeyboard *	pk;
	unsigned			i = 0;
	gfxInit();
	while(1)
	{
		createDoorOpen();
	}
		dejavu_sans_16 = gdispOpenFont("DejaVuSans16");
	gwinSetDefaultFont(dejavu_sans_16);
	gwinSetDefaultStyle(&WhiteWidgetStyle, FALSE);
	gdispClear(White);	
	createPagePage0();//Front Finger Picture
		guiShowPage(0);
		
	//guiCreate();
		
	
	//createWidgets();
	//gwinAttachMouse(0);
	geventListenerInit(&glistener);
	gwinAttachListener(&glistener);
	geventAttachSource(&glistener, gwinKeyboardGetEventSource(ghKeyboard), GLISTEN_KEYTRANSITIONS|GLISTEN_KEYUP);
	//geventAttachSource(&glistener, gwinKeyboardGetEventSource(ghKeyboard1), GLISTEN_KEYTRANSITIONS|GLISTEN_KEYUP|GKEYBOARD_ALL_INSTANCES);
	//guiEventLoop();
	while (1) {
		// Get an event
		pe = geventEventWait(&glistener,TIME_INFINITE );
		switch (pe->type) 
			
		
			{
			case GEVENT_GWIN_BUTTON:{
				if (((GEventGWinButton*)pe)->gwin == touch_button_df_pg) {
						gwinHide(ghContainerPage1);
						gwinDestroy(ghContainerPage0);
						//guiCreate();
					//gwinPrintf(ghTextedit1, "fgdfg");
				//	createPagePage1();
					//guiShowPage(1);
	dejavu_sans_16 = gdispOpenFont("DejaVuSans16");
	gwinSetDefaultFont(dejavu_sans_16);
	gwinSetDefaultStyle(&WhiteWidgetStyle, FALSE);
	gdispClear(White);	
	createWidgets();
				
					//(((GEventGWinButton*)pe)->gwin == ghButton1)	
							
					break;
				}
				else if (((GEventGWinButton*)pe)->gwin == ghButton1)  // main page
					
				{
						gwinHide(ghContainerPage1);
						gwinDestroy(ghContainerPage1);
						
					//createPagePage0();
					//guiShowPage(0);
					//createWidgets();
					break;
					
				}
				
					}
			break;
			
			case GEVENT_GWIN_KEYBOARD:
			// This is a widget event generated on the standard gwin event source
			gwinPrintf(ghConsole, "Keyboard visibility has changed\n");
			break;
				case GEVENT_KEYBOARD:
			// This is a keyboard event from a keyboard source which must be separately listened to.
			// It is not sent on the gwin event source even though in this case it was generated by a gwin widget.
			pk = (GEventKeyboard *)pe;

//			gwinPrintf(ghConsole, "KEYSTATE: 0x%04X [ %s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s]",
//				pk->keystate,
////				(!pk->keystate ? "NONE " : ""),
//				((pk->keystate & GKEYSTATE_KEYUP) ? "KEYUP " : ""),
//				((pk->keystate & GKEYSTATE_REPEAT) ? "REPEAT " : ""),
//				((pk->keystate & GKEYSTATE_SPECIAL) ? "SPECIAL " : ""),
//				((pk->keystate & GKEYSTATE_RAW) ? "RAW " : ""),
//				((pk->keystate & GKEYSTATE_SHIFT_L) ? "LSHIFT " : ""),
//				((pk->keystate & GKEYSTATE_SHIFT_R) ? "RSHIFT " : ""),
//				((pk->keystate & GKEYSTATE_CTRL_L) ? "LCTRL " : ""),
//				((pk->keystate & GKEYSTATE_CTRL_R) ? "RCTRL " : ""),
//				((pk->keystate & GKEYSTATE_ALT_L) ? "LALT " : ""),
//				((pk->keystate & GKEYSTATE_ALT_R) ? "RALT " : ""),
//				((pk->keystate & GKEYSTATE_FN) ? "FN " : ""),
//				((pk->keystate & GKEYSTATE_COMPOSE) ? "COMPOSE " : ""),
//				((pk->keystate & GKEYSTATE_WINKEY) ? "WINKEY " : ""),
//				((pk->keystate & GKEYSTATE_CAPSLOCK) ? "CAPSLOCK " : ""),
//				((pk->keystate & GKEYSTATE_NUMLOCK) ? "NUMLOCK " : ""),
//				((pk->keystate & GKEYSTATE_SCROLLLOCK) ? "SCROLLLOCK " : "")
//				);
			if (pk->bytecount) {
//				gwinPrintf(ghConsole, " Keys:");
			buffer1[i] = pk->c[0];
				i++;
//					gwinPrintf(ghConsole, " 0x%02X", (uint8_t)pk->c[i]);
//				gwinPrintf(ghConsole, " [");
//				for (i = 0; i < pk->bytecount; i++)
//					gwinPrintf(ghConsole, "%c", pk->c[i] >= ' ' && pk->c[i] <= '~' ? pk->c[i] : ' ');
//				gwinPrintf(ghConsole, "]");
				if (i == 4)
				{	
					
				
					if (buffer1[0] == '1' && buffer1[1] == '2' && buffer1[2] == '3' && buffer1[3] == '4')
					{	
						gwinPrintf(ghConsole, "password accepted");
						//Print Door Open Image
						gwinHide(ghContainerPage1);
						gwinDestroy(ghKeyboard);
						gwinDestroy(ghConsole);
						
						createDoorOpen();
						//gwinShow(createDoorOpenBG);
						//gfxSleepMilliseconds(10000);
					}
					else
					{
						gwinPrintf(ghConsole, "password wrong");
						//Print Door Closed Images			
					}
					i=0;
			}
			}
			gwinPrintf(ghConsole, "\n");
			break;

					
					
			default:
						gwinPrintf(ghConsole, "Unknown %d\n", pe->type);	
				break;
		}

	
}
}

static void createWidgets(void) {
	GWidgetInit		wi;

	gwinWidgetClearInit(&wi);

	// Create the console - set colors before making it visible
	wi.g.show = FALSE;
	wi.g.x = 0; wi.g.y = 0;
	wi.g.width = gdispGetWidth(); wi.g.height = gdispGetHeight()/2;
	ghConsole = gwinConsoleCreate(0, &wi.g);
	gwinSetColor(ghConsole, Black);
	gwinSetBgColor(ghConsole, HTML2COLOR(0xF0F0F0));
	gwinShow(ghConsole);
	gwinClear(ghConsole);

	// Create the keyboard
	wi.g.show = TRUE;
	wi.g.x = 0; wi.g.y = gdispGetHeight()/2;
	wi.g.width = gdispGetWidth(); wi.g.height = gdispGetHeight()/2;
	ghKeyboard = gwinKeyboardCreate(0, &wi);
	geventAttachSource(&glistener, gwinKeyboardGetEventSource(ghKeyboard), GLISTEN_KEYTRANSITIONS|GLISTEN_KEYUP);
}





