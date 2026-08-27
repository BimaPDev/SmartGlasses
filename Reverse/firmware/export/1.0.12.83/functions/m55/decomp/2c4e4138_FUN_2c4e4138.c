/* FUN_2c4e4138 @ 0x2c4e4138 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e4138(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_2c4e4018();
  if (iVar1 == 0) {
    FUN_2c4de6ca(param_1,0xa4c5,0xb7,1);
    FUN_2c4e0504(_LAB_2c4e4194,0,0,0,_LAB_2c4e419c,0xb7,_LAB_2c4e4198,0x1300,_LAB_2c4e4190);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_2c4e3f90(param_1,param_2,param_3);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x5c);
  }
  return uVar2;
}

