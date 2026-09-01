/* FUN_10123914 @ 0x10123914 */

int FUN_10123914(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_2c [2];
  int local_24 [2];
  
  if (param_1 == (int *)0x0) {
    iVar1 = 9;
  }
  else {
    local_2c[0] = param_2;
    iVar1 = FUN_10084bcc(local_2c,local_24,0);
    if (iVar1 == 0) {
      *param_1 = local_24[0];
      iVar2 = thunk_FUN_1013cfe2(0x460);
      if (iVar2 == 0) {
        FUN_10122b7a(local_24[0],0x11);
        return 0x11;
      }
      *(int *)(local_24[0] + 0xc) = iVar2;
      *(int *)(local_24[0] + 0x10) = iVar2 + 0x200;
      *(undefined2 *)(param_1 + 1) = *(undefined2 *)(local_24[0] + 6);
      param_1[2] = param_3;
      param_1[0x13] = param_4;
      iVar1 = FUN_10122840(param_1,param_4);
      if (param_1[2] == 0) {
        param_1[10] = 0;
      }
      else {
        iVar3 = FUN_10084388(param_1,0);
        if (iVar3 == 0) {
          iVar1 = 0x12;
        }
        param_1[10] = iVar3;
      }
      thunk_FUN_1013cfd4(iVar2);
    }
    else {
      *param_1 = 0;
    }
    FUN_10122b7a(local_24[0],iVar1);
  }
  return iVar1;
}

