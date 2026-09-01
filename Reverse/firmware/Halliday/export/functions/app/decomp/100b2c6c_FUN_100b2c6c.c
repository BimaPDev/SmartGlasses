/* FUN_100b2c6c @ 0x100b2c6c */

undefined4 FUN_100b2c6c(int param_1)

{
  FUN_100a5b78(((int)PTR_DAT_100b2cc4 - (int)PTR_DAT_100b2cc0) * 0x20 & 0xff00U | 0x1900031,
               PTR_s_stop__p__100b2cc8,param_1);
  if (((int)((uint)*(byte *)(param_1 + 0xa2) << 0x1f) < 0) && (*(int *)(param_1 + 0xd0) != 0)) {
    FUN_1012dfba();
  }
  FUN_101305be(param_1);
  if (((int)((uint)*(byte *)(param_1 + 0xa2) << 0x1e) < 0) && (*(int *)(param_1 + 0xcc) != 0)) {
    FUN_100a0a70();
  }
  *(undefined1 *)(param_1 + 0x98) = 1;
  return 0;
}

