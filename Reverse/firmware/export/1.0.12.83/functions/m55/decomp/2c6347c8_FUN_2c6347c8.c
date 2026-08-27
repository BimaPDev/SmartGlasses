/* FUN_2c6347c8 @ 0x2c6347c8 */

void FUN_2c6347c8(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (uint)*(ushort *)(param_2 + 0x24);
  uVar4 = (uint)*(ushort *)(param_2 + 0x26);
  if (uVar4 * uVar1 == 0) {
    iVar2 = *(int *)(param_2 + 0x28);
  }
  else {
    uVar3 = 0;
    iVar2 = *(int *)(param_2 + 0x28);
    do {
      if (*(int *)(iVar2 + uVar3 * 4) != 0) {
        FUN_2c62bea8();
        *(undefined4 *)(*(int *)(param_2 + 0x28) + uVar3 * 4) = 0;
        uVar1 = (uint)*(ushort *)(param_2 + 0x24);
        uVar4 = (uint)*(ushort *)(param_2 + 0x26);
        iVar2 = *(int *)(param_2 + 0x28);
      }
      uVar3 = uVar3 + 1 & 0xffff;
    } while ((int)uVar3 < (int)(uVar4 * uVar1));
  }
  if (iVar2 != 0) {
    FUN_2c62bea8(iVar2);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    FUN_2c62bea8();
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    FUN_2c62bea8();
    return;
  }
  return;
}

