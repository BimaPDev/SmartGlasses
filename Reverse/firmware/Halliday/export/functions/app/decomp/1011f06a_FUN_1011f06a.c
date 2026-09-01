/* FUN_1011f06a @ 0x1011f06a */

void FUN_1011f06a(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar3;
  undefined4 *puVar2;
  
  puVar1 = param_2;
  puVar3 = (undefined4 *)(param_1 + 100);
  do {
    puVar2 = puVar1 + 1;
    *puVar3 = *puVar1;
    puVar1 = puVar2;
    puVar3 = puVar3 + 1;
  } while (puVar2 != param_2 + 9);
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 2;
  return;
}

