/* FUN_100b07e4 @ 0x100b07e4 */

undefined4 FUN_100b07e4(int param_1)

{
  FUN_100a5b78(DAT_100b083c | ((int)PTR_DAT_100b0834 - (int)PTR_DAT_100b0830) * 0x20 & 0xff00U,
               PTR_s_pause__p__100b0838,param_1);
  if (*(int *)(param_1 + 0x120) != 0) {
    FUN_100a8558();
    if (*(int *)(param_1 + 0x124) != 0) {
      FUN_100a8558();
    }
  }
  FUN_1012fd20(param_1);
  FUN_1012fe38(param_1,2,0);
  *(undefined1 *)(param_1 + 0xb0) = 7;
  return 0;
}

