/* FUN_2c4e66a8 @ 0x2c4e66a8 */

undefined4 FUN_2c4e66a8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 < 3) {
    FUN_2c674158(param_2,param_3);
    return param_3;
  }
  puVar1 = *(undefined4 **)(DAT_2c4e66d4 + (param_1 + -3) * 4);
  if (puVar1 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c4e66ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)*puVar1)();
    return uVar2;
  }
  return 0xffffffff;
}

