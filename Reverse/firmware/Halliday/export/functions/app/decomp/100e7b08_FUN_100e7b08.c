/* FUN_100e7b08 @ 0x100e7b08 */

void FUN_100e7b08(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 local_3c;
  undefined4 uStack_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_1011ea48(&local_3c,0,0x2c);
  iVar2 = FUN_100d637c(param_1,&uStack_38,&local_30);
  if (iVar2 < 0) {
    FUN_10119dc2(DAT_100e7c9c);
  }
  else {
    local_3c = param_1;
    local_20 = FUN_10138b54();
    uVar9 = local_34 & 0xff;
    if (0x2a0 < (local_30 & 0xffff)) {
      local_30 = CONCAT22(local_30._2_2_,0x2a0);
    }
    if ((uVar9 < 0x36) && (uVar9 = local_34 >> 8 & 0xff, 0x34 < uVar9)) {
      uVar9 = 0x35;
    }
    bVar7 = uStack_38._2_1_ >> 4;
    local_2c = CONCAT31(CONCAT21(local_2c._2_2_,uStack_38._2_1_ >> 4),(char)uVar9);
    uVar3 = (DAT_100e7ca0 - DAT_100e7ca4) * 0x20 & 0xff00;
    if (bVar7 == 4) {
      uVar3 = uVar3 | 0x920000;
      uVar4 = DAT_100e7cc4;
    }
    else if (bVar7 == 8) {
      uVar3 = uVar3 | 0x8e0000;
      uVar4 = DAT_100e7cac;
    }
    else if (bVar7 == 1) {
      uVar3 = uVar3 | 0x960000;
      uVar4 = DAT_100e7ca8;
    }
    else {
      uVar3 = uVar3 | 0x9b0000;
      uVar4 = DAT_100e7cc8;
    }
    FUN_100a5b78(uVar3 | 0x31,uVar4);
    puVar1 = DAT_100e7cb0;
    bVar7 = uStack_38._2_1_ & 0xf;
    if (bVar7 == 4) {
      iVar2 = 1;
    }
    else if (bVar7 == 8) {
      iVar2 = 0;
    }
    else if (bVar7 == 2) {
      iVar2 = 2;
    }
    else {
      iVar2 = 3;
    }
    bVar7 = uStack_38._3_1_ >> 4;
    if (bVar7 == 4) {
      iVar6 = 1;
    }
    else if (bVar7 == 8) {
      iVar6 = 0;
    }
    else if (bVar7 == 2) {
      iVar6 = 2;
    }
    else {
      iVar6 = 3;
    }
    if ((uStack_38._3_1_ & 0xf) >> 2 == 2) {
      iVar5 = 4;
    }
    else {
      iVar5 = 8;
    }
    if (iVar2 == 0) {
      iVar10 = 1;
    }
    else {
      iVar10 = 2;
    }
    iVar8 = iVar5 * iVar10;
    iVar6 = (iVar6 * 4 + 4) * uVar9 + 7;
    if (iVar10 != 1) {
      if (iVar2 != 3) {
        iVar5 = 0;
      }
      iVar6 = iVar6 + iVar5;
    }
    uVar9 = (iVar8 >> 1) + 4 + (iVar6 >> 3);
    uVar3 = uVar9 & 0xff;
    iVar2 = (int)((local_30 & 0xffff) - 0xd) / (int)uVar3;
    local_28 = CONCAT31(CONCAT21(local_28._2_2_,(char)uVar9),(char)iVar2);
    local_2c = CONCAT22(((ushort)iVar2 & 0xff) * (short)uVar3,(undefined2)local_2c);
    *DAT_100e7cb0 = local_3c;
    puVar1[1] = uStack_38;
    puVar1[2] = local_34;
    puVar1[3] = local_30;
    puVar1[4] = local_2c;
    puVar1[5] = local_28;
    puVar1[6] = uStack_24;
    puVar1[7] = local_20;
    puVar1[8] = local_1c;
    puVar1[9] = uStack_18;
    puVar1[10] = uStack_14;
    if (puVar1[0x18] == 0) {
      puVar1[0x18] = DAT_100e7cb4;
    }
    thunk_FUN_101146e4(DAT_100e7cbc,DAT_100e7cb8);
    FUN_1011dc0a(DAT_100e7cbc,10);
    FUN_10119dc2(DAT_100e7cc0,local_28._1_1_,local_28 & 0xff,local_2c & 0xff,local_30 & 0xffff);
    *(byte *)(puVar1 + 10) = *(byte *)(puVar1 + 10) & 0xfd;
    uVar4 = FUN_10138b54();
    puVar1[7] = uVar4;
  }
  return;
}

