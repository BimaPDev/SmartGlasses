/* FUN_1006a2c8 @ 0x1006a2c8 */

undefined4 FUN_1006a2c8(int *param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  short sVar11;
  uint uVar12;
  code *pcVar13;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int *piVar21;
  ushort uVar22;
  int iVar23;
  int *piVar24;
  uint local_70;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  byte local_50;
  ushort local_4e;
  uint local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  piVar14 = (int *)*DAT_1006a5a0;
  if (piVar14 == (int *)0x0) {
    FUN_100a5b78(DAT_1006a89c | (DAT_1006a898 - DAT_1006a894) * 0x20 & 0xff00U,DAT_1006a88c,
                 DAT_1006a8a0);
    uVar9 = 0xffffffff;
  }
  else {
    if (param_1 == (int *)0x0) {
      FUN_1005d3e0();
    }
    uVar15 = (uint)*(ushort *)((int)piVar14 + 0x16);
    piVar24 = piVar14 + 6;
    if (uVar15 < *(uint *)(*piVar14 + 0x10)) {
      bVar2 = false;
      uVar12 = uVar15;
      uVar10 = uVar15;
      uVar22 = 0xffff;
      do {
        while (uVar15 = uVar12, iVar4 = FUN_1006a0c8(piVar14,uVar15,piVar24,&local_48),
              uVar12 = local_48, iVar4 != 0x30) {
          if (bVar2) goto LAB_1006a342;
LAB_1006a302:
          uVar15 = uVar10;
          if (*(uint *)(*piVar14 + 0x10) <= local_48) goto LAB_1006a342;
        }
        uVar1 = *(ushort *)(piVar14 + 0xe);
        if (*(ushort *)(piVar14 + 5) < uVar1) {
          *(ushort *)(piVar14 + 5) = uVar1;
        }
        if (uVar22 <= uVar1) {
          bVar2 = true;
          goto LAB_1006a302;
        }
        bVar2 = true;
        uVar10 = uVar15;
        uVar22 = uVar1;
      } while (local_48 < *(uint *)(*piVar14 + 0x10));
    }
LAB_1006a342:
    uVar12 = (DAT_1006a5a8 - DAT_1006a5a4) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_1006a5ac | uVar12,DAT_1006a5b4,DAT_1006a5b0,uVar15);
    FUN_10069b0c(piVar14,piVar14 + 1,uVar15,0x30);
    iVar4 = FUN_10061948();
    iVar23 = uVar15 + 0x30;
    if (param_1 == (int *)0x0) {
      iVar7 = 0x80;
      iVar5 = 0;
      iVar6 = 0;
    }
    else {
      piVar16 = (int *)param_1[0x1a];
      iVar5 = FUN_1011ea48(piVar14 + 0x1e,0,0x80);
      iVar8 = *piVar16;
      iVar19 = param_1[2];
      iVar6 = param_1[1];
      iVar18 = param_1[3];
      piVar14[0x1e] = *param_1;
      piVar14[0x1f] = iVar6;
      iVar7 = piVar16[2];
      iVar6 = piVar16[1];
      piVar14[0x22] = iVar8;
      iVar8 = piVar16[3];
      piVar14[0x21] = iVar18;
      iVar18 = piVar16[4];
      piVar14[0x23] = iVar6;
      iVar6 = piVar16[5];
      piVar14[0x24] = iVar7;
      iVar7 = piVar16[6];
      piVar14[0x25] = iVar8;
      iVar8 = piVar16[7];
      piVar14[0x26] = iVar18;
      piVar14[0x20] = iVar19;
      iVar19 = param_1[4];
      piVar14[0x27] = iVar6;
      iVar18 = param_1[5];
      piVar14[0x28] = iVar7;
      iVar6 = param_1[6];
      piVar14[0x29] = iVar8;
      iVar8 = param_1[7];
      iVar7 = piVar16[8];
      piVar14[0x2a] = iVar19;
      piVar14[0x2c] = iVar18;
      piVar14[0x2d] = iVar6;
      piVar14[0x2e] = iVar8;
      iVar6 = param_1[0x1c];
      piVar14[0x2f] = param_1[0x1b];
      piVar14[0x30] = iVar7;
      piVar14[0x31] = iVar6;
      if (iVar6 << 0x1b < 0) {
        piVar14[0x2b] = iVar7 + 0x20;
        piVar14[0x30] = iVar7 + 0x20;
        uVar15 = piVar14[0x32] & 0xfffffffb;
      }
      else {
        piVar14[0x2b] = iVar7 + 0x68;
        piVar14[0x30] = iVar7 + 0x68;
        uVar15 = piVar14[0x32] | 4;
      }
      if (iVar6 << 0x1d < 0) {
        uVar15 = uVar15 | 2;
      }
      else {
        uVar15 = uVar15 & 0xfffffffd;
      }
      piVar14[0x5e] = iVar5;
      piVar14[0x5f] = iVar5 + 0x80;
      piVar14[0x32] = uVar15;
      iVar6 = FUN_10069e18(piVar14,iVar23,1,piVar14 + 0x5e,piVar14 + 0x5f);
      if (iVar6 == 0) {
        return 0xfffffffe;
      }
      iVar7 = 0x100;
      iVar5 = 0x80;
      iVar23 = iVar23 + iVar6;
    }
    if (param_2 != 0) {
      if (piVar14[3] != 0) {
        (**(code **)(*(int *)(piVar14[3] + 8) + 0xc))();
      }
      iVar5 = FUN_1007200c();
      iVar8 = FUN_1011ea48(piVar14 + 0x3e,0,0x80);
      if (iVar5 != 0) {
        iVar8 = FUN_1011ea40(iVar8,iVar5,0x80);
      }
      piVar14[0x5e] = iVar8;
      piVar14[0x5f] = iVar8 + 0x80;
      iVar5 = FUN_10069e18(piVar14,iVar23,2,piVar14 + 0x5e,piVar14 + 0x5f);
      if (iVar5 == 0) {
        return 0xfffffffd;
      }
      iVar6 = iVar6 + iVar5;
      iVar23 = iVar23 + iVar5;
      iVar5 = iVar7;
    }
    if (*DAT_1006a5b8 != 0) {
      if (param_1 == (int *)0x0) {
        piVar16 = DAT_1006a5b8 + 3;
        if (param_2 == 0) {
          do {
            if (piVar16[-2] == 0) break;
            if ((piVar16[-1] != 1) && (piVar16[-1] != 2)) {
              iVar7 = FUN_10069e18(piVar14,iVar23,0,piVar16 + -3,piVar16 + -2);
              if (iVar7 == 0) {
                return 0xfffffffe;
              }
              iVar6 = iVar6 + iVar7;
              iVar23 = iVar23 + iVar7;
              iVar5 = (iVar5 + piVar16[-2]) - piVar16[-3];
            }
            iVar7 = *piVar16;
            piVar16 = piVar16 + 3;
          } while (iVar7 != 0);
        }
        else {
          do {
            if (piVar16[-2] == 0) break;
            if (piVar16[-1] != 1) {
              iVar7 = FUN_10069e18(piVar14,iVar23,0,piVar16 + -3,piVar16 + -2);
              if (iVar7 == 0) {
                return 0xfffffffe;
              }
              iVar6 = iVar6 + iVar7;
              iVar23 = iVar23 + iVar7;
              iVar5 = (iVar5 + piVar16[-2]) - piVar16[-3];
            }
            iVar7 = *piVar16;
            piVar16 = piVar16 + 3;
          } while (iVar7 != 0);
        }
      }
      else {
        piVar16 = DAT_1006a5b8;
        if (param_2 == 0) {
          do {
            piVar21 = piVar16 + 3;
            if (piVar16[1] == 0) break;
            if (piVar16[2] != 2) {
              iVar7 = FUN_10069e18(piVar14,iVar23,0,piVar16,piVar16 + 1);
              if (iVar7 == 0) {
                return 0xfffffffe;
              }
              iVar6 = iVar6 + iVar7;
              iVar23 = iVar23 + iVar7;
              iVar5 = (iVar5 + piVar16[1]) - *piVar16;
            }
            piVar16 = piVar21;
          } while (*piVar21 != 0);
        }
        else {
          do {
            if (piVar16[1] == 0) break;
            iVar7 = FUN_10069e18(piVar14,iVar23,0,piVar16,piVar16 + 1);
            if (iVar7 == 0) {
              return 0xfffffffe;
            }
            iVar8 = *piVar16;
            piVar21 = piVar16 + 1;
            piVar16 = piVar16 + 3;
            iVar6 = iVar6 + iVar7;
            iVar23 = iVar23 + iVar7;
            iVar5 = iVar5 + (*piVar21 - iVar8);
          } while (*piVar16 != 0);
        }
      }
    }
    uVar15 = (iVar23 + -0x30) - iVar6;
    FUN_1011ea48(piVar24,0,0x30);
    piVar14[8] = iVar6;
    piVar14[9] = iVar5;
    puVar3 = DAT_1006a5c0;
    piVar14[6] = DAT_1006a5bc;
    iVar23 = DAT_1006a5c4;
    uVar9 = *puVar3;
    sVar11 = (short)piVar14[5] + 1;
    iVar5 = piVar14[2];
    *(undefined1 *)(piVar14 + 10) = 0;
    piVar16 = piVar14 + 10;
    *(ushort *)((int)piVar14 + 0x3a) = (ushort)uVar9 >> 4;
    *(short *)(piVar14 + 5) = sVar11;
    *(short *)(piVar14 + 0xe) = sVar11;
    piVar14[7] = iVar23;
    if (iVar5 != 0) {
      (**(code **)(*(int *)(iVar5 + 8) + 8))(iVar5,&local_54);
      FUN_10118a1c(&local_48,0x16,DAT_1006a5c8,local_4e + 0x76c,local_50 + 1,local_51,local_52,
                   local_53,local_54);
      piVar14[10] = local_48;
      piVar14[0xb] = iStack_44;
      piVar14[0xc] = iStack_40;
      piVar14[0xd] = iStack_3c;
    }
    FUN_1011ea10(piVar16);
    uVar10 = (uint)*(ushort *)((int)piVar14 + 0x1e);
    iVar23 = 0;
    uVar17 = uVar15 + uVar10;
    if (0 < iVar6) {
      do {
        iVar5 = iVar6;
        if (0x7fff < iVar6) {
          iVar5 = 0x8000;
        }
        FUN_10114a38();
        iVar7 = piVar14[4];
        uVar20 = *(uint *)(*piVar14 + 0x10);
        uVar10 = uVar17;
        if (uVar20 <= uVar17) {
          uVar10 = uVar17 - uVar20;
        }
        iVar8 = *(int *)(*piVar14 + 0xc);
        if (uVar20 < iVar5 + uVar10) {
          FUN_10069ba8(piVar14,0,iVar8 + uVar10,0,iVar7,uVar20 - uVar10);
          iVar18 = uVar10 + (iVar5 - uVar20);
          iVar8 = *(int *)(*piVar14 + 0xc);
          iVar7 = iVar7 + (uVar20 - uVar10);
        }
        else {
          iVar8 = iVar8 + uVar10;
          iVar18 = iVar5;
        }
        FUN_10069ba8(piVar14,0,iVar8,0,iVar7,iVar18);
        iVar23 = FUN_10068e38(iVar23,piVar14[4],iVar5);
        iVar6 = iVar6 - iVar5;
        FUN_101150e0();
        uVar17 = iVar5 + uVar17;
      } while (0 < iVar6);
      uVar10 = (uint)*(ushort *)((int)piVar14 + 0x1e);
    }
    piVar14[0x10] = iVar23;
    iVar23 = FUN_10068e38(0,piVar24,uVar10 - 4);
    iVar5 = *piVar14;
    piVar14[0x11] = iVar23;
    uVar10 = *(uint *)(iVar5 + 0x10);
    local_70 = uVar15;
    if (uVar10 <= uVar15) {
      local_70 = uVar15 - uVar10;
    }
    if (uVar10 < local_70 + 0x30) {
      FUN_10069ba8(piVar14,1,*(int *)(iVar5 + 0xc) + local_70,0,piVar24,uVar10 - local_70);
      iVar5 = *piVar14;
      piVar24 = (int *)((int)piVar24 + (uVar10 - local_70));
      iVar23 = (0x30 - uVar10) + local_70;
      local_70 = 0;
    }
    else {
      iVar23 = 0x30;
    }
    FUN_10069ba8(piVar14,1,*(int *)(iVar5 + 0xc) + local_70,0,piVar24,iVar23);
    uVar10 = (uint)*(ushort *)(piVar14 + 0xe);
    iVar23 = piVar14[8];
    iVar5 = piVar14[9];
    FUN_100a5b78(DAT_1006a878 | uVar12,DAT_1006a87c,DAT_1006a880,(short)piVar14[7],piVar16,iVar5,
                 iVar23,uVar10,uVar15);
    pcVar13 = *(code **)(*(int *)(piVar14[1] + 8) + 0x18);
    if (pcVar13 != (code *)0x0) {
      (*pcVar13)(piVar14[1],0);
    }
    iVar6 = FUN_10061948();
    FUN_100a5b78(uVar12 | DAT_1006a888,DAT_1006a88c,DAT_1006a890,
                 (uint)((ulonglong)DAT_1006a884 * (ulonglong)(uint)(iVar6 - iVar4) >> 0x2b),piVar16,
                 iVar5,iVar23,uVar10,uVar15);
    if (param_1 == (int *)0x0) {
      FUN_1005d3e0(1);
      return 0;
    }
    uVar9 = 0;
  }
  return uVar9;
}

