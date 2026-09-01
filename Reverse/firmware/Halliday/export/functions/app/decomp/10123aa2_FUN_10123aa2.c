/* FUN_10123aa2 @ 0x10123aa2 */

int FUN_10123aa2(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = FUN_101225c6(param_1,&local_14,param_3,param_4,param_1);
  if (iVar1 == 0) {
    if ((param_1[10] == 0) || (iVar1 = FUN_10084408(), iVar1 == 0)) {
      iVar1 = 0;
      *param_1 = 0;
    }
    FUN_10122b7a(local_14,0);
  }
  return iVar1;
}

