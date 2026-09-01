/* FUN_10077e14 @ 0x10077e14 */

void FUN_10077e14(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_r2;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  
  uVar9 = FUN_10112e84(PTR_s_GPIOA_10077ed8);
  iVar3 = (int)uVar9;
  puVar8 = *(undefined4 **)(iVar3 + 8);
  puVar7 = *(uint **)(iVar3 + 0x10);
  iVar6 = **(int **)(iVar3 + 4) << 5;
  if (-1 < iVar6) {
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_10077ee4,
                 PTR_s__cfg_>port_pin_mask____gpio_port_10077ee0,
                 PTR_s_WEST_TOPDIR_zephyr_include_drive_10077edc,0x34c,uVar9);
    FUN_10119dc2(PTR_s_Unsupported_pin_10077ee8);
    FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_include_drive_10077edc,0x34c,extraout_r2,iVar6);
  }
  *puVar7 = *puVar7 & 0xfbffffff;
  (*(code *)*puVar8)(iVar3,0x1a,0x200);
  iVar6 = FUN_1000f6f0();
  puVar2 = PTR_DAT_10077ef0;
  puVar1 = PTR_DAT_10077eec;
  if (((iVar6 == 0) && (*DAT_10077ef4 != '\x01')) || (param_1 == 0)) {
    iVar6 = (int)PTR_DAT_10077eec - (int)PTR_DAT_10077ef0;
    FUN_10077c7c(iVar3,param_1);
    uVar4 = iVar6 * 0x20 & 0xff00U | 0xe70000;
    uVar5 = DAT_10077f00;
  }
  else {
    FUN_10077c7c(iVar3,1);
    FUN_1013d9c0(7);
    FUN_10077c7c(iVar3,0);
    FUN_1013d9c0(7);
    FUN_10077c7c(iVar3,1);
    param_1 = 1;
    uVar4 = ((int)puVar1 - (int)puVar2) * 0x20 & 0xff00U | 0xe40000;
    uVar5 = DAT_10077ef8;
  }
  FUN_100a5b78(uVar4 | 0x31,DAT_10077efc,uVar5,param_1);
  return;
}

