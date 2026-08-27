/* FUN_2c5b3d48 @ 0x2c5b3d48 */

void FUN_2c5b3d48(int param_1,undefined4 param_2,undefined4 param_3)

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
  FUN_2c607048(uVar1,300,0x50);
  FUN_2c6072bc(uVar1,1,0xc);
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_2c5b5f64(*(int *)(param_1 + 0x14),uVar1,param_3,1);
    return;
  }
  return;
}

