/* FUN_10124944 @ 0x10124944 */

int FUN_10124944(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    iVar4 = piVar2[1];
    for (iVar3 = 0; iVar4 != iVar3; iVar3 = iVar3 + 1) {
      iVar1 = *(int *)(*piVar2 + iVar3 * 4);
      if (iVar1 == param_2) {
        return 1;
      }
      iVar1 = FUN_10124944(iVar1 + 8,param_2,param_3,*piVar2,param_4);
      if (iVar1 != 0) {
        return iVar1;
      }
      param_3 = extraout_r2;
    }
  }
  return 0;
}

