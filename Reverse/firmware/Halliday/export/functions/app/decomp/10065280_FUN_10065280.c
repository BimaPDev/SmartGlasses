/* FUN_10065280 @ 0x10065280 */

void FUN_10065280(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1006bc30(param_1 + 1);
  if (iVar1 != 0) {
    FUN_100a5b78((DAT_100652b8 - DAT_100652b4) * 0x20 & 0xff00U | 0x330011,DAT_100652c0,DAT_100652bc
                 ,*param_1);
  }
  FUN_1012d1f4(param_1);
  return;
}

