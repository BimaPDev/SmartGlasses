/* FUN_2c4b5d84 @ 0x2c4b5d84 */

void FUN_2c4b5d84(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_2c4b5dcc;
  iVar2 = (int)*(char *)(DAT_2c4b5dc8 + param_1);
  if (-1 < iVar2) {
    if (*(char *)(DAT_2c4b5dcc + iVar2 * 0x1c + 0xd) != '\0') {
      FUN_2c4b57f8(0,param_1);
    }
    FUN_2c4b5750(0,param_1);
    *(undefined1 *)(iVar1 + iVar2 * 0x1c + 0xc) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4b5dd4,DAT_2c4b5dd0,0,param_1,param_4);
}

