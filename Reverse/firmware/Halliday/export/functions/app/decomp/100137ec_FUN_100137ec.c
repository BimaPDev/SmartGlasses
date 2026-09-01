/* FUN_100137ec @ 0x100137ec */

void FUN_100137ec(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint extraout_r1;
  uint uVar4;
  undefined1 auStack_28 [2];
  undefined2 local_26;
  undefined1 local_24;
  int local_14;
  
  local_14 = *DAT_1001389c;
  bVar1 = *(byte *)(DAT_100138a8 + 0x1e);
  uVar3 = bVar1 & 0xe;
  uVar4 = (DAT_100138a0 - DAT_100138a4) * 0x20 & 0xff00;
  if ((bVar1 & 0xe) == 0) goto LAB_10013836;
  FUN_100a5b78(uVar4 | 0x3d0021,DAT_100138b0,DAT_100138ac,(bVar1 & 0xf) >> 1);
  while( true ) {
    if (*DAT_1001389c == local_14) break;
    FUN_1013cdc0();
    uVar3 = extraout_r1;
LAB_10013836:
    FUN_1011ea48(auStack_28,uVar3,0x14);
    local_26 = 0x5c8;
    FUN_100a5b78(uVar4 | 0x460031,DAT_100138b0,DAT_100138b4,param_2);
    if ((*(byte *)(param_1 + 3) >> 5 == 1) && (param_2 == 0)) {
      local_26 = CONCAT11(2,(undefined1)local_26);
    }
    if ((int)((uint)*(byte *)(param_1 + 4) << 0x1e) < 0) {
      local_26 = 0x408;
      local_24 = 0;
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x20;
    }
    FUN_1011dbc8(0x14);
    uVar2 = FUN_1009e224();
    FUN_1009ece8(uVar2,auStack_28);
  }
  return;
}

