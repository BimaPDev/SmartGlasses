/* FUN_10123b4e @ 0x10123b4e */

int FUN_10123b4e(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_64;
  int local_60 [18];
  char local_15;
  
  local_64 = param_1;
  iVar1 = FUN_10084bcc(&local_64,local_60,0);
  if (iVar1 == 0) {
    iVar2 = thunk_FUN_1013cfe2(0x460);
    if (iVar2 == 0) {
      FUN_10122b7a(local_60[0],0x11);
      return 0x11;
    }
    *(int *)(local_60[0] + 0xc) = iVar2;
    *(int *)(local_60[0] + 0x10) = iVar2 + 0x200;
    iVar1 = FUN_10084fcc(local_60,local_64);
    if (iVar1 == 0) {
      if (local_15 < '\0') {
        iVar1 = 6;
      }
      else if (param_2 != 0) {
        FUN_1012237c(local_60,param_2);
      }
    }
    thunk_FUN_1013cfd4(iVar2);
  }
  FUN_10122b7a(local_60[0],iVar1);
  return iVar1;
}

