/* FUN_100e8428 @ 0x100e8428 */

int FUN_100e8428(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1013c66c(DAT_100e8460,param_1,0,0);
  if (iVar1 == 0) {
    FUN_100a5b78((DAT_100e8468 - DAT_100e8464) * 0x20 & 0xff00U | 0x1b60011,DAT_100e8470,
                 DAT_100e846c,param_1);
  }
  return iVar1;
}

