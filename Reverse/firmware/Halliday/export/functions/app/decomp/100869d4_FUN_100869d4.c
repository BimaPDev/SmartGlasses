/* FUN_100869d4 @ 0x100869d4 */

undefined4 FUN_100869d4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1005b8b8();
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x18) == 0)) {
    uVar2 = 0xffffffea;
  }
  else {
    FUN_1011dbf4(DAT_10086a14,0xffffffff);
    if ((*(int *)(DAT_10086a18 + 0x2c) == iVar1) &&
       ((int)((uint)*(byte *)(DAT_10086a18 + 0x24) << 0x1f) < 0)) {
      *(byte *)(DAT_10086a18 + 0x24) = *(byte *)(DAT_10086a18 + 0x24) & 0xfa;
    }
    FUN_100863dc();
    uVar2 = 0;
  }
  return uVar2;
}

