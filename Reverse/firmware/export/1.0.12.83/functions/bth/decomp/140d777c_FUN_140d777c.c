/* FUN_140d777c @ 0x140d777c */

void FUN_140d777c(undefined4 param_1,uint *param_2,uint param_3)

{
  uint *extraout_r1;
  uint extraout_r2;
  uint uVar1;
  uint extraout_r3;
  
  uVar1 = *param_2;
  if (0xfffffff < uVar1) {
    FUN_140cb806(DAT_140d77c0);
    param_2 = extraout_r1;
    param_3 = extraout_r2;
    uVar1 = extraout_r3;
  }
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
    uVar1 = FUN_140cb7f4();
  }
  FUN_140bff34(uVar1 << 2);
  return;
}

