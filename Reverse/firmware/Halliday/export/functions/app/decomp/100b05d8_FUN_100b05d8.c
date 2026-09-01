/* FUN_100b05d8 @ 0x100b05d8 */

undefined4 FUN_100b05d8(int param_1)

{
  FUN_100a5b78(((int)PTR_DAT_100b0608 - (int)PTR_DAT_100b060c) * 0x20 & 0xff00U | 0x1fc0031,
               PTR_s_play__p__100b0610,param_1);
  FUN_1012fcfc(param_1);
  *(undefined1 *)(param_1 + 0xb0) = 5;
  return 0;
}

