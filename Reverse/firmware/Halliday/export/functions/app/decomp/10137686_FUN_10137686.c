/* FUN_10137686 @ 0x10137686 */

void FUN_10137686(int param_1,uint param_2)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    iVar4 = *(int *)(param_1 + 0x38);
    if (*(byte *)(param_1 + 0x40) == param_2) {
      *(int *)(*(int *)(param_1 + 0x30) + 0x90) = *(int *)(param_1 + 0x38);
    }
    else {
      do {
        iVar3 = param_1;
        if (iVar4 == 0) {
          return;
        }
        pbVar1 = (byte *)(iVar4 + 0x40);
        piVar2 = (int *)(iVar4 + 0x38);
        param_1 = iVar4;
        iVar4 = *piVar2;
      } while (*pbVar1 != param_2);
      *(int *)(iVar3 + 0x38) = *piVar2;
    }
  }
  return;
}

