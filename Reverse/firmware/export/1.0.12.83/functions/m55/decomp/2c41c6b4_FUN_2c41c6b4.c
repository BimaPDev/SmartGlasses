/* FUN_2c41c6b4 @ 0x2c41c6b4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c41c076) */
/* WARNING: Removing unreachable block (ram,0x2c41c086) */
/* WARNING: Removing unreachable block (ram,0x2c41c06a) */
/* WARNING: Removing unreachable block (ram,0x2c41c6d2) */

void FUN_2c41c6b4(undefined4 param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int unaff_r5;
  int iVar12;
  int unaff_r6;
  undefined2 unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  
  *(short *)(unaff_r6 + 0x2c) = (short)param_4;
  if (unaff_r6 == 0) {
    *(int *)((int)param_3 + param_2) = param_4;
    iVar12 = iRam2c41c10c;
    *(undefined2 *)(param_4 + unaff_r5) = unaff_r7;
    iVar3 = iRam2c41c144;
    *(undefined4 *)((int)param_3 + iRam2c41c144) = 0x6f;
    uVar2 = (undefined1)unaff_r5;
    *(undefined1 *)(iVar3 + 0x6f) = uVar2;
    *(undefined2 *)(param_4 + unaff_r5) = unaff_r7;
    iVar3 = iRam2c41c124;
    *(undefined2 *)(iRam2c41c124 + unaff_r5) = unaff_r7;
    iVar10 = *(int *)(iVar12 + 0x74);
    *(int *)(unaff_r5 + 0x14) = iVar10;
    *(undefined4 **)(iVar12 + 0x74) = param_3;
    *(undefined1 *)(iVar10 + 9) = uVar2;
    *(char *)(unaff_r5 + 0x19) = (char)iVar10;
    uVar1 = (undefined1)unaff_r7;
    *(undefined1 *)(iVar3 + 0xd) = uVar1;
    iVar12 = *(int *)(unaff_r5 + 0x14);
    *(undefined1 *)(iVar12 + 1) = 0x6f;
    *(undefined1 *)(iVar10 + 0x11) = uVar2;
    *(undefined1 *)(iVar3 + 1) = uVar1;
    *(undefined1 *)(iVar12 + 0xd) = uVar2;
    *(char *)(iVar12 + 1) = (char)iVar3;
    puVar6 = *(undefined4 **)(iVar10 + 100);
    *(undefined1 *)(iVar3 + 0x11) = uVar1;
    uVar11 = (uint)*(byte *)(iVar10 + 1);
    *(uint *)(*(short *)(iVar12 + uVar11) + 0x34) = uVar11;
    puVar8 = (undefined4 *)(uVar11 * 2);
    software_bkpt(0xf5);
    puRam0006400c = &stack0x00000236;
    uRam00064000 = 0x64000;
    uRam00064010 = 0x2c41c134;
    puRam00064004 = param_3;
    puRam00064008 = puVar8;
    *puVar6 = 0x19000000;
    puVar6[1] = param_3;
    puVar6[2] = puVar8;
    puVar6[3] = 0xd1;
    *param_3 = 0;
    param_3[1] = param_3;
    *puVar8 = 0xc800;
    puVar8[1] = param_3;
    puVar8[2] = puVar8;
    puVar8[3] = 0x2c41c134;
    *puVar8 = 0xc800;
    puVar8[1] = &stack0x00000179;
    puVar8[2] = 0x2c41c418;
    puVar8[3] = 0xc800;
    puVar8[4] = &stack0x00000179;
    puVar8[5] = 0x2c41c418;
    puVar8[6] = 0xd1;
    uVar11 = uRam2c41c138;
    uVar9 = (uint)bRamffffb123;
    uRam58838839 = 0x10;
    *(char *)(uRam2c41c138 + 1) = (char)uRam2c41c138;
    *(undefined1 *)(uVar11 + 9) = 0x10;
    uVar11 = uRam2c41c138 >> 8 & 0xff;
    uVar7 = *(undefined4 *)(uVar11 + 0x14);
    iRam2c41c148 = (int)sRam84c54964;
    iRam58838880 = *(int *)(uVar11 + 0x44);
    uRam5883883c = (undefined1)iRam58838880;
    s_______thirdparty_star_air_lvgl_s_2c41c14c._28_4_ = iRam2c41c148;
    *(undefined1 *)(iRam58838880 + 0x11) = 7;
    iVar3 = iRam58838870;
    uRam58838854 = uVar7;
    *(int *)(uVar9 + 0x14) = iRam58838870;
    *(char *)(uVar11 + 9) = (char)uVar7;
    *(int *)(uVar11 + 0x24) = iVar3;
    *(int *)(uVar11 * 2 + 0x24) = iVar3;
    s_bmp_size_2c41c198[0] = '0';
    s_bmp_size_2c41c198[1] = -0x78;
    s_bmp_size_2c41c198[2] = -0x7d;
    s_bmp_size_2c41c198[3] = 'X';
    *(undefined4 *)(uVar11 + 0x54) = 0x2c41c134;
    iVar12 = iRam2c41c148;
    s_allocate_bmp_file_fail_2c41c1a4._4_4_ = *(undefined4 *)(uVar11 + 0x54);
    iVar5 = (int)sRam84c54964;
    *(undefined4 *)(iVar3 + 0x54) = s_allocate_bmp_file_fail_2c41c1a4._4_4_;
    iVar4 = _uRam588388a4;
    *(int *)(_uRam588388a4 + 0x14) = iVar12;
    iVar10 = _uRam588388a4;
    uRam588388a4._0_1_ = (undefined1)iVar4;
    uRam588388a4._1_1_ = SUB41(iVar4,1);
    uRam588388a6 = SUB41(iVar4,2);
    uRam588388a7 = SUB41(iVar4,3);
    s_______thirdparty_star_air_lvgl_s_2c41c14c[0x3c] = (undefined1)uRam588388a4;
    s_______thirdparty_star_air_lvgl_s_2c41c14c[0x3d] = uRam588388a4._1_1_;
    s_______thirdparty_star_air_lvgl_s_2c41c14c[0x3e] = uRam588388a6;
    s_______thirdparty_star_air_lvgl_s_2c41c14c[0x3f] = uRam588388a7;
    _uRam588388a4 = iVar10;
    *(int *)(iVar4 + 0x20) = iVar5;
    uRam58838831 = 0x30;
    *(int *)(iVar4 + 0x60) = iVar5;
    *(undefined4 *)(iVar4 + 0x14) = 0x2c41c134;
    iVar10 = iRam58838874;
    uRam58838849 = (undefined1)iVar4;
    *(int *)(iVar12 + 0x14) = iVar3;
    uVar7 = s_bmp_size_2c41c198._0_4_;
    *(int *)(iVar10 + *(int *)(iVar4 + 0x54)) = iVar10;
                    /* WARNING: Could not recover jumptable at 0x2c41c1ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar7);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

