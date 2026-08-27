/* FUN_2c4c9eb8 @ 0x2c4c9eb8 */

void FUN_2c4c9eb8(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(short *)((int)param_2 + 2) != 0) {
    iVar2 = 0;
    piVar1 = param_2;
    do {
      iVar2 = iVar2 + 1;
      *param_1 = -piVar1[5];
      param_1[1] = -piVar1[6];
      param_1[4] = piVar1[1];
      param_1[2] = piVar1[2];
      param_1[3] = piVar1[3];
      param_1 = param_1 + 5;
      piVar1 = piVar1 + 6;
    } while (iVar2 < (int)(uint)*(ushort *)((int)param_2 + 2));
  }
  return;
}

