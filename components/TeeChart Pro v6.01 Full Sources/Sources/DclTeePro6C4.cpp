//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
USERES("dclteepro6C4.res");
USEPACKAGE("dclstd40.bpi");
USEPACKAGE("teepro6C4.bpi");
USEPACKAGE("dcltee6C4.bpi");
USEUNIT("TeeChartPro.pas");
USEPACKAGE("Tee6C4.bpi");
USEPACKAGE("TeeDB6C4.bpi");
USEPACKAGE("TeeUI6C4.bpi");
USEPACKAGE("vcl40.bpi");
USEPACKAGE("vcldb40.bpi");
USEPACKAGE("TeeLanguage6C4.bpi");
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------
//   Package source.
//---------------------------------------------------------------------------
int WINAPI DllEntryPoint(HINSTANCE hinst, unsigned long reason, void*)
{
        return 1;
}
//---------------------------------------------------------------------------
