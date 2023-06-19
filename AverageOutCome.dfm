object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 528
  ClientWidth = 677
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnShow = FormShow
  TextHeight = 15
  object edtView: TImage
    Left = -4
    Top = 0
    Width = 681
    Height = 520
  end
  object Label1: TLabel
    Left = 120
    Top = 8
    Width = 132
    Height = 15
    Caption = 'Total number of surveys: '
  end
  object Label2: TLabel
    Left = 152
    Top = 40
    Width = 71
    Height = 15
    Caption = 'Average age: '
  end
  object Label3: TLabel
    Left = 67
    Top = 66
    Width = 215
    Height = 15
    Caption = 'Oldest person who participated in survey'
  end
  object Label4: TLabel
    Left = 80
    Top = 127
    Width = 191
    Height = 15
    Caption = 'Percentage of people who like Pizza:'
  end
  object Label5: TLabel
    Left = 52
    Top = 95
    Width = 230
    Height = 15
    Caption = 'Youngest person who participated in survey'
  end
  object Label6: TLabel
    Left = 78
    Top = 156
    Width = 193
    Height = 15
    Caption = 'Percentage of people who like Pasta:'
  end
  object Label7: TLabel
    Left = 44
    Top = 185
    Width = 238
    Height = 15
    Caption = 'Percentage of people who like Pap and Wors:'
  end
  object Label8: TLabel
    Left = 120
    Top = 214
    Width = 114
    Height = 15
    Caption = 'People like to eat out:'
  end
  object Label9: TLabel
    Left = 99
    Top = 243
    Width = 153
    Height = 15
    Caption = 'People like to watch movies: '
  end
  object Label10: TLabel
    Left = 109
    Top = 272
    Width = 125
    Height = 15
    Caption = 'People like to watch TV:'
  end
  object Label11: TLabel
    Left = 99
    Top = 301
    Width = 169
    Height = 15
    Caption = 'People like to listen to the radio:'
  end
  object edtTotalNumberSurveys: TEdit
    Left = 288
    Top = 8
    Width = 121
    Height = 23
    TabOrder = 0
  end
  object ediAgeAverage: TEdit
    Left = 288
    Top = 37
    Width = 121
    Height = 23
    TabOrder = 1
  end
  object edtOldPerson: TEdit
    Left = 288
    Top = 66
    Width = 121
    Height = 23
    TabOrder = 2
  end
  object edtYoungPerson: TEdit
    Left = 288
    Top = 95
    Width = 121
    Height = 23
    TabOrder = 3
  end
  object edtPeopleLikedPizza: TEdit
    Left = 288
    Top = 124
    Width = 121
    Height = 23
    TabOrder = 4
  end
  object edtPeopleLikePasta: TEdit
    Left = 288
    Top = 153
    Width = 121
    Height = 23
    TabOrder = 5
  end
  object edtPeopleLikePap: TEdit
    Left = 288
    Top = 182
    Width = 121
    Height = 23
    TabOrder = 6
  end
  object edtPeopleEatOut: TEdit
    Left = 288
    Top = 211
    Width = 121
    Height = 23
    TabOrder = 7
  end
  object edtPeopleWatchMovie: TEdit
    Left = 288
    Top = 240
    Width = 121
    Height = 23
    TabOrder = 8
  end
  object edtPeopleWatchTv: TEdit
    Left = 288
    Top = 269
    Width = 121
    Height = 23
    TabOrder = 9
  end
  object edtPeopleListenRadio: TEdit
    Left = 288
    Top = 298
    Width = 121
    Height = 23
    TabOrder = 10
  end
  object edtOkay: TButton
    Left = 232
    Top = 361
    Width = 233
    Height = 48
    Caption = 'OK'
    TabOrder = 11
    OnClick = edtOkayClick
  end
end
