/* FUN_1007806c @ 0x1007806c */

undefined4 FUN_1007806c(undefined4 param_1,uint param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  uint extraout_r3;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 local_24;
  
  iVar8 = 0;
  local_24 = param_2 & 0xffff0000;
  iVar2 = FUN_10112e84(PTR_s_I2C_3_10078110);
  uVar3 = DAT_10078134;
  puVar1 = DAT_10078130;
  uVar7 = ((int)PTR_DAT_10078114 - (int)PTR_DAT_10078118) * 0x20 & 0xff00;
  pbVar9 = DAT_10078128;
  if (iVar2 == 0) {
    FUN_100a5b78(DAT_1007811c | uVar7,DAT_10078124,DAT_10078120);
    uVar3 = 0xffffffff;
  }
  else {
    do {
      uVar6 = (uint)*pbVar9;
      local_24 = CONCAT22(local_24._2_2_,*(undefined2 *)pbVar9);
      if (uVar6 == 0x14) {
        iVar4 = FUN_1000f6f0();
        if (iVar4 == 0) {
          uVar5 = 0xa9;
        }
        else {
          uVar5 = 0x90;
        }
        local_24._0_2_ = CONCAT11(uVar5,(undefined1)local_24);
        *puVar1 = 0x90;
        FUN_10119dc2(uVar3);
        uVar6 = extraout_r3;
      }
      FUN_1011fa42(iVar2,&local_24,2,uVar6,param_1);
      iVar8 = iVar8 + 1;
      FUN_1011fa80(1);
      pbVar9 = pbVar9 + 2;
    } while (iVar8 != 0x15);
    FUN_10077e14(1);
    FUN_100a5b78(uVar7 | 0x13c0031,DAT_10078124,DAT_1007812c);
    uVar3 = 0;
  }
  return uVar3;
}

