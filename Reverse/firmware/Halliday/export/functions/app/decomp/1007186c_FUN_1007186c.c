/* FUN_1007186c @ 0x1007186c */

undefined4 FUN_1007186c(byte *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 local_18;
  uint local_14;
  
  pbVar7 = param_1;
  local_18 = param_3;
  local_14 = param_4;
  iVar2 = FUN_10112e84(DAT_10071910);
  piVar1 = DAT_1007191c;
  iVar4 = DAT_10071918;
  iVar5 = DAT_10071914 - DAT_10071918;
  *DAT_1007191c = iVar2;
  uVar6 = iVar5 * 0x20 & 0xff00;
  if (iVar2 == 0) {
    FUN_100a5b78(DAT_10071920 | uVar6,DAT_10071928,DAT_10071924,iVar4,pbVar7,param_2);
    uVar3 = 0xffffffea;
  }
  else {
    local_18._0_2_ = CONCAT11(param_1[1],(byte)local_18);
    local_14 = 0xff;
    iVar4 = FUN_1012225c(&local_14);
    if (iVar4 == 0) {
      local_18._0_2_ = CONCAT11((char)local_14,(byte)local_18);
      FUN_100a5b78(DAT_10071930 | uVar6,DAT_10071928,DAT_1007192c,0,local_14 & 0xff,param_2);
    }
    else {
      FUN_100a5b78(DAT_10071934 | uVar6,DAT_10071928,DAT_10071938,local_18._1_1_,pbVar7,param_2);
    }
    FUN_10083dc8(local_18._1_1_);
    local_18 = CONCAT31(local_18._1_3_,(byte)local_18 & 0xf8 | *param_1 & 7);
    local_18 = CONCAT13(param_1[3],CONCAT12(param_1[2],(undefined2)local_18));
    (*(code *)**(undefined4 **)(*piVar1 + 8))(*piVar1,&local_18);
    uVar3 = 0;
  }
  return uVar3;
}

