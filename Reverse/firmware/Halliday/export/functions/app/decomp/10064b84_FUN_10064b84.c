/* FUN_10064b84 @ 0x10064b84 */

void FUN_10064b84(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = (DAT_10064bdc - DAT_10064be0) * 0x20 & 0xff00;
  if (param_1[0x14] != 0) {
    FUN_100a5b78(uVar1 | 0xaa0011,DAT_10064be8,DAT_10064be4,param_1[0x14],param_1,param_2,param_3);
  }
  if (param_1[7] != 0) {
    FUN_10065280();
  }
  if (param_1[8] != 0) {
    FUN_10065280();
  }
  FUN_100a5b78(uVar1 | 0xb50032,DAT_10064be8,DAT_10064bec,*param_1,param_1[1],param_2,param_3);
  return;
}

