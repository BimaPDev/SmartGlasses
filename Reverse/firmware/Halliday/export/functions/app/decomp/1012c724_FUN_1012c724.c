/* FUN_1012c724 @ 0x1012c724 */

int FUN_1012c724(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[1];
  if (param_2 == 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = 5;
  }
  iVar1 = FUN_1012cdb0(DAT_1009dc1c,*param_1,uVar2,piVar3,(piVar3[2] + 1) - *piVar3,param_2);
  if (iVar1 == 1) {
    FUN_1010e930(0,0,0x7fffffff);
  }
  return iVar1;
}

