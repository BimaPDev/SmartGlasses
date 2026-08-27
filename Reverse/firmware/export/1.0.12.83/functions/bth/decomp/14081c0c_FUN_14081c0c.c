/* FUN_14081c0c @ 0x14081c0c */

undefined4 FUN_14081c0c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  int local_14;
  
  local_14 = *DAT_14081c98;
  local_34 = 0;
  uStack_30 = 0;
  local_2c = 0;
  uStack_28 = 0;
  local_24 = 0;
  uStack_20 = 0;
  local_1c = 0;
  uStack_18 = 0;
  if (*(char *)(param_1 + 0xf6) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14081ca8,DAT_14081ca4,0);
  }
  FUN_140dc3ac(&local_34,DAT_14081c9c,param_2);
  iVar1 = FUN_140dd3a4(&local_34);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(byte *)(param_1 + 0xec) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_14081cb0,*(undefined1 *)(param_1 + 0xc),DAT_14081cac,
                   *(byte *)(param_1 + 0xec));
    }
    uVar2 = FUN_1407edac(param_1,DAT_14081ca0,&local_34,iVar1,0,0xff);
  }
  if (*DAT_14081c98 == local_14) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

