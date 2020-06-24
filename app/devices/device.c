/*
 * device.c
 */

#include "ezRTOS.h"
#include "device.h"

const osDevT ezDevList[NDEVS] =
{
    /* LED */
//    { 0, 0, "LEDs",
//      ledInit, ezAPIs->ostDevIoNull, ezAPIs->ostDevIoNull,
//      ezAPIs->ostDevIoNull, ezAPIs->ostDevIoNull, ezAPIs->ostDevIoNull,
//      ezAPIs->ostDevIoNull, ezAPIs->ostDevIoNull, ledControl, ezAPIs->ostDevIoNull
//    }
    { 0, 0, "LEDs",
      ledInit, NULL, NULL,
      NULL, NULL, NULL,
      NULL, NULL, ledControl, NULL
    },
    { 0, 0, "BTNs",
      btnInit, NULL, NULL,
      NULL, NULL, NULL,
      NULL, NULL, NULL, NULL
    }
};
