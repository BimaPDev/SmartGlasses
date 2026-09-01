/* FUN_1011fffa @ 0x1011fffa */

void FUN_1011fffa(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int extraout_r1;
  undefined4 *extraout_r2;
  
  bVar1 = FUN_1007ddd0(param_1,param_2,param_1,param_4,param_4);
  if (bVar1 < 2) {
    **(uint **)*extraout_r2 = **(uint **)*extraout_r2 & 0xf7ffffff | extraout_r1 << 0x1b;
  }
  return;
}

