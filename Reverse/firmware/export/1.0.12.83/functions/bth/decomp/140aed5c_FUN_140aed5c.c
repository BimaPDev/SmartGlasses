/* FUN_140aed5c @ 0x140aed5c */

void FUN_140aed5c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_18;
  undefined1 local_17;
  int local_14;
  
  uVar2 = DAT_140aee30;
  local_14 = *DAT_140aee2c;
  if (param_1 == 0) {
    uVar4 = DAT_140aee34;
    FUN_1402a6e8(4,0x78,DAT_140aee40,DAT_140aee3c,DAT_140aee38,DAT_140aee30,0,DAT_140aee34);
    iVar1 = FUN_140af300();
    iVar3 = iVar1;
    FUN_1402a6e8(4,0x7c,DAT_140aee40,DAT_140aee3c,DAT_140aee44,uVar2,iVar1);
    if (iVar1 != 0xff) {
      FUN_1402a6e8(4,0x7e,DAT_140aee40,DAT_140aee3c,DAT_140aee4c,uVar2,iVar3,uVar4);
      FUN_14044eb4(iVar1);
      uVar2 = FUN_140af300();
      FUN_1402a6e8(4,0xe,DAT_140aee40,DAT_140aee3c,DAT_140aee54,DAT_140aee50,uVar2,1,0xff);
      *DAT_140aee58 = 1;
      local_17 = 1;
      local_18 = 9;
      FUN_140afd14(&local_18,2);
    }
  }
  else {
    FUN_1402a6e8(4,0x78,DAT_140aee40,DAT_140aee3c,DAT_140aee38,DAT_140aee30,param_1,DAT_140aee48);
  }
  if (*DAT_140aee2c == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

