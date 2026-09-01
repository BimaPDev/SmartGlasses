/* FUN_100a623c @ 0x100a623c */

undefined4 FUN_100a623c(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return *DAT_100a625c;
  }
  if (param_1 != 1) {
    if (param_1 == 3) {
      uVar1 = DAT_100a625c[3];
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  return DAT_100a625c[1];
}

