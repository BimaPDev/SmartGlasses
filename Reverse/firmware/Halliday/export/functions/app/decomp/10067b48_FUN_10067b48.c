/* FUN_10067b48 @ 0x10067b48 */

undefined4 FUN_10067b48(int *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined *puVar14;
  byte bVar15;
  uint uVar16;
  undefined *puVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  
  piVar21 = DAT_10067e20;
  piVar23 = param_1;
  iVar18 = param_2;
  uVar9 = param_3;
  if ((param_3 & 2) != 0) {
    iVar8 = FUN_10061948();
    uVar16 = DAT_10067e24;
    *(short *)(piVar21 + 0xa4) = (short)piVar21[0xa4] + 1;
    if (uVar16 <= (uint)(iVar8 - piVar21[0xa3])) {
      piVar21[0xa3] = iVar8;
      *(undefined2 *)(piVar21 + 0xa4) = 0;
    }
  }
  if (*piVar21 == 0) {
    uVar9 = DAT_10067e30 | (DAT_10067e2c - DAT_10067e28) * 0x20 & 0xff00U;
    puVar14 = DAT_10067e34;
LAB_10067b96:
    FUN_100a5b78(uVar9,DAT_10067e38,puVar14);
  }
  else {
    if (-1 < (int)((uint)*(byte *)((int)piVar21 + 0x283) << 0x1b)) goto LAB_10067b9a;
    if ((param_2 < 1) || ((int)(*(byte *)((int)piVar21 + 0x283) & 7) < param_2)) {
      uVar9 = DAT_10067e3c | (DAT_10067e2c - DAT_10067e28) * 0x20 & 0xff00U;
      puVar14 = PTR_s_invalid_layer_num__d_10067e40;
      iVar18 = param_2;
    }
    else {
      if ((((param_2 != 1) || (*param_1 == 0)) || ((*(uint *)(*param_1 + 4) & piVar21[5]) == 0)) &&
         (param_3 = param_3 | 0x80, piVar21[10] < 0)) {
        uVar9 = (DAT_10067e2c - DAT_10067e28) * 0x20 & 0xff00U | 0x3780011;
        puVar14 = PTR_s_DE_path_not_unavailable_10067e44;
        goto LAB_10067b96;
      }
      if (*(byte *)((int)piVar21 + 0x27f) != 3) {
        if (2 < *(byte *)((int)piVar21 + 0x27f)) {
          piVar21 = param_1 + param_2 * 8;
          do {
            if ((code *)param_1[6] != (code *)0x0) {
              (*(code *)param_1[6])(param_1[7]);
            }
            param_1 = param_1 + 8;
          } while (piVar21 != param_1);
          return 0xffffffea;
        }
        uVar16 = (uint)*(byte *)((int)piVar21 + 0x27d);
        uVar11 = (undefined1)(uVar16 + 1);
        if (2 < (uVar16 + 1 & 0xff)) {
          uVar11 = 0;
        }
        piVar19 = piVar21 + uVar16 * 0x31;
        *(short *)(piVar21 + uVar16 * 0x31 + 0xc) = (short)param_3;
        iVar8 = 0;
        *(undefined1 *)((int)piVar21 + 0x27d) = uVar11;
        *(char *)((int)piVar21 + uVar16 * 0xc4 + 0x32) = (char)param_2;
        piVar20 = piVar19;
        piVar22 = piVar21 + uVar16 * 0x31 + 0x34;
        do {
          iVar10 = *param_1;
          *piVar22 = iVar10;
          if (iVar10 != 0) {
            FUN_1006742c();
          }
          iVar10 = *param_1;
          if (iVar10 == 0) {
            piVar19[0xd] = 0;
            piVar20[0x20] = 0;
            piVar20[0x21] = 0;
            piVar20[0x25] = 0;
          }
          else {
            piVar19[0xd] = (int)(piVar20 + 0x1f);
            iVar10 = FUN_100674c4(iVar10,(int)(short)param_1[1],(int)*(short *)((int)param_1 + 6),
                                  piVar20 + 0x1f,piVar23,iVar18,uVar9);
            piVar20[0x25] = iVar10;
            iVar10 = *param_1;
            piVar20[0x20] = *(int *)(iVar10 + 4);
            uVar1 = *(ushort *)(iVar10 + 0xc);
            iVar10 = FUN_1005fb14();
            iVar10 = (int)((uint)uVar1 * iVar10) >> 3;
            piVar20[0x21] = iVar10;
            piVar20[0x1f] = (uint)*(ushort *)(piVar20 + 0x23) * iVar10;
          }
          iVar10 = param_1[4];
          sVar2 = (short)param_1[3];
          sVar6 = ((short)iVar10 + 1) - sVar2;
          piVar20[0x22] = (int)sVar6;
          sVar3 = *(short *)((int)param_1 + 0x12);
          sVar4 = *(short *)((int)param_1 + 0xe);
          sVar7 = (sVar3 + 1) - sVar4;
          *(short *)(piVar20 + 0x23) = sVar7;
          *(short *)(piVar19 + 0xf) = sVar2;
          *(short *)((int)piVar19 + 0x3e) = sVar4;
          *(short *)(piVar19 + 0x10) = sVar6;
          *(short *)((int)piVar19 + 0x42) = sVar7;
          *(undefined1 *)((int)piVar19 + 0x3b) = *(undefined1 *)((int)param_1 + 0x15);
          *(char *)(piVar19 + 0x11) = (char)param_1[5];
          puVar14 = PTR_s__composer_post_inner_10067e50;
          if ((sVar2 < 0) || (sVar4 < 0)) {
            uVar12 = 0x2e9;
            puVar17 = PTR_s_layers_i__frame_x1_>__0____layer_10067e4c;
            goto LAB_10067d10;
          }
          if ((sVar6 < 1) || ((int)(uint)*(ushort *)(piVar21 + 4) <= (int)(short)iVar10)) {
            uVar12 = 0x2ea;
            puVar17 = PTR_s_entry_>ovls_i__frame_w_>_0____la_10067e58;
            goto LAB_10067d10;
          }
          if ((sVar7 < 1) || ((int)(uint)*(ushort *)((int)piVar21 + 0x12) <= (int)sVar3)) {
            uVar12 = 0x2eb;
            puVar17 = PTR_s_entry_>ovls_i__frame_h_>_0____la_10067e5c;
            goto LAB_10067d10;
          }
          iVar8 = iVar8 + 1;
          piVar22[3] = param_1[6];
          piVar22[6] = param_1[7];
          param_1 = param_1 + 8;
          piVar19 = piVar19 + 6;
          piVar20 = piVar20 + 7;
          piVar22 = piVar22 + 1;
        } while (param_2 != iVar8);
        uVar12 = 0;
        bVar5 = (bool)isCurrentModePrivileged();
        if (bVar5) {
          uVar12 = getBasePriority();
        }
        bVar5 = (bool)isCurrentModePrivileged();
        if ((bVar5) && (uVar9 = getBasePriority(), uVar9 == 0 || 0x20 < uVar9)) {
          setBasePriority(0x20);
        }
        InstructionSynchronizationBarrier(0xf);
        *(char *)((int)piVar21 + 0x27f) = *(char *)((int)piVar21 + 0x27f) + '\x01';
        if (piVar21[6] << 0x19 < 0) {
          if (piVar21[(uint)*(byte *)((int)piVar21 + 0x27e) * 0x31 + 0x13] == 0) {
            uVar13 = 1;
          }
          else {
            uVar13 = 2;
          }
          iVar18 = (**(code **)(*(int *)(piVar21[9] + 8) + 0x24))
                             (piVar21[9],piVar21[10],0,
                              piVar21 + (uint)*(byte *)((int)piVar21 + 0x27e) * 0x31 + 0xd,uVar13);
          if (iVar18 < 0) {
            uVar12 = 0x28e;
            puVar14 = PTR_s__composer_post_entry_noram_10067e64;
            puVar17 = PTR_s_res_>__0_10067e60;
LAB_10067d10:
                    /* WARNING: Subroutine does not return */
            FUN_10117c88(PTR_s_WEST_TOPDIR_zephyr_framework_dis_10067e54,uVar12,puVar14,puVar17);
          }
          bVar15 = *(char *)((int)piVar21 + 0x27e) + 1;
          if (2 < bVar15) {
            bVar15 = 0;
          }
          *(byte *)((int)piVar21 + 0x27e) = bVar15;
        }
        else if ((char)piVar21[0xa0] == '\0') {
          FUN_10067560(DAT_10067e20,((*(byte *)((int)piVar21 + 0x283) ^ 0x20) & 0x3f) >> 5);
        }
        bVar5 = (bool)isCurrentModePrivileged();
        if (bVar5) {
          setBasePriority(uVar12);
        }
        InstructionSynchronizationBarrier(0xf);
        *(byte *)((int)piVar21 + 0x283) = *(byte *)((int)piVar21 + 0x283) & 0xbf;
        return 0;
      }
      iVar18 = 0;
      uVar9 = (DAT_10067e2c - DAT_10067e28) * 0x20 & 0xff00U | 0x3840021;
      puVar14 = PTR_s_drop_1_frame___d__10067e48;
    }
    FUN_100a5b78(uVar9,DAT_10067e38,puVar14,iVar18);
  }
LAB_10067b9a:
  for (iVar18 = 0; iVar18 < param_2; iVar18 = iVar18 + 1) {
    if ((code *)param_1[6] != (code *)0x0) {
      (*(code *)param_1[6])(param_1[7]);
    }
    param_1 = param_1 + 8;
  }
  return 0xffffffea;
}

