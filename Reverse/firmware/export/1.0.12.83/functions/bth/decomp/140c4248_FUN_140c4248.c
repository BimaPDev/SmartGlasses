/* FUN_140c4248 @ 0x140c4248 */

int FUN_140c4248(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_140c3ee8(param_3 + *param_1,param_1[1],param_2);
  if (*param_1 != 0) {
    FUN_140c3df2(iVar1 + 0xc,param_1 + 3);
  }
  FUN_140c3ed0(iVar1,*param_1);
  return iVar1 + 0xc;
}

