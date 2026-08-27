/* FUN_14032b20 @ 0x14032b20 */

uint FUN_14032b20(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_14034954();
  if ((param_1 - 0x80U & 0xffff) < 4) {
    iVar2 = FUN_14035530(param_1 - 0x80U & 0xff);
    return uVar1 + iVar2 & 0xfffffff;
  }
  FUN_1402a6e8(4,0x75c,DAT_14032b70,DAT_14032b6c,DAT_14032b68,param_1);
  return uVar1 & 0xfffffff;
}

