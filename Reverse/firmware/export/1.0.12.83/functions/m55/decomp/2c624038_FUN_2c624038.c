/* FUN_2c624038 @ 0x2c624038 */

void FUN_2c624038(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_2c62bea8();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_2c621cc0(param_1);
  FUN_2c621d00(param_1);
  FUN_2c62bea8(*(undefined4 *)(param_1 + 0xc0));
  *(undefined4 *)(param_1 + 0xc0) = 0;
  FUN_2c62bea8(*(undefined4 *)(param_1 + 0xc4));
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  FUN_2c62bea8(*(undefined4 *)(param_1 + 0xcc));
  FUN_2c62bea8(*(undefined4 *)(param_1 + 0xd0));
  FUN_2c62bea8(*(undefined4 *)(param_1 + 0xd4),extraout_r1,extraout_r2,param_4);
  return;
}

