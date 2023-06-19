//---------------------------------------------------------------------------

#ifndef DataBaseH
#define DataBaseH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TDMod : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *ADOConnection1;
	TADODataSet *ADODataSet1;
	TDataSource *DataSource1;
	TADOQuery *ADOQuery1;
	TADOCommand *ADOCommand1;
	TADODataSet *ADODataSetTemp;
	TDataSource *DataSourceTemp;
	TADODataSet *ADODataSetTemp2;
	TDataSource *DataSourceTemp2;
private:	// User declarations
public:		// User declarations
	__fastcall TDMod(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDMod *DMod;
//---------------------------------------------------------------------------
#endif
