//---------------------------------------------------------------------------

#ifndef UserInfoH
#define UserInfoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label9;
	TEdit *edtSurname;
	TEdit *edtFirstName;
	TEdit *edtContact;
	TEdit *edtAge;
	TCheckBox *edtPizza;
	TCheckBox *ediPasta;
	TCheckBox *edtPap;
	TCheckBox *edtChicken;
	TCheckBox *edtBeef;
	TCheckBox *edtOther;
	TButton *edtSubmit;
	TDateTimePicker *edtDate;
	TRadioGroup *edtEatOut;
	TRadioGroup *edtWatchMovies;
	TRadioGroup *edtWatchTv;
	TRadioGroup *edtRadio;
	TImage *edtUser;
	TLabel *Label10;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label16;
	TLabel *Label1;
	void __fastcall edtSubmitClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
