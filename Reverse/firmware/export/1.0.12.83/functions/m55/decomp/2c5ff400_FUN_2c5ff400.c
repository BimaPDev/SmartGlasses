/* FUN_2c5ff400 @ 0x2c5ff400 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ff400(int param_1)

{
  byte bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  puVar2 = _LAB_2c5ff4d0;
  bVar1 = *(byte *)(param_1 + 1);
  if ((bVar1 & 8) == 0) {
    uVar4 = *(uint *)(param_1 + 0x20);
    iVar6 = *(int *)(param_1 + 0x28);
    *_LAB_2c5ff4d0 = uVar4;
    puVar3 = _LAB_2c5ff4d4;
    if (uVar4 != 0) {
      FUN_2c602340(uVar4,8,*_LAB_2c5ff4d4);
      if ((*(byte *)(param_1 + 1) & 2) != 0) {
        *puVar2 = bVar1 & 8;
        return;
      }
      if (iVar6 == 0) {
        if ((-1 < (int)((uint)*(byte *)(param_1 + 1) << 0x1f)) &&
           (FUN_2c602340(*puVar2,4,*puVar3), (*(byte *)(param_1 + 1) & 2) != 0)) {
          *puVar2 = 0;
          return;
        }
        FUN_2c602340(*puVar2,7,*puVar3);
        bVar1 = *(byte *)(param_1 + 1);
        if (((int)((uint)bVar1 << 0x1e) < 0) && (*puVar2 = 0, (int)((uint)bVar1 << 0x1e) < 0)) {
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
  }
  else {
    FUN_2c602340(*(undefined4 *)(param_1 + 0x20),3,*_LAB_2c5ff4d4);
    uVar4 = (uint)*(byte *)(param_1 + 1);
    if ((int)(uVar4 << 0x1e) < 0) {
      *_LAB_2c5ff4d0 = 0;
    }
    puVar2 = _LAB_2c5ff4d0;
    uVar5 = (uVar4 & 3) >> 1;
    if ((int)(uVar4 << 0x1e) < 0) {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x20) = uVar5;
    *(uint *)(param_1 + 0x24) = uVar5;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xf7 | (byte)(uVar5 << 3);
    *puVar2 = uVar5;
    *(uint *)(param_1 + 0x40) = uVar5;
    *(uint *)(param_1 + 0x44) = uVar5;
  }
  if ((iVar6 != 0) && (FUN_2c6095f4(param_1), (int)((uint)*(byte *)(param_1 + 1) << 0x1e) < 0)) {
    *puVar2 = 0;
    return;
  }
  return;
}

