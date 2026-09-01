/* FUN_100e4d8c @ 0x100e4d8c */

int FUN_100e4d8c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100e4bd8();
  if (iVar1 == 0) {
    iVar1 = FUN_100e4c18(param_1);
    if (iVar1 == 0) {
      FUN_100a5b78((DAT_100e4e14 - DAT_100e4e10) * 0x20 & 0xff00U | 0xf80011,DAT_100e4e1c);
      iVar2 = -5;
    }
    else {
      iVar2 = FUN_100e491c(param_1,iVar1);
      if (iVar2 < 0) {
        FUN_1011ea48(iVar1,0,0xb8);
        FUN_100a5b78(DAT_100e4e20 | (DAT_100e4e14 - DAT_100e4e10) * 0x20 & 0xff00U,DAT_100e4e24);
      }
    }
  }
  else {
    FUN_100a5b78((DAT_100e4e14 - DAT_100e4e10) * 0x20 & 0xff00U | 0xf20031,DAT_100e4e18);
    iVar2 = 0;
  }
  return iVar2;
}

