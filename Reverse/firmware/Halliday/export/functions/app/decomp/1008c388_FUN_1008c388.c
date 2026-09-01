/* FUN_1008c388 @ 0x1008c388 */

void FUN_1008c388(int param_1,int *param_2,uint *param_3,char *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r1;
  undefined4 uVar5;
  int extraout_r2;
  uint extraout_r2_00;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  byte bVar15;
  undefined8 uVar16;
  int local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_110;
  char local_f6;
  undefined1 local_f5;
  uint local_f4;
  int local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  undefined1 auStack_dc [16];
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  undefined2 local_bc [2];
  int local_b8;
  undefined1 local_ac;
  byte local_ab;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int local_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int local_7c;
  undefined2 local_76;
  
  if (*(byte *)(param_2 + 9) < 3) {
    return;
  }
  iVar14 = *param_2;
  if (iVar14 == 0) {
    uVar5 = 0x52;
    uVar3 = DAT_1008c65c;
LAB_1008c3b2:
    FUN_10094174(2,DAT_1008c664,uVar5,DAT_1008c660,uVar3);
    return;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar5 = 0x57;
    uVar3 = DAT_1008c668;
    goto LAB_1008c3b2;
  }
  local_a8 = *param_2;
  iStack_a4 = param_2[1];
  iStack_a0 = param_2[2];
  local_9c = param_2[3];
  local_98 = param_2[4];
  iStack_94 = param_2[5];
  iStack_90 = param_2[6];
  iStack_8c = param_2[7];
  local_88 = param_2[8];
  iStack_84 = param_2[9];
  iStack_80 = param_2[10];
  if (param_4 == (char *)0x0) {
    return;
  }
  if (*param_4 == '\0') {
    return;
  }
  iVar1 = FUN_1012a896(auStack_dc,param_3,*(undefined4 *)(param_1 + 8));
  if (iVar1 == 0) {
    return;
  }
  local_f6 = *(char *)((int)param_2 + 0x26);
  local_f5 = *(undefined1 *)((int)param_2 + 0x25);
  FUN_1012aefc(&local_f6,&local_f5,param_4);
  if ((int)((uint)*(byte *)((int)param_2 + 0x27) << 0x1e) < 0) {
    FUN_1009512c(&local_7c,param_4,*param_2,param_2[6],param_2[5],0x1fffffff,
                 (uint)*(byte *)((int)param_2 + 0x27));
    iVar1 = local_7c;
  }
  else {
    iVar1 = (param_3[2] + 1) - *param_3;
  }
  iVar6 = *(int *)(iVar14 + 8);
  iVar7 = iVar6 + param_2[5];
  local_ec = *param_3;
  iVar8 = param_2[7];
  local_e8 = param_3[1] + param_2[8];
  if (((param_5 != (int *)0x0) && (param_2[8] == 0)) && ((int)local_e8 < 0)) {
    iVar12 = param_5[2] - local_e8;
    if (iVar12 < 0) {
      iVar12 = -iVar12;
    }
    if ((0x200 - iVar7) * 2 < iVar12) {
      *param_5 = -1;
    }
    iVar12 = *param_5;
    if (-1 < iVar12) {
      local_e8 = local_e8 + param_5[1];
      goto LAB_1008c462;
    }
  }
  iVar12 = 0;
LAB_1008c462:
  iVar2 = FUN_10094d74(param_4 + iVar12,iVar14,param_2[6],iVar1,0,
                       *(undefined1 *)((int)param_2 + 0x27));
  local_128 = iVar2 + iVar12;
  while ((int)(local_e8 + iVar6) < *(int *)(*(int *)(param_1 + 8) + 4)) {
    pcVar13 = param_4 + local_128;
    iVar2 = FUN_10094d74(pcVar13,iVar14,param_2[6],iVar1,0,*(undefined1 *)((int)param_2 + 0x27));
    local_e8 = local_e8 + iVar7;
    if (((param_5 != (int *)0x0) && (-0x401 < (int)local_e8)) && (*param_5 < 0)) {
      *param_5 = local_128;
      uVar9 = param_3[1];
      param_5[1] = local_e8 - uVar9;
      param_5[2] = uVar9;
    }
    iVar12 = local_128;
    local_128 = iVar2 + local_128;
    if (*pcVar13 == '\0') {
      return;
    }
  }
  if (local_f6 == '\x02') {
    iVar6 = FUN_1012b53a(param_4 + iVar12,local_128 - iVar12,iVar14,param_2[6],
                         *(undefined1 *)((int)param_2 + 0x27));
    local_ec = local_ec + (int)(((param_3[2] + 1) - *param_3) - iVar6) / 2;
  }
  else if (local_f6 == '\x03') {
    iVar6 = FUN_1012b53a(param_4 + iVar12,local_128 - iVar12,iVar14,param_2[6],
                         *(undefined1 *)((int)param_2 + 0x27));
    local_ec = ((local_ec + 1 + param_3[2]) - *param_3) - iVar6;
  }
  uVar9 = param_2[1];
  local_11c = param_2[2];
  local_120 = uVar9;
  if (local_11c < uVar9) {
    local_120 = local_11c;
    local_11c = uVar9;
  }
  if ((*(byte *)(param_2 + 10) & 3) != 0) {
    FUN_1012782e(local_bc);
    local_bc[0] = (undefined2)param_2[3];
    local_b8 = (int)*(char *)(iVar14 + 0x12);
    if (local_b8 == 0) {
      local_b8 = 1;
    }
    local_ac = (undefined1)param_2[9];
    local_ab = local_ab & 0xfc | (byte)((*(byte *)(param_2 + 10) & 0x3f) >> 3) & 3;
  }
  local_118 = 0;
  local_124 = 0;
  FUN_1008d20c(&local_7c);
  uVar9 = local_ec;
  local_76 = (undefined2)param_2[4];
  local_110 = 0;
  iVar6 = extraout_r1;
  iVar2 = local_128;
LAB_1008c53a:
  local_128 = iVar2;
  if (param_4[iVar12] == '\0') {
    return;
  }
  local_ec = local_ec + iVar8;
  local_f4 = 0;
  uVar10 = local_128 - iVar12;
  iVar6 = FUN_100942d8(uVar10 + 1,iVar6);
  FUN_100938d0(param_4 + iVar12,iVar6,uVar10,local_f5,0,0);
  do {
    bVar15 = 0;
LAB_1008c6de:
    while( true ) {
      if (uVar10 <= local_f4) {
        if ((int)((uint)*(byte *)(param_2 + 10) << 0x1e) < 0) {
          local_e4 = uVar9;
          local_e0 = local_e8 + local_b8 / 2 + *(int *)(*param_2 + 8) / 2;
          local_cc = local_ec;
          local_c8 = local_e0;
          local_bc[0] = (short)local_124;
          FUN_10127848(param_1,local_bc,&local_e4,&local_cc);
        }
        if ((int)((uint)*(byte *)(param_2 + 10) << 0x1f) < 0) {
          local_e4 = uVar9;
          local_e0 = ((local_e8 + *(int *)(*param_2 + 8)) - *(int *)(*param_2 + 0xc)) -
                     (int)*(char *)(iVar14 + 0x11);
          local_cc = local_ec;
          local_c8 = local_e0;
          local_bc[0] = (short)local_124;
          FUN_10127848(param_1,local_bc,&local_e4,&local_cc);
        }
        FUN_10094444(iVar6);
        local_e8 = local_e8 + iVar7;
        if (*(int *)(*(int *)(param_1 + 8) + 0xc) < (int)local_e8) {
          return;
        }
        pcVar13 = param_4 + local_128;
        iVar6 = FUN_10094d74(pcVar13,iVar14,param_2[6],iVar1,0,*(undefined1 *)((int)param_2 + 0x27))
        ;
        iVar2 = local_128 + iVar6;
        local_ec = *param_3;
        iVar12 = local_128;
        if (local_f6 == '\x02') {
          uVar16 = FUN_1012b53a(pcVar13,iVar6,iVar14,param_2[6],*(undefined1 *)((int)param_2 + 0x27)
                               );
          iVar6 = (int)((ulonglong)uVar16 >> 0x20);
          local_ec = local_ec + (int)(((param_3[2] + 1) - *param_3) - (int)uVar16) / 2;
        }
        else if (local_f6 == '\x03') {
          uVar16 = FUN_1012b53a(pcVar13,iVar6,iVar14,param_2[6],*(undefined1 *)((int)param_2 + 0x27)
                               );
          iVar6 = (int)((ulonglong)uVar16 >> 0x20);
          local_ec = ((local_ec + 1 + param_3[2]) - *param_3) - (int)uVar16;
        }
        goto LAB_1008c53a;
      }
      if ((local_120 == 0xffff) || (local_11c == 0xffff)) {
        uVar11 = 0;
      }
      else {
        iVar2 = (*(code *)*DAT_1008c92c)(param_4,iVar12);
        uVar3 = (*(code *)*DAT_1008c92c)(iVar6,local_f4);
        iVar4 = FUN_1012adde(iVar6,0,uVar10,local_f5,uVar3,0);
        uVar11 = iVar2 + iVar4;
      }
      FUN_100950f8(iVar6,&local_f0,&local_e4,&local_f4);
      if ((*(byte *)((int)param_2 + 0x27) & 1) != 0) break;
LAB_1008c7ea:
      local_124 = (uint)*(ushort *)(param_2 + 3);
      if (bVar15 == 2) {
        local_124 = local_118;
      }
LAB_1008c88a:
      iVar2 = FUN_10092918(iVar14,local_f0,local_e4);
      if (((local_120 != 0xffff) && (local_11c != 0xffff)) &&
         ((local_120 <= uVar11 && (uVar11 < local_11c)))) {
        local_cc = local_ec;
        local_c4 = (local_ec - 1) + param_2[6] + iVar2;
        local_c8 = local_e8;
        local_c0 = (local_e8 - 1) + iVar7;
        FUN_10128076(param_1,&local_7c,&local_cc);
        local_124 = (uint)*(ushort *)((int)param_2 + 0xe);
      }
      local_9c = CONCAT22(local_9c._2_2_,(short)local_124);
      FUN_10127812(param_1,&local_a8,&local_ec,local_f0);
      if (iVar2 != 0) {
        local_ec = local_ec + param_2[6] + iVar2;
      }
    }
    if (local_f0 != 0x23) {
      if (bVar15 != 1) goto LAB_1008c7ea;
      if (local_f0 == 0x20) {
        if (local_f4 - local_110 == 7) {
          local_cc = *(uint *)(iVar6 + local_110);
          local_c8 = CONCAT22(local_c8._2_2_,*(undefined2 *)(iVar6 + local_110 + 4));
          uVar16 = FUN_101277ee(local_cc & 0xff);
          uVar16 = FUN_101277ee(local_cc._1_1_,(int)((ulonglong)uVar16 >> 0x20),(int)uVar16);
          uVar3 = FUN_101277ee(local_cc._2_1_,(int)((ulonglong)uVar16 >> 0x20),
                               (int)uVar16 + extraout_r2 * 0x10);
          uVar16 = FUN_101277ee(local_cc._3_1_,uVar3);
          iVar2 = FUN_101277ee(local_c8 & 0xff,(int)uVar16 + (int)((ulonglong)uVar16 >> 0x20) * 0x10
                              );
          uVar16 = FUN_101277ee(local_c8._1_1_);
          local_118 = ((int)uVar16 + iVar2 * 0x10 & 0xffU) >> 3 |
                      (((uint)((ulonglong)uVar16 >> 0x20) & 0xff) >> 2) << 5 |
                      ((extraout_r2_00 & 0xff) >> 3) << 0xb;
        }
        else {
          local_118 = (uint)*(ushort *)(param_2 + 3);
        }
        bVar15 = 2;
      }
      goto LAB_1008c6de;
    }
    if (bVar15 == 0) {
      local_110 = local_f4;
      bVar15 = *(byte *)((int)param_2 + 0x27) & 1;
      goto LAB_1008c6de;
    }
    if (bVar15 == 1) {
      bVar15 = 0;
      local_124 = (uint)*(ushort *)(param_2 + 3);
      goto LAB_1008c88a;
    }
    if (bVar15 != 2) goto LAB_1008c7ea;
  } while( true );
}

