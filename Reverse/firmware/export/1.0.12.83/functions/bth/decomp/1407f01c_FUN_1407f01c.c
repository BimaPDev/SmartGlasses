/* FUN_1407f01c @ 0x1407f01c */

void FUN_1407f01c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_24;
  int local_14;
  
  local_14 = *DAT_1407f09c;
  if (param_1 == 0) {
    local_34 = *DAT_1407f0a0;
    uStack_30 = DAT_1407f0a0[1];
    uStack_2c = DAT_1407f0a0[2];
    uStack_28 = DAT_1407f0a0[3];
    local_24 = (undefined1)DAT_1407f0a0[4];
    if (param_3 == 0) goto LAB_1407f030;
    iVar1 = FUN_140dd3a4(&local_34);
    if (iVar1 != 0) {
      if (*(byte *)(param_3 + 0xec) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x43,DAT_1407f0a8,*(undefined1 *)(param_3 + 0xc),DAT_1407f0a4,
                     *(byte *)(param_3 + 0xec));
      }
      iVar1 = FUN_1407edac(param_3,DAT_1407f0ac,&local_34,iVar1,0,0xff);
      if (iVar1 != 0) goto LAB_1407f030;
    }
  }
  else if (param_3 == 0) goto LAB_1407f030;
  FUN_14083664(*(undefined4 *)(param_3 + 8));
LAB_1407f030:
  if (*DAT_1407f09c != local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

