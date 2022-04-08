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
	TMenuItem *NUMERO1;
	TMenuItem *NUMERO2;
	TMenuItem *EJ11;
	TMenuItem *EJ21;
	TMenuItem *EJ22;
	TMenuItem *EJ41;
	TMenuItem *EJ51;
	void __fastcall EJ11Click(TObject *Sender);
	void __fastcall EJ21Click(TObject *Sender);
	void __fastcall EJ41Click(TObject *Sender);
	void __fastcall EJ51Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
