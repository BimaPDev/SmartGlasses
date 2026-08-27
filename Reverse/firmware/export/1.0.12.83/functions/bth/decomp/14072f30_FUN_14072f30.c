/* FUN_14072f30 @ 0x14072f30 */

undefined4 FUN_14072f30(uint *param_1,uint3 *param_2,ushort *param_3,int param_4,char *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint *puVar8;
  ushort uVar9;
  uint uVar10;
  char cVar11;
  uint3 *puVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  uint3 *puVar16;
  uint uVar17;
  undefined4 uVar18;
  char *pcVar19;
  char *pcVar20;
  int iVar21;
  uint *puVar22;
  uint3 *puVar23;
  int iVar24;
  char *local_30;
  int local_2c;
  
  puVar12 = (uint3 *)((int)param_2 + param_4);
  local_2c = *DAT_140731ec;
  puVar13 = (uint *)((int)param_1 + (uint)*param_3);
  local_30 = param_5;
  if (param_1 == (uint *)0x0) {
    bVar4 = false;
  }
  else {
    bVar4 = false;
    if (param_2 != (uint3 *)0x0) {
      bVar4 = true;
    }
  }
  iVar14 = (int)*param_5;
  if (iVar14 == 0x3c) {
    local_30 = param_5 + 1;
    iVar14 = (int)param_5[1];
    bVar3 = true;
  }
  else if (iVar14 == 0x3e) {
    local_30 = param_5 + 1;
    iVar14 = (int)param_5[1];
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  iVar21 = 0;
  uVar17 = 0;
  pcVar20 = (char *)0x0;
  uVar10 = 1;
  pcVar7 = local_30;
  puVar22 = param_1;
  if (iVar14 != 0) goto LAB_140730ca;
LAB_14072f96:
  if (pcVar20 == (char *)0x0) {
    uVar18 = 0;
    puVar8 = puVar22;
    puVar23 = param_2;
  }
  else {
    uVar17 = uVar17 - 1 & 0xff;
    puVar22 = (uint *)((uint)((int)puVar22 + iVar21 + -1) & -iVar21);
    local_30 = pcVar20;
    while (uVar18 = 0, puVar8 = puVar22, puVar23 = param_2, uVar17 != 0) {
      pcVar7 = local_30;
      if ((byte)(*local_30 - 0x30U) < 10) goto LAB_140730da;
LAB_14072fc4:
      pcVar19 = pcVar7 + 1;
      iVar14 = (int)*pcVar7;
      puVar22 = puVar8;
      puVar16 = puVar23;
      param_2 = puVar23;
      local_30 = pcVar19;
      switch(iVar14) {
      case 0x42:
      case 0x6e:
        bVar2 = false;
        goto joined_r0x140731c6;
      default:
switchD_14072fd4_caseD_43:
        uVar18 = 3;
        puVar8 = puVar22;
        puVar23 = puVar16;
        goto LAB_1407303e;
      case 0x44:
        puVar15 = (uint *)((uint)((int)puVar8 + 3) & 0xfffffffc);
        if (!bVar4) {
          param_2 = (uint3 *)((int)puVar23 + 3);
          puVar22 = puVar15 + 1;
          pcVar7 = pcVar19;
          break;
        }
        param_2 = (uint3 *)((int)puVar23 + 3);
        if (puVar12 < param_2) goto LAB_140731e8;
        puVar22 = puVar15 + 1;
        if (puVar22 <= puVar13) {
          if (bVar3) {
            *puVar15 = (uint)*puVar23;
            pcVar7 = pcVar19;
          }
          else {
            *puVar15 = ((ushort)*puVar23 & 0xff) << 0x10 |
                       (uint)*(byte *)((int)puVar23 + 2) | (ushort)*puVar23 & 0xff00;
            pcVar7 = pcVar19;
          }
          break;
        }
        goto LAB_1407310c;
      case 0x47:
        bVar2 = true;
joined_r0x140731c6:
        if (bVar4) {
          puVar16 = (uint3 *)((int)puVar23 + uVar10);
          if (puVar12 < puVar16) {
LAB_140731e8:
            uVar18 = 1;
            goto LAB_1407303e;
          }
          if (puVar13 < (uint *)((int)puVar8 + uVar10)) {
LAB_1407310c:
            uVar18 = 2;
            goto LAB_1407303e;
          }
          if ((!bVar2) || (bVar3)) {
            FUN_140e5838(puVar8,puVar23);
          }
          else if (uVar10 != 0) {
            do {
              puVar16 = (uint3 *)((int)puVar16 + -1);
              *(byte *)puVar22 = *(byte *)puVar16;
              puVar22 = (uint *)((int)puVar22 + 1);
            } while (puVar16 != puVar23);
          }
        }
        puVar22 = (uint *)((int)puVar8 + uVar10);
        param_2 = (uint3 *)((int)puVar23 + uVar10);
        if (iVar14 == 0x6e) {
          puVar22 = (uint *)((int)puVar8 + uVar10);
          param_2 = (uint3 *)((int)puVar23 + uVar10);
          uVar10 = (uint)*(byte *)((int)param_2 + -1);
          pcVar7 = pcVar19;
        }
        else {
LAB_14073152:
          uVar10 = 1;
          pcVar7 = pcVar19;
        }
        break;
      case 0x48:
      case 0x4e:
        puVar22 = (uint *)((uint)((int)puVar8 + 1) & 0xfffffffe);
        if (bVar4) {
          puVar16 = (uint3 *)((int)puVar23 + uVar10 * 2);
          puVar8 = puVar22;
          if (puVar12 < puVar16) goto LAB_140731e8;
          puVar15 = (uint *)(uVar10 * 2 + (int)puVar22);
          if (puVar13 < puVar15) goto LAB_1407310c;
          if (uVar10 != 0) {
            iVar24 = (int)puVar23 - (int)puVar22;
            do {
              uVar9 = *(ushort *)((int)puVar8 + iVar24);
              if (!bVar3) {
                uVar9 = uVar9 << 8 | uVar9 >> 8;
              }
              puVar22 = (uint *)((int)puVar8 + 2);
              *(ushort *)puVar8 = uVar9;
              puVar8 = puVar22;
              param_2 = puVar16;
            } while (puVar22 != puVar15);
          }
        }
        else {
          puVar22 = (uint *)((int)puVar22 + uVar10 * 2);
          param_2 = (uint3 *)((int)puVar23 + uVar10 * 2);
        }
        if (iVar14 == 0x4e) {
          uVar10 = (uint)*(ushort *)((int)puVar22 + -2);
          pcVar7 = pcVar19;
          break;
        }
        goto LAB_14073152;
      case 0x4c:
        puVar22 = (uint *)((uint)((int)puVar8 + 3) & 0xfffffffc);
        if (bVar4) {
          puVar8 = puVar22;
          if (puVar12 < puVar23 + uVar10) goto LAB_140731e8;
          if (puVar13 < puVar22 + uVar10) goto LAB_1407310c;
          if (uVar10 == 0) goto LAB_14073152;
          uVar5 = 0;
          do {
            uVar6 = *(uint *)((int)puVar8 + ((int)puVar23 - (int)puVar22));
            if (!bVar3) {
              uVar6 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                      uVar6 >> 0x18;
            }
            uVar5 = uVar5 + 1;
            *puVar8 = uVar6;
            puVar8 = puVar8 + 1;
          } while (uVar10 != uVar5);
          param_2 = puVar23 + uVar10;
          puVar22 = puVar22 + uVar10;
          uVar10 = 1;
          pcVar7 = pcVar19;
        }
        else {
          puVar22 = puVar22 + uVar10;
          param_2 = puVar23 + uVar10;
          uVar10 = 1;
          pcVar7 = pcVar19;
        }
        break;
      case 0x53:
      case 0x73:
        bVar1 = (byte)*puVar23;
        uVar17 = (uint)bVar1;
        if (iVar14 != 0x53) {
          uVar17 = (uint)*(byte *)(DAT_140731f0 + (uVar17 & 0xf)) +
                   (uint)*(byte *)(DAT_140731f0 + (uint)(bVar1 >> 4)) & 0xff;
        }
        if (bVar4) {
          if (puVar12 < (uint3 *)((int)puVar23 + 1)) goto LAB_140731e8;
          if (puVar13 < (uint *)((int)puVar8 + 1)) goto LAB_1407310c;
          *(byte *)puVar8 = bVar1;
          cVar11 = pcVar7[1];
          if (cVar11 == '2') goto LAB_1407322e;
LAB_1407309c:
          puVar16 = (uint3 *)((int)puVar23 + 1);
          puVar22 = (uint *)((int)puVar8 + 1);
          if (cVar11 == '4') {
            iVar21 = 4;
            uVar5 = 0xfffffffc;
          }
          else {
            if (cVar11 != '1') goto switchD_14072fd4_caseD_43;
            uVar5 = 0xffffffff;
            iVar21 = 1;
          }
        }
        else {
          cVar11 = pcVar7[1];
          if (cVar11 != '2') goto LAB_1407309c;
LAB_1407322e:
          uVar5 = 0xfffffffe;
          iVar21 = 2;
        }
        param_2 = (uint3 *)((int)puVar23 + 1);
        pcVar20 = pcVar7 + 2;
        puVar22 = (uint *)((uint)((int)puVar8 + iVar21) & uVar5);
        pcVar7 = pcVar20;
        local_30 = pcVar20;
      }
      iVar14 = (int)*pcVar7;
      if (iVar14 == 0) goto LAB_14072f96;
LAB_140730ca:
      if (pcVar20 == (char *)0x0) {
        puVar8 = puVar22;
        puVar23 = param_2;
        if ((iVar14 - 0x30U & 0xff) < 10) {
LAB_140730da:
          uVar10 = FUN_14072b38(&local_30);
          pcVar7 = local_30;
          puVar8 = puVar22;
          puVar23 = param_2;
        }
        goto LAB_14072fc4;
      }
    }
  }
LAB_1407303e:
  if (puVar12 < puVar23) {
    uVar18 = 1;
  }
  *param_3 = (short)puVar8 - (short)param_1;
  if (*DAT_140731ec == local_2c) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

