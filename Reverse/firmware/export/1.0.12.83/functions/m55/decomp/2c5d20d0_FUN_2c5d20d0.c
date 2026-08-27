/* FUN_2c5d20d0 @ 0x2c5d20d0 */

void FUN_2c5d20d0(int *param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1[1];
  piVar2 = (int *)*param_1;
  uVar3 = iVar4 + param_3;
  if (piVar2 == param_1 + 2) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = param_1[2];
  }
  if (uVar1 < uVar3) {
    FUN_2c52263c(param_1,iVar4,0,param_2,param_3);
    param_1[1] = uVar3;
    *(undefined1 *)(*param_1 + uVar3) = 0;
    return;
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      *(undefined1 *)((int)piVar2 + iVar4) = *param_2;
      param_1[1] = uVar3;
      *(undefined1 *)(*param_1 + uVar3) = 0;
      return;
    }
    FUN_2c674668((int)piVar2 + iVar4);
    piVar2 = (int *)*param_1;
  }
  param_1[1] = uVar3;
  *(undefined1 *)((int)piVar2 + uVar3) = 0;
  return;
}

