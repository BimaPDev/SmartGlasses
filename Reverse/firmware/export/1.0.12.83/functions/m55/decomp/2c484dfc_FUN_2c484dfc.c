/* FUN_2c484dfc @ 0x2c484dfc */

void FUN_2c484dfc(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (0 < param_3) {
    puVar1 = (undefined1 *)(param_1 + -1);
    puVar2 = (undefined1 *)(param_2 + param_3);
    puVar3 = puVar1 + param_3;
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + -1;
      *puVar2 = *puVar1;
    } while (puVar1 != puVar3);
  }
  return;
}

