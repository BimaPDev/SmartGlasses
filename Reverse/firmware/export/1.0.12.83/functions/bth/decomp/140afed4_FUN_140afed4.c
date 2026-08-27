/* FUN_140afed4 @ 0x140afed4 */

/* WARNING: Instruction at (ram,0x140c0164) overlaps instruction at (ram,0x140c0162)
    */
/* WARNING: Removing unreachable block (ram,0x1403cd70) */

code * FUN_140afed4(code *param_1,code *param_2,uint param_3)

{
  code cVar1;
  ushort uVar2;
  ushort *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  byte bVar6;
  char cVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  code *pcVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  int iVar17;
  undefined4 *puVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  code *pcVar24;
  code *pcVar25;
  undefined4 *unaff_r5;
  undefined4 uVar26;
  code *unaff_r6;
  code *unaff_r7;
  int unaff_r8;
  int *unaff_r9;
  undefined4 unaff_r10;
  uint *unaff_r11;
  undefined4 uVar27;
  code *unaff_s16;
  undefined8 uVar28;
  uint in_stack_ffffffac;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  uint local_20;
  code *local_1c;
  undefined4 local_18;
  
  puVar11 = DAT_140c01e8;
  piVar4 = DAT_140b0524;
  uVar26 = DAT_140aed24;
  uVar10 = DAT_140aed20;
  pbVar16 = DAT_1404f4e4;
  piVar12 = DAT_1404f4e0;
  iVar21 = *DAT_140b0194;
  uVar22 = (uint)param_1 & 0xff;
  puVar18 = (undefined4 *)(param_3 & 0xffff);
  local_30 = param_2;
  local_34 = param_1;
  local_2c = param_3;
  if ((uVar22 + 0x69 & 0xff) < 0x5d) {
    uVar23 = uVar22 - 0x97;
    puVar19 = &switchD_140affc2::switchdataD_140affc8;
    pcVar14 = param_1;
    switch(uVar23) {
    case 0:
      param_1 = (code *)0x140c0114;
      break;
    case 1:
      puVar19 = (uint *)(param_1 + 0x140affc8);
      break;
    case 2:
      *(short *)((int)puVar18 + 6) = (short)param_2;
      break;
    case 3:
      goto switchD_140affc2_caseD_3;
    case 5:
switchD_140affc2_caseD_5:
      *(uint *)(param_2 + 0x10) = uVar23;
      *unaff_r9 = *unaff_r9 + 1;
      return unaff_s16;
    case 10:
      pcVar14 = (code *)0x0;
      if ((uint)param_1 >> 0x1c != 0) {
        pcVar14 = (code *)thunk_FUN_140db700();
      }
      iVar21 = *(int *)(param_2 + 4);
      *(int *)(unaff_r6 + 4) = *(int *)(unaff_r6 + 4) + 1;
      piVar12 = DAT_140c0548;
      if (*(int *)(iVar21 + (int)unaff_r5 * 4) != 0) {
        while (*piVar12 != 0) {
          uVar28 = FUN_140c03c0();
          iVar20 = (int)((ulonglong)uVar28 >> 0x20);
          if (unaff_r5 == (undefined4 *)uVar28) {
            iVar13 = *(int *)(param_2 + 4);
            iVar20 = FUN_140c03c0(*(undefined4 *)(iVar20 + 4));
            if (*(int *)(iVar13 + iVar20 * 4) != 0) {
              iVar17 = FUN_140c8514();
LAB_140c04b2:
              *(int *)(iVar17 + 4) = *(int *)(iVar17 + 4) + 1;
              FUN_140c028a(*(undefined4 *)(iVar13 + iVar20 * 4));
              *(int *)(iVar13 + iVar20 * 4) = iVar17;
            }
            break;
          }
          uVar28 = FUN_140c03c0(*(undefined4 *)(iVar20 + 4));
          puVar11 = (undefined4 *)((ulonglong)uVar28 >> 0x20);
          if (unaff_r5 == (undefined4 *)uVar28) {
            iVar13 = *(int *)(param_2 + 4);
            iVar20 = FUN_140c03c0(*puVar11);
            if (*(int *)(iVar13 + iVar20 * 4) != 0) {
              iVar17 = FUN_140c3328();
              goto LAB_140c04b2;
            }
            break;
          }
          piVar12 = puVar11 + 2;
        }
        pcVar14 = (code *)FUN_140c028a(*(undefined4 *)(iVar21 + (int)unaff_r5 * 4));
      }
      *(code **)(iVar21 + (int)unaff_r5 * 4) = unaff_r6;
      for (uVar22 = 0; uVar22 < *(uint *)(param_2 + 8); uVar22 = uVar22 + 1) {
        pcVar14 = (code *)0x0;
        if (*(int *)(*(int *)(param_2 + 0xc) + uVar22 * 4) != 0) {
          pcVar14 = (code *)FUN_140c028a();
          *(undefined4 *)(*(int *)(param_2 + 0xc) + uVar22 * 4) = 0;
        }
      }
      return pcVar14;
    case 0xb:
      param_2 = (code *)(0x15 - (int)unaff_r7);
    case 0xc:
      *(uint **)(param_2 + 0x19) = &switchD_140affc2::switchdataD_140affc8;
      puVar18[uVar22 - 0xaf] = param_2 + 0x15;
      return (code *)&DAT_00000055;
    case 0x10:
      FUN_140cb9c4();
      uVar23 = 0;
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x1b:
      *(uint *)(param_2 + 0x74) = uVar23;
      *(short *)(param_2 + 0x78) = (short)uVar23;
      *(uint *)(param_2 + 0x7c) = uVar23;
      *(uint *)(param_2 + 0x80) = uVar23;
      *(uint *)(param_2 + 0x84) = uVar23;
      *(uint *)(param_2 + 0x88) = uVar23;
      iVar21 = DAT_140bffc8;
      *(int *)param_2 = DAT_140bffc8;
      *(int *)(param_2 + 4) = iVar21 + 0x14;
      pcVar14 = (code *)FUN_140cb900();
      return pcVar14;
    case 0x11:
      param_2[0x7c] = SUB41(uVar23,0);
      *(uint *)(param_2 + 0x74) = uVar23;
      *(uint *)(param_2 + 0x78) = uVar23;
      *(uint *)(param_2 + 0x80) = uVar23;
      *(uint *)(param_2 + 0x84) = uVar23;
      *(uint *)(param_2 + 0x88) = uVar23;
      *(uint *)(param_2 + 0x8c) = uVar23;
      iVar21 = DAT_140bff90;
      *(int *)param_2 = DAT_140bff90;
      *(int *)(param_2 + 4) = iVar21 + 0x14;
      pcVar14 = (code *)FUN_140cb996();
      return pcVar14;
    case 0x12:
      *DAT_140c01e8 = &switchD_140affc2::switchdataD_140affc8;
      puVar11[1] = param_2;
      puVar11[2] = param_2;
      puVar11[3] = param_2;
      puVar11[4] = param_2;
      puVar11[5] = param_2;
      puVar11[6] = param_2;
      uVar23 = in_stack_ffffffac;
      FUN_140c0d60(puVar11 + 7);
      *puVar11 = unaff_r10;
      goto code_r0x140c007a;
    case 0x17:
      puVar11 = unaff_r5;
code_r0x140c007a:
      unaff_r10 = DAT_140c0224;
      puVar11[8] = uVar23;
      puVar11[9] = unaff_r8;
      FUN_140bff94(unaff_r10);
      FUN_140cb9c4(DAT_140c01ec);
      iVar21 = DAT_140c01f0;
      pcVar14 = DAT_140c01ec;
      unaff_r7 = DAT_140c01ec + -8;
      *(int *)(DAT_140c01ec + -8) = DAT_140c01f0;
      *(code **)(pcVar14 + 0x70) = param_2;
      *(int *)pcVar14 = iVar21 + 0x14;
      puVar19 = (uint *)pcVar14;
      unaff_r5 = puVar11;
switchD_140affc2_caseD_18:
      puVar18 = unaff_r5;
      param_1 = pcRam140c01f4;
      *(short *)((int)puVar19 + 0x74) = (short)param_2;
      *(code **)((int)puVar19 + -4) = param_2;
      *(code **)((int)puVar19 + 0x78) = param_2;
      *(code **)((int)puVar19 + 0x7c) = param_2;
      *(code **)((int)puVar19 + 0x80) = param_2;
      *(code **)((int)puVar19 + 0x84) = param_2;
      FUN_140cb900(pcVar14);
      unaff_r5 = puVar18;
      unaff_r6 = param_1;
      goto switchD_140affc2_caseD_19;
    case 0x18:
      goto switchD_140affc2_caseD_18;
    case 0x19:
switchD_140affc2_caseD_19:
      FUN_140bff94(param_1,puVar18);
      FUN_140bff94(uRam140c01f8,unaff_r5);
      uVar23 = *unaff_r11;
      puVar19 = (uint *)(*(uint *)(unaff_r6 + 0x10) | 0x2000);
      *(undefined4 *)(unaff_r7 + 0x78) = unaff_r10;
      unaff_r7 = pcRam140c01fc;
    case 0x1a:
      *(uint **)(unaff_r6 + 0x10) = puVar19;
      puVar19 = (uint *)pcRam140c0200;
      unaff_r5 = *(undefined4 **)(uVar23 + 8);
      *(undefined4 *)(unaff_r6 + 0x74) = unaff_r10;
      param_1 = unaff_r7 + 0x1c;
      break;
    case 0x1c:
      param_1 = (code *)0x140c02bc;
      break;
    default:
      goto switchD_140aff0a_caseD_20;
    }
    *(code **)(unaff_r7 + 0x18) = param_2;
    uVar10 = DAT_140c0228;
    unaff_r6 = pcRam140c0204;
    *(uint **)unaff_r7 = puVar19;
    *(code **)(unaff_r7 + 4) = param_2;
    *(code **)(unaff_r7 + 8) = param_2;
    *(code **)(unaff_r7 + 0xc) = param_2;
    *(code **)(unaff_r7 + 0x10) = param_2;
    *(code **)(unaff_r7 + 0x14) = param_2;
    FUN_140c0d60(param_1);
    pcVar14 = pcRam140c0200;
    uVar22 = *unaff_r11;
    *(undefined4 *)unaff_r7 = uVar10;
    *(undefined4 **)(unaff_r7 + 0x20) = unaff_r5;
    *(int *)(unaff_r7 + 0x24) = unaff_r8;
    uVar26 = *(undefined4 *)(uVar22 + 4);
    *(code **)(unaff_r6 + 0x18) = param_2;
    *(code **)unaff_r6 = pcVar14;
    *(code **)(unaff_r6 + 4) = param_2;
    *(code **)(unaff_r6 + 8) = param_2;
    *(code **)(unaff_r6 + 0xc) = param_2;
    *(code **)(unaff_r6 + 0x10) = param_2;
    *(code **)(unaff_r6 + 0x14) = param_2;
    FUN_140c0d60(unaff_r6 + 0x1c);
    pcVar14 = pcRam140c0200;
    uVar27 = *(undefined4 *)(*unaff_r11 + 0xc);
    *(undefined4 *)unaff_r6 = uVar10;
    *(undefined4 *)(unaff_r6 + 0x20) = uVar26;
    *(int *)(unaff_r6 + 0x24) = unaff_r8;
    unaff_r5 = puRam140c0208;
    *puRam140c0208 = pcVar14;
    unaff_r5[1] = param_2;
    unaff_r5[2] = param_2;
    unaff_r5[3] = param_2;
    unaff_r5[4] = param_2;
    unaff_r5[5] = param_2;
    unaff_r5[6] = param_2;
    FUN_140c0d60(unaff_r5 + 7);
    *unaff_r5 = uVar10;
    unaff_r5[8] = uVar27;
    unaff_r5[9] = unaff_r8;
    unaff_r8 = DAT_140c0230;
    unaff_r11 = DAT_140c022c;
    FUN_140bff58(DAT_140c022c,unaff_r7);
    FUN_140cb9c4(unaff_r8);
    uVar23 = uRam140c020c;
    unaff_r7 = (code *)(unaff_r8 + -8);
    *(char *)(unaff_r8 + 0x78) = (char)param_2;
    *(uint *)(unaff_r8 + -8) = uVar23;
switchD_140affc2_caseD_3:
    *(code **)(unaff_r8 + -4) = param_2;
    *(uint *)(unaff_r7 + 8) = uVar23 + 0x14;
    *(code **)(unaff_r8 + 0x70) = param_2;
    *(code **)(unaff_r8 + 0x74) = param_2;
    *(code **)(unaff_r8 + 0x7c) = param_2;
    *(code **)(unaff_r8 + 0x80) = param_2;
    *(code **)(unaff_r8 + 0x84) = param_2;
    *(code **)(unaff_r8 + 0x88) = param_2;
    param_2 = pcRam140c0210;
    FUN_140cb996(unaff_r8,unaff_r6);
    FUN_140bff58(param_2,unaff_r5);
    FUN_140bff58(uRam140c0214,unaff_r5);
    uVar23 = *(uint *)(param_2 + 0x10);
    *(uint **)(unaff_r8 + 0x70) = unaff_r11;
    uVar23 = uVar23 | 0x2000;
    *(uint **)(param_2 + 0x74) = unaff_r11;
    goto switchD_140affc2_caseD_5;
  }
  if (0x33 < uVar22 - 0x15) goto switchD_140aff0a_caseD_20;
  switch(uVar22) {
  case 0x1a:
    if (*DAT_140b0490 == iVar21) {
      *DAT_140b13d0 = 0x20;
      uVar9 = FUN_14053e64(0x95);
      puVar15 = (undefined1 *)FUN_14074378(0x9500,uVar9,0,0x10);
      iVar21 = FUN_14053dc8(3);
      uVar8 = *(undefined1 *)(iVar21 + 0xe);
      *(undefined4 **)(puVar15 + 4) = puVar18;
      *puVar15 = uVar8;
      iVar21 = FUN_140ae13c(3,puVar18);
      if (iVar21 == 0) {
        local_20 = DAT_140b13d8;
        local_1c = DAT_140b13d4;
        pcVar14 = (code *)FUN_1402a6e8(4,0xe8,DAT_140b13e0,DAT_140b13dc);
        return pcVar14;
      }
      FUN_140e5278(iVar21,param_2,puVar18);
      *(int *)(puVar15 + 8) = iVar21;
      pcVar14 = (code *)FUN_140743d0(puVar15);
      return pcVar14;
    }
    break;
  case 0x1b:
    if (*DAT_140b0490 == iVar21) {
      uVar9 = 0x21;
LAB_140b0432:
      *DAT_140b1450 = uVar9;
      uVar9 = FUN_14053e64(0x95);
      puVar15 = (undefined1 *)FUN_14074378(0x9501,uVar9,0,0x10);
      iVar21 = FUN_14053dc8(3);
      uVar8 = *(undefined1 *)(iVar21 + 0xe);
      *(undefined4 **)(puVar15 + 4) = puVar18;
      *puVar15 = uVar8;
      iVar21 = FUN_140ae13c(3,puVar18);
      if (iVar21 == 0) {
        local_20 = DAT_140b1458;
        local_1c = DAT_140b1454;
        pcVar14 = (code *)FUN_1402a6e8(4,0xfe,DAT_140b1460,DAT_140b145c);
        return pcVar14;
      }
      FUN_140e5278(iVar21,param_2,puVar18);
      *(int *)(puVar15 + 8) = iVar21;
      pcVar14 = (code *)FUN_140743d0(puVar15);
      return pcVar14;
    }
    break;
  case 0x1c:
    if (*DAT_140b0490 == iVar21) {
      uVar9 = 0x22;
      goto LAB_140b0432;
    }
    break;
  case 0x1d:
    if (*DAT_140b0490 == iVar21) {
      uVar9 = 0x23;
      goto LAB_140b0432;
    }
    break;
  case 0x1e:
    if (*DAT_140b0490 == iVar21) {
      uVar9 = 0x24;
      goto LAB_140b0432;
    }
    break;
  case 0x1f:
    if (*DAT_140b0490 == iVar21) {
      uVar9 = 0x25;
      goto LAB_140b0432;
    }
    break;
  default:
    goto switchD_140aff0a_caseD_20;
  case 0x26:
    if (*DAT_140b0520 == iVar21) {
      local_34 = (code *)DAT_140b3330;
      local_38 = (undefined4 *)DAT_140b3334;
      local_28 = (uint)(byte)param_2[0x52];
      local_2c = (uint)(byte)param_2[0x51];
      local_30 = (code *)(uint)(byte)param_2[0x28];
      FUN_1402a6e8(4,0x12,DAT_140b333c,DAT_140b3338);
      FUN_140463cc();
      local_18 = (code *)(uint)(byte)param_2[0x51];
      local_1c = param_2 + 0x29;
      local_20 = (uint)(byte)param_2[0x28];
      local_30 = (code *)(uint)(byte)param_2[0x52];
      local_28 = 5;
      local_34 = (code *)0x3c;
      local_2c = 0;
      local_38 = (undefined4 *)0x0;
      local_24 = (code **)param_2;
      FUN_14046194(0,1,0,DAT_140b3340);
      local_20 = DAT_14046370;
      local_1c = DAT_1404636c;
      local_18 = (code *)0x0;
      FUN_1402a6e8(4,0x90,DAT_14046378,DAT_14046374);
      *(undefined1 *)(DAT_1404637c + 1) = 1;
      puVar15 = DAT_14043c40;
      pbVar16 = DAT_14043c3c;
      local_18 = (code *)(uint)*DAT_14043c3c;
      local_20 = DAT_14043c48;
      local_1c = DAT_14043c44;
      FUN_1402a6e8(4,0x4db,DAT_14043c50,DAT_14043c4c);
      iVar21 = FUN_140e5148(*(undefined4 *)(pbVar16 + 0xe42),0xffffffff);
      puVar3 = DAT_14043c54;
      if (iVar21 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x710,DAT_14043c5c);
      }
      if (*pbVar16 == 0) {
        uVar10 = *(undefined4 *)(pbVar16 + 0xe42);
        uVar2 = *DAT_14043c54;
        *pbVar16 = 1;
        *puVar3 = uVar2 & 0xfffd;
        *puVar15 = 1;
        FUN_140e52d8(uVar10);
        pcVar14 = (code *)FUN_14048958(0,0,DAT_14043c58);
        return pcVar14;
      }
      uVar10 = *(undefined4 *)(pbVar16 + 0xe42);
      uVar2 = *DAT_14043c54;
      pbVar16[0x5f] = 1;
      *puVar3 = uVar2 | 2;
      pcVar14 = (code *)FUN_140e52d8(uVar10);
      return pcVar14;
    }
    break;
  case 0x27:
    if (*DAT_140b0520 == iVar21) {
      FUN_1402a6e8(4,0x24,DAT_140b3374,DAT_140b3370);
      local_20 = DAT_140463bc;
      local_1c = DAT_140463b8;
      local_18 = (code *)0x0;
      FUN_1402a6e8(4,0x97,DAT_140463c4,DAT_140463c0);
      *(undefined1 *)(DAT_140463c8 + 1) = 0;
      pcVar14 = (code *)FUN_14043b00(0xa0);
      return pcVar14;
    }
    break;
  case 0x2b:
    local_38 = puVar18;
    FUN_14054210(DAT_140b0524);
    iVar20 = *piVar4;
    if (iVar20 != 0) {
      iVar20 = iVar20 + *(ushort *)(iVar20 + 6) + 0x30;
    }
    FUN_140e5278(iVar20,param_2,local_38);
    uVar10 = FUN_140b1afc();
    if (*DAT_140b0520 == iVar21) {
      pcVar14 = (code *)FUN_140e5198(uVar10,0x80,0,0);
      return pcVar14;
    }
    break;
  case 0x2c:
    local_1c = (code *)thunk_FUN_1409edf8();
    uVar8 = 0x2d;
    goto LAB_140b023e;
  case 0x2e:
    if (*DAT_140b0490 == iVar21) {
      local_28 = thunk_FUN_1409f124();
      uVar27 = DAT_140af864;
      uVar26 = DAT_140af860;
      uVar10 = DAT_140af858;
      puVar11 = (undefined4 *)0x2;
      puVar5 = (undefined4 *)0x0;
      puVar18 = local_38;
      while (local_38 = puVar5, local_28 == 0) {
        FUN_1402a6e8(4,0x173,DAT_140af85c,uVar10,uVar27,uVar26);
        puVar18 = local_38;
        if (puVar11 == (undefined4 *)0x1) break;
        local_28 = thunk_FUN_1409f124();
        puVar11 = (undefined4 *)0x1;
        puVar5 = (undefined4 *)0x1;
        puVar18 = local_38;
      }
      local_38 = puVar18;
      local_24 = (code **)CONCAT22(local_24._2_2_,0x15);
      local_2c = CONCAT31(local_2c._1_3_,0x2f);
      pcVar14 = (code *)FUN_140a49fc(local_2c,local_28,local_24);
      return pcVar14;
    }
    break;
  case 0x30:
    uVar8 = FUN_1403cc28(param_2,0x14);
    local_1c = (code *)((int)&local_24 + 3);
    local_20 = CONCAT31(local_20._1_3_,0x31);
    local_18 = (code *)CONCAT22(local_18._2_2_,1);
    local_24 = (code **)CONCAT13(uVar8,(undefined3)local_24);
    param_1 = (code *)FUN_140a49fc(local_20,local_1c,local_18);
    goto switchD_140aff0a_caseD_20;
  case 0x32:
    FUN_140af908(param_2);
    FUN_1402a6e8(4,0x3fd,DAT_140b01a8,DAT_140b01a4,DAT_140b019c,DAT_140b01a0);
    FUN_1409fd44(1);
    if (*DAT_140b01ac != '\0') {
      *DAT_140b01ac = '\0';
    }
    param_1 = (code *)FUN_140b1528();
    if (param_1 != (code *)0xff) {
      FUN_140b1528();
      if (*DAT_140b0194 == iVar21) {
        pcVar14 = (code *)FUN_14044eb4();
        return pcVar14;
      }
      break;
    }
    goto switchD_140aff0a_caseD_20;
  case 0x34:
    if (*DAT_140b0490 == iVar21) {
      pcVar14 = (code *)FUN_140e59e8(1,0,DAT_140b0494 - DAT_140b0498);
      return pcVar14;
    }
    break;
  case 0x35:
    if (*DAT_140b0490 == iVar21) {
      local_30 = (code *)DAT_140af8f4;
      local_2c = DAT_140af8f0;
      iVar20 = *DAT_140af8f8;
      FUN_1402a6e8(4,0x1a3,DAT_140af8fc,DAT_140af900);
      FUN_1402a9fc(DAT_140af904,1,6,param_2);
      local_1c = (code *)0x0;
      local_18 = (code *)((uint)local_18._2_2_ << 0x10);
      iVar13 = FUN_140db784(param_2,&local_1c,6);
      iVar21 = DAT_1404b498;
      if (iVar13 == 0) {
        if (*DAT_140af8f8 == iVar20) {
          if (*(char *)(DAT_1404b57c + 6) == '\0') {
            return (code *)0x0;
          }
          pcVar14 = (code *)(uint)*(byte *)(DAT_1404b57c + 10);
          if (pcVar14 == (code *)0x0) {
            local_18 = (code *)DAT_1404b49c;
            local_20 = DAT_1404b4a0;
            local_1c = pcVar14;
            pcVar14 = (code *)FUN_1402a6e8(4,0x127b,DAT_1404b4a8,DAT_1404b4a4);
            if (*(int *)(iVar21 + 0xc) != 0) {
              pcVar14 = (code *)FUN_14048588(*(undefined2 *)(iVar21 + 8));
              return pcVar14;
            }
          }
          else {
            local_1c = DAT_1404b4ac;
            local_20 = DAT_1404b4b0;
            local_18 = pcVar14;
            FUN_1402a6e8(4,0x5b1,DAT_1404b4a8,DAT_1404b4a4);
            local_18 = (code *)DAT_1404b49c;
            local_20 = DAT_1404b4a0;
            local_1c = pcVar14;
            pcVar14 = (code *)FUN_1402a6e8(4,0x127b,DAT_1404b4a8,DAT_1404b4a4);
          }
          return pcVar14;
        }
      }
      else {
        FUN_140e5278(&local_24,param_2,puVar18);
        pcVar14 = (code *)FUN_1404b4b4(&local_24);
        if (*DAT_140af8f8 == iVar20) {
          return pcVar14;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_14039adc();
    }
    break;
  case 0x36:
    if (*DAT_140b0490 == iVar21) {
      iVar20 = *DAT_140afb44;
      iVar21 = FUN_1404d1e8();
      if (iVar21 == 0xff) {
        pcVar14 = (code *)FUN_1402a6e8(4,0x1f9,DAT_140afb50,DAT_140afb4c,DAT_140afb58,DAT_140afb54);
      }
      else {
        puVar19 = (uint *)FUN_1404a1b4();
        local_1c = (code *)*puVar19;
        uVar22 = puVar19[1];
        local_18 = (code *)CONCAT22(local_18._2_2_,(short)uVar22);
        local_30 = (code *)((uVar22 & 0xffff) >> 8);
        local_34 = (code *)(uVar22 & 0xff);
        local_38 = (undefined4 *)((uint)local_1c >> 0x18);
        FUN_1402a6e8(4,0x1ed,DAT_140afb50,DAT_140afb4c,DAT_140afb48,(uint)local_1c & 0xff,
                     ((uint)local_1c & 0xffff) >> 8,((uint)local_1c & 0xffffff) >> 0x10);
        local_24 = &local_1c;
        local_28 = CONCAT31(local_28._1_3_,0x37);
        local_20 = CONCAT22(local_20._2_2_,6);
        pcVar14 = (code *)FUN_140a49fc(local_28,local_24,local_20);
      }
      if (*DAT_140afb44 != iVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_14039adc();
      }
      return pcVar14;
    }
    break;
  case 0x38:
    if (*DAT_140b0490 == iVar21) {
      uVar22 = (uint)(byte)*param_2;
      local_20 = DAT_140b31e4;
      local_1c = DAT_140b31e8;
      local_18 = (code *)uVar22;
      pcVar14 = (code *)FUN_1402a6e8(4,0xe,DAT_140b31f0,DAT_140b31ec);
      if (((uVar22 != 1) && (uVar22 != 2)) && (uVar22 != 0)) {
        return pcVar14;
      }
      FUN_1404a860();
      return (code *)0x2;
    }
    break;
  case 0x3a:
    if (*DAT_140b0490 != iVar21) break;
    pcVar14 = param_2 + 1;
    bVar6 = (char)param_3 - 1;
    switch(*param_2) {
    case (code)0x0:
      FUN_14044dec();
      pcVar14 = (code *)FUN_1404499c(2,10,0x3c);
      return pcVar14;
    case (code)0x1:
      pcVar14 = (code *)FUN_14044a50();
      return pcVar14;
    case (code)0x3:
      FUN_140af3fc(pcVar14);
      FUN_14045144(1);
      FUN_14044a50();
      FUN_14044fbc(1,pcVar14);
      FUN_14044c48(1,0,0,0x5dc);
      *DAT_140af3f8 = 0;
      return (code *)0x0;
    case (code)0x4:
      param_2 = (code *)FUN_140af300();
      if (param_2 != (code *)0xff) {
        FUN_140af300();
        pcVar14 = (code *)FUN_14044eb4();
        return pcVar14;
      }
      break;
    case (code)0x6:
      param_2 = (code *)FUN_140af300();
      uVar10 = DAT_140af3d0;
      if (param_2 == (code *)0xff) {
        local_28 = DAT_140af3cc;
        local_24 = (code **)DAT_140af3d0;
        iVar21 = *DAT_140af3d4;
        pcVar14 = (code *)FUN_1402a6e8(4,0x6b,DAT_140af3dc,DAT_140af3d8);
        if (*DAT_140af3e0 == '\0') {
          puVar19 = (uint *)FUN_1409f464();
          if ((puVar19 == (uint *)0x0) || (*puVar19 == 0)) {
            uVar26 = 0x72;
            local_28 = DAT_140af3e8;
          }
          else {
            uVar22 = 0;
            do {
              if (*(char *)((int)puVar19 + uVar22 * 0x72 + 0x8a) == '\0') {
                if (uVar22 != 5) {
                  iVar20 = (short)uVar22 * 0x72;
                  local_1c = *(code **)((int)puVar19 + iVar20 + 0x1a);
                  local_18 = (code *)CONCAT13(local_18._3_1_,
                                              *(undefined3 *)((int)puVar19 + iVar20 + 0x1e));
                  FUN_14044a50();
                  FUN_14045144(1);
                  FUN_14044fbc(1,&local_1c);
                  pcVar14 = (code *)FUN_14044c48(1,0,0,0);
                  *DAT_140af3e4 = 1;
                  goto LAB_140af334;
                }
                break;
              }
              uVar22 = uVar22 + 1 & 0xff;
            } while (uVar22 < *puVar19);
            uVar26 = 0x7e;
            local_28 = DAT_140af3ec;
          }
          local_24 = (code **)uVar10;
          pcVar14 = (code *)FUN_1402a6e8(4,uVar26,DAT_140af3dc,DAT_140af3d8);
        }
LAB_140af334:
        if (*DAT_140af3d4 != iVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_14039adc();
        }
        return pcVar14;
      }
      break;
    case (code)0x7:
      param_2 = (code *)FUN_140af300();
      if (param_2 == (code *)0xff) {
        iVar21 = FUN_140aee5c();
        param_2 = (code *)0x1;
        if (iVar21 != 1) {
          FUN_14044dec();
          pcVar14 = (code *)FUN_14045144(1);
          return pcVar14;
        }
      }
      break;
    case (code)0x8:
      local_1c = (code *)*DAT_140aed28;
      FUN_1402a6e8(4,0x68,DAT_140aed30,DAT_140aed2c,DAT_140aed24,DAT_140aed20);
      iVar21 = FUN_140af300();
      local_38 = (undefined4 *)iVar21;
      FUN_1402a6e8(4,0x6a,DAT_140aed30,DAT_140aed2c,DAT_140aed34,uVar10);
      uVar27 = DAT_140aed58;
      uVar10 = DAT_140aed38;
      local_24 = *(code ***)pcVar14;
      local_20 = CONCAT22(local_20._2_2_,*(undefined2 *)(param_2 + 5));
      if (iVar21 == 0xff) {
        FUN_1402a6e8(4,0x51,DAT_140aed30,DAT_140aed2c,uVar26,DAT_140aed58);
        FUN_1402a9fc(DAT_140aed44,1,6,&local_24);
        piVar12 = (int *)FUN_1409f464();
        if ((piVar12 == (int *)0x0) || (iVar21 = *piVar12, iVar21 == 0)) {
          FUN_1402a6e8(4,0x55,DAT_140aed30,DAT_140aed2c,DAT_140aed54,uVar27);
          local_38 = (undefined4 *)FUN_140af300();
        }
        else {
          iVar13 = 0;
          iVar20 = (int)piVar12 + 0x1a;
          do {
            iVar17 = FUN_140db784(iVar20,&local_24,6);
            if (iVar17 == 0) {
              FUN_1402a6e8(4,0x5c,DAT_140aed30,DAT_140aed2c,DAT_140aed40,uVar27);
              FUN_140410b4(&local_24);
              FUN_14045144(1);
              break;
            }
            iVar13 = iVar13 + 1;
            iVar20 = iVar20 + 0x72;
          } while (iVar21 != iVar13);
          local_38 = (undefined4 *)FUN_140af300();
        }
        local_34 = (code *)0x1;
        local_30 = (code *)0xff;
        FUN_1402a6e8(4,0xe,DAT_140aed30,DAT_140aed2c,DAT_140aed4c,DAT_140aed48);
        *DAT_140aed50 = 1;
        local_28 = CONCAT22(local_28._2_2_,0x100);
        local_28 = CONCAT31(local_28._1_3_,9);
        pcVar14 = (code *)FUN_140afd14(&local_28,2);
      }
      else {
        FUN_1402a6e8(4,0x3a,DAT_140aed30,DAT_140aed2c,uVar26,DAT_140aed38);
        pcVar14 = (code *)FUN_1409f464();
        if (((pcVar14 != (code *)0x0) && (*(uint *)pcVar14 != 0)) &&
           (uVar22 = *(uint *)pcVar14 & 0xff, uVar22 != 0)) {
          pcVar24 = pcVar14 + 0x1a;
          pcVar25 = pcVar24 + uVar22 * 0x72;
          do {
            pcVar14 = (code *)FUN_140db784(pcVar24,&local_24,6);
            if (pcVar14 == (code *)0x0) {
              FUN_1402a6e8(4,0x44,DAT_140aed30,DAT_140aed2c,DAT_140aed3c,uVar10);
              FUN_140b2b08(&local_24);
              FUN_1402a6e8(4,0x47,DAT_140aed30,DAT_140aed2c,DAT_140aed40,uVar10);
              pcVar14 = (code *)FUN_140410b4(&local_24);
              break;
            }
            pcVar24 = pcVar24 + 0x72;
          } while (pcVar25 != pcVar24);
        }
      }
      if ((code *)*DAT_140aed28 != local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_14039adc();
      }
      return pcVar14;
    case (code)0xb:
      pcVar14 = (code *)FUN_140aea74();
      return pcVar14;
    case (code)0xc:
      iVar21 = *DAT_140b2ce0;
      if (bVar6 < 0x1f) {
        iVar20 = FUN_140b293c();
        if (iVar20 != 0) {
          local_38 = (undefined4 *)0x0;
          FUN_140e5658(&local_34,0,0x1f);
          local_38._3_1_ = 1;
          local_34 = (code *)CONCAT31(local_34._1_3_,bVar6);
          FUN_140e5278((int)&local_34 + 1,pcVar14,bVar6);
          uVar22 = 0xffff;
          pbVar16 = (byte *)((int)&local_38 + 2);
          do {
            iVar20 = 8;
            pbVar16 = pbVar16 + 1;
            uVar22 = uVar22 ^ *pbVar16;
            do {
              iVar13 = uVar22 << 0x1f;
              uVar22 = (int)uVar22 >> 1;
              if (iVar13 < 0) {
                uVar22 = uVar22 ^ 0xa001;
              }
              iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
          } while ((byte *)((int)&local_18 + 2) != pbVar16);
          local_38 = (undefined4 *)CONCAT31(CONCAT12(local_38._3_1_,(short)uVar22),0x28);
          pcVar14 = (code *)FUN_140b20d4(&local_38,0x23);
          goto LAB_140b2c92;
        }
      }
      else {
        FUN_1402a6e8(4,0x122,DAT_140b2cec,DAT_140b2ce8,DAT_140b2ce4,bVar6);
      }
      FUN_1402a6e8(4,0x82,DAT_140b2cec,DAT_140b2ce8,DAT_140b2cf0);
      local_38 = (undefined4 *)CONCAT22(local_38._2_2_,2);
      pcVar14 = (code *)FUN_140afb5c(&local_38);
LAB_140b2c92:
      if (*DAT_140b2ce0 != iVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_14039adc();
      }
      return pcVar14;
    case (code)0xd:
      iVar21 = *DAT_140b2e68;
      pcVar14 = (code *)FUN_140b20d4(&stack0xfffffff0,3);
      if (*DAT_140b2e68 != iVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_14039adc();
      }
      return pcVar14;
    case (code)0xe:
    case (code)0xf:
    case (code)0x10:
    case (code)0x11:
      pcVar14 = (code *)FUN_140b20d4(pcVar14);
      return pcVar14;
    }
    return param_2;
  case 0x3c:
    FUN_1402a6e8(4,0x215,DAT_140b04a4,DAT_140b04a0,DAT_140b049c,*param_2,param_2[1],param_2[2],
                 param_2[3],param_2[4],param_2[5]);
    if (*DAT_140b0490 == iVar21) {
      pcVar14 = (code *)0x0;
      if (param_2 != (code *)0x0) {
        FUN_140390a0();
        iVar21 = FUN_1409eea8(param_2);
        pcVar14 = (code *)(uint)(iVar21 == 0);
      }
      return pcVar14;
    }
    break;
  case 0x3e:
    if (*DAT_140b0490 == iVar21) {
      if (param_2[6] == (code)0x0) {
        uVar10 = 0x42d;
      }
      else {
        uVar10 = 0x42c;
      }
      iVar21 = FUN_1407772c(uVar10,6);
      if (iVar21 == 0) {
        return (code *)0x1;
      }
      puVar11 = (undefined4 *)FUN_14075458(iVar21,6);
      *puVar11 = *(undefined4 *)param_2;
      *(undefined2 *)(puVar11 + 1) = *(undefined2 *)(param_2 + 4);
      cVar7 = FUN_1407780c(iVar21);
      return (code *)(int)cVar7;
    }
    break;
  case 0x40:
    *DAT_140b04a8 = *param_2;
switchD_140aff0a_caseD_20:
    if (*DAT_140b0194 == iVar21) {
      return param_1;
    }
    break;
  case 0x41:
    if (*DAT_140b0490 == iVar21) {
      pcVar14 = (code *)FUN_140afb78(param_2,puVar18,0,0);
      return pcVar14;
    }
    break;
  case 0x44:
    if (*DAT_140b0490 == iVar21) {
      uVar22 = (uint)(*param_2 != (code)0x0);
      local_24 = (code **)*DAT_1404f4e0;
      if (local_24 == (code **)0x1) {
        iVar21 = FUN_1404a1b4(*DAT_1404f4e4,puVar18,0,0);
        iVar21 = FUN_14097df0(*(undefined4 *)(iVar21 + 0xd4));
        local_30 = DAT_1404f4fc;
        if (iVar21 == 0) {
          *piVar12 = 0;
          FUN_1402a6e8(4,0x21a,DAT_1404f4f4,DAT_1404f4f0);
          local_24 = (code **)*piVar12;
        }
        else {
          local_30 = DAT_1404f504;
          FUN_1402a6e8(4,0x21c,DAT_1404f4f4,DAT_1404f4f0);
          uVar22 = 0;
          local_24 = (code **)*piVar12;
        }
      }
      if (local_24 == (code **)0x0) {
        iVar21 = FUN_1404a1b4(0);
        iVar21 = FUN_14097df0(*(undefined4 *)(iVar21 + 0xd4));
        if (iVar21 == 0) {
          uVar22 = 1;
          *piVar12 = 1;
          bVar6 = FUN_1405194c();
          *pbVar16 = bVar6;
          FUN_1404a1b4();
          local_2c = (uint)*pbVar16;
          local_30 = (code *)DAT_1404f508;
          FUN_1402a6e8(4,0x233,DAT_1404f4f4,DAT_1404f4f0);
          local_24 = (code **)*piVar12;
        }
        else {
          local_30 = (code *)DAT_1404f500;
          local_2c = 1;
          FUN_1402a6e8(4,0x226,DAT_1404f4f4,DAT_1404f4f0);
          *pbVar16 = 0;
          FUN_1404a1b4(0);
          local_24 = (code **)*piVar12;
          uVar22 = 0;
        }
      }
      uVar10 = DAT_1404f4ec;
      local_28 = (uint)*pbVar16;
      local_30 = (code *)DAT_1404f4e8;
      local_2c = DAT_1404f4ec;
      local_20 = uVar22;
      FUN_1402a6e8(4,0x236,DAT_1404f4f4,DAT_1404f4f0);
      bVar6 = *pbVar16;
      if (bVar6 == 0xff) {
        bVar6 = 0;
        *pbVar16 = 0;
      }
      iVar21 = FUN_1404a1b4(bVar6);
      iVar21 = FUN_14098188(*(undefined4 *)(iVar21 + 0xd4));
      if (iVar21 == 4) {
        iVar21 = FUN_1404a1b4(*pbVar16);
        local_24 = (code **)FUN_14097db8(*(undefined4 *)(iVar21 + 0xd4),uVar22);
      }
      else {
        local_24 = (code **)0x1;
      }
      local_2c = uVar10;
      local_30 = (code *)DAT_1404f4f8;
      local_28 = 0x23e;
      FUN_1402a6e8(4,0x23e,DAT_1404f4f4,DAT_1404f4f0);
      return (code *)0x0;
    }
    break;
  case 0x45:
    if (*DAT_140b0490 == iVar21) {
      cVar1 = *param_2;
      *(bool *)DAT_14029fa0 = cVar1 != (code)0x0;
      return (code *)(uint)(cVar1 != (code)0x0);
    }
    break;
  case 0x46:
    local_1c = (code *)FUN_140390b4();
    uVar8 = 0x47;
LAB_140b023e:
    local_18 = (code *)CONCAT22(local_18._2_2_,6);
    local_20 = CONCAT31(local_20._1_3_,uVar8);
    if (*DAT_140b0490 == iVar21) {
      pcVar14 = (code *)FUN_140a49fc(local_20,local_1c,local_18);
      return pcVar14;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

