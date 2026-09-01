/* FUN_100f5cec @ 0x100f5cec */

int FUN_100f5cec(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_100e825c(param_2);
  if (iVar1 != 0) {
    return iVar1;
  }
  FUN_100a5b78((DAT_100f5d20 - DAT_100f5d1c) * 0x20 & 0xff00U | 0x3f0011,DAT_100f5d28,DAT_100f5d24);
  return 0;
}

