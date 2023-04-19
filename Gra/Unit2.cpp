//---------------------------------------------------------------------------

#include <vcl.h>
#include <cstdlib>
#include <cstdlib.h>
#include <stdlib.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{

}
void __fastcall TForm2::FormCreate(TObject *Sender)
{
       Label1->Caption="Grasz jako: " + Form1->Edit1->Text+ " " + Form1->ComboBox1->Text;
}
//---------------------------------------------------------------------------

// Pauza
void __fastcall TForm2::Button1Click(TObject *Sender)
{
        TForm3 *Form = new TForm3( this );
        Form->ShowModal();
}

void __fastcall TForm2::Memo1Click(TObject *Sender)
{
        Memo1->Visible=!Memo1->Visible;
        Image2->Visible=!Image2->Visible;
        Label2->Visible=!Label2->Visible;
        Label3->Visible=!Label3->Visible;
        Label4->Visible=!Label4->Visible;
        Button2->Visible=!Button2->Visible;

}
//---------------------------------------------------------------------------



void __fastcall TForm2::Button2Click(TObject *Sender)
{
        int hp = 0;
        int dmg = 0;
        switch(Form1->ComboBox1->ItemIndex){
                case 0:
                Image3->Visible=!Image3->Visible;
                hp = 50;
                dmg = 8;
                break;
                case 1:
                Image4->Visible=!Image4->Visible;
                hp = 40;
                dmg = 10;
                break;
                case 2:
                Image5->Visible=!Image5->Visible;
                hp = 30;
                dmg = 12;
                break;
        }
        int goblin_hp = 15;
        do{
           int los = rand()% 20 + 1;
           if(los >= 10){
                int obr = rand()%6 + dmg;
                goblin_hp = goblin_hp - obr;
           }

           //Label4->Caption="Stan zdrowia: " + hp;

           int los_g = rand()% 20 + 1;
           if(los_g >= 10){
                int obr_g = rand()%4 + 1;
                hp = hp - obr_g;
           }

           //Label3->Caption="Stan zdrowia: " + hp;

        }while(goblin_hp>0);

        Label3->Caption=hp;
        Label4->Caption=goblin_hp;
        Button2->Enabled=!Button2->Enabled;
        Label5->Visible=!Label5->Visible;
        Button3->Visible=!Button3->Visible;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button3Click(TObject *Sender)
{
        Button2->Enabled=!Button2->Enabled;
        Label5->Visible=!Label5->Visible;
        Button3->Visible=!Button3->Visible;
        Image2->Visible=!Image2->Visible;
        Label2->Visible=!Label2->Visible;
        Label3->Visible=!Label3->Visible;
        Label4->Visible=!Label4->Visible;
        Button2->Visible=!Button2->Visible;
        Memo2->Visible=!Memo2->Visible;
        Image6->Visible=!Image6->Visible;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Memo2Click(TObject *Sender)
{
        Memo2->Visible=!Memo2->Visible;
        Panel1->Visible=!Panel1->Visible;

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button4Click(TObject *Sender)
{
        int zgadywana = StrToInt(Edit1->Text);
        int losowana = rand()%10 + 1;
        if( losowana == zgadywana){
                Label6->Caption="Tak! To ta licza!";
                Memo3->Visible=!Memo3->Visible;
                Button4->Enabled=!Button4->Enabled;

        }else{
                Label6->Caption="Nie! Losuje nowa liczbe od 1 do 10!";
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Memo3Click(TObject *Sender)
{
       Image6->Visible=!Image6->Visible;
       Panel1->Visible=!Panel1->Visible;
       Memo3->Visible=!Memo3->Visible;
       Image7->Visible=!Image7->Visible;
       Memo4->Visible=!Memo4->Visible;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Memo4Click(TObject *Sender)
{
       Memo4->Visible=!Memo4->Visible;
       Image8->Visible=!Image8->Visible;
       Image8->Left = 500;
       Image8->Left = 450;
       Image8->Left = 400;
       Image8->Left = 350;
       Image8->Left = 300;
       Image8->Left = 250;
       Image8->Left = 200;
       Image8->Left = 150;
       Button5->Visible=!Button5->Visible;
       
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button5Click(TObject *Sender)
{
        Button5->Visible=!Button5->Visible;
        int hp = 0;
        int dmg = 0;
        switch(Form1->ComboBox1->ItemIndex){
                case 0:
                hp = 50;
                dmg = 8;
                break;
                case 1:
                hp = 40;
                dmg = 10;
                break;
                case 2:
                hp = 30;
                dmg = 12;
                break;
        }
        int smok_hp = 150;
        Label7->Visible=!Label7->Visible;
        Label7->Caption=hp;
        Label8->Visible=!Label8->Visible;
        Label8->Caption=smok_hp;

        int los = rand()% 20 + 1;
           if(los >= 10){
                int obr = rand()%6 + dmg;
                smok_hp = smok_hp - obr;
           }
           Label8->Caption=smok_hp;


           int los_g = rand()% 20 + 1;
           if(los_g >= 10){
                int obr_s = rand()%15 + 1;
                hp = hp - obr_s;
           }
           Label7->Caption=hp;

        Memo5->Visible=!Memo5->Visible;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Memo5Click(TObject *Sender)
{
        Memo5->Visible=!Memo5->Visible;
        Memo6->Visible=!Memo6->Visible;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Memo6Click(TObject *Sender)
{
        Close();        
}
//---------------------------------------------------------------------------

