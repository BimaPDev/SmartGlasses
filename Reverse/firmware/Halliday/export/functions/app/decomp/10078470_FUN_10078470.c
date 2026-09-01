/* FUN_10078470 @ 0x10078470 */

undefined4 FUN_10078470(int param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 extraout_r1;
  int iVar11;
  undefined4 *puVar12;
  short *psVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 *puVar18;
  int iVar19;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
  
  puVar3 = DAT_1007889c;
  pcVar20 = *(char **)(param_1 + 0x10);
  if (*pcVar20 == '\0') {
    if (*(int *)(pcVar20 + 0x44) == 0) {
      FUN_100a5b78(DAT_100784dc | (DAT_100784d8 - DAT_100784d4) * 0x20 & 0xff00U,
                   PTR_s_dsp_acts_power_on_100784e8,PTR_s__s__no_image_loaded_100784e4,
                   PTR_s_dsp_acts_power_on_100784e0);
      return 0xfffffff2;
    }
    if (param_2 == 0) {
      FUN_100a5b78((DAT_100784d8 - DAT_100784d4) * 0x20 & 0xff00U | 0x1120011,
                   PTR_s_dsp_acts_power_on_100784e8,PTR_s__s__must_assign_a_command_buffer_100784ec,
                   PTR_s_dsp_acts_power_on_100784e0);
      return 0xffffffea;
    }
    puVar18 = *(undefined4 **)(param_1 + 4);
    puVar14 = (undefined4 *)puVar18[2];
    FUN_1011ea48(DAT_100787cc,0,0x80);
    iVar8 = DAT_100788a0;
    uVar7 = DAT_100787d0;
    *puVar3 = *puVar3 | 3;
    FUN_1012d220(iVar8,uVar7,0x200);
    uVar24 = FUN_1011fb24(*(undefined4 *)(iVar8 + 0x10));
    *(int *)(iVar8 + 0x14) = (int)uVar24;
    FUN_1013cbaa(DAT_100787d4,(int)((ulonglong)uVar24 >> 0x20),2,0);
    FUN_10055be0(0x20);
    FUN_10055be0(0x21);
    FUN_10055b54(0x20);
    uVar7 = FUN_1011fb24(param_2);
    *(undefined4 *)(pcVar20 + 0x68) = uVar7;
    *(undefined4 *)(pcVar20 + 0x70) = *(undefined4 *)(pcVar20 + 0x60);
    puVar5 = DAT_100788a8;
    puVar4 = DAT_100788a4;
    *DAT_100787d8 = *DAT_100787d8 | 6;
    iVar19 = 1;
    *puVar4 = *puVar4 | 0x500000;
    *puVar5 = *puVar5 | 1;
    puVar16 = DAT_100788ac;
    puVar12 = (undefined4 *)*puVar18;
    *puVar12 = 0x1000000;
    puVar12[1] = 0;
    puVar12 = (undefined4 *)puVar18[1];
    *puVar12 = 0x1000000;
    puVar12[1] = 0;
    *puVar14 = 0xffffffff;
    puVar14[1] = 0;
    *pcVar20 = '\x01';
    *puVar16 = 1;
    FUN_1006815c(0x14,0,0);
    FUN_10068114(0x14);
    FUN_1006815c(0x15,0,0);
    FUN_10068114(0x15);
    *DAT_100787d8 = *DAT_100787d8 & 0xfffffff9;
    FUN_101140ac(pcVar20 + 4);
    FUN_10055b98(0x20);
    iVar8 = FUN_1011401c(pcVar20 + 4,extraout_r1,100,0);
    if (iVar8 != 0) {
      FUN_100a5b78(DAT_100787e4 | (DAT_100787e0 - DAT_100787dc) * 0x20 & 0xff00U,
                   PTR_s_dsp_acts_power_on_100787ec,PTR_s_dsp_image_<_s>_cannot_boot_up_100787e8,
                   *(undefined4 *)(pcVar20 + 0x34));
      puVar2 = PTR_s_DSP_PAGE_ADDR0_0x_x_100787f0;
      *puVar4 = *puVar4 & 0xffafffff;
      puVar12 = DAT_100787f4;
      *puVar5 = *puVar5 & 0xfffffffe;
      uVar7 = DAT_100787fc;
      FUN_10119dc2(puVar2,*DAT_100787f8);
      FUN_10119dc2(DAT_10078804,*DAT_10078800);
      FUN_10119dc2(DAT_1007880c,*DAT_10078808);
      FUN_10119dc2(PTR_s_DSP_PAGE_ADDR3_0x_x_10078814,*DAT_10078810);
      FUN_10119dc2(PTR_s_DSP_VCT_ADDR_0x_x_10078818,*puVar12);
      FUN_10119dc2(PTR_s_PENDING_FROM_DSP_0x_x_1007881c,*puVar16);
      FUN_10119dc2(DAT_10078824,*DAT_10078820);
      FUN_10119dc2(PTR_s_DSP_VCT_ADDR_0x_x_10078818,*puVar12);
      FUN_10119dc2(DAT_1007882c,*DAT_10078828);
      FUN_10119dc2(DAT_10078834,*DAT_10078830);
      FUN_10119dc2(DAT_10078838,*puVar3);
      FUN_10119dc2(DAT_10078840,*DAT_1007883c);
      FUN_10119dc2(PTR_s_CMU_MEMCLKEN1_0x_x_10078848,*DAT_10078844);
      FUN_10119dc2(PTR_s_CMU_MEMCLKSRC0_0x_x_1007884c,*puVar4);
      FUN_10119dc2(PTR_s_CMU_MEMCLKSRC1_0x_x_10078850,*puVar5);
      FUN_10119dc2(DAT_10078858,*DAT_10078854);
      FUN_10119dc2(DAT_10078860,*DAT_1007885c);
      FUN_10119dc2(DAT_10078868,*DAT_10078864);
      FUN_10119dc2(DAT_10078870,*DAT_1007886c);
      FUN_10119dc2(DAT_10078878,*DAT_10078874);
      FUN_10119dc2(DAT_1007887c);
      puVar2 = PTR_s_0x_8x_10078884;
      iVar8 = DAT_10078880;
      uVar17 = 0;
      do {
        if (((uVar17 & 3) == 0) && (uVar17 != 0)) {
          FUN_10119dc2(uVar7);
        }
        iVar19 = uVar17 * 4;
        uVar17 = uVar17 + 1;
        FUN_10119dc2(puVar2,*(undefined4 *)(iVar8 + iVar19));
      } while (uVar17 != 0x20);
      FUN_10119dc2(DAT_100787fc);
      FUN_10119dc2(PTR_s_cmd_buffer___________________10078888);
      puVar2 = PTR_s_0x_8x_10078884;
      uVar7 = DAT_100787fc;
      iVar8 = DAT_100787cc;
      uVar17 = 0;
      do {
        if (((uVar17 & 3) == 0) && (uVar17 != 0)) {
          FUN_10119dc2(uVar7);
        }
        iVar19 = uVar17 * 4;
        uVar17 = uVar17 + 1;
        FUN_10119dc2(puVar2,*(undefined4 *)(iVar8 + iVar19));
      } while (uVar17 != 6);
      FUN_10119dc2(PTR_s_PTCM___________________1007888c);
      iVar8 = DAT_10078890;
      puVar2 = PTR_s_0x_8x_10078884;
      uVar7 = DAT_100787fc;
      iVar19 = 0;
      do {
        if (((uint)(iVar8 * iVar19) < 0x55555556) && (iVar19 != 0)) {
          FUN_10119dc2(uVar7);
        }
        iVar15 = iVar19 * 4;
        iVar19 = iVar19 + 1;
        FUN_10119dc2(puVar2,*(undefined4 *)(iVar15 + 0x2ffe0000));
      } while (iVar19 != 0x80);
      FUN_10119dc2(DAT_100787fc);
      FUN_10119dc2(DAT_10078894);
      iVar8 = DAT_10078890;
      puVar2 = PTR_s_0x_8x_10078884;
      uVar7 = DAT_100787fc;
      iVar19 = 0;
      do {
        if (((uint)(iVar8 * iVar19) < 0x55555556) && (iVar19 != 0)) {
          FUN_10119dc2(uVar7);
        }
        iVar15 = iVar19 * 4;
        iVar19 = iVar19 + 1;
        FUN_10119dc2(puVar2,*(undefined4 *)(iVar15 + 0x2ff30000));
      } while (iVar19 != 0x80);
      FUN_10119dc2(DAT_100787fc);
      FUN_10119dc2(DAT_10078898);
      iVar8 = DAT_10078890;
      puVar2 = PTR_s_0x_8x_10078884;
      uVar7 = DAT_100787fc;
      iVar19 = 0;
      do {
        FUN_10119dc2(puVar2,*(undefined4 *)(iVar19 * 4 + 0x2ffe0000));
        if (((uint)(iVar8 * iVar19) < 0x55555556) && (iVar19 != 0)) {
          FUN_10119dc2(uVar7);
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 != 0x80);
      FUN_10068134(0x14);
      FUN_10055c2c(0x20);
      FUN_10055c2c(0x21);
      FUN_10055b54(0x20);
      return 0xffffff8c;
    }
    if (pcVar20[1] == 'C') {
      FUN_10119dc2(DAT_10078a0c);
      uVar7 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar7 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar17 = getBasePriority(), uVar17 == 0 || 0x20 < uVar17)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      iVar8 = FUN_10061948();
      uVar22 = DAT_10078a1c;
      psVar13 = DAT_10078a14;
      piVar6 = DAT_10078a10;
      iVar15 = 0x10;
      *DAT_10078a10 = iVar8;
      *psVar13 = 1;
      uVar17 = 0;
      uVar23 = 0;
      do {
        while (iVar19 == 1) {
          if (*psVar13 == 2) {
            iVar11 = *piVar6;
            iVar9 = FUN_10061948();
            psVar13 = DAT_10078a14;
            uVar21 = iVar9 - iVar8;
            uVar17 = uVar17 + 1;
            if (uVar21 < uVar22) {
LAB_10078968:
              if (uVar22 <= uVar21 + iVar15) goto LAB_10078970;
LAB_1007899e:
              uVar23 = 0;
LAB_100789a2:
              iVar8 = FUN_10061948();
              psVar13 = DAT_10078a14;
              *piVar6 = iVar8;
              *psVar13 = 1;
            }
            else {
              if (uVar22 + iVar15 < uVar21) {
                if (uVar21 == uVar22) goto LAB_10078968;
                goto LAB_1007899e;
              }
LAB_10078970:
              uVar23 = uVar23 + 1;
              if (uVar23 < 5) goto LAB_100789a2;
              *piVar6 = iVar8 - iVar11;
              iVar19 = 3;
              *psVar13 = 3;
            }
            uVar22 = uVar21;
            if (0x14 < uVar17) {
              uVar23 = 0;
              uVar17 = 0;
              iVar15 = iVar15 + 0x10;
            }
          }
        }
      } while (*psVar13 != 0);
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar7);
      }
      InstructionSynchronizationBarrier(0xf);
      uVar10 = FUN_10061948();
      FUN_10119dc2(DAT_10078a18,uVar10,uVar22,iVar15,puVar14,uVar7);
    }
    uVar7 = FUN_1011fac4(puVar14[5]);
    puVar14[5] = uVar7;
    for (uVar17 = 0; uVar17 < (uint)puVar14[6]; uVar17 = uVar17 + 1) {
      puVar16 = (undefined4 *)(puVar14[5] + uVar17 * 4);
      if (puVar16 != (undefined4 *)0x0) {
        uVar7 = FUN_1011fac4(*puVar16);
        *puVar16 = uVar7;
      }
    }
  }
  return 0;
}

