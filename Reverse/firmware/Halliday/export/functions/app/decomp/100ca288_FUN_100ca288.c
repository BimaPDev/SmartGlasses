/* FUN_100ca288 @ 0x100ca288 */

int FUN_100ca288(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  
  iVar1 = FUN_1013356c(DAT_100ca2e4,(*DAT_100ca2e0 & 0x7f) >> 4);
  if (iVar1 != 0) {
    iVar2 = FUN_100ca22c(param_1);
    *(int *)(iVar1 + 0x90) = iVar2;
    *(undefined1 *)(iVar1 + 2) = 4;
    if (param_2 == 0) {
      uVar3 = *(ushort *)(DAT_100ca2e8 + 0x11c) & *(ushort *)(iVar2 + 0xaa) & 7;
    }
    else {
      if (param_2 != 2) {
        return iVar1;
      }
      uVar3 = *(ushort *)(DAT_100ca2e8 + 0x11c) & *(ushort *)(iVar2 + 0xaa) & 0xfc3f;
    }
    *(ushort *)(iVar1 + 0x94) = uVar3;
  }
  return iVar1;
}

