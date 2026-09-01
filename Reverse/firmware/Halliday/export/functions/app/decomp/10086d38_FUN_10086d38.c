/* FUN_10086d38 @ 0x10086d38 */

void FUN_10086d38(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 == 0) && (iVar1 = param_2, param_1 = FUN_10092f04(), param_1 == 0)) {
    FUN_10094174(2,DAT_10086d78,0x1cf,DAT_10086d74,DAT_10086d70,iVar1);
  }
  else {
    if (param_2 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = 1;
    }
    *(int *)(param_1 + 0x254) = *(int *)(param_1 + 0x254) + iVar1;
  }
  return;
}

