/* FUN_2c4e3cd4 @ 0x2c4e3cd4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e3cd4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_2c4de6ca(param_1,0xa4c5,0x53,1);
    FUN_2c4e0504(_LAB_2c4e3d18,0,0,0,_LAB_2c4e3d20,0x53,_LAB_2c4e3d1c,0x1300,_LAB_2c4e3d14);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x50);
  }
  return uVar1;
}

