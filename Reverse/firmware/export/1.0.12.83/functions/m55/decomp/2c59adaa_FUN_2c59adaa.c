/* FUN_2c59adaa @ 0x2c59adaa */

undefined4 *
FUN_2c59adaa(undefined4 *param_1,undefined1 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 4) = param_2;
  *(char *)(param_1 + 6) = (char)param_4;
  *(undefined2 *)((int)param_1 + 0x1a) = param_4;
  *param_1 = param_3;
  func_0x2c59ba1c(param_1 + 0xc);
  FUN_2c62a470();
  uVar1 = FUN_2c5fee94();
  param_1[0x19] = uVar1;
  return param_1;
}

