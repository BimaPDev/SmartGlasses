/* FUN_1008bbc0 @ 0x1008bbc0 */

void FUN_1008bbc0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  code *pcVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  ushort uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint local_8c;
  int local_70 [17];
  
  uVar2 = FUN_1012a75c();
  piVar1 = DAT_1008be20;
  if (param_1 == 0) {
    iVar12 = FUN_10092f04();
    *piVar1 = iVar12;
  }
  else {
    *DAT_1008be20 = *(int *)(param_1 + 0xc);
    FUN_1012b322(param_1);
  }
  piVar11 = (int *)*piVar1;
  if (-1 < (int)((uint)*(byte *)(*piVar11 + 0x1e) << 0x1e)) {
    if (piVar11[4] == 0) {
      *(undefined2 *)(piVar11 + 0x94) = 0;
      FUN_10094174(2,DAT_1008be2c,0x188,DAT_1008be28,DAT_1008be24);
    }
    else {
      FUN_10089bf8();
      if (*(int *)(*piVar1 + 0x14) != 0) {
        FUN_10089bf8();
      }
      FUN_10089bf8(*(undefined4 *)(*piVar1 + 0x1c));
      FUN_10089bf8(*(undefined4 *)(*piVar1 + 0x20));
      iVar12 = *(int *)*piVar1;
      if ((((int)((uint)*(byte *)(iVar12 + 0x1c) << 0x1f) < 0) &&
          (*(char *)(*(int *)(iVar12 + 0x18) + 0x10) == '\x02')) &&
         (iVar12 = FUN_1012b09e((int *)*piVar1 + 0x96), iVar12 == 0)) {
        uVar22 = 0;
        piVar11 = *(int **)(*(int *)*piVar1 + 0x18);
        iVar12 = *piVar11;
        iVar24 = piVar11[5];
        if (iVar24 == iVar12) {
          iVar12 = piVar11[1];
        }
        uVar3 = FUN_10092f10();
        FUN_1011ea48(local_70,0,0x40);
        while( true ) {
          iVar13 = *piVar1;
          if (*(ushort *)(iVar13 + 0x250) <= uVar22) break;
          if (*(char *)(iVar13 + uVar22 + 0x230) == '\0') {
            iVar13 = FUN_1012b06a(iVar13 + 600);
            while (iVar17 = iVar13, iVar17 != 0) {
              iVar13 = FUN_1012b076(*piVar1 + 600,iVar17);
              iVar4 = FUN_1012aa9a(local_70,iVar17,*piVar1 + uVar22 * 0x10 + 0x30);
              if (iVar4 != -1) {
                for (iVar23 = 0; (char)iVar23 < iVar4; iVar23 = iVar23 + 1) {
                  piVar11 = (int *)FUN_100940a0(*piVar1 + 600,iVar17);
                  iVar7 = local_70[iVar23 * 4 + 1];
                  iVar8 = local_70[iVar23 * 4 + 2];
                  iVar15 = local_70[iVar23 * 4 + 3];
                  *piVar11 = local_70[iVar23 * 4];
                  piVar11[1] = iVar7;
                  piVar11[2] = iVar8;
                  piVar11[3] = iVar15;
                }
                FUN_1012b018();
                FUN_10094268(iVar17,DAT_1008be34);
              }
            }
          }
          uVar22 = uVar22 + 1;
        }
        for (iVar13 = FUN_1012b06a(iVar13 + 600); iVar13 != 0;
            iVar13 = FUN_1012b076(*piVar1 + 600,iVar13)) {
          iVar17 = *(int *)(*(int *)*piVar1 + 0x4c);
          (**(code **)(iVar17 + 0x38))(iVar17,iVar24,uVar3,iVar13,iVar12,uVar3,iVar13);
        }
        FUN_1009413c((int *)*piVar1 + 0x96);
      }
      *DAT_1008be30 = 0;
      piVar11 = (int *)*piVar1;
      uVar22 = (uint)*(ushort *)(piVar11 + 0x94);
      if (uVar22 != 0) {
        do {
          local_8c = uVar22 - 1;
          if (*(char *)((int)piVar11 + uVar22 + 0x22f) == '\0') goto LAB_1008bcd2;
          uVar22 = local_8c;
        } while (local_8c != 0);
        local_8c = 0;
LAB_1008bcd2:
        if (*(code **)(*piVar11 + 0x40) != (code *)0x0) {
          (**(code **)(*piVar11 + 0x40))();
        }
        piVar11 = DAT_1008be20;
        piVar6 = (int *)*piVar1;
        iVar12 = *(int *)(*piVar6 + 0x18);
        *(byte *)(iVar12 + 0x28) = *(byte *)(iVar12 + 0x28) & 0xfe;
        *(byte *)(iVar12 + 0x28) = *(byte *)(iVar12 + 0x28) & 0xfd;
        *(byte *)(piVar6 + 10) = *(byte *)(piVar6 + 10) | 4;
        for (uVar22 = 0; piVar6 = (int *)*piVar11,
            (int)uVar22 < (int)(uint)*(ushort *)(piVar6 + 0x94); uVar22 = uVar22 + 1) {
          if (*(char *)((int)piVar6 + uVar22 + 0x230) == '\0') {
            iVar12 = *piVar6;
            iVar24 = *(int *)(iVar12 + 0x18);
            uVar9 = local_8c;
            if (uVar22 == local_8c) {
              uVar9 = (uint)*(byte *)(iVar24 + 0x28);
            }
            if (uVar22 == local_8c) {
              *(byte *)(iVar24 + 0x28) = (byte)uVar9 | 1;
            }
            *(byte *)(iVar24 + 0x28) = *(byte *)(iVar24 + 0x28) & 0xfd;
            puVar5 = *(undefined4 **)(iVar12 + 0x4c);
            *puVar5 = *(undefined4 *)(iVar24 + 0x14);
            if ((*(byte *)(iVar12 + 0x1c) & 3) == 0) {
              iVar13 = piVar6[uVar22 * 4 + 0xe];
              iVar24 = piVar6[uVar22 * 4 + 0xc];
              iVar17 = piVar6[uVar22 * 4 + 0xf];
              uVar9 = (iVar17 + 1) - piVar6[uVar22 * 4 + 0xd];
              iVar12 = FUN_10092f2c(piVar6);
              if (iVar17 < iVar12) {
                uVar18 = piVar6[uVar22 * 4 + 0xf];
              }
              else {
                iVar12 = FUN_10092f2c(*DAT_1008c078);
                uVar18 = iVar12 - 1;
              }
              uVar25 = *(uint *)(*(int *)(*(int *)*DAT_1008c078 + 0x18) + 0x18) /
                       (uint)((iVar13 + 1) - iVar24);
              if ((int)uVar25 <= (int)uVar9) {
                uVar9 = uVar25;
              }
              uVar25 = uVar9;
              if (*(int *)(*(int *)*DAT_1008c078 + 0x24) != 0) {
                local_70[1] = 0;
                local_70[2] = 0;
                local_70[0] = 0;
                uVar27 = uVar9;
                do {
                  uVar26 = uVar27 - 1;
                  local_70[3] = uVar26;
                  (**(code **)(*(int *)*piVar11 + 0x24))(*(int *)*piVar11,local_70);
                  uVar25 = local_70[3] + 1;
                  if ((int)(uVar25 - local_70[1]) <= (int)uVar9) {
                    if (0 < (int)uVar27) goto LAB_1008bf8a;
                    break;
                  }
                  uVar27 = uVar26;
                } while (0 < (int)uVar26);
                FUN_10094174(2,DAT_1008c084,0x4aa,DAT_1008c080,DAT_1008c07c);
                uVar25 = 0;
              }
LAB_1008bf8a:
              iVar12 = piVar6[uVar22 * 4 + 0xd];
              uVar9 = 0;
              while( true ) {
                uVar27 = (uVar25 + iVar12) - 1;
                piVar16 = (int *)*piVar11;
                if ((int)uVar18 < (int)uVar27) break;
                local_70[0] = piVar6[uVar22 * 4 + 0xc];
                local_70[2] = piVar6[uVar22 * 4 + 0xe];
                puVar5[1] = local_70;
                puVar5[2] = local_70;
                iVar24 = *(int *)(*piVar16 + 0x18);
                *puVar5 = *(undefined4 *)(iVar24 + 0x14);
                if (uVar18 == uVar27) {
                  *(byte *)(iVar24 + 0x28) = *(byte *)(iVar24 + 0x28) | 2;
                }
                local_70[1] = iVar12;
                local_70[3] = uVar27;
                FUN_1008b42c(puVar5);
                iVar12 = uVar25 + iVar12;
                uVar9 = uVar27;
              }
              if (uVar18 != uVar9) {
                local_70[0] = piVar6[uVar22 * 4 + 0xc];
                local_70[2] = piVar6[uVar22 * 4 + 0xe];
                puVar5[1] = local_70;
                puVar5[2] = local_70;
                iVar24 = *(int *)(*piVar16 + 0x18);
                *puVar5 = *(undefined4 *)(iVar24 + 0x14);
                *(byte *)(iVar24 + 0x28) = *(byte *)(iVar24 + 0x28) | 2;
                local_70[1] = iVar12;
                local_70[3] = uVar18;
                goto LAB_1008bebe;
              }
            }
            else {
              iVar12 = FUN_10092f10(piVar6);
              iVar24 = FUN_10092f2c(*piVar1);
              FUN_1012a82e(local_70,0,0,iVar12 + -1,iVar24 + -1);
              piVar16 = (int *)*piVar1;
              puVar5[1] = local_70;
              iVar12 = *(int *)(*piVar16 + 0x18);
              if ((*(byte *)(*piVar16 + 0x1c) & 2) == 0) {
                *(byte *)(iVar12 + 0x28) =
                     *(byte *)(iVar12 + 0x28) & 0xfd | (byte)((*(uint *)(iVar12 + 0x28) & 1) << 1);
                puVar5[2] = piVar6 + uVar22 * 4 + 0xc;
              }
              else {
                *(byte *)(iVar12 + 0x28) = *(byte *)(iVar12 + 0x28) | 2;
                puVar5[2] = local_70;
              }
LAB_1008bebe:
              FUN_1008b42c(puVar5);
            }
            iVar12 = FUN_1012a84e(*piVar11 + uVar22 * 0x10 + 0x30);
            *DAT_1008c074 = iVar12 + *DAT_1008c074;
          }
        }
        *(byte *)(piVar6 + 10) = *(byte *)(piVar6 + 10) & 0xfb;
      }
      piVar11 = DAT_1008be20;
      if ((short)((int *)*DAT_1008be20)[0x94] != 0) {
        iVar12 = *(int *)*DAT_1008be20;
        if (((int)((uint)*(byte *)(iVar12 + 0x1c) << 0x1f) < 0) &&
           (*(char *)(*(int *)(iVar12 + 0x18) + 0x10) == '\x02')) {
          for (uVar21 = 0; iVar12 = *piVar11, uVar21 < *(ushort *)(iVar12 + 0x250);
              uVar21 = uVar21 + 1) {
            if (*(char *)(iVar12 + (uint)uVar21 + 0x230) == '\0') {
              puVar5 = (undefined4 *)FUN_100940fc(iVar12 + 600);
              puVar19 = (undefined4 *)(*piVar11 + (uVar21 + 3) * 0x10);
              uVar3 = puVar19[1];
              uVar10 = puVar19[2];
              uVar20 = puVar19[3];
              *puVar5 = *puVar19;
              puVar5[1] = uVar3;
              puVar5[2] = uVar10;
              puVar5[3] = uVar20;
            }
          }
        }
        iVar12 = *piVar1;
        FUN_101271ae(iVar12 + 0x30,0x200);
        FUN_101271ae(iVar12 + 0x230,0x20);
        *(undefined2 *)(iVar12 + 0x250) = 0;
        uVar2 = FUN_1012a764(uVar2);
        pcVar14 = *(code **)(*(int *)*piVar1 + 0x30);
        if (pcVar14 != (code *)0x0) {
          (*pcVar14)(*(int *)*piVar1,uVar2,*DAT_1008c074);
        }
      }
      FUN_1009448c();
      FUN_1012a6ea();
      FUN_1008cb6c();
    }
  }
  return;
}

