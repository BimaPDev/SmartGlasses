/* FUN_1012ab98 @ 0x1012ab98 */

byte FUN_1012ab98(int *param_1,int *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  int iStack_1c;
  
  iVar3 = param_1[2];
  if ((((iVar3 < *param_2) || (iVar5 = param_1[3], iVar5 < param_2[1])) ||
      (iVar4 = *param_1, param_2[2] < iVar4)) || (iStack_1c = param_1[1], param_2[3] < iStack_1c)) {
    bVar1 = 1;
  }
  else {
    if (((param_3 != 0) && (local_20 = iVar4, iVar2 = FUN_1012a90e(param_2,&local_20), iVar2 == 0))
       && ((local_20 = iVar3, iVar2 = FUN_1012a90e(param_2,&local_20,param_3), iVar2 == 0 &&
           (local_20 = iVar4, iStack_1c = iVar5, iVar5 = FUN_1012a90e(param_2,&local_20,param_3),
           iVar5 == 0)))) {
      local_20 = iVar3;
      bVar1 = FUN_1012a90e(param_2,&local_20,param_3);
      return bVar1 ^ 1;
    }
    bVar1 = 0;
  }
  return bVar1;
}

