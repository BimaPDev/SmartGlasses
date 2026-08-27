/* FUN_2c644718 @ 0x2c644718 */

undefined4 FUN_2c644718(byte *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  if (((param_1 != (byte *)0x0) && (param_3 = (uint)*param_1, param_3 == 0xf2)) &&
     (param_3 = (uint)param_1[1], param_3 == 2)) {
    func_0x2c643af8(param_1,1,2,param_1,param_4);
    return 1;
  }
  func_0x2c643af8(param_1,0,param_3,param_1,param_4);
  return 0;
}

