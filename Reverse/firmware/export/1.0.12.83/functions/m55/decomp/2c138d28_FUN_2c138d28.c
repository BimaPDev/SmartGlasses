/* FUN_2c138d28 @ 0x2c138d28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c138d28(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _DAT_2c138d7c;
  uVar2 = (uint)*(char *)(*(int *)(param_1 + 0x40) + param_2);
  if (-1 < (int)uVar2) {
    *(int *)(_DAT_2c138d7c + ((uVar2 >> 5) + 0x60) * 4) = 1 << (uVar2 & 0x1f);
    uVar2 = (uint)*(char *)(*(int *)(param_1 + 0x40) + param_2);
    if (-1 < (int)uVar2) {
      *(int *)(iVar1 + (uVar2 >> 5) * 4) = 1 << (uVar2 & 0x1f);
    }
  }
  if (*(int *)(param_2 * 0x2c + *(int *)(param_1 + 0x38) + 0x1c) != 0) {
    (**(code **)(param_1 + 0x1c))(param_2);
  }
  return 0;
}

