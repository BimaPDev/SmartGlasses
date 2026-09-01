/* FUN_100b9d90 @ 0x100b9d90 */

int FUN_100b9d90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1013c66c(DAT_100b9dec,param_1,0,0);
  if (iVar1 == 0) {
    FUN_100a5b78((DAT_100b9df4 - DAT_100b9df0) * 0x20 & 0xff00U | 0x750011,DAT_100b9dfc,DAT_100b9df8
                 ,param_1);
  }
  if (0x1ff < param_1) {
    FUN_100a5b78((DAT_100b9df4 - DAT_100b9df0) * 0x20 & 0xff00U | 0x790031,DAT_100b9dfc,DAT_100b9e00
                 ,param_1);
  }
  return iVar1;
}

