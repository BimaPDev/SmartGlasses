/* FUN_100a84e0 @ 0x100a84e0 */

undefined4 FUN_100a84e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_100a8538,0x28b,DAT_100a8534,DAT_100a8530);
  }
  uVar1 = (DAT_100a8540 - DAT_100a853c) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100a8548 | uVar1,DAT_100a854c,DAT_100a8544,param_1,param_4);
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfd;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1006443c();
  }
  FUN_100a5b78(DAT_100a8550 | uVar1,DAT_100a854c,DAT_100a8554,param_1);
  return 0;
}

