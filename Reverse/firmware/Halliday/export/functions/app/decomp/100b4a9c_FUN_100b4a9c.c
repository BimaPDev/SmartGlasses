/* FUN_100b4a9c @ 0x100b4a9c */

int FUN_100b4a9c(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_3 = 9;
  param_3[2] = 0x80;
  *(short *)(param_3 + 3) = (short)param_4 + -5;
  param_3[1] = (char)param_2;
  iVar1 = FUN_100b4a50(param_1,param_3,param_4,param_4,param_1,param_2);
  if (iVar1 != 0) {
    FUN_100a5b78(DAT_100b4ae8 | (DAT_100b4ae4 - DAT_100b4ae0) * 0x20 & 0xff00U,DAT_100b4af0,
                 DAT_100b4aec,param_2,iVar1);
  }
  return iVar1;
}

