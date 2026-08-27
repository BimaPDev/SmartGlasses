/* FUN_2c5ea218 @ 0x2c5ea218 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5ea218(undefined4 param_1,int param_2)

{
  *(char *)(_LAB_2c5ea244 + 0x10) = (char)param_2;
  FUN_2c5e70b0(1,0,param_2);
  FUN_2c5e7538();
  if (param_2 != 1) {
    func_0x2c5e6900();
    return 1;
  }
  func_0x2c5e6abc(1);
  return 1;
}

