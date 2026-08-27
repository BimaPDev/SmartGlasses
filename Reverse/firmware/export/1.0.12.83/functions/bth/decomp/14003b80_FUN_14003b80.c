/* FUN_14003b80 @ 0x14003b80 */

void FUN_14003b80(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_14003bb4;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  FUN_1400a3e0(4,0x221,DAT_14003bb0,DAT_14003bac,DAT_14003ba8,uVar1,param_2);
  return;
}

