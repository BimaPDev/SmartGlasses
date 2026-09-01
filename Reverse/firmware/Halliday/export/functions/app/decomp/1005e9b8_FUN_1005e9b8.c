/* FUN_1005e9b8 @ 0x1005e9b8 */

undefined4 FUN_1005e9b8(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_r2;
  undefined *puVar5;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 uVar14;
  
  puVar10 = *(undefined4 **)(param_1 + 4);
  piVar9 = *(int **)(param_1 + 0x10);
  uVar14 = FUN_10112e84(*puVar10);
  iVar4 = (int)uVar14;
  piVar9[8] = iVar4;
  if (iVar4 == 0) {
    uVar2 = ((int)PTR_DAT_1005ebe8 - (int)PTR_DAT_1005ebec) * 0x20 & 0xff00U | 0x34c0011;
    puVar5 = PTR_s_Couldn_t_find_power_pin_1005ebf0;
  }
  else {
    bVar1 = *(byte *)(puVar10 + 1);
    uVar2 = (uint)*(byte *)((int)puVar10 + 5);
    puVar10 = *(undefined4 **)(iVar4 + 8);
    puVar13 = *(uint **)(iVar4 + 0x10);
    puVar7 = *(uint **)(iVar4 + 4);
    uVar6 = extraout_r2;
    if ((uVar2 & 0x30) == 0x30) {
      FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_1005ec00,
                   PTR_s__flags_____1_<<_4)___(1_<<_5)))___1005ebfc,
                   PTR_s_WEST_TOPDIR_zephyr_include_drive_1005ebf8,0x330,uVar14);
      FUN_10119dc2(PTR_s_Pull_Up_and_Pull_Down_should_not_1005ec04);
      uVar14 = FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_include_drive_1005ebf8,0x330,extraout_r2,0x30);
      uVar6 = extraout_r2_00;
    }
    uVar3 = (undefined4)uVar14;
    if ((uVar2 & 6) == 4) {
      FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_1005ec00,
                   PTR_s__flags____1_<<_1))____0____(flag_1005ec08,
                   PTR_s_WEST_TOPDIR_zephyr_include_drive_1005ebf8,0x338,uVar14);
      uVar3 = FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_include_drive_1005ebf8,0x338,uVar6,4);
      uVar6 = extraout_r2_01;
    }
    uVar8 = *puVar7;
    uVar12 = 1 << (uint)bVar1;
    if ((int)(uVar2 << 0x1f) < 0) {
      uVar11 = uVar2 ^ 0x1a00;
    }
    else {
      uVar11 = uVar2 | 0x1600;
    }
    if ((uVar12 & uVar8) == 0) {
      FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_1005ec00,
                   PTR_s__cfg_>port_pin_mask____gpio_port_1005ec0c,
                   PTR_s_WEST_TOPDIR_zephyr_include_drive_1005ebf8,0x34c,uVar3,uVar2 << 0x1f);
      FUN_10119dc2(PTR_s_Unsupported_pin_1005ec10);
      FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_include_drive_1005ebf8,0x34c,uVar6,uVar8);
    }
    uVar2 = *puVar13;
    if ((int)(uVar11 << 0x1f) < 0) {
      uVar12 = uVar12 | uVar2;
    }
    else {
      uVar12 = uVar2 & ~uVar12;
    }
    *puVar13 = uVar12;
    iVar4 = (*(code *)*puVar10)(iVar4,(uint)bVar1,uVar11 & 0xffffefff);
    if (iVar4 == 0) {
      FUN_1013ceac(piVar9 + 10,PTR_LAB_1005e460_1_1005ec1c,0);
      iVar4 = FUN_10112e84(PTR_s_lcdc_acts_1005ec20);
      piVar9[1] = iVar4;
      if (iVar4 == 0) {
        FUN_100a5b78(((int)PTR_DAT_1005ebe8 - (int)PTR_DAT_1005ebec) * 0x20 & 0xff00U | 0x37c0011,
                     PTR_s__lcd_panel_init_1005ebf4,PTR_s_Could_not_get_LCD_controller_dev_1005ec24)
        ;
        return 0xffffffff;
      }
      (*(code *)**(undefined4 **)(iVar4 + 8))(iVar4,0,PTR_LAB_1011bc0e_1_1005ec28,param_1);
      **(undefined4 **)(param_1 + 0x10) = PTR_DAT_1005ec2c;
      iVar4 = FUN_10112e84(PTR_s_de_acts_1005ec30);
      if (iVar4 == 0) {
        FUN_100a5b78(DAT_1005ec34 | ((int)PTR_DAT_1005ebe8 - (int)PTR_DAT_1005ebec) * 0x20 & 0xff00U
                     ,PTR_s__lcd_panel_init_1005ebf4,PTR_s_Could_not_get_display_engine_dev_1005ec38
                    );
      }
      else {
        FUN_1011bb52(iVar4,0,*piVar9,0);
        FUN_1011bb52(iVar4,1,*piVar9 + 0x20,0);
        FUN_1011bb52(iVar4,2,PTR_LAB_1005ed84_1_1005ec50,param_1);
        FUN_1011bb52(iVar4,3,PTR_LAB_1005e64c_1_1005ec54,param_1);
      }
      *(undefined1 *)((int)piVar9 + 0x321) = 0xff;
      piVar9[0xc6] = 2;
      *(ushort *)(piVar9 + 199) = *(ushort *)(piVar9 + 199) & 0xfcfd | 0x200;
      puVar5 = PTR_LAB_1005e7d0_1_1005ec3c;
      *(undefined1 *)((int)piVar9 + 799) = 0;
      thunk_FUN_101146e4(piVar9 + 0x18,puVar5);
      FUN_10114438(piVar9 + 0x25,PTR_FUN_1005e890_1_1005ec40);
      FUN_101145f4(piVar9 + 0x2a,DAT_1005ec44,0x400,6,0);
      FUN_101145f4(piVar9 + 0x78,DAT_1005ec48,0x800,6,0);
      FUN_10114438(piVar9 + 0xd1,PTR_FUN_1005e560_1_1005ec4c);
      FUN_1005e308(*(undefined4 *)(param_1 + 0x10));
      return 0;
    }
    uVar2 = DAT_1005ec14 | ((int)PTR_DAT_1005ebe8 - (int)PTR_DAT_1005ebec) * 0x20 & 0xff00U;
    puVar5 = PTR_s_Couldn_t_configure_power_pin_1005ec18;
  }
  FUN_100a5b78(uVar2,PTR_s__lcd_panel_init_1005ebf4,puVar5);
  return 0xffffffed;
}

