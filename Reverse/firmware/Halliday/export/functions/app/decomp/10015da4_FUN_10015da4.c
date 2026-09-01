/* FUN_10015da4 @ 0x10015da4 */

void FUN_10015da4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  undefined1 local_1c;
  int local_c;
  
  local_c = *DAT_10015e04;
  uVar1 = FUN_1009e224();
  uVar2 = FUN_1011ea10(DAT_10015e08);
  iVar3 = FUN_1011ea30(uVar1,DAT_10015e08,uVar2);
  if ((iVar3 != 0) && (*DAT_10015e0c != 0)) {
    FUN_1011ea48(auStack_20,0,0x14);
    local_1e = 0xd408;
    local_1c = 1;
    FUN_1009ece8(DAT_10015e10,auStack_20);
  }
  if (*DAT_10015e04 != local_c) {
    FUN_1013cdc0();
  }
  return;
}

