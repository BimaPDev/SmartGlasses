/* FUN_2c4aeb30 @ 0x2c4aeb30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4aeb30(int *param_1,uint *param_2,int param_3,int param_4,undefined4 param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint in_fpscr;
  undefined4 uVar20;
  undefined4 uVar21;
  int iStack_7c;
  int iStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c4aebdc;
  if ((3 < (uint)(_LAB_2c4aebd8 + param_4)) && ((short)param_2[0x14] != 0x1f04)) {
    uVar4 = (uint)*(byte *)((int)param_2 + 0xd);
    if (uVar4 - 100 < 3) {
      if (*(char *)((int)param_2 + 0xa9) == '\0') {
LAB_2c4aeb68:
        if (((((3 < uVar4 - 0x15) &&
              (uVar17 = (uint)*(byte *)((int)param_1 + 0xd), 5 < uVar17 - 0x76)) &&
             ((9 < uVar4 - 0x76 &&
              (((char)param_2[0x2a] == '\0' && ((short)param_2[0x14] != 0x1f02)))))) &&
            (1 < (uint)(_LAB_2c4aebe0 + param_4))) &&
           (((param_4 == 0 || (0x18 < uVar17)) || (-1 < (int)((_LAB_2c4aebe4 >> uVar17) << 0x1f)))))
        {
          if (*(char *)((int)param_2 + 0x52) == '\x01') {
            uVar16 = 0x8000;
          }
          else {
            uVar16 = 0;
          }
          if (param_3 != 0) {
            uVar12 = in_fpscr & 0xfffffff;
            in_fpscr = uVar12 | (uint)(*(float *)(param_3 + 4) == 0.0) << 0x1e;
            if (((((byte)(in_fpscr >> 0x1e) == 0) ||
                 (in_fpscr = uVar12 | (uint)(*(float *)(param_3 + 0xc) == 0.0) << 0x1e,
                 (byte)(in_fpscr >> 0x1e) == 0)) ||
                ((in_fpscr = uVar12 | (uint)(*(float *)(param_3 + 0x18) == 0.0) << 0x1e,
                 (byte)(in_fpscr >> 0x1e) == 0 ||
                 ((in_fpscr = uVar12 | (uint)(*(float *)(param_3 + 0x1c) == 0.0) << 0x1e,
                  (byte)(in_fpscr >> 0x1e) == 0 ||
                  (in_fpscr = uVar12 | (uint)(*(float *)(param_3 + 0x20) == 1.0) << 0x1e,
                  (byte)(in_fpscr >> 0x1e) == 0)))))) &&
               (((uint)(_LAB_2c4aee7c + param_4) < 2 || (param_4 == 0x2000)))) {
              uVar16 = 0x8000;
            }
          }
          if (uVar17 == 0xb) {
            if (uVar4 - 10 < 2) {
              uVar17 = 0;
            }
            else {
              uVar17 = 0x80000000;
            }
          }
          else {
            uVar17 = 0;
          }
          iVar18 = FUN_2c4ad834(uVar4,param_2[2]);
          if (iVar18 != 0) goto LAB_2c4aebaa;
          iVar5 = FUN_2c4adaa4(uRam2c4aee80,&iStack_7c,extraout_r2);
          iVar10 = iStack_78;
          iVar9 = iStack_7c;
          if (iVar5 != 0) {
            uVar20 = VectorSignedToFloat(param_2[1],(byte)(in_fpscr >> 0x16) & 3);
            iVar6 = FUN_2c4adaa4(uRam2c4aee80,uVar20,&iStack_7c);
            iVar2 = iStack_78;
            iVar5 = iStack_7c;
            if (iVar6 != 0) {
              uVar21 = VectorSignedToFloat(param_2[1],(byte)(in_fpscr >> 0x16) & 3);
              uVar20 = VectorSignedToFloat(*param_2,(byte)(in_fpscr >> 0x16) & 3);
              iVar7 = FUN_2c4adaa4(uVar20,uVar21,&iStack_7c);
              iVar3 = iStack_78;
              iVar6 = iStack_7c;
              if (iVar7 != 0) {
                uVar20 = VectorSignedToFloat(*param_2,(byte)(in_fpscr >> 0x16) & 3);
                iVar8 = FUN_2c4adaa4(uVar20,uRam2c4aee80,&iStack_7c);
                iVar7 = _LAB_2c4aee84;
                if (iVar8 != 0) {
                  iVar8 = iVar5;
                  if (iVar5 < iVar9) {
                    iVar8 = iVar9;
                    iVar9 = iVar5;
                  }
                  if (iVar6 <= iVar9) {
                    iVar9 = iVar6;
                  }
                  if (iVar6 < iVar8) {
                    iVar6 = iVar8;
                  }
                  if (iStack_7c <= iVar9) {
                    iVar9 = iStack_7c;
                  }
                  if (iVar6 < iStack_7c) {
                    iVar6 = iStack_7c;
                  }
                  if (*(int *)(_LAB_2c4aee84 + 0x6d8) == 0) {
                    iVar11 = *param_1;
                    iVar19 = param_1[1];
                    iVar5 = 0;
                    iVar8 = 0;
                  }
                  else {
                    iVar8 = *(int *)(_LAB_2c4aee84 + 0x6e0);
                    iVar5 = *(int *)(_LAB_2c4aee84 + 0x6e4);
                    iVar11 = *(int *)(_LAB_2c4aee84 + 0x6e8);
                    iVar19 = *(int *)(_LAB_2c4aee84 + 0x6ec);
                  }
                  if (iVar9 < iVar8) {
                    iVar9 = iVar8;
                  }
                  if (iVar11 < iVar6) {
                    iVar6 = iVar11 - iVar9;
                  }
                  else {
                    iVar6 = iVar6 - iVar9;
                  }
                  if (iVar6 < 1) goto LAB_2c4aebaa;
                  iVar8 = iVar2;
                  if (iVar2 < iVar10) {
                    iVar8 = iVar10;
                    iVar10 = iVar2;
                  }
                  if (iVar3 <= iVar10) {
                    iVar10 = iVar3;
                  }
                  if (iVar8 < iVar3) {
                    iVar8 = iVar3;
                  }
                  if (iStack_78 <= iVar10) {
                    iVar10 = iStack_78;
                  }
                  if (iVar8 < iStack_78) {
                    iVar8 = iStack_78;
                  }
                  if (iVar5 < iVar10) {
                    iVar5 = iVar10;
                  }
                  if (iVar19 < iVar8) {
                    iVar8 = iVar19 - iVar5;
                  }
                  else {
                    iVar8 = iVar8 - iVar5;
                  }
                  if ((iVar8 < 1) || (iVar18 = FUN_2c4ae5a0(param_1), iVar18 != 0))
                  goto LAB_2c4aebaa;
                  iVar18 = FUN_2c4ad904(&fStack_50,extraout_r2_00);
                  if (iVar18 == 0) goto LAB_2c4af10a;
                  fStack_60 = fStack_34;
                  fStack_54 = fStack_30 + (fStack_38 + fStack_34) * 0.5;
                  fStack_6c = fStack_38;
                  fStack_68 = (float)VectorSignedToFloat(*param_2,(byte)(in_fpscr >> 0x16) & 3);
                  fStack_5c = (fStack_48 + (fStack_50 + fStack_4c) * 0.5) / fStack_68;
                  fStack_74 = fStack_50 / fStack_68;
                  fStack_68 = fStack_4c / fStack_68;
                  fStack_58 = (float)VectorSignedToFloat(param_2[1],(byte)(in_fpscr >> 0x16) & 3);
                  fStack_70 = fStack_44 / fStack_58;
                  fStack_64 = fStack_40 / fStack_58;
                  fStack_58 = (fStack_3c + (fStack_44 + fStack_40) * 0.5) / fStack_58;
                  if ((ushort)param_2[0x14] == 0) {
LAB_2c4af0fe:
                    uVar4 = 0x1000;
                  }
                  else {
                    uVar12 = (ushort)param_2[0x14] - 0x1f00;
                    uVar4 = 0;
                    if ((uVar12 & 0xffff) < 5) {
                      switch(uVar12) {
                      case 0:
                        goto LAB_2c4af0fe;
                      case 1:
                        uVar4 = 0x2000;
                        break;
                      case 2:
                        uVar4 = 0x3000;
                        break;
                      default:
                        uVar4 = 0;
                        break;
                      case 4:
                        uVar4 = 0x6000;
                      }
                    }
                  }
                  uVar12 = param_4 + 0xdfffU & 0xffff;
                  if (uVar12 < 0xe) {
                    uVar12 = *(uint *)(_DAT_2c4af17c + uVar12 * 4);
                  }
                  else {
                    uVar12 = 0;
                  }
                  if ((char)param_2[3] == '\0') {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = 0x10000000;
                  }
                  if ((char)param_1[3] == '\0') {
                    uVar14 = 0;
                  }
                  else {
                    uVar14 = 0x40;
                  }
                  if (uVar12 == 0) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = 0x80;
                  }
                  uVar1 = param_2[0x2a];
                  iVar18 = FUN_2c4ae148(_LAB_2c4af180,0xa00,
                                        *(uint *)(iVar7 + 0x76c) |
                                        *(uint *)(iVar7 + 0x730) | *(uint *)(iVar7 + 0x764) | uVar14
                                        | *(uint *)(iVar7 + 0x734) | uVar16 | uVar4 | uVar12 | 1);
                  if ((((((iVar18 == 0) &&
                         (iVar18 = FUN_2c4ae148(_LAB_2c4af180,0xa02,param_5), iVar18 == 0)) &&
                        (iVar18 = FUN_2c4add48(0xa18,&fStack_5c), iVar18 == 0)) &&
                       ((iVar18 = FUN_2c4add48(0xa19,&fStack_58), iVar18 == 0 &&
                        (iVar18 = FUN_2c4add48(0xa1a,&fStack_54), iVar18 == 0)))) &&
                      (iVar18 = FUN_2c4add48(0xa1c,&fStack_74), iVar18 == 0)) &&
                     (((iVar18 = FUN_2c4add48(0xa1d,&fStack_70), iVar18 == 0 &&
                       (iVar18 = FUN_2c4add48(0xa1e,&fStack_6c), iVar18 == 0)) &&
                      ((iVar18 = FUN_2c4ae148(_LAB_2c4af180,0xa1f,1), iVar18 == 0 &&
                       (((iVar18 = FUN_2c4add48(0xa20,&fStack_68), iVar18 == 0 &&
                         (iVar18 = FUN_2c4add48(0xa21,&fStack_64), iVar18 == 0)) &&
                        (iVar18 = FUN_2c4add48(0xa22,&fStack_60), iVar18 == 0)))))))) {
                    uVar4 = (uint)*(byte *)((int)param_2 + 0xd);
                    if ((uVar4 - 0xd < 3) || (uVar4 - 0x15 < 4)) {
                      if (*(char *)((int)param_2 + 0x1d) == '\x01') {
                        uVar16 = 0x8000;
                      }
                      else {
                        uVar16 = 0;
                      }
                      if ((char)param_2[7] == '\0') {
                        uVar12 = 0x40;
                      }
                      else if ((char)param_2[7] == '\x01') {
                        uVar12 = 0x50;
                      }
                      else {
                        uVar12 = 0;
                      }
                    }
                    else {
                      uVar16 = 0;
                      uVar12 = 0;
                    }
                    if ((int)(uVar4 << 0x18) < 0) {
                      uVar4 = 0xf;
                    }
                    else {
                      uVar4 = *(uint *)(_LAB_2c4af184 + uVar4 * 4);
                    }
                    iVar18 = FUN_2c4ae148(_LAB_2c4af180,0xa25,
                                          uVar4 | param_6 | (uint)(byte)uVar1 << 0x19 | uVar17 |
                                                  uVar15 | uVar16 | uVar12);
                    if (((iVar18 == 0) &&
                        ((param_2[8] == 0 ||
                         (iVar18 = FUN_2c4ae148(_LAB_2c4af180,0xa51), iVar18 == 0)))) &&
                       (((param_2[9] == 0 ||
                         (iVar18 = FUN_2c4ae148(_LAB_2c4af180,0xa53), iVar18 == 0)) &&
                        ((((param_2[10] == 0 ||
                           (iVar18 = FUN_2c4ae148(_LAB_2c4af180,0xa53), iVar18 == 0)) &&
                          (iVar18 = FUN_2c4ae148(_LAB_2c4af180,0xa27,0), iVar18 == 0)) &&
                         ((iVar18 = FUN_2c4ae148(_LAB_2c4af180,0xa29,param_2[6]), iVar18 == 0 &&
                          (iVar18 = FUN_2c4ae148(_LAB_2c4af180,0xa34,0), iVar18 == 0)))))))) {
                      if (*(byte *)((int)param_2 + 0xd) - 0x76 < 6) {
                        uVar4 = (int)param_2[2] / 3 << 2;
                      }
                      else {
                        uVar4 = param_2[2];
                      }
                      iVar18 = FUN_2c4ae148(_LAB_2c4af180,0xa2b,uVar13 | uVar4);
                      if (((iVar18 == 0) &&
                          (iVar18 = FUN_2c4ae148(_LAB_2c4af180,0xa2d,0), iVar18 == 0)) &&
                         ((iVar18 = FUN_2c4ae148(_LAB_2c4af180,0xa2f,*param_2 | param_2[1] << 0x10),
                          iVar18 == 0 &&
                          ((iVar18 = FUN_2c4ae004(iVar9,iVar5,iVar6,iVar8), iVar18 == 0 &&
                           (*(int *)(iVar7 + 0x708) == 0)))))) {
                        iVar18 = FUN_2c4ae20c();
                      }
                    }
                  }
                  goto LAB_2c4aebaa;
                }
              }
            }
          }
LAB_2c4af10a:
          iVar18 = 1;
          goto LAB_2c4aebaa;
        }
      }
    }
    else if (((uVar4 != 0x75) && (4 < uVar4 - 0x10)) && (1 < uVar4 - 0xe)) goto LAB_2c4aeb68;
  }
  iVar18 = 7;
LAB_2c4aebaa:
  if (*_LAB_2c4aebdc != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar18;
}

