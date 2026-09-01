/* FUN_100ba138 @ 0x100ba138 */

void FUN_100ba138(int param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined1 auStack_c4 [2];
  undefined1 local_c2;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  
  FUN_100a5b78(DAT_100ba2f4 | (DAT_100ba2ec - DAT_100ba2e8) * 0x20 & 0xff00U,DAT_100ba2f8,
               DAT_100ba2f0,param_1);
  pbVar1 = DAT_100ba2fc;
  if (param_1 == 0) {
    local_b0._1_3_ = 0;
    local_b0._0_1_ = 2;
    local_ac = param_1;
    local_a8 = param_1;
    cVar2 = FUN_1013131a();
    local_b0 = CONCAT31(local_b0._1_3_,(byte)local_b0 & 0xf | cVar2 << 4);
    bVar3 = FUN_10131322();
    local_b0._0_2_ = CONCAT11(local_b0._1_1_ & 0xfe | bVar3 & 1,(byte)local_b0);
    uVar4 = FUN_10131326();
    local_ac = CONCAT31(local_ac._1_3_,0x11);
    local_a8 = 10;
    local_b0 = CONCAT22(uVar4,(short)local_b0) & 0xfffffdff;
    FUN_101367bc(&local_b0);
    local_ac = DAT_100ba308[1];
    local_b0 = *DAT_100ba308;
    local_a8._0_2_ = *(undefined2 *)(DAT_100ba308 + 2);
    bVar3 = FUN_1013130e();
    local_b0._0_1_ = (byte)local_b0 & 0xfe | bVar3 & 1;
    bVar3 = FUN_10131316();
    local_b0 = CONCAT31(local_b0._1_3_,(byte)local_b0 & 0xfd | (bVar3 & 1) << 1);
    FUN_1013682e(&local_b0,0);
    local_ac = DAT_100ba30c[1];
    local_b0 = *DAT_100ba30c;
    local_a8 = CONCAT22(local_a8._2_2_,*(undefined2 *)(DAT_100ba30c + 2));
    bVar3 = FUN_1013130e();
    local_b0._0_1_ = (byte)local_b0 & 0xfe | bVar3 & 1;
    bVar3 = FUN_10131316();
    local_b0 = CONCAT31(local_b0._1_3_,(byte)local_b0 & 0xfd | (bVar3 & 1) << 1);
    FUN_1013682e(&local_b0,1);
    FUN_100bc03c();
    FUN_100bc4b0();
    FUN_100bcac4();
    FUN_100bd858();
    FUN_100bd78c();
    FUN_100bc57c();
    FUN_100bda98();
    bVar3 = *pbVar1;
    if ((char)bVar3 < '\0') {
      FUN_10136be4();
      FUN_1011dbc8(500);
    }
    FUN_100bf184((char)bVar3 < '\0');
    FUN_100ba0a4(&local_b0,4);
    if ((char)*pbVar1 < '\0') {
      *pbVar1 = *pbVar1 & 0x7f;
    }
    else {
      FUN_1011ea48(auStack_c4,0,0x14);
      local_c2 = 0x1d;
      FUN_1009ece8(DAT_100ba304,auStack_c4);
    }
    FUN_100bf3ec();
    thunk_FUN_10136844(1);
    thunk_FUN_1013684e(1);
    iVar5 = FUN_10131322();
    if (iVar5 == 0) {
      FUN_100bb874();
    }
    pbVar1[1] = pbVar1[1] | 2;
  }
  else {
    FUN_1011ea48(&local_b0,0,0x14);
    if ((int)((uint)pbVar1[1] << 0x1e) < 0) {
      FUN_100cb4c4();
      pbVar1[1] = pbVar1[1] & 0xfe;
      local_b0._0_3_ = CONCAT12(0x2a,(undefined2)local_b0);
      FUN_1009ece8(DAT_100ba304,&local_b0);
    }
    else {
      FUN_10119dc2(DAT_100ba300,(pbVar1[1] & 3) >> 1);
    }
  }
  return;
}

