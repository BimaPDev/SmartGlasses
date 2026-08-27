/* FUN_14081960 @ 0x14081960 */

undefined4 FUN_14081960(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_2c [16];
  int local_1c;
  
  local_1c = *DAT_140819dc;
  if (*(char *)(param_1 + 0xf6) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_140819ec,DAT_140819e8,0);
  }
  FUN_140dc3ac(auStack_2c,DAT_140819e0,param_2);
  iVar1 = FUN_140dd3a4(auStack_2c);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(byte *)(param_1 + 0xec) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_140819f4,*(undefined1 *)(param_1 + 0xc),DAT_140819f0,
                   *(byte *)(param_1 + 0xec));
    }
    uVar2 = FUN_1407edac(param_1,DAT_140819e4,auStack_2c,iVar1,0,param_2);
  }
  if (*DAT_140819dc == local_1c) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

