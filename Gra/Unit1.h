//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TPanel *Panel2;
        TPanel *Panel3;
        TLabel *Label1;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TButton *Button5;
        TButton *Button6;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TEdit *Edit1;
        TComboBox *ComboBox1;
        TButton *Button7;
        TLabel *Label5;
        TButton *Button8;
        TButton *Button9;
        TPanel *Panel4;
        TLabel *Label6;
        TLabel *Label7;
        TPanel *Panel5;
        TLabel *Label8;
        TLabel *Label9;
        TButton *Button10;
        TMemo *Memo1;
        TLabel *Label10;
        TLabel *Label11;
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Button9Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button10Click(TObject *Sender);
        void __fastcall Button8Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
