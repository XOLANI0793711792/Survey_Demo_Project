//---------------------------------------------------------------------------

#ifndef AverageOutComeH
#define AverageOutComeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TEdit *edtTotalNumberSurveys;
	TEdit *ediAgeAverage;
	TEdit *edtOldPerson;
	TEdit *edtYoungPerson;
	TEdit *edtPeopleLikedPizza;
	TEdit *edtPeopleLikePasta;
	TEdit *edtPeopleLikePap;
	TEdit *edtPeopleEatOut;
	TEdit *edtPeopleWatchMovie;
	TEdit *edtPeopleWatchTv;
	TEdit *edtPeopleListenRadio;
	TButton *edtOkay;
	TImage *edtView;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	void __fastcall edtOkayClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
