/* FUN_1006e114 @ 0x1006e114 */

void FUN_1006e114(int *param_1,undefined4 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint extraout_r2;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_s_ASSERTION_FAIL___s_____s__d_1006e17c;
  puVar2 = PTR_s_cb_>handler_1006e178;
  puVar1 = PTR_s_WEST_TOPDIR_zephyr_drivers_gpio__1006e174;
  uVar7 = CONCAT44(param_2,param_1);
  puVar5 = (undefined4 *)*param_1;
  if (puVar5 != (undefined4 *)0x0) {
    uVar4 = param_3;
    puVar6 = (undefined4 *)*puVar5;
    while( true ) {
      if ((param_3 & puVar5[2]) != 0) {
        if (puVar5[1] == 0) {
          FUN_10119dc2(puVar3,puVar2,puVar1,0x45,uVar7);
          FUN_10119dc2(PTR_s_No_callback_handler__1006e170);
          FUN_1011a1f0(puVar1,0x45,uVar4,0);
        }
        uVar7 = (*(code *)puVar5[1])(param_2,puVar5,puVar5[2] & param_3);
        uVar4 = extraout_r2;
      }
      if (puVar6 == (undefined4 *)0x0) break;
      puVar5 = puVar6;
      puVar6 = (undefined4 *)*puVar6;
    }
  }
  return;
}

