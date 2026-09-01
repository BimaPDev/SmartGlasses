/* FUN_100cb6b4 @ 0x100cb6b4 */

void FUN_100cb6b4(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  uVar1 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = 0;
  FUN_1013c954(param_1 + 0x68,uVar1);
  FUN_10114438(param_1 + 0x88,DAT_100cb6e8);
  return;
}

