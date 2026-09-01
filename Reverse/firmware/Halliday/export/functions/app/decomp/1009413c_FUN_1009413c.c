/* FUN_1009413c @ 0x1009413c */

void FUN_1009413c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_10094164;
  if (param_1 != (int *)0x0) {
    iVar2 = param_1[1];
    while (iVar2 != 0) {
      iVar3 = *(int *)(*param_1 + iVar2 + 4);
      FUN_1012b018(param_1,iVar2,param_3,*param_1 + iVar2,param_4);
      FUN_10094268(iVar2,uVar1);
      iVar2 = iVar3;
      param_3 = extraout_r2;
    }
  }
  return;
}

