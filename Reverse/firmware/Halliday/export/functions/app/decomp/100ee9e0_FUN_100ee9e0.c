/* FUN_100ee9e0 @ 0x100ee9e0 */

uint FUN_100ee9e0(void)

{
  uint uVar1;
  int iVar2;
  
  FUN_1011dbf4(DAT_100eea14,0xffffffff);
  uVar1 = 0;
  if (*(byte *)(DAT_100eea18 + 0x50) != 0) {
    iVar2 = *(byte *)(DAT_100eea18 + 0x50) - 1;
    if (*(int *)(DAT_100eea18 + iVar2 * 0x10) == 0) {
      uVar1 = (uint)*(ushort *)(DAT_100eea18 + iVar2 * 0x10 + 0xc);
    }
    else {
      uVar1 = FUN_100ef7a4();
    }
  }
  FUN_100ee690();
  return uVar1;
}

