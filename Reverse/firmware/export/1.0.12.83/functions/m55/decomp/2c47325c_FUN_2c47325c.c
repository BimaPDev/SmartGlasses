/* FUN_2c47325c @ 0x2c47325c */

uint FUN_2c47325c(uint param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  if ((param_1 & 3) == 0) {
    puVar2 = (uint *)(param_1 + 0xdc);
    *(uint *)(param_1 + 8) = param_1;
    *(uint *)(param_1 + 0xc) = param_1;
    puVar1 = (undefined4 *)(param_1 + 0x10);
    *puVar1 = 0;
    do {
      puVar3 = puVar2 + -0x20;
      puVar1 = puVar1 + 1;
      *puVar1 = 0;
      do {
        puVar3 = puVar3 + 1;
        *puVar3 = param_1;
      } while (puVar3 != puVar2);
      puVar2 = puVar2 + 0x20;
    } while (puVar1 != (undefined4 *)(param_1 + 0x5c));
    return param_1;
  }
  FUN_2c66ac44(DAT_2c47329c,4);
  return 0;
}

