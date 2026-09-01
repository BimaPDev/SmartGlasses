/* FUN_100b165c @ 0x100b165c */

undefined4 FUN_100b165c(int param_1,uint param_2,ushort param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_20;
  uint local_1c;
  
  iVar1 = FUN_10064eb8(0);
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100b1710 | (DAT_100b170c - DAT_100b1708) * 0x20 & 0xff00U,DAT_100b1714);
    uVar2 = 0xffffffff;
  }
  else {
    local_20 = 0;
    local_1c = 0;
    if (param_1 == 1) {
      local_20 = (param_2 & 1) << 2 | 2;
    }
    else if (param_1 == 2) {
      local_20 = (param_2 & 3) << 4 | 8;
      local_1c = (uint)param_3 << 0x10;
    }
    else if (param_1 == 0) {
      local_20 = param_2 << 0x10;
      local_20 = CONCAT31(local_20._1_3_,1);
      local_1c = (uint)param_3;
    }
    uVar2 = FUN_1013012a(iVar1,5,0xc,8,&local_20);
    FUN_10064c60(iVar1);
  }
  return uVar2;
}

