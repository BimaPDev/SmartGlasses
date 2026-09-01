/* FUN_100b2db0 @ 0x100b2db0 */

undefined4 FUN_100b2db0(int param_1)

{
  FUN_100a5b78(((int)PTR_DAT_100b2dfc - (int)PTR_DAT_100b2df8) * 0x20 & 0xff00U | 0x1820031,
               PTR_s_resume__p__100b2e00,param_1);
  FUN_1013060e(param_1);
  if (*(int *)(param_1 + 0xd0) != 0) {
    FUN_1012e004();
  }
  FUN_10130596(param_1,0xc,0);
  *(undefined1 *)(param_1 + 0x98) = 5;
  return 0;
}

