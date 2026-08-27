/* FUN_14079a70 @ 0x14079a70 */

bool FUN_14079a70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return false;
  }
  iVar1 = FUN_1408b24c();
  if (iVar1 != 0) {
    return *(char *)(iVar1 + 0x96) == '\t';
  }
  return false;
}

