/* FUN_2c4fb39c @ 0x2c4fb39c */

bool FUN_2c4fb39c(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(char *)(DAT_2c4fb3d0 + param_1 * 0x6c) != '\0') {
    iVar2 = *(int *)(param_1 * 0x6c + DAT_2c4fb3d0 + 0x5c);
    if (iVar2 == 0) {
      return false;
    }
    if (*(int *)(iVar2 + 0x24) != 0) {
      uVar1 = FUN_2c4c34c0(iVar2 + 0x14);
      return param_2 <= uVar1;
    }
  }
  return false;
}

