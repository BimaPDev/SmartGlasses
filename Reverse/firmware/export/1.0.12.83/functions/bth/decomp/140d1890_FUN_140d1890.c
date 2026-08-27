/* FUN_140d1890 @ 0x140d1890 */

void FUN_140d1890(undefined4 param_1,uint *param_2,uint param_3)

{
  uint *extraout_r1;
  uint extraout_r2;
  uint uVar1;
  uint extraout_r3;
  
  uVar1 = *param_2;
  if (0x3fffffff < uVar1) {
    FUN_140cb806(DAT_140d18d0);
    param_2 = extraout_r1;
    param_3 = extraout_r2;
    uVar1 = extraout_r3;
  }
  if ((param_3 < uVar1) && (uVar1 < param_3 << 1)) {
    if (param_3 << 1 < 0x40000000) {
      *param_2 = param_3 << 1;
    }
    else {
      *param_2 = 0x3fffffff;
    }
  }
  if ((int)(*param_2 + 1) < 0) {
    FUN_140cb7f4();
  }
  FUN_140bff34();
  return;
}

