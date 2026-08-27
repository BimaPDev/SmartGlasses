/* FUN_1409e9ac @ 0x1409e9ac */

undefined4 FUN_1409e9ac(uint param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = DAT_1409ea08;
  FUN_140e5618(DAT_1409ea08);
  if (*(ushort *)(iVar1 + 8) != 0) {
    uVar4 = 0;
    iVar2 = 10;
    do {
      uVar4 = uVar4 + 1;
      iVar3 = iVar1 + iVar2;
      if (*(ushort *)(iVar1 + iVar2) == param_1) {
        FUN_140e5278(param_2,iVar3 + 4,*(undefined2 *)(iVar3 + 2));
        *param_3 = (uint)*(ushort *)(iVar3 + 2);
        return 1;
      }
      iVar2 = iVar2 + *(ushort *)(iVar3 + 2) + 4;
    } while (uVar4 != *(ushort *)(iVar1 + 8));
  }
  FUN_140e52c8(DAT_1409ea08);
  return 0;
}

