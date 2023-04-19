//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TButton *Button1;
        TImage *Image1;
        TMemo *Memo1;
        TImage *Image2;
        TLabel *Label2;
        TImage *Image3;
        TImage *Image4;
        TImage *Image5;
        TLabel *Label3;
        TLabel *Label4;
        TButton *Button2;
        TLabel *Label5;
        TButton *Button3;
        TImage *Image6;
        TMemo *Memo2;
        TPanel *Panel1;
        TButton *Button4;
        TEdit *Edit1;
        TLabel *Label6;
        TMemo *Memo3;
        TImage *Image7;
        TButton *Button5;
        TMemo *Memo4;
        TImage *Image8;
        TLabel *Label7;
        TLabel *Label8;
        TMemo *Memo5;
        TMemo *Memo6;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Memo1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Memo2Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Memo3Click(TObject *Sender);
        void __fastcall Memo4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Memo5Click(TObject *Sender);
        void __fastcall Memo6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
