//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TEdit *Edit1;
	TEdit *Edit2;
	TMenuItem *NUMERO1;
	TMenuItem *NUMERO2;
	TMenuItem *VECTORES1;
	TMenuItem *VECTORES2;
	TMenuItem *SUMADEPARES1;
	TMenuItem *MOVMAYORFINAL1;
	TMenuItem *VERFICARORDENADO1;
	TMenuItem *PARANTESDEUNIMPAR1;
	TStringGrid *StringGrid1;
	TMenuItem *CARGARRANDOM1;
	TButton *Button1;
	TMenuItem *CONTARPARES1;
	TStringGrid *StringGrid2;
	TMenuItem *ELIMINARDIG1;
	TMenuItem *INVERTIRENTREAYB1;
	TMenuItem *PONERXENPOS1;
	TMenuItem *VERFPALINDROME1;
	TMenuItem *FACTORIALNUM1;
	TMenuItem *NUMPRIM1;
	TMenuItem *INVERTIR1;
	TMenuItem *ELIMINARMDESEP1;
	TEdit *Edit3;
	TMenuItem *CARGARVOCALCAD1;
	TMenuItem *CARGARNUMORDEANDO1;
	TMenuItem *SUMABINARIO1;
	TMenuItem *CARGARCONELEMDELABECE1;
	TStringGrid *StringGrid3;
	TButton *Button2;
	TMenuItem *CARGAR1;
	TMenuItem *CARGAR21;
	TMenuItem *CARGAR31;
	TMenuItem *CARGAR41;
	TMenuItem *CARGARSERPIENTE1;
	TMenuItem *CARGARSERPIENTE21;
	TMenuItem *CARGARSERPIENTE31;
	TMenuItem *CARGARSERP41;
	TMenuItem *SERPIENTEDIAG1;
	void __fastcall SUMADEPARES1Click(TObject *Sender);
	void __fastcall MOVMAYORFINAL1Click(TObject *Sender);
	void __fastcall VERFICARORDENADO1Click(TObject *Sender);
	void __fastcall PARANTESDEUNIMPAR1Click(TObject *Sender);
	void __fastcall CARGARRANDOM1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall CONTARPARES1Click(TObject *Sender);
	void __fastcall ELIMINARDIG1Click(TObject *Sender);
	void __fastcall INVERTIRENTREAYB1Click(TObject *Sender);
	void __fastcall VERFPALINDROME1Click(TObject *Sender);
	void __fastcall FACTORIALNUM1Click(TObject *Sender);
	void __fastcall NUMPRIM1Click(TObject *Sender);
	void __fastcall INVERTIR1Click(TObject *Sender);
	void __fastcall ELIMINARMDESEP1Click(TObject *Sender);
	void __fastcall CARGARVOCALCAD1Click(TObject *Sender);
	void __fastcall CARGARNUMORDEANDO1Click(TObject *Sender);
	void __fastcall CARGARCONELEMDELABECE1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall CARGAR1Click(TObject *Sender);
	void __fastcall CARGAR21Click(TObject *Sender);
	void __fastcall CARGAR31Click(TObject *Sender);
	void __fastcall CARGAR41Click(TObject *Sender);
	void __fastcall CARGARSERPIENTE1Click(TObject *Sender);
	void __fastcall CARGARSERPIENTE21Click(TObject *Sender);
	void __fastcall CARGARSERPIENTE31Click(TObject *Sender);
	void __fastcall CARGARSERP41Click(TObject *Sender);
	void __fastcall SERPIENTEDIAG1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
