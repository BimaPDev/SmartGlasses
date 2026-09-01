/* FUN_1011a71c @ 0x1011a71c */

void FUN_1011a71c(int param_1,int param_2)

{
  int iVar1;
  int extraout_r2;
  
  iVar1 = 0;
  while (iVar1 < param_2) {
    FUN_1011a6dc(*(undefined4 *)(param_1 + iVar1 * 8),*(undefined4 *)(param_1 + 4 + iVar1 * 8));
    iVar1 = extraout_r2 + 1;
  }
  return;
}

