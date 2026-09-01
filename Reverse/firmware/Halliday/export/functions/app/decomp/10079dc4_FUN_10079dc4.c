/* FUN_10079dc4 @ 0x10079dc4 */

int FUN_10079dc4(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint local_14;
  
  uVar3 = 1 << (param_2 & 0xff);
  uVar2 = **(uint **)(param_1 + 4);
  local_14 = param_2;
  if ((uVar3 & uVar2) == 0) {
    FUN_10119dc2(PTR_s_ASSERTION_FAIL___s_____s__d_10079e20,
                 PTR_s__cfg_>port_pin_mask____gpio_port_10079e1c,
                 PTR_s_WEST_TOPDIR_zephyr_include_drive_10079e18,0x4af,param_1,param_2,param_3,uVar2
                 ,param_1);
    FUN_10119dc2(PTR_s_Unsupported_pin_10079e24);
    FUN_1011a1f0(PTR_s_WEST_TOPDIR_zephyr_include_drive_10079e18,0x4af,param_3,uVar2);
  }
  puVar4 = *(uint **)(param_1 + 0x10);
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 4))(param_1,&local_14);
  if (iVar1 == 0) {
    if (((local_14 ^ *puVar4) & uVar3) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  return iVar1;
}

