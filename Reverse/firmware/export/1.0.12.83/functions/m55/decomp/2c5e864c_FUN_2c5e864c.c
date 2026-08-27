/* FUN_2c5e864c @ 0x2c5e864c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5e864c(undefined4 param_1,int param_2)

{
  *(char *)(_LAB_2c5e8678 + 0x10) = (char)param_2;
  FUN_2c5e70b0(5,0,param_2);
  if (param_2 != 1) {
    FUN_2c5e7538();
    func_0x2c5e6900();
    return 1;
  }
  func_0x2c5e6abc(5);
  return 1;
}

