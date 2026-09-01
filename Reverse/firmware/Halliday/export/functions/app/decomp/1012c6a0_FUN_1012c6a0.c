/* FUN_1012c6a0 @ 0x1012c6a0 */

void FUN_1012c6a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = param_1;
  piVar1 = (int *)FUN_1008bbb4();
  iVar2 = param_2 * 2;
  if ((*(byte *)(*piVar1 + 0x1c) & 0x40) != 0) {
    iVar2 = param_2 * 3;
  }
  FUN_1011e89a(param_1,iVar2,iVar2,*(byte *)(*piVar1 + 0x1c),uVar3,iVar2,param_3);
  FUN_10067244(param_1,0,iVar2);
  FUN_100673b8(0xffffffff);
  return;
}

