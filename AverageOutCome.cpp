//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "WelcomeScreen.h"
#include "AverageOutCome.h"
#include "DataBase.h"
#include "UserInfo.h"
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
void __fastcall TForm3::edtOkayClick(TObject *Sender)
{
	Form3->Hide();
	Form1->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormShow(TObject *Sender)
{
	  ////
	edtView->Picture->LoadFromFile("..//..//Pictures//12.png");
    edtView->Stretch = true;
}
//---------------------------------------------------------------------------


