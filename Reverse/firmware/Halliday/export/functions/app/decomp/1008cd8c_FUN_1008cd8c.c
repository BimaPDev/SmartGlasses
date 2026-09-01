/* FUN_1008cd8c @ 0x1008cd8c */

void FUN_1008cd8c(undefined4 *param_1,int *param_2,uint param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined2 *puVar6;
  int *piVar7;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined1 *puVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ushort *puVar21;
  undefined8 uVar22;
  int local_64;
  int local_60;
  int local_4c;
  int local_48 [4];
  uint local_38;
  char local_34;
  char local_30;
  char local_2c;
  
  iVar18 = param_2[2];
  iVar9 = param_2[3];
  iVar17 = *param_2;
  iVar19 = param_2[1];
  iVar2 = (iVar9 + 1) - iVar19;
  iVar1 = (iVar18 + 1) - iVar17;
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  uVar12 = iVar2 >> 1;
  if ((int)param_3 <= iVar2 >> 1) {
    uVar12 = param_3;
  }
  uVar11 = uVar12 & ~((int)uVar12 >> 0x1f);
  *param_1 = DAT_1008d048;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfe | param_4 & 1;
  piVar5 = (int *)0x0;
  param_1[2] = iVar17;
  param_1[3] = iVar19;
  param_1[4] = iVar18;
  param_1[5] = iVar9;
  param_1[6] = uVar11;
  *(undefined1 *)(param_1 + 1) = 2;
  piVar7 = DAT_1008d04c;
  piVar3 = DAT_1008d04c;
  if ((int)uVar12 < 1) {
LAB_1008cde8:
    param_1[8] = piVar5;
  }
  else {
    do {
      if (piVar3[6] == uVar11) {
        if ((int)uVar12 < 0x10) {
          uVar11 = 1;
        }
        if (0xf < (int)uVar12) {
          uVar11 = (int)uVar11 >> 4;
        }
        DAT_1008d04c[(int)piVar5 * 7 + 5] = DAT_1008d04c[(int)piVar5 * 7 + 5] + 1;
        iVar2 = (int)piVar5 * 7;
        piVar5 = piVar7 + (int)piVar5 * 7;
        iVar2 = uVar11 + piVar7[iVar2 + 4];
        if (999 < iVar2) {
          iVar2 = 1000;
        }
        piVar5[4] = iVar2;
        goto LAB_1008cde8;
      }
      piVar5 = (int *)((int)piVar5 + 1);
      piVar3 = piVar3 + 7;
    } while (piVar5 != (int *)&Reset);
    iVar2 = 0;
    piVar3 = (int *)0x0;
    do {
      piVar5 = piVar3;
      if (((piVar7[5] == 0) && (piVar5 = piVar7, piVar3 != (int *)0x0)) &&
         (piVar5 = piVar3, piVar7[4] < piVar3[4])) {
        piVar5 = piVar7;
      }
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 7;
      piVar3 = piVar5;
    } while (iVar2 != 4);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)FUN_10094254(0x1c,PTR_s_lv_draw_mask_radius_init_1008d050);
      if (piVar5 == (int *)0x0) {
        uVar22 = FUN_10094174(3,PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_1008d060,0x205,
                              PTR_s_lv_draw_mask_radius_init_1008d050,
                              PTR_s_Asserted_at_expression___s___s__1008d05c,
                              PTR_s_entry____NULL_1008d058,PTR_s_Out_of_memory_1008d054);
        FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_1008d068,PTR_DAT_1008d064,
                     PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_1008d060,0x205,uVar22);
        FUN_10119dc2(PTR_s_LVGL_fail_1008d06c);
        FUN_1011a1f0(PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_1008d060,0x205,extraout_r2,extraout_r3);
      }
      FUN_1012787a(piVar5,0x1c);
      iVar2 = -1;
    }
    else {
      piVar5[5] = piVar5[5] + 1;
      if ((int)uVar12 < 0x10) {
        iVar2 = 1;
      }
      else {
        iVar2 = (int)uVar11 >> 4;
      }
      if (999 < iVar2) {
        iVar2 = 1000;
      }
    }
    iVar1 = *piVar5;
    piVar5[4] = iVar2;
    param_1[8] = piVar5;
    piVar5[6] = uVar11;
    if (iVar1 != 0) {
      FUN_10094268(iVar1,PTR_s_circ_calc_aa4_1008d070);
    }
    iVar2 = FUN_10094254(uVar11 * 6 + 6,PTR_s_circ_calc_aa4_1008d070);
    *piVar5 = iVar2;
    if (iVar2 == 0) {
      uVar22 = FUN_10094174(3,PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_1008d060,0x55e,
                            PTR_s_circ_calc_aa4_1008d070,
                            PTR_s_Asserted_at_expression___s___s__1008d05c,
                            PTR_s_c_>buf____NULL_1008d074,PTR_s_Out_of_memory_1008d054);
      FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_1008d068,PTR_DAT_1008d064,
                   PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_1008d060,0x55e,uVar22);
      FUN_10119dc2(PTR_s_LVGL_fail_1008d06c);
      FUN_1011a1f0(PTR_s_WEST_TOPDIR_thirdparty_lib_gui_l_1008d060,0x55e,extraout_r2_00,
                   extraout_r3_00);
    }
    puVar8 = (undefined1 *)*piVar5;
    uVar14 = uVar11 * 4;
    piVar5[3] = (int)(puVar8 + uVar11 * 2 + 2);
    piVar5[1] = (int)puVar8;
    piVar5[2] = (int)(puVar8 + uVar14 + 4);
    if (uVar12 != 1) {
      iVar2 = FUN_100942d8((uVar11 + 1) * 0x10);
      local_60 = uVar11 * -4 + 1;
      local_48[0] = (int)uVar14 >> 2;
      iVar9 = 0;
      local_4c = 0;
      iVar1 = iVar2 + (uVar11 + 1) * 8;
      local_38 = 0;
      local_64 = 0;
      while (local_64 <= (int)uVar14) {
        iVar17 = local_64 + 4;
        puVar16 = &local_38;
        piVar7 = local_48;
        do {
          if (local_60 < 1) {
            local_60 = local_60 + 3 + local_64 * 2;
          }
          else {
            iVar18 = local_64 - uVar14;
            uVar14 = uVar14 - 1;
            local_60 = local_60 + 5 + iVar18 * 2;
          }
          local_64 = local_64 + 1;
          if ((int)uVar14 < local_64) goto LAB_1008cfa2;
          *piVar7 = (int)uVar14 >> 2;
          *puVar16 = uVar14 & 3;
          puVar16 = puVar16 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar17 != local_64);
        iVar18 = piVar5[1];
        pcVar4 = (char *)(iVar18 + local_4c);
        iVar17 = local_4c * 4;
        cVar10 = (char)local_38;
        if (local_48[0] == local_48[3]) {
          *(int *)(iVar2 + local_4c * 4) = local_48[0];
          *(int *)(iVar1 + local_4c * 4) = iVar9;
          *(char *)(iVar18 + local_4c) = local_30 + cVar10 + local_34 + local_2c;
          *(char *)(piVar5[1] + local_4c) = *(char *)(piVar5[1] + local_4c) << 4;
          local_4c = local_4c + 1;
        }
        else {
          iVar18 = local_48[0] + -1;
          iVar20 = local_4c + 1;
          iVar19 = iVar17 + 4;
          if (local_48[0] == local_48[1]) {
            *(int *)(iVar2 + iVar17) = local_48[0];
            *(int *)(iVar1 + iVar17) = iVar9;
            if (local_48[0] == local_48[2]) {
              *pcVar4 = cVar10 + local_34 + local_30;
              cVar10 = local_2c + '\f';
              *(char *)(piVar5[1] + local_4c) = *(char *)(piVar5[1] + local_4c) << 4;
              *(int *)(iVar2 + iVar19) = iVar18;
              iVar17 = piVar5[1];
              *(int *)(iVar1 + iVar19) = iVar9;
            }
            else {
              *pcVar4 = cVar10 + local_34;
              *(char *)(piVar5[1] + local_4c) = *(char *)(piVar5[1] + local_4c) << 4;
              cVar10 = local_30 + local_2c + '\b';
              *(int *)(iVar2 + iVar19) = iVar18;
              iVar17 = piVar5[1];
              *(int *)(iVar1 + iVar19) = iVar9;
            }
          }
          else {
            *(int *)(iVar2 + iVar17) = local_48[0];
            *(int *)(iVar1 + iVar17) = iVar9;
            *pcVar4 = cVar10;
            *(char *)(piVar5[1] + local_4c) = *(char *)(piVar5[1] + local_4c) << 4;
            *(int *)(iVar2 + iVar19) = iVar18;
            iVar17 = piVar5[1];
            *(int *)(iVar1 + iVar19) = iVar9;
            cVar10 = local_34 + local_30 + '\x04' + local_2c;
          }
          *(char *)(iVar17 + iVar20) = cVar10;
          *(char *)(piVar5[1] + iVar20) = *(char *)(piVar5[1] + iVar20) << 4;
          local_4c = local_4c + 2;
        }
        iVar9 = iVar9 + 1;
      }
LAB_1008cfa2:
      iVar17 = local_4c + 0x3fffffff;
      iVar9 = (int)(uVar11 * 0x2d3) >> 10;
      if ((*(int *)(iVar2 + iVar17 * 4) != iVar9) || (iVar9 != *(int *)(iVar1 + iVar17 * 4))) {
        uVar12 = uVar11 * -0x4b400000 >> 0x16;
        if (uVar12 < 0x201) {
          uVar11 = uVar12 * uVar12;
        }
        else {
          uVar11 = (0x400 - uVar12) * (0x400 - uVar12);
        }
        iVar17 = iVar17 * 4 + 4;
        *(int *)(iVar2 + iVar17) = iVar9;
        if (0x200 < uVar12) {
          uVar11 = (int)uVar11 >> 0xf;
        }
        *(int *)(iVar1 + iVar17) = iVar9;
        if (uVar12 < 0x201) {
          cVar10 = (char)(uVar11 >> 0xf);
        }
        else {
          cVar10 = '\x0f' - (char)uVar11;
        }
        *(char *)(piVar5[1] + local_4c) = cVar10;
        *(char *)(piVar5[1] + local_4c) = *(char *)(piVar5[1] + local_4c) << 4;
        local_4c = local_4c + 1;
      }
      iVar17 = local_4c;
      for (iVar9 = local_4c + -2; -1 < iVar9; iVar9 = iVar9 + -1) {
        *(undefined4 *)(iVar2 + iVar17 * 4) = *(undefined4 *)(iVar1 + iVar9 * 4);
        *(undefined4 *)(iVar1 + iVar17 * 4) = *(undefined4 *)(iVar2 + iVar9 * 4);
        *(undefined1 *)(piVar5[1] + iVar17) = *(undefined1 *)(piVar5[1] + iVar9);
        iVar17 = iVar17 + 1;
      }
      iVar9 = local_4c + -1;
      if (local_4c + -2 < -1) {
        iVar9 = 0;
      }
      iVar17 = 0;
      iVar18 = 0;
      puVar6 = (undefined2 *)piVar5[3];
      *puVar6 = 0;
      while (iVar18 < local_4c + iVar9) {
        iVar19 = piVar5[2];
        uVar15 = *(undefined4 *)(iVar2 + iVar18 * 4);
        puVar6[iVar17] = (short)iVar18;
        puVar21 = (ushort *)(iVar19 + iVar17 * 2);
        *(short *)(iVar19 + iVar17 * 2) = (short)uVar15;
        while ((iVar17 == *(int *)(iVar1 + iVar18 * 4) && (iVar18 != local_4c + iVar9))) {
          iVar19 = *(int *)(iVar2 + iVar18 * 4);
          uVar13 = *puVar21;
          iVar18 = iVar18 + 1;
          if (iVar19 <= (int)(uint)uVar13) {
            uVar13 = (ushort)iVar19;
          }
          *puVar21 = uVar13;
        }
        iVar17 = iVar17 + 1;
      }
      FUN_10094444();
      return;
    }
    *puVar8 = 0xb4;
    puVar6 = (undefined2 *)piVar5[3];
    *puVar6 = 0;
    puVar6[1] = 1;
    *(undefined2 *)piVar5[2] = 0;
  }
  return;
}

