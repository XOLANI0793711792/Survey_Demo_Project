//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UserInfo.h"
#include "AverageOutCome.h"
#include "DataBase.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::edtSubmitClick(TObject *Sender)
{

   Form2->Hide();
   Form3->Show();

	AnsiString surname = edtSurname->Text;
	AnsiString first_Name = edtFirstName->Text;
	int phone_number = StrToInt(edtContact->Text);
	TDate dateSign = FormatDateTime("yyyy/mm/dd",Now());
	int age = StrToInt(edtAge->Text);


	int eatOut = edtEatOut->ItemIndex+1;
	int watchMovie = edtWatchMovies->ItemIndex+1;
	int watchTv = edtWatchTv->ItemIndex+1;
	int listenRadio = edtRadio->ItemIndex+1;

	int pizz;
	int pasta;
	int papAndWors;
	int chickenStirFry;
	int beefStirFry;
	int other;

	if(edtPizza->Checked){
		pizz = 1;
	}else{
		pizz = 0;
	}

	if(ediPasta->Checked){
		pasta = 1;
	}else{
		pasta = 0;
	}

	if(edtPap->Checked){
		 papAndWors = 1;
	}else{
		papAndWors = 0;
	}

	if(edtChicken->Checked){
		chickenStirFry = 1;
	}else{
		chickenStirFry = 0;
	}

	if(edtBeef->Checked){
		beefStirFry = 1;
	}else{
		beefStirFry = 0;
	}

	if(edtOther->Checked){
		 other = 1;
	}else{
		other = 0;
	}

   AnsiString dataConnection = "Provider=Microsoft.ACE.OLEDB.12.0;Data ";
   dataConnection+="Source=C:\\Users\\Computer Engineering\\Desktop\\Final\\";
   dataConnection+="DataBase\\myIntern.accdb;Mode=ReadWrite;Persist Security Info=False";

   DMod->ADOConnection1->LoginPrompt = false;
   DMod->ADOConnection1->Connected = false;
   DMod->ADOConnection1->ConnectionString = dataConnection;
   DMod->ADOConnection1->Connected = true;

   DMod->ADODataSet1->Active = false;

   DMod->ADODataSet1->CommandText = "select * from survey";

   DMod->ADODataSet1->Connection = DMod->ADOConnection1;

   DMod->ADODataSet1->Active = true;

   DMod->DataSource1->DataSet = DMod->ADODataSet1;

  AnsiString maxValue = "Select Max(CustomerID) as maxV from survey";

  DMod->ADOQuery1->Close();
  DMod->ADOQuery1->Connection = DMod->ADOConnection1;
  DMod->ADOQuery1->SQL->Clear();
  DMod->ADOQuery1->SQL->Add(maxValue);
  DMod->ADOQuery1->Open();
  int number = DMod->ADOQuery1->Fields->FieldByName("maxV")->AsInteger; // 3+1

  number++;

  AnsiString newRecord = "INSERT INTO survey(CustomerID, Surname, FirstName, ";
  newRecord+="ContactNumber, SignDate, Age, Pizza, Pasta, PapWors, ChickenPap, ";
  newRecord+="Beefry, Other, eatOut, watchMovies, watchTv, listenRadio)VALUES ";
  newRecord+="(:ID, :SN, :FN, :CN, :SD, :AG, :PZZ, :PAP, :PAS, :CHN, :BEE, :OTH, :OUT, :MOV, :TV, :RAD)";

  DMod->ADOCommand1->Connection = DMod->ADOConnection1;
  DMod->ADOCommand1->CommandText = newRecord;
  DMod->ADOCommand1->Parameters->ParamByName("ID")->Value = number;
  DMod->ADOCommand1->Parameters->ParamByName("SN")->Value = surname;
  DMod->ADOCommand1->Parameters->ParamByName("FN")->Value = first_Name;
  DMod->ADOCommand1->Parameters->ParamByName("CN")->Value = phone_number;
  DMod->ADOCommand1->Parameters->ParamByName("SD")->Value = dateSign;
  DMod->ADOCommand1->Parameters->ParamByName("AG")->Value = age;
  //CHECKBOX
  DMod->ADOCommand1->Parameters->ParamByName("PZZ")->Value = pizz;
  DMod->ADOCommand1->Parameters->ParamByName("PAP")->Value = pasta;
  DMod->ADOCommand1->Parameters->ParamByName("PAS")->Value = papAndWors;
  DMod->ADOCommand1->Parameters->ParamByName("CHN")->Value = chickenStirFry;
  DMod->ADOCommand1->Parameters->ParamByName("BEE")->Value = beefStirFry;
  DMod->ADOCommand1->Parameters->ParamByName("OTH")->Value = other;
  //
  DMod->ADOCommand1->Parameters->ParamByName("OUT")->Value = eatOut;
  DMod->ADOCommand1->Parameters->ParamByName("MOV")->Value = watchMovie;
  DMod->ADOCommand1->Parameters->ParamByName("TV")->Value = watchTv;
  DMod->ADOCommand1->Parameters->ParamByName("RAD")->Value = listenRadio;



  DMod->ADOCommand1->Execute();
  DMod->ADODataSet1->Close();
  DMod->ADODataSet1->Open();

  double ageAverage = 0.0;
  double eatOutAverage = 0.0;
  double watchMoviesAverage = 0.0;
  double listenRadioAverage = 0.0;
  double watchTvAverage = 0.0;

  double pizzaFav = 0.0;
  double pastaFav = 0.0;
  double PapaWorsFav = 0.0;


	for (DMod->ADODataSet1->First(); !DMod->ADODataSet1->Eof; DMod->ADODataSet1->Next()) {

	  ageAverage +=DMod->ADODataSet1->FieldByName("Age")->AsInteger;
	  eatOutAverage +=DMod->ADODataSet1->FieldByName("eatOut")->AsInteger;
	  watchMoviesAverage +=DMod->ADODataSet1->FieldByName("watchMovies")->AsInteger;
	  watchTvAverage +=DMod->ADODataSet1->FieldByName("watchTv")->AsInteger;
	  listenRadioAverage +=DMod->ADODataSet1->FieldByName("listenRadio")->AsInteger;




	  if(DMod->ADODataSet1->FieldByName("Pizza")->AsInteger == 1){
		 pizzaFav++;
	  }

	   if(DMod->ADODataSet1->FieldByName("Pasta")->AsInteger == 1){
		 pastaFav++;
	  }

       if(DMod->ADODataSet1->FieldByName("PapWors")->AsInteger == 1){
		 PapaWorsFav++;
	  }
  }

  //Young Person

  DMod->ADODataSetTemp->Active = false;
  DMod->ADODataSetTemp->CommandText = "SELECT Min(Age) as young FROM survey";
  DMod->ADODataSetTemp->Connection = DMod->ADOConnection1;
  DMod->ADODataSetTemp->Active = true;

  int youngPerson = DMod->ADODataSetTemp->FieldByName("young")->AsInteger;

  //Old Person

  DMod->ADODataSetTemp2->Active = false;
  DMod->ADODataSetTemp2->CommandText = "SELECT Max(Age) as old FROM survey";
  DMod->ADODataSetTemp2->Connection = DMod->ADOConnection1;
  DMod->ADODataSetTemp2->Active = true;

  int oldPerson = DMod->ADODataSetTemp2->FieldByName("old")->AsInteger;


  Form3->edtOldPerson->Text = IntToStr(oldPerson);
  Form3->edtYoungPerson->Text = IntToStr(youngPerson);

  Form3->edtTotalNumberSurveys->Text=IntToStr(number);

  Form3->ediAgeAverage->Text = (FormatFloat("0.0",ageAverage/number));
  Form3->edtPeopleEatOut->Text = (FormatFloat("0.0",eatOutAverage/number));
  Form3->edtPeopleWatchMovie->Text = (FormatFloat("0.0",watchMoviesAverage/number));
  Form3->edtPeopleWatchTv->Text = (FormatFloat("0.0",watchTvAverage/number));
  Form3->edtPeopleListenRadio->Text = (FormatFloat("0.0",listenRadioAverage/number));

  double pizzaPerc = (pizzaFav/(number))*100;
  double pastaPerc = (pastaFav/(number))*100;
  double papAndWorsPerc = (PapaWorsFav/(number))*100;

  Form3->edtPeopleLikedPizza->Text= (FormatFloat("0.0",pizzaPerc))+"%";
  Form3->edtPeopleLikePasta->Text= (FormatFloat("0.0",pastaPerc))+"%";
  Form3->edtPeopleLikePap->Text= (FormatFloat("0.0",papAndWorsPerc))+"%";
}
//---------------------------------------------------------------------------



void __fastcall TForm2::FormShow(TObject *Sender)
{
   edtUser->Picture->LoadFromFile("..//..//Pictures//12.png");
   edtUser->Stretch = true;
}
//---------------------------------------------------------------------------

