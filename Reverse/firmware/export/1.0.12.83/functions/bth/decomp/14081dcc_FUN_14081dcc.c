/* FUN_14081dcc @ 0x14081dcc */

undefined4 FUN_14081dcc(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_2c [16];
  int local_1c;
  
  local_1c = *DAT_14081e68;
  if (*(char *)(param_1 + 0xf6) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14081e78,DAT_14081e74,0);
  }
  if (((param_2 - 1U & 0xff) < 2) && ((param_3 - 1U & 0xff) < 9)) {
    FUN_140dc3ac(auStack_2c,DAT_14081e7c,param_2,param_3);
  }
  else {
    FUN_140dc3ac(auStack_2c,DAT_14081e6c,param_2);
  }
  iVar1 = FUN_140dd3a4(auStack_2c);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(byte *)(param_1 + 0xec) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_14081e84,*(undefined1 *)(param_1 + 0xc),DAT_14081e80,
                   *(byte *)(param_1 + 0xec));
    }
    uVar2 = FUN_1407edac(param_1,DAT_14081e70,auStack_2c,iVar1,0,0xff);
  }
  if (*DAT_14081e68 == local_1c) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

