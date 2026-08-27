/* FUN_2c5ce9d4 @ 0x2c5ce9d4 */

bool FUN_2c5ce9d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_2c5ce8fc();
  iVar2 = FUN_2c5ce8fc(param_1,param_3);
  iVar3 = FUN_2c5ce8fc(param_1,param_4);
  if (iVar3 == -1 || (iVar1 == -1 || iVar2 == -1)) {
    return false;
  }
  if (iVar3 < iVar2) {
    return iVar2 <= iVar1 || iVar1 <= iVar3;
  }
  return iVar1 <= iVar3 && iVar2 <= iVar1;
}

