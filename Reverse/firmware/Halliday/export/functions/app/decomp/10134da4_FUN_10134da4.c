/* FUN_10134da4 @ 0x10134da4 */

uint FUN_10134da4(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = FUN_100cc790();
  if ((iVar1 != 0) && ((int)((uint)*(byte *)(iVar1 + 8) << 0x1f) < 0)) {
    iVar1 = iVar1 + 0xc;
    uVar2 = FUN_1013457a(iVar1);
    if ((uVar2 & 1) == 0) {
      if (param_2 == 0) {
        return 0;
      }
      uVar2 = FUN_1013457a(iVar1);
      bVar3 = -1 < (int)(uVar2 << 0x1e);
      if (!bVar3) {
        FUN_10134580(iVar1,0xfffffffd);
      }
      FUN_101349a8(iVar1,bVar3);
      return (uVar2 & 3) >> 1;
    }
  }
  return 1;
}

