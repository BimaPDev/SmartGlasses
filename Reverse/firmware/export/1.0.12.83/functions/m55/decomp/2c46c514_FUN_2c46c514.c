/* FUN_2c46c514 @ 0x2c46c514 */

undefined4 FUN_2c46c514(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 != 0) {
    return 0;
  }
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))(param_1,*(undefined4 *)(param_1 + 0x24));
  }
  (**(code **)(param_1 + 4))(param_1);
  return 1;
}

