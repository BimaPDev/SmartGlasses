/* FUN_100ef0d4 @ 0x100ef0d4 */

void FUN_100ef0d4(uint param_1)

{
  int iVar1;
  
  if ((int)((uint)*(byte *)(DAT_100ef108 + 2) << 0x1f) < 0) {
    iVar1 = FUN_100eec8c();
    if (iVar1 != 0) {
      return;
    }
    param_1 = FUN_100eec68(param_1);
  }
  else {
    if ((int)param_1 < 0) {
      return;
    }
    if ((int)(uint)*(byte *)(*DAT_100ef108 + 2) <= (int)param_1) {
      return;
    }
  }
  FUN_100eeef4(param_1 & 0xff);
  return;
}

