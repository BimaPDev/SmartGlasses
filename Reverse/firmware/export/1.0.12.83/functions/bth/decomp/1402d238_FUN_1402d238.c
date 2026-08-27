/* FUN_1402d238 @ 0x1402d238 */

undefined4 FUN_1402d238(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_14026348;
  iVar2 = DAT_1402d24c;
  if (param_1 == 1) {
    iVar2 = DAT_1402d250;
  }
  if (param_1 < *(byte *)(iVar2 + 0x35)) {
    uVar3 = (uint)*(char *)(*(int *)(iVar2 + 0x40) + param_1);
    if (-1 < (int)uVar3) {
      *(int *)(DAT_14026348 + ((uVar3 >> 5) + 0x60) * 4) = 1 << (uVar3 & 0x1f);
      uVar3 = (uint)*(char *)(*(int *)(iVar2 + 0x40) + param_1);
      if (-1 < (int)uVar3) {
        *(int *)(iVar1 + (uVar3 >> 5) * 4) = 1 << (uVar3 & 0x1f);
      }
    }
    if (*(int *)(param_1 * 0x2c + *(int *)(iVar2 + 0x38) + 0x1c) != 0) {
      (**(code **)(iVar2 + 0x1c))(param_1);
    }
    return 0;
  }
  return 1;
}

