/* FUN_100f1ca4 @ 0x100f1ca4 */

short FUN_100f1ca4(int param_1,undefined1 *param_2)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  bool bVar8;
  bool bVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  char cVar14;
  short sVar15;
  byte bVar16;
  short sVar17;
  int *piVar18;
  bool bVar19;
  
  pcVar10 = (char *)FUN_100f0898();
  if (pcVar10 == (char *)0x0) {
    cVar14 = '\0';
  }
  else {
    cVar14 = *pcVar10;
  }
  uVar12 = param_1 - 1U & 0xff;
  if (uVar12 < 4) {
    bVar3 = PTR_DAT_100f1dfc[uVar12];
    bVar4 = PTR_DAT_100f1e00[uVar12];
    piVar13 = (int *)*DAT_100f1df8;
    bVar5 = PTR_DAT_100f1e04[uVar12];
    if (piVar13 != (int *)0x0) {
      bVar8 = false;
      sVar17 = 0;
      bVar16 = 0;
      sVar15 = 0;
      sVar7 = 0;
      piVar18 = DAT_100f1df8 + 2;
      bVar9 = false;
LAB_100f1cf2:
      do {
        if (-1 < (int)((uint)*(byte *)((int)piVar13 + 0x16) << 0x1c)) {
          bVar2 = *(byte *)(piVar13 + 5);
          if ((bVar2 & 0x81) == 0) {
            if (cVar14 == '\0') {
              if ((int)((uint)bVar2 << 0x1d) < 0) goto LAB_100f1d34;
              bVar19 = *(char *)((int)piVar13 + 0x17) != '\0';
            }
            else if ((bVar2 & 4) == 0 && *(char *)((int)piVar13 + 0x17) == '\0') {
              bVar19 = false;
            }
            else {
              bVar19 = true;
            }
            iVar11 = FUN_1011e5fe(piVar18,piVar13 + 2);
            if (iVar11 != 0) {
              bVar16 = bVar16 + 1;
            }
            if ((sVar15 == 0) || (!bVar8)) {
              uVar6 = *(ushort *)((int)piVar13 + 0x1a);
              if ((((bVar3 & uVar6) == 0) || (iVar11 == 0)) || (bVar8)) {
                if ((sVar17 == 0) || (!bVar9)) {
                  if (((bVar4 & uVar6) != 0) && (iVar11 == 0)) {
                    if (param_2 != (undefined1 *)0x0) {
                      *param_2 = 1;
                    }
                    piVar1 = piVar13 + 1;
                    piVar13 = (int *)*piVar13;
                    sVar17 = *(short *)(*piVar1 + 0xc);
                    bVar9 = bVar19;
                    if (piVar13 == (int *)0x0) break;
                    goto LAB_100f1cf2;
                  }
                  if (((sVar7 == 0) && ((bVar5 & uVar6) != 0)) && (bVar19)) {
                    if (param_2 != (undefined1 *)0x0) {
                      *param_2 = 1;
                    }
                    sVar7 = *(short *)(piVar13[1] + 0xc);
                  }
                }
              }
              else {
                if (param_2 != (undefined1 *)0x0) {
                  *param_2 = 0;
                }
                sVar15 = *(short *)(piVar13[1] + 0xc);
                bVar8 = bVar19;
              }
            }
            else if (1 < bVar16) {
              return sVar15;
            }
          }
        }
LAB_100f1d34:
        piVar13 = (int *)*piVar13;
        bVar19 = bVar9;
      } while (piVar13 != (int *)0x0);
      if (sVar15 == 0) {
        if (bVar16 != 0) {
          if (sVar17 == 0) {
            return sVar7;
          }
          if (!bVar19) {
            return sVar7;
          }
          return sVar17;
        }
      }
      else if ((bVar8) && (1 < bVar16)) {
        return sVar15;
      }
    }
  }
  return 0;
}

