//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TEdit *Edit1;
	TEdit *Edit2;
	TMenuItem *NUMEROS1;
	TMenuItem *NUMEROS2;
	TMenuItem *EJ21;
	TMenuItem *EJ31;
	TMenuItem *EJ32;
	void __fastcall NUMEROS2Click(TObject *Sender);
	void __fastcall EJ21Click(TObject *Sender);
	void __fastcall EJ31Click(TObject *Sender);
	void __fastcall EJ32Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
