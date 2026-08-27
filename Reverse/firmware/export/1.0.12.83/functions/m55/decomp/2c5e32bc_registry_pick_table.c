/* registry_pick_table @ 0x2c5e32bc */

undefined4 registry_pick_table(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 == 1) {
    uVar2 = FUN_2c5e3450();
    uVar1 = DAT_2c5e3308;
    *param_2 = uVar2;
    return uVar1;
  }
  if (param_1 == 2) {
    uVar2 = FUN_2c5e3458();
    uVar1 = DAT_2c5e3304;
    *param_2 = uVar2;
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c5e3314,0x76,DAT_2c5e3310,DAT_2c5e330c,param_1);
}

