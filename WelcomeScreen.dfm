object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 436
  ClientWidth = 604
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnShow = FormShow
  TextHeight = 15
  object edtWelcome: TImage
    Left = -8
    Top = 0
    Width = 625
    Height = 441
  end
  object edtFill: TButton
    Left = 240
    Top = 144
    Width = 113
    Height = 41
    Caption = 'Fill our survey'
    TabOrder = 0
    OnClick = edtFillClick
  end
  object edtView: TButton
    Left = 240
    Top = 216
    Width = 113
    Height = 41
    Caption = 'View our survey'
    TabOrder = 1
    OnClick = edtViewClick
  end
end
