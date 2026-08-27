/* FUN_140b4b6c @ 0x140b4b6c */

undefined4 FUN_140b4b6c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_140e56e8(DAT_140b4bc0,0);
  *DAT_140b4bc4 = iVar1;
  if (iVar1 == 0) {
    FUN_1402a6e8(4,0x27,DAT_140b4bd8,DAT_140b4bd4,DAT_140b4bdc);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_140e5418(DAT_140b4bc8,0);
    *DAT_140b4bcc = iVar1;
    if (iVar1 == 0) {
      FUN_1402a6e8(4,0x89,DAT_140b4bd8,DAT_140b4bd4,DAT_140b4bd0);
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

