/* FUN_140b42ac @ 0x140b42ac */

void FUN_140b42ac(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_140e56e8(DAT_140b4310,0);
  *DAT_140b4314 = iVar2;
  uVar1 = DAT_140b431c;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140b4340);
  }
  *DAT_140b4318 = 0;
  FUN_140e5418(uVar1);
  FUN_1402bafc(DAT_140b4324,0x400,DAT_140b4320);
  uVar1 = DAT_140b4328;
  FUN_1402a6e8(4,0xdd,DAT_140b4338,DAT_140b4334,DAT_140b4330,DAT_140b432c,DAT_140b4328);
  iVar2 = FUN_140b3e3c(uVar1);
  if (iVar2 != -1) {
    return;
  }
  FUN_140b4210(uVar1,DAT_140b433c);
  return;
}

