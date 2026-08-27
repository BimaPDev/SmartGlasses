/* FUN_2c5f9384 @ 0x2c5f9384 */

void FUN_2c5f9384(int param_1,ushort *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar2 = (uint)*param_2;
  iVar1 = *(int *)(param_2 + 4);
  while (uVar2 != 0) {
    uVar3 = uVar2 - 1;
    uVar2 = uVar3 & 0xffff;
    puVar4 = (undefined4 *)(iVar1 + uVar2 * 0x10);
    *param_2 = (ushort)uVar3;
    if ((puVar4 != (undefined4 *)0x0) && (*(int *)(iVar1 + uVar2 * 0x10) != 0)) {
      FUN_2c5f6a50();
      (**(code **)(param_1 + 8))(*puVar4);
      *puVar4 = 0;
      uVar2 = (uint)*param_2;
      iVar1 = *(int *)(param_2 + 4);
    }
  }
  (**(code **)(param_1 + 8))(iVar1);
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}

