//---------------------------------------------------------------------------

#include <vcl.h>
#include <cstdlib>
#include <cstdlib.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm3::Button2Click(TObject *Sender)
{
        Close();
}
//---------------------------------------------------------------------------
//generalnie nie wiem czemu musi to byc akurat w folderze z grafikami
//ale tylko tak dziala wiec nie ruszam.
