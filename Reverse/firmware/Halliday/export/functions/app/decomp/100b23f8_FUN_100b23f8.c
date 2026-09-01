/* FUN_100b23f8 @ 0x100b23f8 */

undefined4 FUN_100b23f8(int param_1)

{
  FUN_100a5b78(((int)PTR_DAT_100b2430 - (int)PTR_DAT_100b2434) * 0x20 & 0xff00U | 0x1ce0031,
               PTR_s___enter___100b2438);
  if (param_1 != 0) {
    FUN_101304ac(param_1);
    *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfe;
  }
  return 0;
}

