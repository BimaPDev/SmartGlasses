/* FUN_2c485624 @ 0x2c485624 */

undefined4 FUN_2c485624(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c485670,DAT_2c48566c);
  }
  uVar1 = *param_2;
  if (*(code **)(param_1 + 0xc) != (code *)0x0) {
    (**(code **)(param_1 + 0xc))(param_2[1]);
  }
  if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))(param_2);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    return uVar1;
  }
  thunk_FUN_2c647824(*DAT_2c485668,param_2);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  return uVar1;
}

