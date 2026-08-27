/* FUN_2c5b35b4 @ 0x2c5b35b4 */

void FUN_2c5b35b4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_2c606a10(param_2);
  FUN_2c606abc(uVar1,0x10);
  FUN_2c606abc(uVar1,2);
  FUN_2c606d60(uVar1,0xff000000,0);
  FUN_2c606d6c(uVar1,0);
  FUN_2c606d9c(uVar1,0);
  FUN_2c606d30(uVar1,0);
  FUN_2c606d3c(uVar1,0);
  FUN_2c606d18(uVar1,0);
  FUN_2c606d24(uVar1,0);
  FUN_2c606e68(uVar1,0);
  FUN_2c607048(uVar1,0xe4,0x50);
  FUN_2c6072bc(uVar1,4,0x1c,0xffffff98);
  FUN_2c5b5f64(*(undefined4 *)(param_1 + 0x20),uVar1,param_3,0);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}

