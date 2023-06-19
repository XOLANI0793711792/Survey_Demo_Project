object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 688
  ClientWidth = 804
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnShow = FormShow
  TextHeight = 15
  object Label9: TLabel
    Left = 8
    Top = 456
    Width = 399
    Height = 15
    Caption = 
      'On a scale of 1 to 5 indicate whether you strongly agree to stro' +
      'ngly disagree'
  end
  object edtUser: TImage
    Left = -8
    Top = -9
    Width = 817
    Height = 689
  end
  object Label10: TLabel
    Left = 8
    Top = 56
    Width = 83
    Height = 15
    Caption = 'Personal Details'
  end
  object Label11: TLabel
    Left = 8
    Top = 24
    Width = 82
    Height = 15
    Caption = 'Take our Survey'
  end
  object Label12: TLabel
    Left = 82
    Top = 96
    Width = 47
    Height = 15
    Caption = 'Surname'
  end
  object Label13: TLabel
    Left = 81
    Top = 131
    Width = 57
    Height = 15
    Caption = 'First Name'
  end
  object Label14: TLabel
    Left = 81
    Top = 168
    Width = 89
    Height = 15
    Caption = 'Contact Number'
  end
  object Label15: TLabel
    Left = 81
    Top = 208
    Width = 24
    Height = 15
    Caption = 'Date'
  end
  object Label16: TLabel
    Left = 81
    Top = 237
    Width = 21
    Height = 15
    Caption = 'Age'
  end
  object Label1: TLabel
    Left = 8
    Top = 272
    Width = 350
    Height = 15
    Caption = 'What is your favourite food? (You can choose more than 1 answer)'
  end
  object edtSurname: TEdit
    Left = 176
    Top = 93
    Width = 121
    Height = 23
    TabOrder = 0
    TextHint = 'Enter Surname'
  end
  object edtFirstName: TEdit
    Left = 176
    Top = 128
    Width = 121
    Height = 23
    TabOrder = 1
    TextHint = 'Enter First Name'
  end
  object edtContact: TEdit
    Left = 176
    Top = 165
    Width = 121
    Height = 23
    TabOrder = 2
    TextHint = 'Phone Number'
  end
  object edtAge: TEdit
    Left = 176
    Top = 229
    Width = 121
    Height = 23
    TabOrder = 3
    TextHint = 'Provide Age'
  end
  object edtPizza: TCheckBox
    Left = 24
    Top = 304
    Width = 97
    Height = 17
    Caption = 'Pizza'
    TabOrder = 4
  end
  object ediPasta: TCheckBox
    Left = 24
    Top = 327
    Width = 97
    Height = 17
    Caption = 'Pasta'
    TabOrder = 5
  end
  object edtPap: TCheckBox
    Left = 24
    Top = 350
    Width = 97
    Height = 17
    Caption = 'Pap and Wors'
    TabOrder = 6
  end
  object edtChicken: TCheckBox
    Left = 24
    Top = 373
    Width = 105
    Height = 17
    Caption = 'Chicken stir fry'
    TabOrder = 7
  end
  object edtBeef: TCheckBox
    Left = 24
    Top = 396
    Width = 97
    Height = 17
    Caption = 'Beef stir fry'
    TabOrder = 8
  end
  object edtOther: TCheckBox
    Left = 24
    Top = 419
    Width = 97
    Height = 17
    Caption = 'Other'
    TabOrder = 9
  end
  object edtSubmit: TButton
    Left = 308
    Top = 603
    Width = 173
    Height = 54
    Caption = 'Submit'
    TabOrder = 10
    OnClick = edtSubmitClick
  end
  object edtDate: TDateTimePicker
    Left = 176
    Top = 200
    Width = 121
    Height = 23
    Date = 45093.000000000000000000
    Time = 0.532525706017622700
    TabOrder = 11
  end
  object edtEatOut: TRadioGroup
    Left = 8
    Top = 477
    Width = 185
    Height = 105
    Caption = 'I like to eat out '
    Items.Strings = (
      'Strongly Agree(1)'
      'Agree(2)'
      'Neutral(3)'
      'Disagree(4)'
      'Strongly disagree(5)')
    TabOrder = 12
  end
  object edtWatchMovies: TRadioGroup
    Left = 199
    Top = 477
    Width = 185
    Height = 105
    Caption = 'I like to watch movies'
    Items.Strings = (
      'Strongly Agree(1)'
      'Agree(2)'
      'Neutral(3)'
      'Disagree(4)'
      'Strongly disagree(5)')
    TabOrder = 13
  end
  object edtWatchTv: TRadioGroup
    Left = 390
    Top = 477
    Width = 185
    Height = 105
    Caption = 'I like to watch TV'
    Items.Strings = (
      'Strongly Agree(1)'
      'Agree(2)'
      'Neutral(3)'
      'Disagree(4)'
      'Strongly disagree(5)')
    TabOrder = 14
  end
  object edtRadio: TRadioGroup
    Left = 581
    Top = 477
    Width = 172
    Height = 105
    Caption = 'I like to listen to the radio '
    Items.Strings = (
      'Strongly Agree(1)'
      'Agree(2)'
      'Neutral(3)'
      'Disagree(4)'
      'Strongly disagree(5)')
    TabOrder = 15
  end
end
