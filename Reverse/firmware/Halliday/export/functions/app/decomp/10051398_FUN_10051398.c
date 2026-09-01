/* FUN_10051398 @ 0x10051398 */

void FUN_10051398(uint param_1)

{
  undefined2 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  uint unaff_r11;
  uint uVar13;
  undefined4 uVar14;
  uint *local_170;
  uint local_164;
  undefined1 local_160;
  byte bStack_15f;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 local_148;
  uint *local_144;
  uint3 local_140;
  undefined1 uStack_13d;
  char local_13c;
  char local_13b [263];
  int local_34;
  
  local_34 = *DAT_10051698;
  local_164 = 0;
  local_160 = 0;
  bStack_15f = 0;
  iVar3 = FUN_1004f6cc();
  uVar1 = *(undefined2 *)(iVar3 + 0xfc);
  local_148 = 0;
  local_144 = (uint *)0x0;
  _local_140 = 0;
  iVar4 = thunk_FUN_1009f30c(600,DAT_1005169c);
  uVar5 = 0;
  uVar9 = 0;
  if (iVar4 != 0) {
    FUN_1011ea48(iVar4,0,600);
    uVar14 = DAT_100516a0;
    iVar10 = 0;
    local_170 = (uint *)(iVar4 + 300);
    puVar11 = DAT_100516ec;
    do {
      if (*(byte *)(puVar11 + 1) == param_1) {
        FUN_1011ea28(iVar4,uVar14);
        FUN_1011ea28(iVar4,*puVar11);
      }
      iVar10 = iVar10 + 1;
      puVar11 = puVar11 + 2;
    } while (iVar10 != 6);
    unaff_r11 = 0;
    uVar9 = (DAT_100516a8 - DAT_100516a4) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100516ac | uVar9,DAT_100516b0,DAT_100516b4,DAT_100516b0,0x1dd);
    local_15c = 0;
    uStack_158 = 0;
    iVar10 = FUN_1006be64(&local_15c,iVar4);
    if (-1 < iVar10) goto LAB_10051496;
    local_148 = CONCAT22(local_148._2_2_,0xd02);
    _local_140 = CONCAT13(uStack_13d,0x40000);
    local_164 = CONCAT31(local_164._1_3_,(char)param_1);
    _local_140 = CONCAT22(stack0xfffffec2,6);
    local_144 = &local_164;
    FUN_100506fc(&local_148);
    FUN_1012d1f4(iVar4);
    FUN_100a5b78(DAT_100516b8 | uVar9,DAT_100516b0,DAT_100516b4,DAT_100516b0,0x1e9);
    uVar5 = 0xffffffff;
  }
LAB_10051486:
  if (*DAT_10051698 == local_34) {
    return;
  }
  FUN_1013cdc0(uVar5);
LAB_10051496:
  FUN_1011ea28(iVar4,DAT_100516bc);
  iVar10 = FUN_1011ea10(iVar4);
  iVar12 = 0x65;
  uVar13 = uVar9 | DAT_100516f0;
LAB_100514b8:
  do {
    iVar12 = iVar12 + -1;
    if (iVar12 == 0) break;
    iVar6 = FUN_1006c070(&local_15c,&local_13c);
    if (iVar6 != 0) {
      FUN_100a5b78(uVar9 | 0x1f40011,DAT_100516b0,DAT_100516c0);
      uVar14 = 0x1f5;
      uVar5 = DAT_100516c4 | uVar9;
LAB_100514ea:
      FUN_100a5b78(uVar5,DAT_100516b0,DAT_100516b4,DAT_100516b0,uVar14);
      break;
    }
    if (local_13b[0] == '\0') {
      uVar14 = 0x1fe;
      uVar5 = uVar9 | 0x1fe0032;
      goto LAB_100514ea;
    }
    uVar14 = FUN_1011ea08(local_13b,0x2e);
    if (local_13c == '\0') {
      if (param_1 == 2) {
        iVar6 = FUN_1013d44e(uVar14,DAT_100516d4);
        if (((iVar6 == 0) && (iVar6 = FUN_1013d44e(uVar14,DAT_100516d8), iVar6 == 0)) &&
           (iVar6 = FUN_1013d44e(uVar14,DAT_100516d0), iVar6 == 0)) goto LAB_100514b8;
      }
      else {
        uVar8 = DAT_100516e8;
        if ((param_1 != 3) && (uVar8 = DAT_100516cc, param_1 != 1)) goto LAB_100514b8;
        iVar6 = FUN_1013d44e(uVar14,uVar8);
        if (iVar6 == 0) {
          FUN_1013d44e(uVar14,DAT_100516d0);
          goto LAB_100514b8;
        }
      }
      FUN_1011ea28(iVar4,local_13b);
      local_154 = 0;
      uStack_150 = 0;
      local_14c = 0;
      iVar6 = FUN_1006ba84(&local_154,iVar4,3);
      if (iVar6 < 0) break;
      FUN_1006bd24(&local_154,0,2);
      uVar7 = FUN_1006bd74(&local_154);
      uVar5 = local_164;
      local_164._1_3_ =
           (uint3)((uVar7 >> 8 & 0xff) << 0x10) | (uint3)((uVar7 >> 0x10 & 0xff) << 8) |
           (uint3)(byte)(uVar7 >> 0x18);
      local_164._0_1_ = (undefined1)uVar5;
      local_160 = (undefined1)uVar7;
      bStack_15f = FUN_1011ea10(local_13b);
      local_164 = CONCAT31(local_164._1_3_,(char)param_1);
      FUN_1006bc30(&local_154);
      FUN_1011ea48(iVar4 + iVar10,0,bStack_15f);
      FUN_100a5b78(uVar13,DAT_100516b0,DAT_100516dc,unaff_r11,local_13b,uVar7);
      bVar2 = bStack_15f;
      *(uint *)(iVar4 + 300) = local_164;
      *(ushort *)(iVar4 + 0x130) = CONCAT11(bStack_15f,local_160);
      FUN_1011ea40(iVar4 + 0x132,local_13b);
      *(undefined2 *)(iVar3 + 0xfc) = uVar1;
      local_148 = CONCAT22(local_148._2_2_,0xd02);
      local_144 = local_170;
      local_140 = (uint3)(ushort)(bVar2 + 6);
      iVar6 = FUN_100506fc(&local_148);
      if (iVar6 < 0) {
        FUN_100a5b78(DAT_100516e0 | uVar9,DAT_100516b0,DAT_100516e4,unaff_r11,local_13b,iVar6);
      }
      unaff_r11 = unaff_r11 + 1 & 0xff;
    }
  } while( true );
  FUN_100a5b78(DAT_100516c8 | uVar9,DAT_100516b0,DAT_100516b4,DAT_100516b0,0x255);
  local_144 = &local_164;
  uVar5 = 0;
  *(undefined2 *)(iVar3 + 0xfc) = uVar1;
  local_148 = CONCAT22(local_148._2_2_,0xd02);
  local_160 = 0;
  bStack_15f = 0;
  local_164 = param_1 & 0xff;
  _local_140 = CONCAT13(uStack_13d,6);
  FUN_100506fc(&local_148);
  FUN_1012d1f4(iVar4);
  FUN_1006c184(&local_15c);
  uVar9 = uVar5;
  unaff_r11 = uVar13;
  goto LAB_10051486;
}

