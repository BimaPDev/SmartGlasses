/* FUN_100b2d5c @ 0x100b2d5c */

undefined4 FUN_100b2d5c(int param_1)

{
  FUN_100a5b78(DAT_100b2dac | ((int)PTR_DAT_100b2da4 - (int)PTR_DAT_100b2da0) * 0x20 & 0xff00U,
               PTR_s_pause__p__100b2da8,param_1);
  if (*(int *)(param_1 + 0xd0) != 0) {
    FUN_1012dff0();
  }
  FUN_101305fa(param_1);
  FUN_10130596(param_1,0xb,0);
  *(undefined1 *)(param_1 + 0x98) = 7;
  return 0;
}

