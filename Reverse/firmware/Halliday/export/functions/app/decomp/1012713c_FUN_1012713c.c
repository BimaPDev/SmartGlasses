/* FUN_1012713c @ 0x1012713c */

int FUN_1012713c(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint local_18;
  uint local_14;
  
  local_18 = param_1;
  local_14 = param_2;
  iVar1 = FUN_1012aa22(param_1,param_2 + 0x14,0);
  if (((iVar1 != 0) && (iVar1 = FUN_10124cb8(param_2,1), iVar1 == 0)) &&
     (iVar1 = FUN_1012548c(param_2), iVar1 == 0)) {
    local_18 = local_18 & 0xffffff00;
    local_14 = param_1;
    FUN_10086f50(param_2,0x12,&local_18);
    if ((local_18 & 0xff) != 2) {
      iVar1 = FUN_10126fd2(param_2);
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        iVar2 = FUN_1012713c(param_1,*(undefined4 *)(**(int **)(param_2 + 8) + iVar1 * 4));
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      if ((char)local_18 == '\0') {
        return param_2;
      }
    }
  }
  return 0;
}

