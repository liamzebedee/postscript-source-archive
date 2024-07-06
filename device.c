/* PostScript expansion module for devices

		Copyright 1983 -- Adobe Systems, Inc.
	    PostScript is a trademark of Adobe Systems, Inc.
NOTICE:  All information contained herein or attendant hereto is, and
remains, the property of Adobe Systems, Inc.  Many of the intellectual
and technical concepts contained herein are proprietary to Adobe Systems,
Inc. and may be covered by U.S. and Foreign Patents or Patents Pending or
are protected as trade secrets.  Any dissemination of this information or
reproduction of this material are strictly forbidden unless prior written
permission is obtained from Adobe Systems, Inc.

Original version: Chuck Geschke: November 15, 1983
Edit History:
Chuck Geschke: Sat Feb 11 10:03:43 1984
Doug Brotz: Wed Dec 21 16:04:15 1983
End Edit History.
*/


#include "postscript.h"


public procedure DeviceInit(reason)
  InitReason reason;
{
NullDeviceInit(reason);   /* must precede GraphicsInit ! */
#if !(cSANDPIPER || cEXPORT)
BandDeviceInit(reason);
#endif !(cSANDPIPER || cEXPORT)
FrameDeviceInit(reason);
#if !cSUN
VersatecDevInit(reason);
#endif !cSUN
InputDeviceInit(reason);
}
