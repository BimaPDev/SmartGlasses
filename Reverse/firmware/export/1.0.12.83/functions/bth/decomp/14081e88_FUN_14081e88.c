/* FUN_14081e88 @ 0x14081e88 */

undefined4 FUN_14081e88(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  int local_1c;
  
  local_1c = *DAT_14081f34;
  if (*(char *)(param_1 + 0xf6) == '\0') {
    local_2c = *DAT_14081f38;
    uStack_28 = DAT_14081f38[1];
    iVar1 = FUN_140dd3a4(&local_2c);
    uVar2 = 0;
    if (iVar1 != 0) {
      if (*(byte *)(param_1 + 0xec) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x43,DAT_14081f48,*(undefined1 *)(param_1 + 0xc),DAT_14081f44,
                     *(byte *)(param_1 + 0xec));
      }
      uVar2 = FUN_1407edac(param_1,DAT_14081f3c,&local_2c,iVar1,0,0xff);
    }
  }
  else {
    local_2c = *DAT_14081f40;
    uStack_28 = DAT_14081f40[1];
    uStack_24 = DAT_14081f40[2];
    local_20 = (undefined1)DAT_14081f40[3];
    if (*(byte *)(param_1 + 0xec) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_14081f48,*(undefined1 *)(param_1 + 0xc),DAT_14081f44,
                   *(byte *)(param_1 + 0xec));
    }
    uVar2 = FUN_1407edac(param_1,DAT_14081f3c,&local_2c,0xc,0,0xff);
  }
  if (*DAT_14081f34 == local_1c) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

