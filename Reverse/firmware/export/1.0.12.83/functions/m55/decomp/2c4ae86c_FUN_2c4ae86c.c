/* FUN_2c4ae86c @ 0x2c4ae86c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ae86c(uint *param_1,uint *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong lVar15;
  ulonglong uVar16;
  int aiStack_3c [4];
  uint uStack_2c;
  
  uStack_2c = *_LAB_2c4aeb0c;
  uVar16 = FUN_2c4ae5a0();
  iVar5 = _LAB_2c4aeb10;
  if ((int)uVar16 == 0) {
    if (param_2 == (uint *)0x0) {
      uVar8 = **(uint **)(_LAB_2c4aeb10 + 0x6d4);
      uVar9 = (*(uint **)(_LAB_2c4aeb10 + 0x6d4))[1];
      uVar6 = 0;
      uVar7 = 0;
    }
    else {
      uVar6 = *param_2;
      uVar7 = param_2[1];
      uVar8 = param_2[2];
      uVar9 = param_2[3];
      if ((int)uVar6 < 0) {
        uVar8 = uVar8 + uVar6;
        uVar6 = 0;
      }
      if ((int)uVar7 < 0) {
        uVar9 = uVar9 + uVar7;
        uVar7 = 0;
      }
    }
    if (*(int *)(_LAB_2c4aeb10 + 0x6d8) == 0) {
LAB_2c4ae902:
      if (*(char *)((int)param_1 + 0xd) == '\v') {
        fVar14 = (float)VectorSignedToFloat((param_3 & 0xffff) >> 8,(byte)(in_fpscr >> 0x16) & 3);
        fVar12 = (float)VectorSignedToFloat(param_3 & 0xff,(byte)(in_fpscr >> 0x16) & 3);
        fVar13 = (float)VectorSignedToFloat((param_3 & 0xffffff) >> 0x10,
                                            (byte)(in_fpscr >> 0x16) & 3);
        param_3 = VectorFloatToUnsigned
                            (fVar14 * fRam2c4aeb14 + fVar12 * fRam2c4aeb18 + fVar13 * fRam2c4aeb1c,3
                            );
        param_3 = param_3 | param_3 << 0x18;
      }
      if ((char)param_1[3] == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = 0x40;
      }
      uVar16 = FUN_2c4ae148(_LAB_2c4aeb10,0xa34);
      if (((int)uVar16 == 0) &&
         (uVar16 = FUN_2c4ae148(_LAB_2c4aeb10,0xa02,param_3), (int)uVar16 == 0)) {
        if ((param_2 == (uint *)0x0) || ((uVar6 == 0 && uVar7 == 0 && (*param_1 == uVar8)))) {
          uVar16 = FUN_2c4ae148(_LAB_2c4aeb10,0xa00,
                                _LAB_2c4aeb24 |
                                uVar4 | *(uint *)(iVar5 + 0x76c) | *(uint *)(iVar5 + 0x764) |
                                *(uint *)(iVar5 + 0x734));
          uVar1 = (undefined4)(uVar16 >> 0x20);
          if ((int)uVar16 == 0) {
            uVar6 = *(uint *)(iVar5 + 0x6bc);
            if (uVar6 < 2) {
              iVar2 = *(int *)(iVar5 + (uVar6 + 0x1aa) * 4);
              uVar1 = 0;
              if (iVar2 != 0) {
                uVar7 = *(uint *)(iVar5 + 0x6b0);
                uVar8 = param_1[2];
                iVar10 = *(int *)(iVar5 + uVar6 * 4 + 0x6b4);
                if (iVar10 + 0x10U < uVar7) {
LAB_2c4aea5c:
                  *(undefined4 *)(iVar2 + iVar10) = _LAB_2c4aeb28;
                  uVar16 = (ulonglong)uVar7;
                  *(undefined4 *)
                   (*(int *)(iVar5 + *(int *)(iVar5 + 0x6bc) * 4 + 0x6b4) +
                    *(int *)(iVar5 + (*(int *)(iVar5 + 0x6bc) + 0x1aa) * 4) + 4) = 0;
                  *(uint *)(*(int *)(iVar5 + *(int *)(iVar5 + 0x6bc) * 4 + 0x6b4) +
                            *(int *)(iVar5 + (*(int *)(iVar5 + 0x6bc) + 0x1aa) * 4) + 8) =
                       uVar9 * uVar8;
                  *(undefined4 *)
                   (*(int *)(iVar5 + *(int *)(iVar5 + 0x6bc) * 4 + 0x6b4) +
                    *(int *)(iVar5 + (*(int *)(iVar5 + 0x6bc) + 0x1aa) * 4) + 0xc) = 0;
                  iVar5 = iVar5 + (*(int *)(iVar5 + 0x6bc) + 0x1ac) * 4;
                  *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 0x10;
                  goto LAB_2c4ae9e6;
                }
                uVar16 = FUN_2c4adb40(_LAB_2c4aeb10);
                if ((int)uVar16 == 0) {
                  aiStack_3c[2] = 0xffffffff;
                  aiStack_3c[0] = iVar5;
                  aiStack_3c[1] = 0xffffffff;
                  aiStack_3c[3] = (int)uVar16;
                  uVar16 = FUN_2c4b4674(5,aiStack_3c);
                  if ((int)uVar16 == 0) {
                    iVar10 = *(int *)(iVar5 + 0x6bc);
                    *_LAB_2c4aeb2c = 0;
                    iVar2 = *(int *)(iVar5 + (iVar10 + 0x1aa) * 4);
                    iVar10 = *(int *)(iVar5 + iVar10 * 4 + 0x6b4);
                    uVar7 = 0;
                    goto LAB_2c4aea5c;
                  }
                }
                goto LAB_2c4ae96a;
              }
            }
            uVar16 = CONCAT44(uVar1,3);
          }
        }
        else {
          uVar16 = FUN_2c4ae148(_LAB_2c4aeb10,0xa00,
                                _LAB_2c4aeb20 |
                                *(uint *)(iVar5 + 0x734) |
                                *(uint *)(iVar5 + 0x76c) | *(uint *)(iVar5 + 0x764) | uVar4);
          if (((int)uVar16 == 0) &&
             (uVar16 = FUN_2c4ae004(uVar6,uVar7,uVar8,uVar9), (int)uVar16 == 0)) {
LAB_2c4ae9e6:
            iVar5 = _LAB_2c4aeb10;
            uVar6 = *_LAB_2c4aeb0c ^ uStack_2c;
            if (uVar6 == 0) {
              uVar6 = *DAT_2c4ae200;
              if ((_LAB_2c4aeb10 != 0) && (*(uint *)(_LAB_2c4aeb10 + 0x6bc) < 2)) {
                iVar10 = _LAB_2c4aeb10 + *(uint *)(_LAB_2c4aeb10 + 0x6bc) * 4;
                iVar2 = *(int *)(iVar10 + 0x6a8);
                if (iVar2 != 0) {
                  uVar7 = *(uint *)(iVar10 + 0x6b4);
                  if (*(uint *)(_LAB_2c4aeb10 + 0x6b0) <= uVar7 + 0x10) {
                    lVar15 = FUN_2c4adb40();
                    if (((int)lVar15 != 0) ||
                       (lVar15 = FUN_2c4b4674(5,&stack0xffffffdc), (int)lVar15 != 0))
                    goto LAB_2c4ae1b2;
                    iVar2 = iVar5 + *(int *)(iVar5 + 0x6bc) * 4;
                    *DAT_2c4ae208 = 0;
                    uVar7 = *(uint *)(iVar2 + 0x6b4);
                    iVar2 = *(int *)(iVar2 + 0x6a8);
                  }
                  lVar15 = (ulonglong)uVar7 << 0x20;
                  *(uint *)(iVar2 + uVar7) = DAT_2c4ae204 | 0xa1b;
                  iVar2 = iVar5 + *(int *)(iVar5 + 0x6bc) * 4;
                  *(undefined4 *)(*(int *)(iVar2 + 0x6b4) + *(int *)(iVar2 + 0x6a8) + 4) = 1;
                  iVar5 = iVar5 + *(int *)(iVar5 + 0x6bc) * 4;
                  *(int *)(iVar5 + 0x6b4) = *(int *)(iVar5 + 0x6b4) + 8;
                  goto LAB_2c4ae1b2;
                }
              }
              lVar15 = 0xa1b00000003;
LAB_2c4ae1b2:
              if ((*DAT_2c4ae200 ^ uVar6) == 0) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              stack_chk_fail((int)lVar15,(int)((ulonglong)lVar15 >> 0x20),*DAT_2c4ae200 ^ uVar6,0);
            }
            goto LAB_2c4aeb06;
          }
        }
      }
    }
    else {
      iVar2 = uVar8 + uVar6;
      uVar8 = *(uint *)(_LAB_2c4aeb10 + 0x6e0);
      uVar16 = (ulonglong)uVar8 << 0x20;
      if (((int)uVar8 < iVar2) &&
         (iVar10 = *(int *)(_LAB_2c4aeb10 + 0x6e8), uVar16 = (ulonglong)uVar8 << 0x20,
         (int)uVar6 < iVar10)) {
        iVar11 = uVar7 + uVar9;
        uVar9 = *(uint *)(_LAB_2c4aeb10 + 0x6e4);
        uVar16 = (ulonglong)uVar8 << 0x20;
        if (((int)uVar9 < iVar11) &&
           (iVar3 = *(int *)(_LAB_2c4aeb10 + 0x6ec), uVar16 = (ulonglong)uVar8 << 0x20,
           (int)uVar7 < iVar3)) {
          if ((int)uVar6 < (int)uVar8) {
            uVar6 = uVar8;
          }
          if ((int)uVar7 < (int)uVar9) {
            uVar7 = uVar9;
          }
          if (iVar2 < iVar10) {
            uVar8 = iVar2 - uVar6;
          }
          else {
            uVar8 = iVar10 - uVar6;
          }
          if (iVar11 < iVar3) {
            uVar9 = iVar11 - uVar7;
          }
          else {
            uVar9 = iVar3 - uVar7;
          }
          goto LAB_2c4ae902;
        }
      }
    }
  }
LAB_2c4ae96a:
  uVar6 = *_LAB_2c4aeb0c ^ uStack_2c;
  if (uVar6 == 0) {
    return;
  }
LAB_2c4aeb06:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)uVar16,(int)(uVar16 >> 0x20),uVar6,0);
}

