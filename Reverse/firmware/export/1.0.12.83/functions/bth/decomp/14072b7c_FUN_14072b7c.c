/* FUN_14072b7c @ 0x14072b7c */

void FUN_14072b7c(byte *param_1,uint *param_2,short *param_3,int param_4,char *param_5)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  ushort uVar11;
  uint *puVar12;
  uint *puVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  uint uVar17;
  byte *pbVar18;
  int iVar19;
  int iVar20;
  byte *pbVar21;
  bool bVar22;
  bool bVar23;
  char *local_30;
  uint local_2c;
  
  puVar12 = (uint *)((int)param_2 + param_4);
  local_2c = *DAT_14072e04;
  local_30 = param_5;
  bVar22 = param_2 != (uint *)0x0;
  bVar23 = param_1 != (byte *)0x0;
  bVar4 = bVar22 && bVar23;
  if (param_5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14072f2c,0x125,DAT_14072f28);
  }
  puVar13 = (uint *)(int)*param_5;
  if (puVar13 == (uint *)&SysTick) {
    local_30 = param_5 + 1;
    puVar13 = (uint *)(int)param_5[1];
    bVar3 = true;
  }
  else if (puVar13 == (uint *)0x3e) {
    local_30 = param_5 + 1;
    puVar13 = (uint *)(int)param_5[1];
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  iVar20 = 0;
  uVar9 = 1;
  uVar17 = 0;
  pcVar16 = (char *)0x0;
  pcVar14 = local_30;
  pbVar18 = param_1;
  if (puVar13 != (uint *)0x0) goto LAB_14072cfa;
LAB_14072bda:
  if (pcVar16 != (char *)0x0) {
    puVar13 = (uint *)-iVar20;
    uVar17 = uVar17 - 1 & 0xff;
    param_2 = (uint *)((uint)((int)param_2 + iVar20 + -1) & (uint)puVar13);
    local_30 = pcVar16;
    while (uVar17 != 0) {
      pcVar14 = local_30;
      puVar7 = param_2;
      if ((byte)(*local_30 - 0x30U) < 10) goto LAB_14072d0c;
LAB_14072c06:
      pcVar15 = pcVar14 + 1;
      iVar19 = (int)*pcVar14;
      puVar13 = (uint *)(iVar19 + -0x42);
      local_30 = pcVar15;
      switch(puVar13) {
      case (uint *)0x0:
      case (uint *)0x2c:
        if (bVar4) {
          if (puVar12 < (uint *)((int)puVar7 + uVar9)) goto LAB_14072e88;
LAB_14072d88:
          FUN_140e5838(pbVar18,puVar7);
        }
        param_2 = (uint *)((int)puVar7 + uVar9);
        pbVar18 = pbVar18 + uVar9;
        if (iVar19 == 0x6e) {
          uVar9 = (uint)*(byte *)((int)param_2 + -1);
        }
        else {
LAB_14072d72:
          uVar9 = 1;
        }
        break;
      default:
switchD_14072c16_caseD_1:
        uVar5 = 3;
        goto LAB_14072c80;
      case (uint *)0x2:
        puVar13 = (uint *)((uint)((int)puVar7 + 3) & 0xfffffffc);
        param_2 = puVar13 + 1;
        if (bVar4) {
          if (puVar12 < param_2) goto LAB_14072e88;
          if (bVar3) {
            uVar6 = *puVar13;
          }
          else {
            uVar6 = *puVar13;
            uVar6 = (uVar6 & 0xff) << 0x10 | (uVar6 & 0xffffff) >> 0x10 | uVar6 & 0xff00;
          }
          *pbVar18 = (byte)uVar6;
          pbVar18[1] = (byte)(uVar6 >> 8);
          pbVar18[2] = (byte)(uVar6 >> 0x10);
        }
        pbVar18 = pbVar18 + 3;
        break;
      case (uint *)0x5:
        if (bVar22 && bVar23) {
          param_2 = (uint *)((int)puVar7 + uVar9);
          if (puVar12 < param_2) goto LAB_14072e88;
          if (bVar3) goto LAB_14072d88;
          puVar13 = param_2;
          pbVar10 = pbVar18;
          if (uVar9 != 0) {
            do {
              puVar13 = (uint *)((int)puVar13 + -1);
              *pbVar10 = *(byte *)puVar13;
              pbVar10 = pbVar10 + 1;
            } while (puVar13 != puVar7);
          }
          pbVar18 = pbVar18 + uVar9;
          uVar9 = 1;
        }
        else {
          pbVar18 = pbVar18 + uVar9;
          param_2 = (uint *)((int)puVar7 + uVar9);
          uVar9 = 1;
        }
        break;
      case (uint *)0x6:
      case (uint *)0xc:
        param_2 = (uint *)((uint)((int)puVar7 + 1) & 0xfffffffe);
        if (bVar22 && bVar23) {
          puVar7 = (uint *)((int)param_2 + uVar9 * 2);
          if (puVar12 < puVar7) goto LAB_14072e88;
          if (uVar9 != 0) {
            pbVar10 = pbVar18 + 2;
            pbVar21 = pbVar10 + uVar9 * 2;
            do {
              uVar11 = *(ushort *)((byte *)((int)param_2 + (-2 - (int)pbVar18)) + (int)pbVar10);
              if (!bVar3) {
                uVar11 = uVar11 << 8 | uVar11 >> 8;
              }
              pbVar10[-2] = (byte)uVar11;
              pbVar10[-1] = (byte)(uVar11 >> 8);
              pbVar10 = pbVar10 + 2;
            } while (pbVar21 != pbVar10);
            pbVar18 = pbVar18 + uVar9 * 2;
            param_2 = puVar7;
          }
        }
        else {
          pbVar18 = pbVar18 + uVar9 * 2;
          param_2 = (uint *)((int)param_2 + uVar9 * 2);
        }
        if (iVar19 != 0x4e) goto LAB_14072d72;
        uVar9 = (uint)*(ushort *)((int)param_2 + -2);
        break;
      case (uint *)0xa:
        param_2 = (uint *)((uint)((int)puVar7 + 3) & 0xfffffffc);
        if (bVar22 && bVar23) {
          puVar13 = param_2 + uVar9;
          if (puVar12 < puVar13) goto LAB_14072e88;
          if (uVar9 == 0) goto LAB_14072d72;
          uVar6 = 0;
          pbVar10 = pbVar18;
          do {
            uVar8 = *(uint *)((byte *)((-4 - (int)pbVar18) + (int)param_2) + (int)(pbVar10 + 4));
            if (!bVar3) {
              uVar8 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                      uVar8 >> 0x18;
            }
            uVar6 = uVar6 + 1;
            *pbVar10 = (byte)uVar8;
            pbVar10[1] = (byte)(uVar8 >> 8);
            pbVar10[2] = (byte)(uVar8 >> 0x10);
            pbVar10[3] = (byte)(uVar8 >> 0x18);
            pbVar10 = pbVar10 + 4;
          } while (uVar9 != uVar6);
          param_2 = param_2 + uVar9;
          pbVar18 = pbVar18 + uVar9 * 4;
          uVar9 = 1;
        }
        else {
          pbVar18 = pbVar18 + uVar9 * 4;
          param_2 = param_2 + uVar9;
          uVar9 = 1;
        }
        break;
      case (uint *)0x11:
      case (uint *)0x31:
        puVar13 = (uint *)((int)puVar7 + 1);
        if (puVar12 < puVar13) {
LAB_14072e88:
          uVar5 = 1;
          goto LAB_14072c80;
        }
        bVar1 = (byte)*puVar7;
        uVar17 = (uint)bVar1;
        if (iVar19 != 0x53) {
          uVar17 = (uint)(byte)(*(char *)(DAT_14072e08 + (uVar17 & 0xf)) +
                               *(char *)(DAT_14072e08 + (uint)(bVar1 >> 4)));
        }
        if (bVar4) {
          *pbVar18 = bVar1;
        }
        cVar2 = pcVar14[1];
        pbVar18 = pbVar18 + 1;
        if (cVar2 == '2') {
          uVar6 = 0xfffffffe;
          iVar20 = 2;
        }
        else if (cVar2 == '4') {
          iVar20 = 4;
          uVar6 = 0xfffffffc;
        }
        else {
          if (cVar2 != '1') goto switchD_14072c16_caseD_1;
          uVar6 = 0xffffffff;
          iVar20 = 1;
        }
        pcVar15 = pcVar14 + 2;
        param_2 = (uint *)((uint)((int)puVar7 + iVar20) & uVar6);
        pcVar16 = pcVar15;
        local_30 = pcVar15;
      }
      puVar13 = (uint *)(int)*pcVar15;
      pcVar14 = pcVar15;
      if (puVar13 == (uint *)0x0) goto LAB_14072bda;
LAB_14072cfa:
      if (pcVar16 == (char *)0x0) {
        puVar7 = param_2;
        if (((uint)(puVar13 + -0xc) & 0xff) < 10) {
LAB_14072d0c:
          uVar9 = FUN_14072b38(&local_30);
          pcVar14 = local_30;
          puVar7 = param_2;
        }
        goto LAB_14072c06;
      }
    }
  }
  uVar5 = 0;
  *param_3 = (short)pbVar18 - (short)param_1;
LAB_14072c80:
  if ((*DAT_14072e04 ^ local_2c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc(uVar5,puVar13,*DAT_14072e04 ^ local_2c,0);
  }
  return;
}

