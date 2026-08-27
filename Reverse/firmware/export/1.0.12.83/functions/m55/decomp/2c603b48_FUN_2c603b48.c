/* FUN_2c603b48 @ 0x2c603b48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c603b48(void)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *in_r3;
  uint uVar9;
  undefined4 extraout_r3;
  int iVar10;
  undefined4 unaff_r4;
  int iVar11;
  uint uVar12;
  undefined4 unaff_r5;
  int iVar13;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int *piVar14;
  undefined4 unaff_r8;
  uint uVar15;
  short sVar16;
  undefined4 uVar17;
  
  piVar14 = (int *)*in_r3;
  iVar13 = *piVar14;
  iVar4 = piVar14[1];
  piVar3 = (int *)FUN_2c62ca10();
  uVar17 = _LAB_2c603bf8;
  for (; piVar3 != (int *)0x0; piVar3 = (int *)FUN_2c62ca20(uVar17,piVar3)) {
    if ((((piVar14 != piVar3) && (*piVar3 == *piVar14)) && (piVar3[2] == piVar14[2])) &&
       ((short)piVar3[1] == (short)piVar14[1])) {
      return;
    }
  }
  if ((*(ushort *)(iVar13 + 0x22) & 0x1f8) != 0) {
    iVar7 = *(int *)(iVar13 + 0xc);
    uVar9 = 0;
    while( true ) {
      iVar11 = uVar9 * 8;
      uVar9 = uVar9 + 1;
      if (((int)((uint)*(byte *)(iVar7 + 7) << 0x1e) < 0) &&
         ((*(uint *)(iVar7 + 4) & 0xffffff) == piVar14[2])) break;
      iVar7 = iVar7 + 8;
      if (uVar9 == (*(ushort *)(iVar13 + 0x22) & 0x1ff) >> 3) {
        return;
      }
    }
    FUN_2c62c998(_LAB_2c603bf8,piVar14);
    FUN_2c62bea8(piVar14);
    iVar7 = *(int *)(iVar13 + 0xc);
    FUN_2c62af34(*(undefined4 *)(iVar7 + iVar11),(short)iVar4);
    iVar4 = func_0x2c62b1ac(*(undefined4 *)(*(int *)(iVar13 + 0xc) + iVar11));
    if (iVar4 != 0) {
      uVar9 = *(uint *)(iVar7 + iVar11 + 4);
      iVar4 = *(int *)(iVar7 + iVar11);
      uVar15 = uVar9 & 0xffff;
      uVar9 = uVar9 & 0xff0000;
      if (iVar4 == 0) {
        sVar16 = -1;
      }
      else {
        sVar16 = -(ushort)(*(char *)(iVar4 + 7) != '\0');
      }
      uVar5 = (uint)*(ushort *)(iVar13 + 0x22);
      if ((*(ushort *)(iVar13 + 0x22) & 0x1f8) != 0) {
        bVar1 = false;
        iVar7 = uVar15 - 0xffff;
        uVar12 = 0;
        uVar17 = extraout_r3;
        if (iVar7 != 0) {
          iVar7 = 1;
        }
        do {
          iVar11 = *(int *)(iVar13 + 0xc);
          iVar10 = uVar12 * 8;
          piVar3 = (int *)(iVar11 + uVar12 * 8);
          if (((((piVar3[1] & 0xffffU) == uVar15) || (iVar7 == 0)) &&
              (((piVar3[1] & 0xff0000U) == uVar9 || (uVar9 == 0xf0000)))) &&
             ((iVar4 == 0 || (*piVar3 == iVar4)))) {
            uVar5 = (uint)*(byte *)((int)piVar3 + 7);
            if ((int)(uVar5 << 0x1e) < 0) {
              FUN_2c6032d4(iVar13,uVar9,0xffff,0,uVar17,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8
                          );
              iVar11 = *(int *)(iVar13 + 0xc);
              piVar3 = (int *)(iVar11 + iVar10);
              uVar5 = (uint)*(byte *)((int)piVar3 + 7);
            }
            if ((uVar5 & 3) != 0) {
              FUN_2c62ae04(*piVar3);
              FUN_2c62bea8(*(undefined4 *)(*(int *)(iVar13 + 0xc) + iVar10));
              *(undefined4 *)(*(int *)(iVar13 + 0xc) + iVar10) = 0;
              iVar11 = *(int *)(iVar13 + 0xc);
            }
            uVar6 = (*(ushort *)(iVar13 + 0x22) & 0x1ff) >> 3;
            uVar5 = uVar12;
            if (uVar12 < uVar6 - 1) {
              while( true ) {
                iVar10 = iVar10 + 8;
                puVar8 = (undefined4 *)(iVar11 + iVar10);
                puVar8[-1] = puVar8[1];
                puVar8[-2] = *puVar8;
                uVar6 = (*(ushort *)(iVar13 + 0x22) & 0x1ff) >> 3;
                if (uVar6 - 1 <= uVar5 + 1) break;
                iVar11 = *(int *)(iVar13 + 0xc);
                uVar5 = uVar5 + 1;
              }
              iVar11 = *(int *)(iVar13 + 0xc);
            }
            uVar5 = uVar6 + 0x3f & 0x3f;
            *(ushort *)(iVar13 + 0x22) = *(ushort *)(iVar13 + 0x22) & 0xfe07 | (ushort)(uVar5 << 3);
            uVar2 = FUN_2c62bebc(iVar11,uVar5 << 3);
            bVar1 = true;
            uVar5 = (uint)*(ushort *)(iVar13 + 0x22);
            *(undefined4 *)(iVar13 + 0xc) = uVar2;
          }
          else {
            uVar12 = uVar12 + 1;
          }
        } while (uVar12 < (uVar5 & 0x1ff) >> 3);
        if (((sVar16 != 0) && (bVar1)) && (*DAT_2c603b40 != '\0')) {
          FUN_2c603540(iVar13,uVar9,0xffff,uVar17);
          return;
        }
      }
      return;
    }
  }
  return;
}

