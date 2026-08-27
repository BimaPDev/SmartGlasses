/* FUN_140b4c04 @ 0x140b4c04 */

undefined4 FUN_140b4c04(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140b4c50,DAT_140b4c4c);
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
  FUN_140e5068(*DAT_140b4c48,param_2);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  return uVar1;
}

