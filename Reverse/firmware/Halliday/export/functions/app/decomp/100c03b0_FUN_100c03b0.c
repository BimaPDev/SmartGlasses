/* FUN_100c03b0 @ 0x100c03b0 */

void FUN_100c03b0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_24;
  
  uVar2 = (DAT_100c043c - DAT_100c0438) * 0x20 & 0xff00;
  uVar3 = param_1 - 1;
  FUN_100a5b78(uVar2 | 0x8a0031,DAT_100c0444,DAT_100c0440,param_1);
  if ((uVar3 & 0xff) < 3) {
    local_24 = 0x266403;
    iVar1 = FUN_1007186c(&local_24);
    if (iVar1 == 0) {
      FUN_10079b64(1);
      FUN_1011aab8(0);
      FUN_100727ac(uVar3);
      FUN_100a5b78(uVar2 | 0x830031,DAT_100c044c,DAT_100c0448,uVar3);
    }
  }
  FUN_1011ea48(&local_24,0,0x14);
  local_24._0_3_ = CONCAT12(0x25,(undefined2)local_24);
  FUN_1009ece8(DAT_100c0450,&local_24);
  return;
}

