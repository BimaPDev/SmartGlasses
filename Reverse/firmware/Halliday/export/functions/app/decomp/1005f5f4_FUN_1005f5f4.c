/* FUN_1005f5f4 @ 0x1005f5f4 */

undefined4 FUN_1005f5f4(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  if (param_1 < 3) {
    iVar1 = param_1 * 0x34 + DAT_1005f630;
    if (*(int *)(iVar1 + 0x28) != 0) {
      *(undefined4 *)(iVar1 + 0x2c) = param_2;
      *(undefined4 *)(iVar1 + 0x30) = param_3;
      return 0;
    }
    uVar2 = 0x9f;
    puVar3 = DAT_1005f634;
  }
  else {
    uVar2 = 0x9e;
    puVar3 = PTR_s_inst_>__0____inst_<_ARRAY_SIZE(d_1005f624;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(PTR_s_WEST_TOPDIR_zephyr_drivers_displ_1005f62c,uVar2,
               PTR_s_de_instance_register_callback_1005f628,puVar3);
}

