/* FUN_10114b08 @ 0x10114b08 */

void FUN_10114b08(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 8) == 0) {
    FUN_10119dc2(DAT_10114b4c,DAT_10114b48,DAT_10114b44,0x253,param_1,param_2);
    FUN_1011a1f0(DAT_10114b44,0x253,param_3,0);
  }
  FUN_10114ac0(*(undefined4 *)(param_1 + 8),param_1);
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfd;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

