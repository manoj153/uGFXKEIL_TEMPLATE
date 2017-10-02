/******************************************************************************/
/* This file has been generated by the uGFX-Studio                            */
/*                                                                            */
/* http://ugfx.org                                                            */
/******************************************************************************/

#include "gui.h"
#include "gfx.h"

int main(int argc, char* argv[])
{
	(void)argc;
	(void)argv;

	gfxInit();
	gdispSetBacklight(100);
	gdispSetContrast(100);

	geventListenerInit(&gl);
	gwinAttachListener(&gl);

	guiCreate();

	while (1) {
		guiEventLoop();
	}

	return 0;
}

