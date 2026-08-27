/* FUN_2c4e3c84 @ 0x2c4e3c84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e3c84(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_2c4de6ca(param_1,0xa4c5,0x4f,1);
    FUN_2c4e0504(_LAB_2c4e3cc8,0,0,0,_LAB_2c4e3cd0,0x4f,_LAB_2c4e3ccc,0x1300,_LAB_2c4e3cc4);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x44);
  }
  return uVar1;
}

