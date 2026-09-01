/* FUN_100e3d78 @ 0x100e3d78 */

int FUN_100e3d78(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_100e255c();
  if (iVar1 == 0) {
    iVar1 = FUN_100c41fc(param_1,DAT_100e3ddc);
    if (iVar1 == 0) {
      if ((*(byte *)(DAT_100e3de0 + 3) & 0x10) != 0) {
        FUN_10119dc2(DAT_100e3de8);
      }
    }
    else if ((*(byte *)(DAT_100e3de0 + 3) & 0x10) != 0) {
      FUN_10119dc2(DAT_100e3de4,iVar1);
    }
  }
  else {
    FUN_100a5b78(DAT_100e3dd4 | (DAT_100e3dd0 - DAT_100e3dcc) * 0x20 & 0xff00U,DAT_100e3dd8);
    iVar1 = 0;
  }
  return iVar1;
}

