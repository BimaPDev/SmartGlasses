/* FUN_1000914c @ 0x1000914c */

void FUN_1000914c(uint param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_14;
  uint local_10;
  int local_c;
  
  local_c = *DAT_100091d8;
  local_14 = 0;
  local_10 = param_3 & 0xffffff00;
  if (*DAT_100091dc << 0x1f < 0) {
    local_14 = param_1 & 0xff;
    uVar1 = 0;
    if (param_1 == 0) goto LAB_10009198;
    if (param_1 - 1 < 2) {
      local_14._0_2_ = (ushort)param_1 & 0xff;
      uVar2 = 5;
      local_10 = CONCAT31((int3)(param_3 >> 8),3);
      goto LAB_100091a6;
    }
    FUN_10119dc2(DAT_100091e0);
    FUN_10119dc2(DAT_100091e4,param_1);
    uVar2 = 0xffffffea;
  }
  else {
    uVar2 = 0xfffffffb;
  }
  while( true ) {
    if (*DAT_100091d8 == local_c) break;
    uVar1 = FUN_1013cdc0(uVar2);
LAB_10009198:
    uVar2 = 4;
    local_14._0_2_ = CONCAT11(uVar1,(undefined1)local_14);
LAB_100091a6:
    local_14 = CONCAT22(0x201,(ushort)local_14);
    uVar3 = FUN_10009b20();
    uVar2 = FUN_10008f34(&local_14,uVar2,uVar3);
  }
  return;
}

