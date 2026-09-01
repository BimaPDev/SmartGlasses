/* FUN_100b87b8 @ 0x100b87b8 */

undefined4 FUN_100b87b8(int *param_1,int param_2)

{
  FUN_100a5b78((DAT_100b87e8 - DAT_100b87e4) * 0x20 & 0xff00U | 0x1ea0031,DAT_100b87f0,DAT_100b87ec,
               *(undefined4 *)(param_2 + 4));
  *param_1 = param_2;
  return 0;
}

