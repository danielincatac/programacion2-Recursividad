object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 441
  ClientWidth = 624
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Menu = MainMenu1
  PixelsPerInch = 96
  TextHeight = 15
  object Edit1: TEdit
    Left = 136
    Top = 184
    Width = 121
    Height = 23
    TabOrder = 0
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 344
    Top = 184
    Width = 121
    Height = 23
    TabOrder = 1
    Text = 'Edit2'
  end
  object MainMenu1: TMainMenu
    Left = 16
    Top = 8
    object NUMEROS1: TMenuItem
      Caption = 'NUMEROS'
      object NUMEROS2: TMenuItem
        Caption = 'EJ 1'
        OnClick = NUMEROS2Click
      end
      object EJ21: TMenuItem
        Caption = 'EJ 2'
        OnClick = EJ21Click
      end
      object EJ31: TMenuItem
        Caption = 'EJ 3'
        OnClick = EJ31Click
      end
      object EJ32: TMenuItem
        Caption = 'EJ 4'
        OnClick = EJ32Click
      end
    end
  end
end
