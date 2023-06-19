//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "WelcomeScreen.h"
#include "UserInfo.h"
#include "AverageOutCome.h"
#include "DataBase.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::edtFillClick(TObject *Sender)
{

	Form2->Show();
	Form1->Hide();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::edtViewClick(TObject *Sender)
{
	Form3->Show();
	Form1->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormShow(TObject *Sender)
{
   edtWelcome->Picture->LoadFromFile("..//..//Pictures//photo-.jpg");
}
//---------------------------------------------------------------------------

