/* FUN_100b2ccc @ 0x100b2ccc */

undefined4 FUN_100b2ccc(int param_1)

{
  FUN_100a5b78(DAT_100b2d58 | ((int)PTR_DAT_100b2d50 - (int)PTR_DAT_100b2d4c) * 0x20 & 0xff00U,
               PTR_s_close__p__100b2d54,param_1);
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_1012f5a2();
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_10131062();
  }
  FUN_101305d2(param_1);
  if (((int)((uint)*(byte *)(param_1 + 0xa2) << 0x1f) < 0) && (*(int *)(param_1 + 0xd0) != 0)) {
    FUN_100a77b4();
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  if (((int)((uint)*(byte *)(param_1 + 0xa2) << 0x1e) < 0) && (*(int *)(param_1 + 0xcc) != 0)) {
    FUN_100a0b00();
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  *(byte *)(param_1 + 0x99) = *(byte *)(param_1 + 0x99) & 0xfe;
  return 0;
}

