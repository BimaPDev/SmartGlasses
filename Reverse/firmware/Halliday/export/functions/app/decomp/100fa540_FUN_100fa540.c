/* FUN_100fa540 @ 0x100fa540 */

void FUN_100fa540(int param_1,int param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  
  if (param_1 != 0) {
    sVar1 = *(short *)(param_1 + 2);
    if (0 < sVar1) {
      uVar2 = 0;
      piVar3 = *(int **)(param_1 + 4);
      do {
        uVar2 = uVar2 + 1 & 0xffff;
        *piVar3 = *piVar3 + param_2;
        piVar3[1] = piVar3[1] + param_3;
        piVar3 = piVar3 + 2;
      } while ((int)uVar2 < (int)sVar1);
    }
    return;
  }
  return;
}

