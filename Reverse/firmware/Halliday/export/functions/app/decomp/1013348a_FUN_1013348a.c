/* FUN_1013348a @ 0x1013348a */

uint FUN_1013348a(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (piVar1 = *(int **)(param_1 + 0x14); piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    uVar2 = uVar2 + piVar1[3] + 1 & 0xffff;
  }
  return *(int *)(param_1 + 0x1c) + uVar2 & 0xffff;
}

