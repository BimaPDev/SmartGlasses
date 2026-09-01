/* FUN_1012aa22 @ 0x1012aa22 */

undefined4 FUN_1012aa22(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  int iStack_1c;
  
  iVar4 = *param_1;
  if ((((*param_2 <= iVar4) && (iStack_1c = param_1[1], param_2[1] <= iStack_1c)) &&
      (iVar3 = param_1[2], iVar3 <= param_2[2])) && (iVar5 = param_1[3], iVar5 <= param_2[3])) {
    if (param_3 == 0) {
      return 1;
    }
    local_20 = iVar4;
    iVar1 = FUN_1012a90e(param_2,&local_20);
    if (((iVar1 != 0) &&
        (local_20 = iVar3, iVar1 = FUN_1012a90e(param_2,&local_20,param_3), iVar1 != 0)) &&
       (local_20 = iVar4, iStack_1c = iVar5, iVar4 = FUN_1012a90e(param_2,&local_20,param_3),
       iVar4 != 0)) {
      local_20 = iVar3;
      uVar2 = FUN_1012a90e(param_2,&local_20,param_3);
      return uVar2;
    }
  }
  return 0;
}

