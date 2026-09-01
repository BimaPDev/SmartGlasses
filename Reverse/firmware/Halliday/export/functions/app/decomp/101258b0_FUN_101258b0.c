/* FUN_101258b0 @ 0x101258b0 */

void FUN_101258b0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  while( true ) {
    if (param_1 == 0) {
      return;
    }
    iVar1 = FUN_1012548c(param_1);
    if (param_4 != 0) break;
    if (iVar1 == 2) {
      FUN_101254e2(param_1,param_2,0);
    }
    if (param_3 == 0) {
      return;
    }
    param_1 = FUN_10126fae(param_1);
  }
  if (param_3 != 0) {
    uVar2 = FUN_10126fae(param_1);
    FUN_101258b0(uVar2,param_2,1);
  }
  if (iVar1 != 2) {
    return;
  }
  FUN_101254e2(param_1,param_2,1);
  return;
}

