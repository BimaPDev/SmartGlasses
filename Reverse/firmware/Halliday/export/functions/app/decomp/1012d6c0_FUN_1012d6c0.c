/* FUN_1012d6c0 @ 0x1012d6c0 */

undefined4 FUN_1012d6c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_100a0310(param_1,2,param_3,param_4,param_4);
  if (iVar1 == 0) {
    uVar2 = 0xffffffa8;
  }
  else {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      if (*(int *)(param_1 + 0x2c) != 0) {
        return 0xfffffff0;
      }
      iVar1 = 1;
    }
    iVar3 = param_1 + iVar1 * 4;
    uVar2 = 0;
    *(undefined4 *)(iVar3 + 0x1c) = param_2;
    *(char *)(param_1 + iVar1 + 0x24) = (char)param_4;
    *(undefined4 *)(iVar3 + 0x28) = param_3;
  }
  return uVar2;
}

