/* FUN_100f89e4 @ 0x100f89e4 */

void FUN_100f89e4(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (param_1[6] != 0) {
    (**(code **)(iVar1 + 8))(iVar1);
  }
  param_1[6] = 0;
  if (param_1[7] != 0) {
    (**(code **)(iVar1 + 8))(iVar1);
  }
  param_1[7] = 0;
  if (param_1[8] != 0) {
    (**(code **)(iVar1 + 8))(iVar1);
  }
  param_1[8] = 0;
  if (param_1[10] != 0) {
    (**(code **)(iVar1 + 8))(iVar1);
  }
  param_1[10] = 0;
  if (param_1[0xd] != 0) {
    (**(code **)(iVar1 + 8))(iVar1);
  }
  param_1[0xd] = 0;
  param_1[5] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xe] = param_1[5];
  param_1[0xf] = param_1[6];
  param_1[0x10] = param_1[7];
  param_1[0x11] = param_1[8];
  param_1[0x12] = param_1[9];
  param_1[0x13] = param_1[10];
  param_1[0x14] = param_1[0xb];
  param_1[0x15] = param_1[0xc];
  param_1[0x16] = param_1[0xd];
  return;
}

