/* FUN_2c4d3c34 @ 0x2c4d3c34 */

undefined4 FUN_2c4d3c34(char *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*param_1 != '\x02') {
    return 0xffffffff;
  }
  if (param_1[0x6e] != '\0') {
    return 0;
  }
  uVar1 = FUN_2c4d82e0(param_1 + 0x80,param_1 + 0x3c,param_2);
  return uVar1;
}

