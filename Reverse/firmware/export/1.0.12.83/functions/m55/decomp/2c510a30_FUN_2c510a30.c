/* FUN_2c510a30 @ 0x2c510a30 */

bool FUN_2c510a30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_2c62ca10(param_1 + 0x24);
  while( true ) {
    if (iVar1 == 0) {
      return *(char *)(param_1 + 0x146) != '\0';
    }
    iVar1 = *(int *)(iVar1 + 0x2c44);
    if ((iVar1 != 0) && ((*(char *)(iVar1 + 0x90) != '\0' || (*(char *)(iVar1 + 0x124) != '\0'))))
    break;
    iVar1 = FUN_2c62ca20(param_1 + 0x24);
  }
  return true;
}

