//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
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
byte CantPal(AnsiString cad){
	byte cont;
	cad=cad.Trim();
	if(cad.Length()==0){
		cont=0;
	}else{
		byte p=cad.LastDelimiter(" ");
		AnsiString pal=cad.SubString(p+1,cad.Length()-p);
		cad.SetLength(p-1);
		cont=CantPal(cad)+1;
	}
	return cont;
}

void __fastcall TForm1::EJ11Click(TObject *Sender)
{
	Edit2->Text=CantPal(Edit1->Text);
}
//---------------------------------------------------------------------------
void DeleteVoc(AnsiString &cad){      // en proceso
	AnsiString lol="aeiouAEIOUáéíúóÁÉÍÚÓ";
	if(cad.Length()>0){
		AnsiString pal=cad[cad.Length(),1];
		cad.SetLength(cad.Length()-1);
		DeleteVoc(cad);
		if(pal.Pos(lol)!=0){


		}
	}
}
void __fastcall TForm1::EJ21Click(TObject *Sender)
{
	AnsiString cad=Edit1->Text;
	DeleteVoc(cad);
	Edit2->Text=StrToInt(cad);
}
//---------------------------------------------------------------------------
void DeletePrim(AnsiString &cad){
	cad=cad.Trim();
	if(cad.Length()>0){
		byte p=cad.LastDelimiter(" ");
		AnsiString pal=cad.SubString(p+1,cad.Length()-p);
		cad.SetLength(p-1);
		DeletePrim(cad);
        pal=cad.Delete(cad.Length(),1);
		cad=pal+cad;
	}
}
void __fastcall TForm1::EJ41Click(TObject *Sender)
{
	AnsiString cad=Edit1->TextHint;
	DeletePrim(cad);
	Edit2->Text=cad;
}
//---------------------------------------------------------------------------
AnsiString NumPal(AnsiString cad){
	AnsiString num;
	AnsiString numero="0123456789";
	if(cad.Length()>0 && numero.Pos(cad[cad.Length()])>0){
		AnsiString n=cad[cad.Length()];
		cad.Delete(cad.Length(),1);
		num=NumPal(cad);
		num=num+n;
	}
	return num;
}
Cardinal MayNumCad(AnsiString cad){
	Cardinal num;
	AnsiString numero="0123456789";
	if(cad.Length()==0){
		num=0;
	}else{
		AnsiString ad=cad[cad.Length()];
		if(numero.Pos(ad)>0){
			AnsiString numero2=NumPal(cad);
			cad.Delete(cad.Length()-numero2.Length()+1,numero2.Length());
			num=MayNumCad(cad);
			if(StrToInt(numero2)>num){
				num=StrToInt(numero2);
			}
		}else{
			cad.Delete(cad.Length(),1);
			num=MayNumCad(cad);
		}
	}
	return num;
}
void __fastcall TForm1::EJ51Click(TObject *Sender)
{
	Edit2->Text=StrToInt(MayNumCad(Edit1->Text));
}
//---------------------------------------------------------------------------

