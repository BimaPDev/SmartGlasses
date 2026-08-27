/* FUN_14081b48 @ 0x14081b48 */

undefined4 FUN_14081b48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined1 local_18;
  int local_14;
  
  local_14 = *DAT_14081bf4;
  if (*(char *)(param_1 + 0xf6) == '\0') {
    local_24 = *DAT_14081bf8;
    uStack_20 = DAT_14081bf8[1];
    local_1c = CONCAT31(local_1c._1_3_,(char)DAT_14081bf8[2]);
    iVar1 = FUN_140dd3a4(&local_24);
    uVar2 = 0;
    if (iVar1 != 0) {
      if (*(byte *)(param_1 + 0xec) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x43,DAT_14081c08,*(undefined1 *)(param_1 + 0xc),DAT_14081c04,
                     *(byte *)(param_1 + 0xec));
      }
      uVar2 = FUN_1407edac(param_1,DAT_14081bfc,&local_24,iVar1,0,0xff);
    }
  }
  else {
    local_24 = *DAT_14081c00;
    uStack_20 = DAT_14081c00[1];
    local_1c = DAT_14081c00[2];
    local_18 = (undefined1)DAT_14081c00[3];
    if (*(byte *)(param_1 + 0xec) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_14081c08,*(undefined1 *)(param_1 + 0xc),DAT_14081c04,
                   *(byte *)(param_1 + 0xec));
    }
    uVar2 = FUN_1407edac(param_1,DAT_14081bfc,&local_24,0xc,0,0xff);
  }
  if (*DAT_14081bf4 == local_14) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

