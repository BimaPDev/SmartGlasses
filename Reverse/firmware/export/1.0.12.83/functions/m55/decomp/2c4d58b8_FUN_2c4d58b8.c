/* FUN_2c4d58b8 @ 0x2c4d58b8 */

undefined4 FUN_2c4d58b8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_2c66960c(param_1,param_2,0xd1);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0xce) == *(char *)(param_2 + 0xce)) {
      uVar2 = FUN_2c4d4938(param_1,param_2,*(char *)(param_1 + 0xce),param_4);
      return uVar2;
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

