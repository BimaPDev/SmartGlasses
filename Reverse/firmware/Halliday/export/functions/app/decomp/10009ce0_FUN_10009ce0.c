/* FUN_10009ce0 @ 0x10009ce0 */

undefined4 FUN_10009ce0(undefined4 param_1,char *param_2,uint param_3)

{
  ushort uVar1;
  byte bVar2;
  bool bVar3;
  ushort *puVar4;
  ushort *puVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  undefined1 uVar9;
  ushort uVar10;
  undefined2 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined2 *puVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint unaff_r8;
  uint uVar23;
  int local_40;
  uint local_3c;
  uint local_30;
  int local_2c;
  
  uVar13 = DAT_1000a2b8;
  puVar5 = DAT_1000a298;
  uVar22 = DAT_1000a274;
  puVar4 = DAT_10009f44;
  local_2c = *DAT_10009f40;
  if (DAT_10009f44[5] == 0) {
    if ((((*param_2 == '\0') && (DAT_10009f44[3] == 0 && *DAT_10009f44 == 0)) &&
        ((char)DAT_10009f44[1] == '\0')) && (DAT_10009f44[4] < 2)) {
      DAT_10009f44[4] = 0;
    }
    piVar6 = DAT_10009f48;
    unaff_r8 = (uint)puVar4[4];
    if (*DAT_10009f48 != 0) {
      FUN_100ed77c(2);
      *piVar6 = 0;
    }
    iVar12 = FUN_100ed61c(2,0x19e,DAT_10009f4c);
    *piVar6 = iVar12;
    if (iVar12 != 0) goto LAB_10009d58;
    FUN_10119dc2(DAT_10009f50);
    uVar13 = DAT_10009f54;
    goto LAB_10009d44;
  }
  if (DAT_10009f44[5] == 1) {
    bVar3 = false;
    uVar21 = 0;
    uVar10 = DAT_1000a298[4];
    do {
      if ((param_3 <= uVar21) || (bVar3)) goto LAB_1000a1ce;
      switch(uVar10) {
      case 0:
        if (*param_2 != '\x01') {
          FUN_10119dc2(DAT_1000a29c);
          FUN_10119dc2(DAT_1000a2a0);
          goto LAB_1000a1f8;
        }
        iVar12 = FUN_1011ea10(DAT_1000a2a8);
        FUN_10119dc2(uVar22);
        uVar21 = (uVar21 + 1 & 0xffff) + iVar12 + 1 & 0xffff;
        FUN_10119dc2(DAT_1000a2ac,DAT_1000a2a8);
        uVar10 = 1;
        break;
      case 1:
        bVar2 = param_2[uVar21];
        puVar5[6] = (ushort)bVar2;
        FUN_10119dc2(uVar22);
        uVar21 = uVar21 + 1 & 0xffff;
        FUN_10119dc2(DAT_1000a2b4,*(undefined4 *)(DAT_1000a2b0 + (uint)bVar2 * 4));
        if (bVar2 == 0) {
          uVar10 = 2;
        }
        else {
          *puVar5 = 0;
          bVar3 = true;
          puVar5[6] = 0xff;
        }
        break;
      case 2:
        bVar2 = param_2[uVar21];
        uVar20 = uVar21 + 1;
        if ((char)puVar5[1] == '\0') {
          if ((int)param_3 <= (int)uVar20) {
            puVar5[2] = (ushort)bVar2;
            uVar9 = 1;
            goto LAB_1000a26a;
          }
          uVar20 = uVar21 + 2;
          *puVar5 = CONCAT11(param_2[uVar21 + 1],bVar2);
          *(undefined1 *)(puVar5 + 1) = 0;
        }
        else {
          *puVar5 = puVar5[2] | (ushort)bVar2 << 8;
          uVar9 = 0;
          puVar5[2] = 0;
LAB_1000a26a:
          *(undefined1 *)(puVar5 + 1) = uVar9;
        }
        uVar21 = uVar20 & 0xffff;
        if ((char)puVar5[1] == '\0') {
          FUN_10119dc2(uVar22);
          FUN_10119dc2(DAT_1000a390,*puVar5);
          if (*puVar5 != 0) {
            FUN_10119dc2(uVar22);
            FUN_10119dc2(DAT_1000a394);
          }
          bVar3 = false;
          uVar10 = 3;
          puVar5[3] = *puVar5;
        }
        break;
      case 3:
        uVar20 = (uint)puVar5[3];
        if (uVar20 != 0) {
          uVar23 = param_3 - uVar21 & 0xffff;
          FUN_1011ea48(uVar13,0,0x41);
          pcVar17 = DAT_1000a398;
          if (0x3f < uVar20) {
            uVar20 = 0x40;
          }
          if (uVar20 <= uVar23) {
            uVar23 = uVar20;
          }
          uVar20 = 0;
          pcVar16 = param_2 + uVar21;
          pcVar18 = DAT_1000a398;
          do {
            uVar20 = uVar20 + 1 & 0xffff;
            *pcVar18 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            pcVar18 = pcVar18 + 1;
          } while (uVar23 != uVar20);
          pcVar17[uVar23] = '\0';
          FUN_10119dc2(uVar22);
          FUN_10119dc2(DAT_1000a39c,uVar13);
          uVar1 = puVar5[3];
          uVar21 = uVar21 + uVar23 & 0xffff;
          puVar5[3] = (ushort)(uVar1 - uVar23);
          if ((uVar1 - uVar23 & 0xffff) != 0) break;
        }
        *puVar5 = 0;
        uVar10 = 1;
        puVar5[6] = 0xff;
        break;
      }
    } while( true );
  }
LAB_10009d48:
  do {
    if (*DAT_10009f40 == local_2c) {
      return 1;
    }
    iVar12 = FUN_1013cdc0();
LAB_10009d58:
    uVar22 = 0;
    FUN_1011ea48(iVar12,0,0x19e);
    puVar7 = DAT_10009f58;
    puVar4 = DAT_10009f44;
    local_3c = 0;
    bVar3 = false;
    local_40 = 0;
switchD_10009de8_default:
    uVar13 = DAT_10009f5c;
    puVar5 = DAT_10009f44;
    if ((param_3 <= uVar22) || (bVar3)) goto LAB_10009d74;
    switch(unaff_r8) {
    case 0:
      if (*param_2 == '\0') {
        unaff_r8 = 1;
        uVar22 = 5;
        goto switchD_10009de8_default;
      }
      FUN_10119dc2(DAT_10009f7c);
      uVar13 = DAT_10009f80;
LAB_10009d44:
      FUN_10119dc2(uVar13);
      break;
    case 1:
      local_3c = (uint)(byte)param_2[uVar22];
      puVar4[6] = (ushort)(byte)param_2[uVar22];
      FUN_10119dc2(uVar13);
      FUN_10119dc2(DAT_10009f88,*(undefined4 *)(DAT_10009f84 + local_3c * 4));
      uVar22 = uVar22 + 1 & 0xffff;
      if (local_3c < 6) {
        unaff_r8 = 2;
      }
      else {
        *puVar4 = 0;
        puVar4[6] = 0xff;
        bVar3 = true;
      }
      goto switchD_10009de8_default;
    case 2:
      bVar2 = param_2[uVar22];
      uVar21 = uVar22 + 1;
      if ((char)puVar4[1] == '\0') {
        if ((int)param_3 <= (int)uVar21) {
          puVar4[2] = (ushort)bVar2;
          uVar9 = 1;
          goto LAB_10009e54;
        }
        uVar21 = uVar22 + 2;
        *puVar4 = CONCAT11(param_2[uVar22 + 1],bVar2);
        *(undefined1 *)(puVar4 + 1) = 0;
      }
      else {
        *puVar4 = puVar4[2] | (ushort)bVar2 << 8;
        uVar9 = 0;
        puVar4[2] = 0;
LAB_10009e54:
        *(undefined1 *)(puVar4 + 1) = uVar9;
      }
      uVar22 = uVar21 & 0xffff;
      if ((char)puVar4[1] == '\0') {
        FUN_10119dc2(DAT_10009f5c);
        FUN_10119dc2(DAT_10009f8c,*puVar4);
        if (*puVar4 != 0) {
          FUN_10119dc2(DAT_10009f5c);
          FUN_10119dc2(DAT_10009f90);
        }
        unaff_r8 = 3;
        puVar4[3] = *puVar4;
        bVar3 = false;
      }
      goto switchD_10009de8_default;
    case 3:
      uVar21 = (uint)puVar4[3];
      if (uVar21 != 0) {
        FUN_1011ea48(puVar7,0,0x41);
        puVar8 = DAT_10009f58;
        if (0x3f < uVar21) {
          uVar21 = 0x40;
        }
        uVar23 = param_3 - uVar22 & 0xffff;
        uVar20 = 0;
        if (uVar23 <= uVar21) {
          uVar21 = uVar23;
        }
        pcVar17 = param_2 + uVar22;
        puVar19 = DAT_10009f58;
        do {
          uVar20 = uVar20 + 1 & 0xffff;
          *(char *)puVar19 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          puVar19 = (uint *)((int)puVar19 + 1);
        } while (uVar21 != uVar20);
        *(char *)((int)puVar8 + uVar21) = '\0';
        if (puVar4[6] == 0) {
          FUN_1011ea40(DAT_10009f94,puVar7,0x41);
        }
        FUN_10119dc2(DAT_10009f5c);
        FUN_10119dc2(DAT_10009f98,puVar7);
        puVar4[3] = puVar4[3] - (short)uVar21;
        uVar10 = FUN_1011ea10(puVar7);
        uVar22 = uVar21 + uVar22 & 0xffff;
        switch(local_3c) {
        case 0:
          iVar12 = (**(code **)(DAT_1000a270 + 0x1c))(puVar7);
          FUN_10119dc2(DAT_1000a274);
          FUN_10119dc2(DAT_1000a278,iVar12);
          FUN_10119dc2(DAT_1000a274);
          FUN_10119dc2(DAT_1000a27c,puVar7);
          FUN_10119dc2(DAT_1000a274);
          FUN_10119dc2(DAT_1000a280,uVar10);
          if (iVar12 != 0) {
            iVar14 = *DAT_1000a284;
            *(char *)(iVar14 + 0x17a) = (char)iVar12;
            *(undefined1 *)(iVar14 + 0x17b) = 0;
            FUN_1011e9f8(iVar14 + 0x17e,puVar7,0x20);
            local_40 = 1;
          }
          break;
        case 1:
          FUN_10119dc2(DAT_1000a274);
          FUN_10119dc2(DAT_1000a288);
          FUN_10119dc2(DAT_1000a274);
          FUN_10119dc2(DAT_1000a27c,puVar7);
          FUN_10119dc2(DAT_1000a274);
          piVar6 = DAT_1000a284;
          FUN_10119dc2(DAT_1000a280);
          if (*(char *)(*piVar6 + 0x17a) == -2) {
            FUN_100bcb88(puVar7,uVar10);
          }
          if (local_40 != 0) {
            FUN_10047ff4(3,puVar7,uVar10);
            if (0x22 < uVar10) {
              uVar10 = 0x23;
            }
            FUN_1011ea40(*piVar6 + 0x14,puVar7,uVar10);
          }
          break;
        case 3:
          FUN_10119dc2(DAT_1000a274);
          FUN_10119dc2(DAT_1000a28c);
          FUN_10119dc2(DAT_1000a274);
          FUN_10119dc2(DAT_1000a27c,puVar7);
          FUN_10119dc2(DAT_1000a274);
          FUN_10119dc2(DAT_1000a280,uVar10);
          if (local_40 != 0) {
            if (0x13e < uVar10) {
              uVar10 = 0x13f;
            }
            iVar12 = *DAT_1000a284;
            FUN_1011ea40(*(ushort *)(iVar12 + 0x178) + 0x38 + iVar12,puVar7,uVar10);
            *(ushort *)(iVar12 + 0x178) = uVar10 + *(short *)(iVar12 + 0x178);
          }
          break;
        case 5:
          FUN_10119dc2(DAT_1000a274);
          FUN_10119dc2(DAT_1000a290);
          FUN_10119dc2(DAT_1000a274);
          FUN_10119dc2(DAT_1000a27c,puVar7);
          FUN_10119dc2(DAT_1000a274);
          FUN_10119dc2(DAT_1000a280,uVar10);
          local_30 = *puVar8;
          uVar11 = FUN_1013d036(&local_30);
          piVar6 = DAT_1000a284;
          *(undefined2 *)*DAT_1000a284 = uVar11;
          local_30 = (uint)(ushort)puVar8[1];
          uVar9 = FUN_1013d036(&local_30);
          *(undefined1 *)(*piVar6 + 2) = uVar9;
          local_30 = (uint)*(ushort *)((int)puVar8 + 6);
          uVar9 = FUN_1013d036(&local_30);
          *(undefined1 *)(*piVar6 + 3) = uVar9;
          local_30 = (uint)*(ushort *)((int)puVar8 + 9);
          uVar9 = FUN_1013d036(&local_30);
          *(undefined1 *)(*piVar6 + 4) = uVar9;
          local_30 = (uint)*(ushort *)((int)puVar8 + 0xb);
          uVar9 = FUN_1013d036(&local_30);
          *(undefined1 *)(*piVar6 + 5) = uVar9;
          local_30 = (uint)*(ushort *)((int)puVar8 + 0xd);
          uVar9 = FUN_1013d036(&local_30);
          *(undefined1 *)(*piVar6 + 6) = uVar9;
          FUN_10119dc2(DAT_1000a274);
          puVar15 = (undefined2 *)*piVar6;
          FUN_10119dc2(DAT_1000a294,*puVar15,*(undefined1 *)(puVar15 + 1),
                       *(undefined1 *)((int)puVar15 + 3),*(undefined1 *)(puVar15 + 2),
                       *(undefined1 *)((int)puVar15 + 5),*(undefined1 *)(puVar15 + 3));
        }
      }
      if (puVar4[3] == 0) {
        *puVar4 = 0;
        unaff_r8 = 1;
        puVar4[6] = 0xff;
      }
    default:
      goto switchD_10009de8_default;
    }
  } while( true );
LAB_1000a1ce:
  puVar5[4] = uVar10;
LAB_1000a1f8:
  *DAT_1000a2a4 = 0;
  unaff_r8 = uVar22;
  goto LAB_10009d48;
LAB_10009d74:
  DAT_10009f44[4] = (ushort)unaff_r8;
  FUN_10119dc2(uVar13);
  FUN_10119dc2(DAT_10009f60,local_40);
  piVar6 = DAT_10009f48;
  if (local_40 != 0) {
    FUN_100a5b78((DAT_10009f68 - DAT_10009f64) * 0x20 & 0xff00U | 0x29c0031,DAT_10009f70,
                 DAT_10009f6c);
    (**(code **)(DAT_10009f74 + 8))(*piVar6);
  }
  FUN_100ed77c(2,*piVar6);
  *piVar6 = 0;
  if ((puVar5[3] == 0) && (puVar5[4] != 3)) {
    *DAT_10009f78 = 1;
    FUN_1000ab14(9,0xffffffff);
  }
  goto LAB_10009d48;
}

