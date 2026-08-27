/* FUN_1405b148 @ 0x1405b148 */

bool FUN_1405b148(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 2) {
    if (*(int *)(DAT_1405b174 + param_1 * 4) != 0) {
      iVar1 = FUN_1406d73c();
      if (iVar1 != 0) {
        return *(int *)(iVar1 + 4) == param_2;
      }
      return false;
    }
  }
  return false;
}

