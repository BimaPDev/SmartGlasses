/* FUN_2c650d64 @ 0x2c650d64 */

void FUN_2c650d64(uint param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_2c650dbc < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(DAT_2c650dc0);
  }
  if ((param_2 < param_1) && (param_1 < param_2 << 1)) {
    param_1 = param_2 << 1;
  }
  iVar1 = param_1 + 0xd;
  if ((0x1000 < param_1 + 0x1d) && (param_2 < param_1)) {
    param_1 = (param_1 + 0x1000) - (param_1 + 0x1d & 0xfff);
    if (DAT_2c650dbc <= param_1) {
      param_1 = DAT_2c650dbc;
    }
    iVar1 = param_1 + 0xd;
  }
  if (iVar1 < 0) {
    FUN_2c658668();
  }
  iVar1 = FUN_2c64ca5c();
  *(uint *)(iVar1 + 4) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}

