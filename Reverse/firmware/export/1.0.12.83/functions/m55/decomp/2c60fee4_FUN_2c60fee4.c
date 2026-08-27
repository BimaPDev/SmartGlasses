/* FUN_2c60fee4 @ 0x2c60fee4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c60fee4(undefined4 param_1,short *param_2,int param_3,int param_4,short param_5,
                 short param_6,short *param_7,byte param_8,uint *param_9,int *param_10,
                 undefined1 param_11)

{
  longlong lVar1;
  short sVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  int iStack_dc;
  int *piStack_d4;
  uint *puStack_d0;
  int *piStack_c8;
  uint uStack_98;
  uint uStack_94;
  short sStack_90;
  uint uStack_8c;
  uint uStack_84;
  uint uStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined1 auStack_58 [16];
  int iStack_48;
  int iStack_44;
  uint uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  
  iVar18 = _LAB_2c6100b4;
  iVar6 = (int)param_5;
  iVar17 = (int)param_6;
  uStack_2c = *_LAB_2c6100b8;
  uStack_40 = 0x10000 / (ushort)param_7[1];
  iStack_3c = -(int)*param_7;
  iVar28 = (int)((longlong)_LAB_2c6100b4 * (longlong)iStack_3c >> 0x22) - (iStack_3c >> 0x1f);
  uStack_30 = *(undefined4 *)(param_7 + 2);
  sVar16 = (short)iVar28;
  iVar19 = iVar28 * -10 - (int)*param_7;
  puStack_d0 = param_9;
  piStack_d4 = param_10;
  iVar28 = FUN_2c62e208((int)sVar16,(int)((longlong)_LAB_2c6100b4 * (longlong)iStack_3c));
  iVar7 = FUN_2c62e208((int)(short)(sVar16 + 1));
  iVar8 = FUN_2c62e208((int)(short)(sVar16 + 0x5a));
  iVar9 = FUN_2c62e208((int)(short)(sVar16 + 0x5b));
  sVar16 = param_2[1];
  iVar28 = (10 - iVar19) * iVar28 + iVar19 * iVar7;
  iVar7 = (10 - iVar19) * iVar8 + iVar19 * iVar9;
  sVar2 = (param_2[3] + 1) - sVar16;
  lVar1 = (longlong)iVar18 * (longlong)iVar7;
  piVar10 = (int *)lVar1;
  iStack_38 = (int)(short)uStack_30 << 8;
  iStack_48 = (int)((longlong)iVar18 * (longlong)iVar28 >> 0x22) - (iVar28 >> 0x1f) >> 5;
  iStack_44 = (int)(lVar1 >> 0x22) - (iVar7 >> 0x1f) >> 5;
  iStack_34 = (int)uStack_30._2_2_ << 8;
  iVar28 = (int)*param_2;
  uVar3 = (param_2[2] + 1) - *param_2;
  iVar18 = iVar28;
  if (sVar2 < 1) {
LAB_2c610324:
    if ((*_LAB_2c610584 ^ uStack_2c) != 0) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail(piVar10,iVar18,*_LAB_2c610584 ^ uStack_2c,0);
    }
    return;
  }
  iVar7 = (int)(short)uVar3;
  iStack_dc = 0;
  piStack_c8 = (int *)((int)param_10 + (uVar3 - 1 & 0xffff) + 1);
  iVar18 = iVar7 * 4;
  sStack_90 = uVar3 - 1;
  do {
    uVar11 = FUN_2c60fe00(auStack_58,iVar28,sVar16 + iStack_dc,&uStack_68,&iStack_64,param_11);
    piVar10 = (int *)FUN_2c60fe00(uVar11,(int)param_2[2],param_2[1] + iStack_dc,&iStack_60,
                                  &iStack_5c,param_11);
    iVar28 = iStack_64;
    uVar5 = uStack_68;
    if (iVar7 < 2) {
      iVar8 = 0;
      iVar9 = 0;
    }
    else {
      iVar9 = (int)((iStack_60 - uStack_68) * 0x100) / (int)sStack_90;
      iVar8 = ((iStack_5c - iStack_64) * 0x100) / (int)sStack_90;
    }
    piVar23 = (int *)(*(byte *)(param_7 + 0x1c) & 1);
    if ((*(byte *)(param_7 + 0x1c) & 1) == 0) {
      if (param_8 == 5) {
        piVar13 = piStack_d4;
        piVar14 = piVar23;
        puVar20 = puStack_d0;
        if (0 < iVar7) {
          do {
            iVar28 = (int)(uStack_68 + ((int)piVar23 >> 8)) >> 8;
            if ((((iVar28 < 0) ||
                 (iVar26 = iStack_64 + ((int)piVar14 >> 8), iVar19 = iVar26 >> 8, iVar26 < 0)) ||
                (param_4 <= iVar28)) || (iVar6 <= iVar19)) {
              *(undefined1 *)piVar13 = 0;
            }
            else {
              iVar28 = iVar19 * iVar17 + iVar28;
              *puVar20 = *(uint *)(param_3 + iVar28 * 4);
              *(undefined1 *)piVar13 = *(undefined1 *)(param_3 + iVar28 * 4 + 3);
            }
            piVar13 = (int *)((int)piVar13 + 1);
            piVar10 = (int *)((int)piVar23 + iVar9);
            piVar23 = piVar10;
            piVar14 = (int *)((int)piVar14 + iVar8);
            puVar20 = puVar20 + 1;
          } while (piVar13 != piStack_c8);
        }
      }
      else if ((param_8 & 0xfd) == 4) {
        piVar10 = (int *)FUN_2c601b5c();
        uVar21 = *(uint *)(*piVar10 + 0x38);
        piVar10 = (int *)FUN_2c62c484(piStack_d4,iVar7);
        piVar13 = piVar23;
        piVar14 = piStack_d4;
        puVar20 = puStack_d0;
        if (0 < iVar7) {
          do {
            while( true ) {
              piVar10 = piVar13;
              iVar19 = (int)(uVar5 + ((int)piVar10 >> 8)) >> 8;
              if (((iVar19 < 0) ||
                  (iVar30 = iVar28 + ((int)piVar23 >> 8), iVar26 = iVar30 >> 8, iVar30 < 0)) ||
                 ((param_4 <= iVar19 || (iVar6 <= iVar26)))) {
                *(undefined1 *)piVar14 = 0;
              }
              else {
                *puVar20 = *(uint *)(param_3 + (iVar26 * iVar17 + iVar19) * 4);
              }
              if ((param_8 != 6) || (uVar21 != *puVar20)) break;
              piVar15 = (int *)((int)piVar14 + 1);
              *(undefined1 *)piVar14 = 0;
              piVar23 = (int *)((int)piVar23 + iVar8);
              piVar13 = (int *)((int)piVar10 + iVar9);
              piVar14 = piVar15;
              puVar20 = puVar20 + 1;
              if (piVar15 == piStack_c8) goto LAB_2c6102d6;
            }
            piVar14 = (int *)((int)piVar14 + 1);
            piVar23 = (int *)((int)piVar23 + iVar8);
            piVar13 = (int *)((int)piVar10 + iVar9);
            puVar20 = puVar20 + 1;
          } while (piVar14 != piStack_c8);
LAB_2c6102d6:
          piVar10 = (int *)((int)piVar10 + iVar9);
        }
      }
    }
    else {
      if (param_8 == 5) {
        uStack_84 = 0;
        bVar4 = true;
      }
      else if (param_8 == 6) {
        piVar10 = (int *)FUN_2c601b5c();
        uStack_84 = *(uint *)(*piVar10 + 0x38);
        bVar4 = true;
      }
      else {
        if (param_8 != 4) goto LAB_2c610040;
        uStack_84 = 0;
        bVar4 = false;
      }
      if (0 < iVar7) {
        iVar30 = 0;
        iVar26 = 0;
        sVar16 = 0;
        iVar19 = (int)uVar5 >> 8;
        piVar10 = piStack_d4;
        uVar21 = uVar5;
        puVar20 = puStack_d0;
        if (iVar19 < 0) goto LAB_2c6101d2;
        do {
          uVar33 = iVar28 + (iVar30 >> 8);
          iVar31 = (int)uVar33 >> 8;
          if ((int)uVar33 < 0) goto LAB_2c6101d2;
          if (param_4 <= iVar19) goto LAB_2c6101d2;
          if (iVar6 <= iVar31) goto LAB_2c6101d2;
          if ((int)(uVar21 << 0x18) < 0) {
            iVar24 = (uVar21 & 0xff) - 0x80;
            iVar32 = 1;
          }
          else {
            iVar24 = 0x7f - (uVar21 & 0xff);
            iVar32 = -1;
          }
          uStack_98 = iVar24 * 2;
          if ((uVar33 & 0x80) == 0) {
            iVar34 = 0x7f - (uVar33 & 0xff);
            iVar35 = -1;
          }
          else {
            iVar34 = (uVar33 & 0xff) - 0x80;
            iVar35 = 1;
          }
          uStack_8c = iVar34 * 2;
          iVar25 = iVar17 * iVar31 + iVar19;
          iVar29 = param_3 + iVar25 * 4;
          if ((((iVar19 + iVar32 == -1) || (param_4 <= iVar19 + iVar32)) ||
              (iVar6 <= iVar31 + iVar35)) || (iVar31 + iVar35 == -1)) {
            uVar21 = *(uint *)(param_3 + iVar25 * 4);
            *puVar20 = uVar21;
            if (param_8 == 5) {
              uVar33 = (uint)*(byte *)(iVar29 + 3);
LAB_2c610198:
              if (iVar19 != 0) goto LAB_2c6102fa;
LAB_2c61019e:
              if (-1 < iVar32) goto LAB_2c6102fa;
            }
            else {
              if (param_8 == 6) {
                uVar33 = 0;
                if (uStack_84 != uVar21) {
                  uVar33 = 0xffffffff;
                }
                uVar33 = uVar33 & 0xff;
                goto LAB_2c610198;
              }
              uVar33 = 0xff;
              if (iVar19 == 0) goto LAB_2c61019e;
LAB_2c6102fa:
              if ((param_4 + -1 != iVar19) || (iVar32 != 1)) {
                if ((iVar31 != 0) || (-1 < iVar35)) {
                  if (iVar6 + -1 != iVar31) goto LAB_2c6101d2;
                  if (iVar35 != 1) {
                    *(undefined1 *)piVar10 = 0;
                    goto LAB_2c6101b2;
                  }
                }
                *(char *)piVar10 = (char)(uVar33 * (iVar34 * -2 + 0xff) >> 8);
                goto LAB_2c6101b2;
              }
            }
            *(char *)piVar10 = (char)(uVar33 * (iVar24 * -2 + 0xff) >> 8);
          }
          else {
            iVar35 = iVar35 * iVar17;
            if (bVar4) {
              if (param_8 == 5) {
                uVar22 = (uint)*(byte *)(iVar29 + iVar35 * 4 + 3);
                uVar21 = (uint)*(byte *)(iVar29 + iVar32 * 4 + 3);
                uVar33 = (uint)*(byte *)(iVar29 + 3);
                if (uVar33 != uVar22) {
                  uVar22 = (uVar33 * (iVar34 * -2 + 0x100) + uStack_8c * uVar22 & 0xffff) >> 8;
                }
                if (uVar33 == uVar21) {
                  iVar19 = uVar22 + uVar33;
                  uVar12 = (undefined1)((uint)(iVar19 * 0x800000) >> 0x18);
                }
                else {
                  iVar19 = ((uVar33 * (iVar24 * -2 + 0x100) + uStack_98 * uVar21 & 0xffff) >> 8) +
                           uVar22;
                  uVar12 = (undefined1)((uint)(iVar19 * 0x800000) >> 0x18);
                }
                *(undefined1 *)piVar10 = uVar12;
                if (iVar19 >> 1 != 0) goto LAB_2c61039c;
              }
              else {
                if (param_8 == 6) {
                  if (*(uint *)(param_3 + iVar25 * 4) == uStack_84) goto LAB_2c6101d2;
                  if (uStack_84 == *(uint *)(iVar29 + iVar35 * 4)) goto LAB_2c6101d2;
                  if (uStack_84 == *(uint *)(iVar29 + iVar32 * 4)) goto LAB_2c6101d2;
                }
                *(undefined1 *)piVar10 = 0xff;
LAB_2c61039c:
                uVar21 = *(uint *)(param_3 + iVar25 * 4);
                uStack_94 = *(uint *)(iVar29 + iVar35 * 4);
                uVar33 = *(uint *)(iVar29 + iVar32 * 4);
                if ((uVar21 == uVar33) && (uVar21 == uStack_94)) goto LAB_2c610548;
LAB_2c6103ba:
                uStack_98 = uStack_98 & 0xff;
                uStack_8c = uStack_8c & 0xff;
                *(undefined1 *)((int)puVar20 + 3) = 0xff;
                uVar22 = (uVar21 & 0xffffff) >> 0x10;
                iVar31 = 0xff - uStack_8c;
                iVar19 = 0xff - uStack_98;
                uVar27 = (uVar21 & 0xffff) >> 8;
                *(char *)puVar20 =
                     (char)(((((uStack_98 * (uVar33 & 0xff) + (uVar21 & 0xff) * iVar19) * 0x8081 &
                              0x7fffffff) >> 0x17) * 0x7f +
                            (((uStack_8c * (uStack_94 & 0xff) + (uVar21 & 0xff) * iVar31) * 0x8081 &
                             0x7fffffff) >> 0x17) * 0x80) / 0xff);
                *(char *)((int)puVar20 + 1) =
                     (char)(((((uStack_98 * ((uVar33 & 0xffff) >> 8) + uVar27 * iVar19) * 0x8081 &
                              0x7fffffff) >> 0x17) * 0x7f +
                            (((uStack_8c * ((uStack_94 & 0xffff) >> 8) + uVar27 * iVar31) * 0x8081 &
                             0x7fffffff) >> 0x17) * 0x80) / 0xff);
                *(char *)((int)puVar20 + 2) =
                     (char)(((((uStack_98 * ((uVar33 & 0xffffff) >> 0x10) + uVar22 * iVar19) *
                               0x8081 & 0x7fffffff) >> 0x17) * 0x7f +
                            (((uStack_8c * ((uStack_94 & 0xffffff) >> 0x10) + uVar22 * iVar31) *
                              0x8081 & 0x7fffffff) >> 0x17) * 0x80) / 0xff);
              }
            }
            else {
              uVar33 = *(uint *)(iVar29 + iVar32 * 4);
              uVar21 = *(uint *)(param_3 + iVar25 * 4);
              uStack_94 = *(uint *)(iVar29 + iVar35 * 4);
              *(undefined1 *)piVar10 = 0xff;
              if ((uVar21 != uVar33) || (uVar21 != uStack_94)) goto LAB_2c6103ba;
LAB_2c610548:
              *puVar20 = uVar21;
            }
          }
LAB_2c6101b2:
          while( true ) {
            sVar16 = sVar16 + 1;
            piVar10 = (int *)((int)piVar10 + 1);
            puVar20 = puVar20 + 1;
            iVar26 = iVar26 + iVar9;
            iVar30 = iVar30 + iVar8;
            if (iVar7 <= sVar16) goto LAB_2c610040;
            uVar21 = uVar5 + (iVar26 >> 8);
            iVar19 = (int)uVar21 >> 8;
            if (-1 < iVar19) break;
LAB_2c6101d2:
            *(undefined1 *)piVar10 = 0;
          }
        } while( true );
      }
    }
LAB_2c610040:
    puStack_d0 = puStack_d0 + iVar7;
    iStack_dc = iStack_dc + 1;
    piStack_d4 = (int *)((int)piStack_d4 + iVar7);
    piStack_c8 = (int *)((int)piStack_c8 + iVar7);
    if (sVar2 <= (short)iStack_dc) goto LAB_2c610324;
    iVar28 = (int)*param_2;
    sVar16 = param_2[1];
  } while( true );
}

