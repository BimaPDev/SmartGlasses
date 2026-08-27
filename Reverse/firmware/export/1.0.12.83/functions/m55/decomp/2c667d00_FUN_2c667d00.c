/* FUN_2c667d00 @ 0x2c667d00 */

uint FUN_2c667d00(double *param_1,double *param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  byte bVar2;
  double *pdVar3;
  int iVar4;
  uint *puVar5;
  double *pdVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  double *pdVar10;
  uint *puVar12;
  int *piVar13;
  double *pdVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  uint in_fpscr;
  undefined4 uVar19;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  uint uVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  int local_28c;
  int local_280;
  double *local_27c;
  uint local_278 [20];
  double local_228 [20];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined8 local_180;
  double adStack_178 [18];
  double local_e8 [20];
  double *pdVar11;
  
  dVar22 = DAT_2c667fa8;
  dVar27 = DAT_2c667fa0;
  iVar16 = param_4 + -1;
  local_27c = param_2;
  iVar15 = *(int *)(DAT_2c667fb0 + param_5 * 4);
  if (param_3 < -0x14) {
    iVar9 = -0x18;
    local_28c = 0;
  }
  else {
    local_28c = (int)((longlong)DAT_2c667fb4 * (longlong)(param_3 + -3) >> 0x22) -
                (param_3 + -3 >> 0x1f);
    iVar9 = (local_28c + 1) * -0x18;
  }
  param_3 = param_3 + iVar9;
  local_280 = param_3;
  iVar9 = local_28c - iVar16;
  if (-1 < iVar15 + iVar16) {
    pdVar3 = local_228;
    iVar4 = iVar15 + iVar16 + 1 + iVar9;
    do {
      dVar25 = DAT_2c667f98;
      if (-1 < iVar9) {
        dVar25 = (double)VectorSignedToFloat(*(undefined4 *)(param_6 + iVar9 * 4),
                                             (byte)(in_fpscr >> 0x16) & 3);
      }
      iVar9 = iVar9 + 1;
      *pdVar3 = dVar25;
      pdVar3 = pdVar3 + 1;
    } while (iVar9 != iVar4);
  }
  if (-1 < iVar15) {
    pdVar3 = local_e8;
    pdVar14 = local_228 + param_4;
    iVar9 = iVar16;
    do {
      pdVar6 = pdVar14;
      pdVar10 = param_1;
      dVar25 = DAT_2c667f98;
      if (-1 < iVar16) {
        do {
          pdVar11 = pdVar10 + 1;
          dVar25 = dVar25 + *pdVar10 * pdVar6[-1];
          pdVar6 = pdVar6 + -1;
          pdVar10 = pdVar11;
        } while (pdVar11 != param_1 + param_4);
      }
      iVar9 = iVar9 + 1;
      pdVar14 = pdVar14 + 1;
      *pdVar3 = dVar25;
      pdVar3 = pdVar3 + 1;
    } while (iVar9 != iVar15 + param_4);
  }
  iVar9 = iVar15;
  do {
    dVar25 = local_e8[iVar9];
    if (0 < iVar9) {
      pdVar3 = local_e8 + iVar9;
      puVar5 = local_278;
      do {
        pdVar3 = pdVar3 + -1;
        uVar23 = VectorFloatToSigned(dVar25 * dVar27,3);
        dVar26 = (double)VectorSignedToFloat(uVar23,(byte)(in_fpscr >> 0x16) & 3);
        dVar21 = dVar25 + -dVar26 * dVar22;
        dVar25 = dVar26 + *pdVar3;
        uVar20 = VectorFloatToSigned(dVar21,3);
        *puVar5 = uVar20;
        puVar5 = puVar5 + 1;
      } while (pdVar3 != local_e8);
    }
    uVar23 = FUN_2c666bd8(param_3);
    uVar19 = FUN_2c668450(SUB84((double)CONCAT44(extraout_s1,uVar23) * 0.125,0));
    dVar25 = (double)CONCAT44(extraout_s1,uVar23) + -(double)CONCAT44(extraout_s1_00,uVar19) * 8.0;
    uVar20 = VectorFloatToSigned(dVar25,3);
    dVar21 = (double)VectorSignedToFloat(uVar20,(byte)(in_fpscr >> 0x16) & 3);
    dVar25 = dVar25 - dVar21;
    if (param_3 < 1) {
      if (param_3 == 0) {
        iVar4 = (int)local_278[iVar9 + -1] >> 0x17;
        if (0 < iVar4) goto LAB_2c667f4c;
      }
      else {
        uVar7 = in_fpscr & 0xfffffff | (uint)(dVar25 < 0.5) << 0x1f;
        in_fpscr = uVar7 | (uint)NAN(dVar25) << 0x1c;
        if ((byte)(uVar7 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
          uVar20 = uVar20 + 1;
          if (0 < iVar9) {
            iVar4 = 2;
            goto LAB_2c667f5e;
          }
          iVar4 = 2;
          dVar25 = 1.0 - dVar25;
        }
        else {
          iVar4 = 0;
        }
      }
LAB_2c667e84:
      in_fpscr = in_fpscr & 0xfffffff | (uint)(dVar25 == 0.0) << 0x1e;
      bVar2 = (byte)(in_fpscr >> 0x18);
      iVar8 = local_280;
    }
    else {
      uVar7 = local_278[iVar9 + -1];
      iVar4 = (int)uVar7 >> (0x18U - param_3 & 0xff);
      uVar20 = uVar20 + iVar4;
      uVar7 = uVar7 - (iVar4 << (0x18U - param_3 & 0xff));
      iVar4 = (int)uVar7 >> (0x17U - param_3 & 0xff);
      local_278[iVar9 + -1] = uVar7;
      if (iVar4 < 1) goto LAB_2c667e84;
LAB_2c667f4c:
      uVar20 = uVar20 + 1;
      if (iVar9 < 1) {
        bVar18 = false;
      }
      else {
LAB_2c667f5e:
        if (local_278[0] == 0) {
          bVar18 = false;
          if (iVar9 != 1) {
            iVar8 = 1;
            puVar5 = local_278;
            do {
              puVar5 = puVar5 + 1;
              if (*puVar5 != 0) {
                iVar17 = iVar8 + 1;
                uVar7 = *puVar5;
                goto LAB_2c667f78;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 != iVar9);
            bVar18 = false;
          }
        }
        else {
          iVar17 = 1;
          iVar8 = 0;
          uVar7 = local_278[0];
LAB_2c667f78:
          local_278[iVar8] = 0x1000000 - uVar7;
          if (iVar17 < iVar9) {
            uVar7 = local_278[iVar17];
            puVar5 = local_278 + iVar17;
            while( true ) {
              puVar12 = puVar5 + 1;
              *puVar5 = 0xffffff - uVar7;
              if (puVar12 == local_278 + iVar9) break;
              uVar7 = *puVar12;
              puVar5 = puVar12;
            }
          }
          bVar18 = true;
        }
      }
      if (0 < param_3) {
        if (param_3 == 1) {
          local_278[iVar9 + -1] = local_278[iVar9 + -1] & 0x7fffff;
        }
        else if (param_3 == 2) {
          local_278[iVar9 + -1] = local_278[iVar9 + -1] & 0x3fffff;
        }
      }
      if ((iVar4 != 2) || (dVar25 = 1.0 - dVar25, !bVar18)) goto LAB_2c667e84;
      uVar23 = FUN_2c666bd8(param_3);
      dVar25 = dVar25 - (double)CONCAT44(extraout_s1_01,uVar23);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(dVar25 == 0.0) << 0x1e;
      bVar2 = (byte)(in_fpscr >> 0x18);
      iVar8 = local_280;
    }
    local_280 = iVar8;
    if (bVar2 >> 6 == 0) {
      uVar23 = FUN_2c666bd8(SUB84(dVar25,0),-iVar8);
      dVar27 = (double)CONCAT44(extraout_s1_02,uVar23);
      uVar7 = in_fpscr & 0xfffffff | (uint)(dVar27 < DAT_2c668338) << 0x1f;
      in_fpscr = uVar7 | (uint)(NAN(dVar27) || NAN(DAT_2c668338)) << 0x1c;
      if ((byte)(uVar7 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
        local_280 = iVar8 + 0x18;
        uVar24 = VectorFloatToSigned(dVar27 * DAT_2c668340,3);
        dVar22 = (double)VectorSignedToFloat(uVar24,(byte)(in_fpscr >> 0x16) & 3);
        uVar7 = VectorFloatToSigned(dVar27 + -dVar22 * DAT_2c668338,3);
        local_278[iVar9] = uVar7;
        local_278[iVar9 + 1] = uVar24;
        iVar17 = iVar9 + 1;
      }
      else {
        uVar7 = VectorFloatToSigned(dVar27,3);
        local_278[iVar9] = uVar7;
        iVar17 = iVar9;
      }
      goto LAB_2c6680c6;
    }
    iVar17 = iVar9 + -1;
    if (iVar15 <= iVar17) {
      uVar7 = 0;
      puVar5 = local_278 + iVar9 + 0x3fffffff;
      do {
        puVar12 = puVar5 + -1;
        uVar7 = uVar7 | *puVar5;
        puVar5 = puVar12;
      } while (puVar12 != local_278 + iVar15 + -1);
      if (uVar7 != 0) break;
    }
    if (local_278[iVar15 + -1] == 0) {
      iVar4 = 1;
      piVar13 = &local_280 + iVar15;
      do {
        iVar8 = *piVar13;
        iVar4 = iVar4 + 1;
        piVar13 = piVar13 + -1;
      } while (iVar8 == 0);
      iVar4 = iVar4 + iVar9;
    }
    else {
      iVar4 = iVar9 + 1;
    }
    iVar8 = iVar9 + 1;
    pdVar14 = local_e8 + iVar8;
    iVar17 = param_6 + (local_28c + iVar8 + 0x3fffffff) * 4;
    pdVar3 = local_228 + iVar9 + param_4;
    do {
      puVar1 = (undefined4 *)(iVar17 + 4);
      iVar17 = iVar17 + 4;
      dVar21 = (double)VectorSignedToFloat(*puVar1,(byte)(in_fpscr >> 0x16) & 3);
      pdVar10 = pdVar3 + 1;
      *pdVar3 = dVar21;
      pdVar6 = param_1;
      dVar25 = DAT_2c667f98;
      if (-1 < iVar16) {
        while( true ) {
          dVar25 = dVar25 + *pdVar6 * dVar21;
          if (pdVar6 + 1 == param_1 + param_4) break;
          pdVar3 = pdVar3 + -1;
          dVar21 = *pdVar3;
          pdVar6 = pdVar6 + 1;
        }
      }
      iVar8 = iVar8 + 1;
      *pdVar14 = dVar25;
      pdVar14 = pdVar14 + 1;
      iVar9 = iVar4;
      pdVar3 = pdVar10;
    } while (iVar8 <= iVar4);
  } while( true );
  local_280 = iVar8 + -0x18;
  if (local_278[iVar17] == 0) {
    puVar5 = local_278 + DAT_2c668358 + iVar9;
    do {
      uVar7 = *puVar5;
      iVar17 = iVar17 + -1;
      local_280 = local_280 + -0x18;
      puVar5 = puVar5 + -1;
    } while (uVar7 == 0);
  }
LAB_2c6680c6:
  uVar23 = FUN_2c666bd8(0,local_280);
  dVar25 = (double)CONCAT44(extraout_s1_03,uVar23);
  dVar22 = DAT_2c668398;
  dVar27 = DAT_2c668350;
  if (iVar17 < 0) {
    if (2 < param_5) {
      if (param_5 != 3) goto LAB_2c66818e;
      goto joined_r0x2c66837a;
    }
    if (0 < param_5) {
      dVar27 = DAT_2c668398;
      if (iVar4 == 0) goto LAB_2c668294;
LAB_2c6682fa:
      *local_27c = -dVar27;
      dVar27 = (double)CONCAT44(uStack_184,local_188) - dVar27;
      if (0 < iVar17) {
LAB_2c6682a6:
        pdVar3 = (double *)&local_180;
        iVar15 = 1;
        do {
          iVar15 = iVar15 + 1;
          dVar22 = *pdVar3;
          pdVar3 = pdVar3 + 1;
          dVar27 = dVar27 + dVar22;
        } while (iVar15 <= iVar17);
        if (iVar4 == 0) goto LAB_2c6682be;
      }
      dVar27 = -dVar27;
      goto LAB_2c6682be;
    }
    if (param_5 != 0) goto LAB_2c66818e;
  }
  else {
    pdVar14 = local_e8 + iVar17;
    puVar5 = local_278 + iVar17 + 1;
    pdVar3 = local_e8 + iVar17 + 1;
    do {
      puVar5 = puVar5 + -1;
      dVar21 = (double)VectorSignedToFloat(*puVar5,(byte)(in_fpscr >> 0x16) & 3);
      dVar21 = dVar21 * dVar25;
      dVar25 = dVar25 * DAT_2c668340;
      pdVar3 = pdVar3 + -1;
      *pdVar3 = dVar21;
    } while (puVar5 != local_278);
    iVar16 = 0;
    do {
      dVar25 = DAT_2c668350;
      if (-1 < iVar15) {
        iVar9 = 0;
        pdVar3 = pdVar14;
        pdVar6 = DAT_2c66835c;
        dVar21 = DAT_2c668348;
        while( true ) {
          iVar9 = iVar9 + 1;
          dVar26 = *pdVar3;
          pdVar3 = pdVar3 + 1;
          dVar25 = dVar25 + dVar26 * dVar21;
          if ((iVar15 < iVar9) || (iVar16 < iVar9)) break;
          dVar21 = *pdVar6;
          pdVar6 = pdVar6 + 1;
        }
      }
      pdVar3 = (double *)((int)&local_188 + iVar16 * 8);
      bVar18 = iVar17 != iVar16;
      iVar16 = iVar16 + 1;
      pdVar14 = pdVar14 + -1;
      *pdVar3 = dVar25;
    } while (bVar18);
    if (2 < param_5) {
      if (param_5 != 3) goto LAB_2c66818e;
      if (iVar17 != 0) {
        pdVar3 = (double *)((int)&local_188 + iVar17 * 8);
        dVar27 = *(double *)((int)&local_188 + iVar17 * 8);
        do {
          pdVar14 = pdVar3 + -1;
          dVar21 = *pdVar14;
          dVar25 = dVar27 + dVar21;
          *pdVar14 = dVar25;
          *pdVar3 = (dVar21 - dVar25) + dVar27;
          pdVar3 = pdVar14;
          dVar27 = dVar25;
        } while ((double *)&local_188 != pdVar14);
        if (1 < iVar17) {
          pdVar3 = (double *)((int)&local_188 + (iVar17 + 0x20000000) * 8);
          dVar27 = *(double *)((int)&local_188 + iVar17 * 8);
          do {
            pdVar14 = pdVar3 + -1;
            dVar25 = *pdVar14;
            dVar22 = dVar27 + dVar25;
            *pdVar14 = dVar22;
            *pdVar3 = (dVar25 - dVar22) + dVar27;
            pdVar3 = pdVar14;
            dVar27 = dVar22;
          } while ((double *)&local_180 != pdVar14);
          pdVar3 = (double *)((int)&local_188 + (iVar17 + 0x20000001) * 8);
          dVar22 = DAT_2c668350;
          do {
            pdVar3 = pdVar3 + -1;
            dVar22 = dVar22 + *pdVar3;
          } while (adStack_178 != pdVar3);
        }
      }
joined_r0x2c66837a:
      if (iVar4 == 0) {
        local_27c[2] = dVar22;
        *(undefined4 *)local_27c = local_188;
        *(undefined4 *)((int)local_27c + 4) = uStack_184;
        *(undefined4 *)(local_27c + 1) = (undefined4)local_180;
        *(undefined4 *)((int)local_27c + 0xc) = local_180._4_4_;
      }
      else {
        local_27c[2] = -dVar22;
        *local_27c = -(double)CONCAT44(uStack_184,local_188);
        local_27c[1] = -(double)CONCAT44(local_180._4_4_,(undefined4)local_180);
      }
      goto LAB_2c66818e;
    }
    if (0 < param_5) {
      pdVar3 = (double *)((int)&local_188 + (iVar17 + 1) * 8);
      do {
        pdVar3 = pdVar3 + -1;
        dVar27 = dVar27 + *pdVar3;
      } while ((double *)&local_188 != pdVar3);
      if (iVar4 != 0) goto LAB_2c6682fa;
LAB_2c668294:
      *local_27c = dVar27;
      dVar27 = (double)CONCAT44(uStack_184,local_188) - dVar27;
      if (0 < iVar17) goto LAB_2c6682a6;
LAB_2c6682be:
      local_27c[1] = dVar27;
      goto LAB_2c66818e;
    }
    if (param_5 != 0) goto LAB_2c66818e;
    pdVar3 = (double *)((int)&local_188 + (iVar17 + 1) * 8);
    do {
      pdVar3 = pdVar3 + -1;
      dVar27 = dVar27 + *pdVar3;
    } while ((double *)&local_188 != pdVar3);
  }
  if (iVar4 != 0) {
    dVar27 = -dVar27;
  }
  *local_27c = dVar27;
LAB_2c66818e:
  return uVar20 & 7;
}

