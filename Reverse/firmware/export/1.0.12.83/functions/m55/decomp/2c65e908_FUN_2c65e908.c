/* FUN_2c65e908 @ 0x2c65e908 */

void FUN_2c65e908(undefined4 param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (uVar1 < 0x40000000) {
    if ((param_3 < uVar1) && (uVar1 < param_3 << 1)) {
      if (param_3 << 1 < 0x40000000) {
        *param_2 = param_3 << 1;
      }
      else {
        *param_2 = 0x3fffffff;
      }
    }
    if ((int)(*param_2 + 1) < 0) {
      FUN_2c658668();
    }
    FUN_2c64ca5c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c658680(DAT_2c65e948);
}

