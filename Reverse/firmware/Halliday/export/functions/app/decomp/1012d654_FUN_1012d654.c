/* FUN_1012d654 @ 0x1012d654 */

int FUN_1012d654(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  iVar1 = FUN_100a0310(param_1,2,param_3,param_4,param_4);
  if (iVar1 == 0) {
    iVar1 = -0x58;
  }
  else {
    pcVar3 = *(code **)(*(int *)(param_1 + 0x50) + 0x18);
    if (pcVar3 == (code *)0x0) {
      iVar1 = FUN_1012d608(param_1);
      if (-1 < iVar1) {
        iVar1 = *(int *)(param_1 + 0x14);
        iVar2 = FUN_1012d608(param_1);
        iVar1 = iVar1 - iVar2;
      }
    }
    else {
      iVar1 = (*pcVar3)();
    }
    iVar2 = thunk_FUN_1013c70e();
    if (iVar2 == 0) {
      FUN_1011dbf4(param_1 + 0x3c,0xffffffff);
    }
    if (((*(char *)(param_1 + 0x30) == '\x02') && (*(int *)(param_1 + 0x34) != 0)) &&
       (iVar2 = FUN_1012d654(), iVar2 <= iVar1)) {
      iVar1 = iVar2;
    }
    iVar2 = thunk_FUN_1013c70e();
    if (iVar2 == 0) {
      thunk_FUN_10113e2c(param_1 + 0x3c);
    }
  }
  return iVar1;
}

