/* FUN_10136b36 @ 0x10136b36 */

undefined4 FUN_10136b36(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (((param_1 == 0) || (*(char *)(param_1 + 6) == '\0')) || (*(int *)(param_1 + 0xc) == 0)) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = FUN_100d44e4(0xd3,0x81,param_1,0x10,0,param_2,param_3);
  }
  return uVar1;
}

