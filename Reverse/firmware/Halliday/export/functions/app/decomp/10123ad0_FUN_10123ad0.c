/* FUN_10123ad0 @ 0x10123ad0 */

uint FUN_10123ad0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int local_1c;
  
  local_1c = param_2;
  uVar1 = FUN_101225c6(param_1,&local_1c,param_3,param_4,param_1);
  if (uVar1 == 0) {
    if (param_2 == 0) {
      uVar1 = FUN_10122840(param_1,0);
    }
    else {
      iVar2 = thunk_FUN_1013cfe2(0x460);
      if (iVar2 == 0) {
        FUN_10122b7a(local_1c,0x11);
        return 0x11;
      }
      *(int *)(local_1c + 0xc) = iVar2;
      *(int *)(local_1c + 0x10) = iVar2 + 0x200;
      uVar1 = FUN_100844c0(param_1);
      if ((uVar1 & 0xfb) == 0) {
        FUN_1012237c(param_1,param_2);
        uVar1 = FUN_10122d32(param_1,0);
        if (uVar1 == 4) {
          uVar1 = 0;
        }
      }
      thunk_FUN_1013cfd4(iVar2);
    }
  }
  FUN_10122b7a(local_1c,uVar1);
  return uVar1;
}

