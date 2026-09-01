/* FUN_1004a224 @ 0x1004a224 */

void FUN_1004a224(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 unaff_r4;
  int *piVar7;
  undefined4 unaff_r5;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int *piVar8;
  
  piVar3 = DAT_1004a4d8;
  iVar6 = *DAT_1004a4d4;
  iVar11 = *DAT_1004a4d8;
  if (iVar11 == 0) goto LAB_1004a43e;
  uVar9 = ((int)PTR_DAT_1004a4e0 - (int)PTR_DAT_1004a4dc) * 0x20 & 0xff00;
  FUN_100a5b78(uVar9 | 0x4980031,PTR_s_guide_step_jump_to_1004a4e8,
               PTR_s_guide_step_jump_to_step_view___d_1004a4e4,param_1);
  piVar7 = (int *)(iVar11 + 0x37c);
  do {
    piVar8 = piVar7 + 1;
    if (*piVar7 != 0) {
      FUN_1002e994(*piVar7,1);
    }
    piVar7 = piVar8;
  } while ((int *)(iVar11 + 0x3b0) != piVar8);
  iVar4 = *(int *)(iVar11 + param_1 * 4 + 0x37c);
  if (iVar4 != 0) {
    FUN_1002e994(iVar4,0);
  }
  iVar4 = *piVar3;
  *(char *)(iVar11 + 0x3b4) = (char)param_1;
  if (iVar4 == 0) goto LAB_1004a43e;
  FUN_1004a1e8();
  FUN_10049eac();
  if (*(int *)(iVar4 + 0x3e0) != 0) {
    FUN_100a5b78(DAT_1004a4ec | uVar9,DAT_1004a4f4,DAT_1004a4f0);
    FUN_10094ab8(*(undefined4 *)(iVar4 + 0x3e0));
    *(undefined4 *)(iVar4 + 0x3e0) = 0;
  }
  if (*(int *)(iVar4 + 0x308) != 0) {
    FUN_100a5b78(DAT_1004a4f8 | uVar9,DAT_1004a4f4,DAT_1004a4fc);
    FUN_10094ab8(*(undefined4 *)(iVar4 + 0x308));
    *(undefined4 *)(iVar4 + 0x308) = 0;
  }
  iVar11 = DAT_1004a500;
  (**(code **)(DAT_1004a500 + 0x10))();
  switch(param_1) {
  case 0:
    FUN_100a5b78(uRam1004a504 | uVar9,DAT_1004a4f4,PTR_s_guide_step_layout_init_start_log_1004a508);
    uVar5 = FUN_10094a1c(PTR_LAB_1004a530_1_1004a50c,7000,0);
    *(undefined4 *)(iVar4 + 0x3e0) = uVar5;
    func_0x1012b34c(uVar5,1);
    if (*DAT_1004a4d4 != iVar6) break;
    goto code_r0x1004a338;
  case 1:
    if (*DAT_1004a4d4 == iVar6) {
      UNRECOVERED_JUMPTABLE = *(code **)(iVar11 + 0xc);
      uVar5 = 10;
      goto code_r0x1004a33e;
    }
    break;
  case 2:
    FUN_100498f0(1);
    if (*(int *)(iVar4 + 0x3ec) == 0) {
      uVar5 = FUN_10094a1c(PTR_LAB_1004997c_1_1004a510,0x5dc);
      *(undefined4 *)(iVar4 + 0x3ec) = uVar5;
    }
    if (*DAT_1004a4d4 == iVar6) {
      UNRECOVERED_JUMPTABLE = *(code **)(iVar11 + 0xc);
      uVar5 = 0xb;
      goto code_r0x1004a33e;
    }
    break;
  case 3:
    if (*DAT_1004a4d4 == iVar6) {
      UNRECOVERED_JUMPTABLE = *(code **)(iVar11 + 0xc);
      uVar5 = 0xc;
      goto code_r0x1004a33e;
    }
    break;
  default:
    goto LAB_1004a43e;
  case 5:
    (**(code **)(iVar11 + 0xc))(0xd);
    if (*(int *)(iVar4 + 0x308) == 0) {
      uVar5 = FUN_10094a1c(PTR_FUN_10049a78_1_1004a528,0x32);
      *(undefined4 *)(iVar4 + 0x308) = uVar5;
    }
    goto LAB_1004a43e;
  case 6:
    iVar4 = *(int *)(iVar4 + 0x400);
    if (iVar4 == 0) goto LAB_1004a43e;
    uVar5 = 0xc;
code_r0x1004a3a0:
    iVar10 = FUN_1004cf14(uVar5);
    if (*DAT_1004a4d4 == iVar6) {
      FUN_10125af4();
      iVar11 = *(int *)(iVar4 + 0x2c);
      if (iVar10 == 0) {
        iVar10 = iVar11;
      }
      if (iVar11 == iVar10) {
        if (-1 < (int)((uint)*(byte *)(iVar4 + 0x54) << 0x1c)) {
          uVar5 = FUN_10095250();
          iVar11 = FUN_10094280(*(undefined4 *)(iVar4 + 0x2c),uVar5,DAT_10097acc);
          *(int *)(iVar4 + 0x2c) = iVar11;
          if (iVar11 == 0) {
            uVar12 = FUN_10094174(3,DAT_10097adc,0x66,DAT_10097acc,DAT_10097ad8);
            uVar5 = extraout_r2;
            FUN_10119dc2(DAT_10097ae4,DAT_10097ae0,DAT_10097adc,0x66,uVar12);
            FUN_10119dc2(DAT_10097ae8);
            FUN_1011a1f0(DAT_10097adc,0x66,uVar5,extraout_r3);
          }
          if (*(int *)(iVar4 + 0x2c) == 0) {
            return;
          }
          FUN_100952c4(*(int *)(iVar4 + 0x2c));
          if (*(int *)(iVar4 + 0x2c) == 0) {
            uVar12 = FUN_10094174(3,DAT_10097adc,0x6e,DAT_10097acc,DAT_10097ad8);
            uVar5 = extraout_r2_00;
            FUN_10119dc2(DAT_10097ae4,DAT_10097ae0,DAT_10097adc,0x6e,uVar12);
            FUN_10119dc2(DAT_10097ae8);
            FUN_1011a1f0(DAT_10097adc,0x6e,uVar5,extraout_r3_00);
            if (*(int *)(iVar4 + 0x2c) == 0) {
              return;
            }
          }
          goto LAB_10097a4a;
        }
      }
      else if ((iVar11 != 0) && (bVar1 = *(byte *)(iVar4 + 0x54), (bVar1 & 8) == 0)) {
        FUN_10094268(iVar11,DAT_10097acc);
        *(uint *)(iVar4 + 0x2c) = bVar1 & 8;
      }
      uVar5 = FUN_10095250(iVar10);
      iVar11 = FUN_10094254(uVar5,DAT_10097acc);
      *(int *)(iVar4 + 0x2c) = iVar11;
      if (iVar11 == 0) {
        uVar12 = FUN_10094174(3,DAT_10097adc,0x7d,DAT_10097acc,DAT_10097ad8);
        uVar5 = extraout_r2_01;
        FUN_10119dc2(DAT_10097ae4,DAT_10097ae0,DAT_10097adc,0x7d,uVar12);
        FUN_10119dc2(DAT_10097ae8);
        FUN_1011a1f0(DAT_10097adc,0x7d,uVar5,extraout_r3_01);
      }
      if (*(int *)(iVar4 + 0x2c) == 0) {
        return;
      }
      FUN_100952c4(iVar10);
      *(byte *)(iVar4 + 0x54) = *(byte *)(iVar4 + 0x54) & 0xf7;
LAB_10097a4a:
      FUN_100974b8(iVar4);
      return;
    }
    break;
  case 7:
    FUN_100a5b78(uRam1004a514 | uVar9,DAT_1004a4f4,uRam1004a518);
    (**(code **)(iRam1004a51c + 0x18))();
    FUN_100a5b78(uRam1004a520 | uVar9,DAT_1004a4f4,PTR_s_guide_step_layout_init_ring_stat_1004a524);
    (**(code **)(iVar11 + 0xc))(0xf);
    func_0x10049e10();
    if (*DAT_1004a4d4 == iVar6) {
      if (*piRam10049d50 != *piRam10049d50) {
        FUN_1013cdc0();
      }
                    /* WARNING: Could not recover jumptable at 0x10049d4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iRam10049d54 + 0xc))();
      return;
    }
    break;
  case 8:
    iVar4 = *(int *)(iVar4 + 0x3cc);
    if (iVar4 != 0) {
      uVar5 = FUN_1004cf14(0xf);
      FUN_10097998(iVar4,uVar5);
    }
    (**(code **)(iVar11 + 0xc))(0x10);
    puVar2 = PTR_DAT_10048a34;
    if (*DAT_1004a4d4 == iVar6) {
      iVar6 = *(int *)PTR_DAT_10048a30;
      iVar11 = (**(code **)PTR_DAT_10048a34)();
      uVar9 = ((int)PTR_DAT_10048a38 - (int)PTR_DAT_10048a3c) * 0x20 & 0xff00;
      if (iVar11 == 6) {
        uVar5 = 1;
      }
      else if (iVar11 == 2) {
        uVar5 = 3;
      }
      else {
        (**(code **)(puVar2 + 0x20))(&stack0xffffffe4);
        if ((((((char)unaff_r4 != '\0' || (char)((uint)unaff_r4 >> 8) != '\0') ||
              (char)((uint)unaff_r4 >> 0x10) != '\0') || (char)((uint)unaff_r4 >> 0x18) != '\0') ||
            (char)unaff_r5 != '\0') || (char)((uint)unaff_r5 >> 8) != '\0') goto LAB_10048a0e;
        FUN_100a5b78(uVar9 | 0x2f40031,DAT_10048a44,DAT_10048a40);
        uVar5 = 2;
      }
      while( true ) {
        FUN_100a5b78(DAT_10048a48 | uVar9,DAT_10048a44,DAT_10048a4c,iVar11,uVar5);
        FUN_10048890(uVar5);
        if (*(int *)PTR_DAT_10048a30 == iVar6) break;
        FUN_1013cdc0();
LAB_10048a0e:
        FUN_100a5b78(uVar9 | 0x2f80031,DAT_10048a44,DAT_10048a50,&stack0xffffffe4);
        uVar5 = 0;
      }
      return;
    }
    break;
  case 9:
    iVar10 = *(int *)(iVar4 + 0x3d0);
    if (iVar10 != 0) {
      uVar5 = FUN_1004cf14(0xfd);
      FUN_10097998(iVar10,uVar5);
    }
    iVar4 = *(int *)(iVar4 + 0x3d4);
    if (iVar4 != 0) {
      uVar5 = 0x11;
      goto code_r0x1004a3a0;
    }
    goto LAB_1004a43e;
  case 10:
    iVar4 = *(int *)(iVar4 + 0x410);
    if (iVar4 != 0) {
      uVar5 = 0xb6;
      goto code_r0x1004a3a0;
    }
    goto LAB_1004a43e;
  case 0xb:
    iVar4 = *(int *)(*piVar3 + 0x404);
    if (iVar4 != 0) {
      uVar5 = 0xb;
      goto code_r0x1004a3a0;
    }
LAB_1004a43e:
    if (*DAT_1004a4d4 == iVar6) {
      return;
    }
    break;
  case 0xc:
    iVar10 = *(int *)(iVar4 + 0x408);
    if (iVar10 != 0) {
      uVar5 = FUN_1004cf14(0xa6);
      FUN_10097998(iVar10,uVar5);
    }
    iVar4 = *(int *)(iVar4 + 0x40c);
    if (iVar4 != 0) {
      uVar5 = FUN_1004cf14(0xa8);
      FUN_10097998(iVar4,uVar5);
    }
    (**(code **)(iVar11 + 0xc))(0x11);
    if (*DAT_1004a4d4 == iVar6) {
                    /* WARNING: Could not recover jumptable at 0x1004a496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(PTR_DAT_1004a52c + 0x14))();
      return;
    }
  }
  FUN_1013cdc0();
code_r0x1004a338:
  uVar5 = 9;
  UNRECOVERED_JUMPTABLE = *(code **)(iVar11 + 0xc);
code_r0x1004a33e:
                    /* WARNING: Could not recover jumptable at 0x1004a344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar5);
  return;
}

