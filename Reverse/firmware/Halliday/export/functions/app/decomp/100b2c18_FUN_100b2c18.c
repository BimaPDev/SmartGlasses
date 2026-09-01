/* FUN_100b2c18 @ 0x100b2c18 */

undefined4 FUN_100b2c18(int param_1)

{
  FUN_100a5b78(DAT_100b2c68 | ((int)PTR_DAT_100b2c60 - (int)PTR_DAT_100b2c5c) * 0x20 & 0xff00U,
               PTR_s_play__p__100b2c64,param_1);
  FUN_101305e6(param_1);
  if ((*(int *)(param_1 + 0xd0) != 0) && ((*(ushort *)(param_1 + 0xa2) & 0x4080) != 0x80)) {
    FUN_1012df9a();
  }
  *(undefined1 *)(param_1 + 0x98) = 5;
  return 0;
}

