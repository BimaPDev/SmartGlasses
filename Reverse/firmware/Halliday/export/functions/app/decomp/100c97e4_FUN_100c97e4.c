/* FUN_100c97e4 @ 0x100c97e4 */

undefined4 FUN_100c97e4(undefined4 param_1)

{
  *DAT_100c9808 = (char)param_1;
  FUN_100a5b78(DAT_100c9818 | (DAT_100c980c - DAT_100c9810) * 0x20 & 0xff00U,DAT_100c981c,
               DAT_100c9814,param_1);
  return 0;
}

