/* FUN_10068334 @ 0x10068334 */

void FUN_10068334(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  
  *(undefined4 *)(param_3 + -0x20) = param_4;
  uVar1 = DAT_10068370;
  *(undefined4 *)(param_3 + -0x1c) = param_5;
  *(undefined4 *)(param_3 + -0x18) = param_6;
  *(uint *)(param_3 + -8) = uVar1 & 0xfffffffe;
  *(undefined4 *)(param_3 + -0x14) = param_7;
  *(undefined4 *)(param_3 + -4) = 0x1000000;
  *(undefined4 *)(param_1 + 200) = 0;
  *(int *)(param_1 + 0x50) = param_3 + -0x20;
  *(undefined4 *)(param_1 + 0x110) = 0xfd00;
  return;
}

