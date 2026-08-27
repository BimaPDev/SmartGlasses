/* FUN_2c614158 @ 0x2c614158 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c614158(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  undefined2 uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  uint uVar13;
  int iVar14;
  undefined2 *puVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_68 [32];
  int iStack_48;
  byte bStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c6143b8;
  FUN_2c62c3b0(&uStack_3c,0x10,param_3,0);
  uVar13 = (uint)*(ushort *)(param_5 + 0xc);
  if (uVar13 == 0) {
LAB_2c614202:
    iVar16 = 0;
LAB_2c614204:
    if (*_LAB_2c6143b8 == iStack_2c) {
      return iVar16;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  puVar15 = *(undefined2 **)(param_5 + 8);
  puVar12 = puVar15 + 2;
  iVar14 = 0;
  iVar17 = 1;
  iVar16 = 0;
LAB_2c6141aa:
  puVar7 = puVar15;
  if (iVar17 < (int)uVar13) {
    puVar7 = puVar12;
  }
  sVar3 = puVar12[-1];
  iVar10 = (int)sVar3;
  uVar4 = puVar12[-2];
  sVar1 = puVar7[1];
  iVar11 = (int)sVar1;
  uVar2 = *puVar7;
  if (iVar10 - iVar11 < 0) {
    iVar8 = -1;
LAB_2c614220:
    if ((iVar10 <= param_3) && (param_3 <= iVar11)) {
      *(undefined2 *)(&uStack_3c + iVar14 * 2) = uVar4;
      *(short *)((int)&uStack_3c + iVar14 * 8 + 2) = sVar3;
      *(undefined2 *)(&uStack_38 + iVar14 * 2) = uVar2;
      *(short *)((int)&uStack_38 + iVar14 * 8 + 2) = sVar1;
LAB_2c6141ec:
      uVar6 = uStack_30;
      uVar5 = uStack_34;
      if ((iVar16 == 0) || (iVar16 != iVar8)) {
        if (iVar14 != 0) {
          iVar16 = (int)(short)uStack_3c;
          iVar14 = (int)(short)uStack_34;
          iVar17 = (int)(short)uStack_38;
          sVar1 = (short)uStack_30;
          if ((iVar14 < iVar16) || ((short)uStack_30 < iVar17)) {
            uStack_34 = uStack_3c;
            uStack_30 = uStack_38;
            uStack_3c = uVar5;
            uStack_38 = uVar6;
            iVar17 = (int)sVar1;
            iVar16 = iVar14;
          }
          FUN_2c614004(auStack_68,iVar16,(int)uStack_3c._2_2_,iVar17,(int)uStack_38._2_2_,1);
          if ((iStack_48 == 0) && ((int)((uint)bStack_40 << 0x1f) < 0)) {
            iVar16 = (int)(short)uStack_3c;
            iVar17 = (int)(short)uStack_38;
            iVar14 = iVar17;
            if (iVar17 < iVar16) {
              iVar14 = iVar16;
              iVar16 = iVar17;
            }
            if (0 < param_4) {
              uVar13 = 0;
              do {
                uVar9 = *(undefined1 *)(param_1 + uVar13);
                if ((int)(uVar13 + param_2) < iVar16) {
                  uVar9 = 0;
                }
                else if (iVar14 < (int)(uVar13 + param_2)) {
                  uVar9 = 0;
                }
                *(undefined1 *)(param_1 + uVar13) = uVar9;
                uVar13 = uVar13 + 1 & 0xffff;
              } while ((int)uVar13 < param_4);
            }
            goto LAB_2c614360;
          }
          iVar16 = FUN_2c613670(param_1,param_2,param_3,param_4,auStack_68);
          FUN_2c613f44(auStack_68);
          if (iVar16 == 0) goto LAB_2c614202;
          FUN_2c614004(auStack_68,(int)(short)uStack_34,(int)uStack_34._2_2_,(int)(short)uStack_30,
                       (int)uStack_30._2_2_,0);
          if ((iStack_48 != 0) || (-1 < (int)((uint)bStack_40 << 0x1f))) {
            iVar14 = FUN_2c613670(param_1,param_2,param_3,param_4,auStack_68);
            FUN_2c613f44(auStack_68);
            if (iVar14 != 0) {
              if ((iVar16 == 2) || (iVar14 == 2)) {
                iVar16 = 2;
              }
              goto LAB_2c614204;
            }
            goto LAB_2c614202;
          }
          iVar17 = (int)(short)uStack_30;
          iVar16 = (int)(short)uStack_34;
          iVar14 = iVar17;
          if (iVar17 < iVar16) {
            iVar14 = iVar16;
            iVar16 = iVar17;
          }
          if (0 < param_4) {
            uVar13 = 0;
            do {
              uVar9 = *(undefined1 *)(param_1 + uVar13);
              if ((int)(uVar13 + param_2) < iVar16) {
                uVar9 = 0;
              }
              else if (iVar14 < (int)(uVar13 + param_2)) {
                uVar9 = 0;
              }
              *(undefined1 *)(param_1 + uVar13) = uVar9;
              uVar13 = uVar13 + 1 & 0xffff;
            } while ((int)uVar13 < param_4);
          }
LAB_2c614360:
          iVar16 = 2;
          FUN_2c613f44(auStack_68);
          goto LAB_2c614204;
        }
        iVar14 = 1;
        iVar16 = iVar8;
      }
    }
  }
  else {
    if (iVar10 == iVar11) {
      iVar8 = 1;
      goto LAB_2c614220;
    }
    if ((iVar11 <= param_3) && (param_3 <= iVar10)) {
      *(undefined2 *)(&uStack_3c + iVar14 * 2) = uVar2;
      *(short *)((int)&uStack_3c + iVar14 * 8 + 2) = sVar1;
      *(undefined2 *)(&uStack_38 + iVar14 * 2) = uVar4;
      *(short *)((int)&uStack_38 + iVar14 * 8 + 2) = sVar3;
      iVar8 = 1;
      goto LAB_2c6141ec;
    }
  }
  puVar12 = puVar12 + 2;
  iVar17 = iVar17 + 1;
  if (puVar15 + (uVar13 - 1 & 0xffff) * 2 + 4 == puVar12) goto LAB_2c614202;
  goto LAB_2c6141aa;
}

