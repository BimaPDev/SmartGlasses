/* FUN_14071620 @ 0x14071620 */

uint FUN_14071620(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (1 < param_1) {
    return 0;
  }
  iVar2 = *(int *)(DAT_14071668 + (param_1 + 6) * 4);
  uVar3 = 0;
  if (iVar2 != 0) {
    if (*(byte *)(iVar2 + 0x3c) <= param_2) {
      return 0;
    }
    iVar2 = *(int *)(iVar2 + (param_2 + 0x10) * 4);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar1 = *(ushort *)(iVar2 + 0x1a);
      uVar3 = (uint)uVar1;
      if (-1 < (int)((uint)*(ushort *)(iVar2 + 0x12) << 0x18)) {
        uVar4 = (uint)*(ushort *)(iVar2 + 0x24) * (uint)*(ushort *)(iVar2 + 0x1e);
        if (2 < (int)uVar4) {
          uVar4 = uVar4 - 2;
        }
        if (uVar4 <= uVar3) {
          uVar1 = (ushort)uVar4;
        }
        return (uint)uVar1;
      }
    }
  }
  return uVar3;
}

