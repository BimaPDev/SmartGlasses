/* FUN_100a87e4 @ 0x100a87e4 */

undefined4 FUN_100a87e4(undefined1 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_100a8858,0x333,DAT_100a8854,DAT_100a8850);
  }
  FUN_100a5b78(DAT_100a8864 | (DAT_100a8860 - DAT_100a885c) * 0x20 & 0xff00U,DAT_100a886c,
               DAT_100a8868,param_2);
  if (param_2 == 0) {
    FUN_10064518(*(undefined4 *)(param_1 + 0x24),1);
    iVar2 = FUN_100a717c(*param_1);
    uVar1 = DAT_100a8870;
    if (iVar2 != 2) goto LAB_100a8834;
  }
  else {
    if ((param_1[9] & 1) == 0) {
      FUN_10064518(*(undefined4 *)(param_1 + 0x24));
    }
    uVar1 = FUN_100a72cc(*param_1,param_2 & 0xff);
  }
  FUN_1006449c(*(undefined4 *)(param_1 + 0x24),uVar1);
LAB_100a8834:
  *(short *)(param_1 + 10) = (short)param_2;
  return 0;
}

