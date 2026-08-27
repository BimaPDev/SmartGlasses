/* FUN_140ae858 @ 0x140ae858 */

uint FUN_140ae858(uint param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  if ((param_1 & 3) == 0) {
    *(uint *)(param_1 + 8) = param_1;
    *(uint *)(param_1 + 0xc) = param_1;
    puVar2 = (uint *)(param_1 + 0xc4);
    puVar1 = (undefined4 *)(param_1 + 0x10);
    *puVar1 = 0;
    do {
      puVar1 = puVar1 + 1;
      *puVar1 = 0;
      puVar3 = puVar2 + -0x20;
      do {
        puVar3 = puVar3 + 1;
        *puVar3 = param_1;
      } while (puVar3 != puVar2);
      puVar2 = puVar2 + 0x20;
    } while (puVar1 != (undefined4 *)(param_1 + 0x44));
    return param_1;
  }
  FUN_140dbf70(DAT_140ae898,4);
  return 0;
}

