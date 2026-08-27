/* FUN_2c5099a4 @ 0x2c5099a4 */

void FUN_2c5099a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r3;
  
  FUN_2c606e74(*(undefined4 *)(param_1 + 0x18),param_2,0,param_4,param_4);
  uVar1 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_2c606e74(*(undefined4 *)(param_1 + 0x2c),param_2,0,*(char *)(param_1 + 0xc),param_4);
    FUN_2c606e74(*(undefined4 *)(param_1 + 0x30),param_2,0);
    uVar1 = extraout_r3;
  }
  FUN_2c606e74(*(undefined4 *)(param_1 + 0x34),param_2,0,uVar1,param_4);
  FUN_2c606e74(*(undefined4 *)(param_1 + 0x38),param_2,0);
  FUN_2c606e74(*(undefined4 *)(param_1 + 0x3c),param_2,0);
  FUN_2c606e74(*(undefined4 *)(param_1 + 0x40),param_2,0);
  FUN_2c606e74(*(undefined4 *)(param_1 + 0x44),param_2,0);
  FUN_2c603c40(*(undefined4 *)(param_1 + 0x48),0x60,param_2,0);
  return;
}

