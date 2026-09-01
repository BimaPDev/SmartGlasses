/* FUN_100b5088 @ 0x100b5088 */

int FUN_100b5088(undefined1 *param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_100a5b78(DAT_100b5100 | (DAT_100b50fc - DAT_100b50f8) * 0x20 & 0xff00U,DAT_100b5108,
                 DAT_100b5104);
    iVar1 = -5;
  }
  else {
    iVar1 = FUN_1013110e(*(int *)(param_1 + 8) + 5,1,1,param_2 != 0,param_1,param_2);
    iVar1 = FUN_100b4a9c(param_1,6,*(int *)(param_1 + 8),iVar1 - *(int *)(param_1 + 8));
    if (iVar1 != 0) {
      FUN_100a5b78(DAT_100b510c | (DAT_100b50fc - DAT_100b50f8) * 0x20 & 0xff00U,DAT_100b5108,
                   DAT_100b5110,6,iVar1);
    }
    *param_1 = 0;
  }
  return iVar1;
}

