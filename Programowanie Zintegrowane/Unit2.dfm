object Form2: TForm2
  Left = 471
  Top = 120
  Width = 298
  Height = 551
  Caption = 'Form2'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 16
    Width = 239
    Height = 42
    Caption = 'Kreator Postaci'
    Font.Charset = OEM_CHARSET
    Font.Color = clWindowText
    Font.Height = -37
    Font.Name = 'Roman'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 16
    Top = 80
    Width = 22
    Height = 13
    Caption = 'Imie:'
  end
  object Label3: TLabel
    Left = 19
    Top = 152
    Width = 63
    Height = 13
    Caption = 'Klasa postaci'
  end
  object Label4: TLabel
    Left = 16
    Top = 280
    Width = 129
    Height = 25
  end
  object Button1: TButton
    Left = 24
    Top = 440
    Width = 185
    Height = 57
    Caption = 'Anuluj'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 16
    Top = 104
    Width = 193
    Height = 21
    TabOrder = 1
  end
  object Button2: TButton
    Left = 16
    Top = 224
    Width = 193
    Height = 41
    Caption = 'Stworz'
    TabOrder = 2
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 16
    Top = 344
    Width = 185
    Height = 25
    Caption = 'Graj'
    Enabled = False
    TabOrder = 3
  end
  object ComboBox1: TComboBox
    Left = 16
    Top = 176
    Width = 193
    Height = 21
    ItemHeight = 13
    ItemIndex = 0
    TabOrder = 4
    Text = 'Wojownik'
    Items.Strings = (
      'Wojownik'
      #321'ucznik'
      'Mag')
  end
end
