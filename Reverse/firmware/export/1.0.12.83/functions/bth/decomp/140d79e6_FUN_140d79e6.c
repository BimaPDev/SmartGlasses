/* FUN_140d79e6 @ 0x140d79e6 */

void FUN_140d79e6(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int extraout_r2;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar1 = (int *)*param_1;
  iVar4 = param_1[1];
  if (piVar1 == param_1 + 2) {
    uVar2 = 3;
  }
  else {
    uVar2 = param_1[2];
  }
  piVar5 = param_1;
  if (uVar2 < iVar4 + 1U) {
    piVar5 = (int *)0x1;
    FUN_140d78be(param_1,iVar4,0,0,1,param_2,param_3);
    piVar1 = (int *)extraout_r2;
  }
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + iVar4 * 4) = param_2;
  FUN_140d7770(param_1,iVar4 + 1U,piVar1,iVar3,piVar5);
  return;
}

