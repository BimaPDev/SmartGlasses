/* FUN_2c64585a @ 0x2c64585a */

uint FUN_2c64585a(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if ((param_1 == (char *)0x0) || (*param_1 != -0xf)) {
    uVar1 = 0xffffffff;
    func_0x2c643a5c(param_4);
  }
  else {
    uVar1 = (byte)param_1[1] & 0xf;
    func_0x2c643a5c(param_1,uVar1);
  }
  return uVar1;
}

