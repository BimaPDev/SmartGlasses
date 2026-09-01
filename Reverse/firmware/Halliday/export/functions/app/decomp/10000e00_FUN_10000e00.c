/* FUN_10000e00 @ 0x10000e00 */

bool FUN_10000e00(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  
  bVar3 = false;
  bVar8 = false;
  uVar9 = 0;
  *param_3 = 0;
  do {
    if (((int)(uint)*(ushort *)(DAT_10000f30 + 0x38c) >> (uVar9 & 0xff)) << 0x1f < 0) {
      uVar11 = (uint)*(ushort *)(param_1 + uVar9 * 2);
      if (uVar11 < 0x20) {
        uVar7 = *(uint *)(DAT_10000f30 + 0x100);
        uVar2 = uVar11;
      }
      else {
        uVar7 = *(uint *)(DAT_10000f30 + 0x104);
        uVar2 = uVar11 - 0x20;
      }
      if ((1 << (uVar2 & 0xff) & uVar7) != 0) {
        puVar10 = *(undefined4 **)(DAT_10000f34 + uVar9 * 4);
        bVar5 = true;
        if (puVar10 != (undefined4 *)0x0) {
          do {
            if ((code *)puVar10[1] == (code *)0x0) {
              iVar6 = *param_3;
              if (iVar6 < 0xf) {
                *(undefined4 *)(param_2 + iVar6 * 8) = *puVar10;
                *(char *)(param_2 + iVar6 * 8 + 4) = (char)uVar9;
                *param_3 = iVar6 + 1;
              }
LAB_10000f0c:
              iVar6 = 1;
            }
            else {
              uVar7 = uVar9 & 0xff;
              iVar6 = (*(code *)puVar10[1])(uVar7);
              if (iVar6 == 0) {
                iVar6 = (*(code *)*puVar10)(uVar7);
              }
              else {
                if (iVar6 != 1) {
                  iVar6 = *param_3;
                  if (iVar6 < 0xf) {
                    *(undefined4 *)(param_2 + iVar6 * 8) = *puVar10;
                    *(char *)(param_2 + iVar6 * 8 + 4) = (char)uVar9;
                    *param_3 = iVar6 + 1;
                  }
                  goto LAB_10000f0c;
                }
                iVar6 = (*(code *)*puVar10)(uVar7);
                bVar3 = true;
              }
              if (iVar6 == 0) {
                piVar1 = DAT_10000f38;
                uVar7 = uVar11;
                if (0x1f < uVar11) {
                  piVar1 = DAT_10000f3c;
                  uVar7 = uVar11 - 0x20;
                }
                *piVar1 = 1 << (uVar7 & 0xff);
              }
            }
            puVar10 = (undefined4 *)puVar10[2];
            if (iVar6 == 1) {
              bVar8 = true;
            }
          } while (puVar10 != (undefined4 *)0x0);
          bVar5 = bVar8;
          if (iVar6 == 2) {
            bVar5 = true;
          }
        }
        bVar8 = bVar5;
        puVar4 = DAT_10000f48;
        if ((*(short *)(uVar9 * 0xc + DAT_10000f40) == 0xe) && (*DAT_10000f44 == 3)) {
          uVar11 = *DAT_10000f48 + 1;
          if (0x13 < uVar11) {
            *DAT_10000f48 = 0;
          }
          bVar8 = 0x13 < uVar11;
          if (!bVar8) {
            *puVar4 = uVar11;
          }
        }
      }
    }
    uVar9 = uVar9 + 1;
    if (uVar9 == 0xf) {
      if ((bVar8 == false) && (bVar3)) {
        FUN_10001720(1);
      }
      return bVar8;
    }
  } while( true );
}

