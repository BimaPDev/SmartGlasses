/* FUN_2c589a80 @ 0x2c589a80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c589a80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c589b0c;
  FUN_2c5924fc(param_1,_LAB_2c589b10,param_3,0);
  iVar1 = FUN_2c66b624(_LAB_2c589b18,*_LAB_2c589b14);
  if (iVar1 == 0) {
    FUN_2c512ba4();
    uStack_18 = *(undefined4 *)(_LAB_2c589b1c + 4);
    uStack_1c = _LAB_2c589b20;
    FUN_2c593c2c(param_1,&uStack_1c,0);
    if (*_LAB_2c589b0c == iStack_14) {
      uStack_18 = *(undefined4 *)(param_1 + 0xc);
      iStack_14 = 1;
      uStack_1c = _LAB_2c592298;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5922a0,0xc9,_LAB_2c592298,_LAB_2c59229c);
    }
  }
  else {
    uStack_18 = *(undefined4 *)(_LAB_2c589b1c + 4);
    uStack_1c = _LAB_2c589b20;
    FUN_2c593c2c(param_1,&uStack_1c,0);
    if (*_LAB_2c589b0c == iStack_14) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c592204,0xc4,DAT_2c592200,DAT_2c5921fc,*(undefined4 *)(param_1 + 0xc));
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

