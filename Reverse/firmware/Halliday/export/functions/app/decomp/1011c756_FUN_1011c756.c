/* FUN_1011c756 @ 0x1011c756 */

void FUN_1011c756(uint *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar1 = param_1 + param_2;
  while (param_1 < puVar1) {
    puVar1 = puVar1 + -1;
    uVar2 = *puVar1;
    *puVar1 = uVar3 | uVar2 >> 1;
    uVar3 = uVar2 << 0x1f;
  }
  return;
}

