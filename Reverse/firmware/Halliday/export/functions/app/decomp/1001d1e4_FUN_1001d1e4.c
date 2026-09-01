/* FUN_1001d1e4 @ 0x1001d1e4 */

void FUN_1001d1e4(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  code *pcVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  
  iVar9 = *DAT_1001d384;
  iVar10 = *DAT_1001d388;
  uVar15 = ((int)PTR_DAT_1001d38c - (int)PTR_DAT_1001d390) * 0x20 & 0xff00;
  if (iVar10 == 0) {
    if (*DAT_1001d384 != iVar9) goto LAB_1001d214;
  }
  else {
    if (*(int *)(iVar10 + 8) == 0) {
      iVar10 = *DAT_1001d384;
      puVar7 = PTR_s_data_>obj_list_is_NULL_1001d39c;
      uVar1 = DAT_1001d3a0;
joined_r0x1001d280:
      if (iVar10 == iVar9) {
        uVar15 = uVar1 | uVar15;
        goto LAB_1001d224;
      }
    }
    else {
      iVar11 = *(int *)PTR_DAT_1001d3a4;
      if ((iVar11 != 0) && (*(int *)(iVar11 + 0x10) != 0)) {
        piVar8 = *(int **)(PTR_DAT_1001d3ac + 0x34);
        if ((piVar8 == (int *)0x0) || (*piVar8 == 0)) {
          iVar10 = *DAT_1001d384;
          puVar7 = PTR_s_player_ops_volume_>get_is_NULL_1001d3b0;
          uVar1 = DAT_1001d3b4;
        }
        else {
          piVar12 = *(int **)(PTR_DAT_1001d3ac + 0x38);
          if ((piVar12 != (int *)0x0) && (*piVar12 != 0)) {
            uVar1 = FUN_10126fd2();
            puVar7 = PTR_s_controller_center_view_update_sl_1001d398;
            uVar20 = uVar15 | DAT_1001d3d0;
            uVar19 = uVar15 | DAT_1001d3d4;
            uVar15 = uVar15 | 0x23c0021;
            for (uVar16 = 0; uVar18 = uVar16 & 0xff, uVar18 < (uVar1 & 0xff); uVar16 = uVar16 + 1) {
              iVar2 = FUN_10126fb4(*(undefined4 *)(iVar10 + 8),uVar16);
              if (iVar2 == 0) {
                FUN_100a5b78(uVar15,puVar7,PTR_s_list_item__d__is_NULL_1014ee18_0xd_1001d3c0,uVar16)
                ;
              }
              else {
                uVar3 = FUN_10126fd2();
                for (uVar17 = 0; (uVar17 & 0xff) < (uVar3 & 0xff); uVar17 = uVar17 + 1) {
                  iVar4 = FUN_10126fb4(iVar2,uVar17);
                  if (iVar4 == 0) {
                    FUN_100a5b78(uVar19,puVar7,PTR_s_child__d__of_list_item__d__is_NU_1001d3c4,
                                 uVar17,uVar16);
                  }
                  else {
                    iVar5 = FUN_10124d6e(iVar4,PTR_DAT_1001d3c8);
                    if (iVar5 != 0) {
                      piVar14 = piVar8;
                      if ((uVar16 == 1) || (piVar14 = piVar12, uVar18 == 2)) {
                        pcVar13 = (code *)*piVar14;
LAB_1001d352:
                        uVar6 = (*pcVar13)();
                        FUN_1012bbea(iVar4,uVar6,0);
                      }
                      else {
                        if (uVar18 == 0) {
                          pcVar13 = *(code **)(iVar11 + 0x10);
                          goto LAB_1001d352;
                        }
                        FUN_100a5b78(uVar20,puVar7,PTR_s_Unknown_slider_index___d_1001d3cc,uVar16);
                      }
                      FUN_10086f50(iVar4,0x1c,0);
                    }
                  }
                }
              }
            }
            if (*DAT_1001d384 == iVar9) {
              return;
            }
            goto LAB_1001d214;
          }
          iVar10 = *DAT_1001d384;
          puVar7 = DAT_1001d3b8;
          uVar1 = DAT_1001d3bc;
        }
        goto joined_r0x1001d280;
      }
      if (*DAT_1001d384 == iVar9) {
        uVar15 = uVar15 | 0x2280011;
        puVar7 = PTR_s_screen_ops_brightness_>get_is_NU_1001d3a8;
        goto LAB_1001d224;
      }
    }
LAB_1001d214:
    FUN_1013cdc0();
  }
  uVar15 = uVar15 | 0x21c0021;
  puVar7 = PTR_s_controller_center_view_data_is_N_1001d394;
LAB_1001d224:
  FUN_100a5b78(uVar15,PTR_s_controller_center_view_update_sl_1001d398,puVar7);
  return;
}

