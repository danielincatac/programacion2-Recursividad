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
	TMenuItem *CADENAS1;
	TMenuItem *CADENAS2;
	TMenuItem *EJ21;
	TMenuItem *EJ22;
	TMenuItem *EJ41;
	TEdit *Edit1;
	TEdit *Edit2;
	TMenuItem *EJ51;
	TMenuItem *EJ52;
	TMenuItem *EJ71;
	void __fastcall EJ51Click(TObject *Sender);
	void __fastcall EJ52Click(TObject *Sender);
	void __fastcall EJ71Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
