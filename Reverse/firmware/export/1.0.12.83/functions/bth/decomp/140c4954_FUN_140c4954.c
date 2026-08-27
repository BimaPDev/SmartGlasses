/* FUN_140c4954 @ 0x140c4954 */

int FUN_140c4954(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_140c464c(param_3 + *param_1,param_1[1],param_2);
  if (*param_1 != 0) {
    FUN_140c456c(iVar1 + 0xc,param_1 + 3);
  }
  FUN_140c4634(iVar1,*param_1);
  return iVar1 + 0xc;
}

