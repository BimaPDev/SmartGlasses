/* FUN_2c5efa32 @ 0x2c5efa32 */

bool FUN_2c5efa32(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  char in_ZR;
  
  if (in_ZR != '\0') {
    return true;
  }
  if (param_2 != (undefined4 *)0x0 && param_1 != (undefined4 *)0x0) {
    bVar2 = false;
    iVar1 = FUN_2c66b624(*param_1,*param_2);
    if (((iVar1 == 0) && (iVar1 = FUN_2c66b624(param_1[1],param_2[1]), iVar1 == 0)) &&
       (iVar1 = FUN_2c66b624(param_1[2],param_2[2]), iVar1 == 0)) {
      bVar2 = *(char *)(param_1 + 3) == *(char *)(param_2 + 3);
    }
    return bVar2;
  }
  return false;
}

