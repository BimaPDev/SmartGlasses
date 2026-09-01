/* FUN_100b0840 @ 0x100b0840 */

undefined4 FUN_100b0840(int param_1)

{
  FUN_100a5b78(DAT_100b0898 | ((int)PTR_DAT_100b0890 - (int)PTR_DAT_100b088c) * 0x20 & 0xff00U,
               PTR_s_resume__p__100b0894,param_1);
  FUN_1012fd2c(param_1);
  if (*(int *)(param_1 + 0x120) != 0) {
    FUN_100a8588();
    if (*(int *)(param_1 + 0x124) != 0) {
      FUN_100a8588();
    }
  }
  FUN_1012fe38(param_1,3,0);
  *(undefined1 *)(param_1 + 0xb0) = 5;
  return 0;
}

