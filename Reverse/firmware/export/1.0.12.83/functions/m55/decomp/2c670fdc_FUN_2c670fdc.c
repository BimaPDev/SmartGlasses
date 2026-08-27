/* FUN_2c670fdc @ 0x2c670fdc */

void FUN_2c670fdc(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)(param_3 + 0x14);
  puVar4 = (undefined4 *)(param_1 + -4);
  puVar3 = puVar1 + *(int *)(param_3 + 0x10);
  for (; puVar1 < puVar3; puVar1 = puVar1 + 1) {
    puVar4 = puVar4 + 1;
    *puVar4 = *puVar1;
  }
  uVar2 = (int)puVar3 + (-0x11 - param_3) & 0xfffffffc;
  if (puVar3 < (undefined4 *)(param_3 + 0x11U)) {
    uVar2 = 0;
  }
  for (puVar4 = (undefined4 *)(param_1 + uVar2);
      puVar4 < (undefined4 *)(param_1 + ((param_2 + -1 >> 5) + 1) * 4); puVar4 = puVar4 + 1) {
    *puVar4 = 0;
  }
  return;
}

