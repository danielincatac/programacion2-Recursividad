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
byte SumaPares(Cardinal n){
	byte sum;
	if(n==0){
		sum=0;
	}else{
		byte d=n%10;
		sum=SumaPares(n/10);
		if((d%2==0)){
			sum+=d;
		}
	}
    return sum;
}
void __fastcall TForm1::NUMEROS2Click(TObject *Sender)
{
    Edit2->Text=StrToInt(SumaPares(StrToInt(Edit1->Text)));
}
//---------------------------------------------------------------------------
void MoverMayor(Cardinal &n){
	if(n>9){
		byte d=n%10;
		n/=10;
		MoverMayor(n);
		if((n%10)>d){
			d=d*10+(n%10);
			n/=10;
			n=(n*100)+d;
		}else{
			n=n*10+d;
		}
	}
}
void __fastcall TForm1::EJ21Click(TObject *Sender)
{
	Cardinal n=StrToInt(Edit1->Text);
	MoverMayor(n);
	Edit2->Text=n;
}
//---------------------------------------------------------------------------
bool Ordenado(Cardinal n){
	bool b;
	if(n<10){
		b=true;
	}else{
		byte d=n%10;
		n/=10;
		b=Ordenado(n);
		if((n%10)>d)
			b=false;
	}
	return b;
}
void __fastcall TForm1::EJ31Click(TObject *Sender)
{
	Edit2->Text=BoolToStr(Ordenado(StrToInt(Edit1->Text)),true);
}
//---------------------------------------------------------------------------
byte CantDigPares(Cardinal n){
	byte cont;
	if(n<10){
		cont=0;
	}else{
		byte d=n%100;
		n/=10;
		cont=CantDigPares(n);
		if((d/10)%2==0&&(d%10)%2!=0)
			cont++;
	}
	return cont;
}
void __fastcall TForm1::EJ32Click(TObject *Sender)
{
	Edit2->Text=CantDigPares(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------
