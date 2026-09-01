/* FUN_100dd594 @ 0x100dd594 */

void FUN_100dd594(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (iVar1 = FUN_101364fa(), iVar1 == 0)) {
    iVar1 = FUN_1013239a(param_1);
    uVar2 = (DAT_100dd5e0 - DAT_100dd5e4) * 0x20 & 0xff00;
    if (iVar1 == 0) {
      FUN_100a5b78(uVar2 | 0x730031,DAT_100dd5ec,DAT_100dd5e8,0);
      return;
    }
    FUN_100a5b78(uVar2 | 0x750011,DAT_100dd5ec,DAT_100dd5f0,iVar1);
    return;
  }
  return;
}

