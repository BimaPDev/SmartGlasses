/* FUN_10010a24 @ 0x10010a24 */

void FUN_10010a24(void)

{
  int iVar1;
  undefined1 auStack_38 [24];
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  undefined4 local_14;
  undefined1 *local_10;
  int local_c;
  
  local_c = *DAT_10010a84;
  FUN_1011ea48(auStack_20,0,0x14,0);
  iVar1 = FUN_1009e224();
  if (iVar1 != 0) {
    local_1e = 0x2c1c;
    FUN_1013ca1a(auStack_38,0,1);
    local_14 = DAT_10010a88;
    local_10 = auStack_38;
    iVar1 = FUN_1009ece8(iVar1,auStack_20);
    if (iVar1 != 0) {
      FUN_1011dbde(auStack_38,0xffffffff);
    }
  }
  if (*DAT_10010a84 != local_c) {
    FUN_1013cdc0();
  }
  return;
}

