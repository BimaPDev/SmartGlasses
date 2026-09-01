/* FUN_1012fa1c @ 0x1012fa1c */

void FUN_1012fa1c(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0;
  uVar3 = param_2;
  do {
    uVar3 = uVar3 - 1;
    iVar4 = uVar2 * 2;
    uVar1 = uVar2;
    if (param_3 != 1) {
      uVar1 = uVar3;
    }
    *(short *)(*param_1 + iVar4) =
         (short)((uVar1 * (int)*(short *)(*param_1 + uVar2 * 2)) / param_2);
    if (1 < param_1[2]) {
      uVar1 = uVar2;
      if (param_3 != 1) {
        uVar1 = uVar3;
      }
      *(short *)(param_1[1] + iVar4) =
           (short)((uVar1 * (int)*(short *)(param_1[1] + iVar4)) / param_2);
    }
    uVar2 = uVar2 + 1;
  } while (param_2 != uVar2);
  return;
}

