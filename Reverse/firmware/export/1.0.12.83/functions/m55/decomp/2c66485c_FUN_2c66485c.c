/* FUN_2c66485c @ 0x2c66485c */

void FUN_2c66485c(undefined4 param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (uVar1 < 0x10000000) {
    if ((param_3 < uVar1) && (uVar1 < param_3 << 1)) {
      if (param_3 << 1 < 0x10000000) {
        *param_2 = param_3 << 1;
      }
      else {
        *param_2 = 0xfffffff;
      }
    }
    uVar1 = *param_2 + 1;
    if (0x1fffffff < uVar1) {
      uVar1 = FUN_2c658668();
    }
    FUN_2c64ca5c(uVar1 << 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c658680(DAT_2c6648a0);
}

