/* FUN_100faef8 @ 0x100faef8 */

void FUN_100faef8(int param_1,int *param_2)

{
  if (((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) && (*param_2 != 0)) {
    (**(code **)(*(int *)(param_1 + 0x1c) + 8))();
  }
  *param_2 = 0;
  return;
}

