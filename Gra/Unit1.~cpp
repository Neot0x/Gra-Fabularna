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
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


//Zamknij Przycisk
void __fastcall TForm1::Button3Click(TObject *Sender)
{
        Close();
}
//---------------------------------------------------------------------------

//Nowa Gra Przycisk
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        Panel1->Visible=!Panel1->Visible;
        Panel2->Visible=!Panel2->Visible;

}
//---------------------------------------------------------------------------

//Stworz Postac Przycisk
void __fastcall TForm1::Button4Click(TObject *Sender)
{
        Panel2->Visible=!Panel2->Visible;
        Panel3->Visible=!Panel3->Visible;
}
//---------------------------------------------------------------------------

//Stworz losowa postac
void __fastcall TForm1::Button5Click(TObject *Sender)
{
        //int losuj_postac =  rand()% 3;
        switch(rand()% 3){
                case 0:
                        ComboBox1->ItemIndex = 0;
                break;
                case 1:
                        ComboBox1->ItemIndex = 1;
                break;
                case 2:
                        ComboBox1->ItemIndex = 2;
                break;
        }
        Edit1->Text = "Grzegorz";
        TForm2 *Form = new TForm2( this );
        Form->ShowModal();
}
//---------------------------------------------------------------------------

//Anuluj i wroc do menu  przycisk
void __fastcall TForm1::Button6Click(TObject *Sender)
{
        Panel2->Visible=!Panel2->Visible;
        Panel1->Visible=!Panel1->Visible;
}
//---------------------------------------------------------------------------


//Wroc przycisk
void __fastcall TForm1::Button7Click(TObject *Sender)
{
        Edit1->Text="";
        ComboBox1->ItemIndex = 0;
        Panel3->Visible=!Panel3->Visible;
        Panel2->Visible=!Panel2->Visible;
        Label6->Caption="";
        Label7->Caption="";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button9Click(TObject *Sender)
{
        if(Edit1->Text!=""){
        Label6->Caption = "Wkraczasz do walki jako:  \n"+ Edit1->Text +", " + ComboBox1->Text;
        Panel4->Visible = "true";
        switch(ComboBox1->ItemIndex){
                case 0:
                        Label7->Caption="Cechy Wojownika: \n - Du¿a liczba punktów zdrowia\n - Niskie obra¿enia";
                break;
                case 1:
                        Label7->Caption="Cechy £ucznika: \n - Œrednia ilosc punktów zdrowia\n - Œrednie obra¿enia";
                break;
                case 2:
                        Label7->Caption="Cechy Maga: \n - Ma³a liczba punktów zdrowia\n - Wysokie obra¿enia";
                break;
        }
        Button8->Enabled = "true";
        }else{
                Label6->Caption="Podaj imie bohatera";
        }
}
//---------------------------------------------------------------------------


//Jak grac Przycisk
void __fastcall TForm1::Button2Click(TObject *Sender)
{
        Panel1->Visible=!Panel1->Visible;
        Panel5->Visible=!Panel5->Visible;
}
//---------------------------------------------------------------------------

//Wroc Jak grac Przycisk
void __fastcall TForm1::Button10Click(TObject *Sender)
{
        Panel5->Visible=!Panel5->Visible;
        Panel1->Visible=!Panel1->Visible;
}
//---------------------------------------------------------------------------

//Graj Przycisk
void __fastcall TForm1::Button8Click(TObject *Sender)
{
          TForm2 *Form = new TForm2( this );
          Form->ShowModal();
}
//---------------------------------------------------------------------------





