/* FUN_2c4dcee8 @ 0x2c4dcee8 */

int * FUN_2c4dcee8(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_2c4dc3d8();
  piVar1 = (int *)(**(code **)(*piVar1 + 0xc))(piVar1,0x230);
  func_0x2c4dcbb4();
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)((int)piVar1 + *(int *)(*piVar1 + -0xc));
  }
  return piVar1;
}

