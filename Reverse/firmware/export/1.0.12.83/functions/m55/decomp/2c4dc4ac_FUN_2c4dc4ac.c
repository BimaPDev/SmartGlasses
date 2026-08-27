/* FUN_2c4dc4ac @ 0x2c4dc4ac */

int * FUN_2c4dc4ac(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_2c4dc3d8();
  piVar1 = (int *)(**(code **)(*piVar1 + 0xc))(piVar1,0x218);
  func_0x2c4dbd36();
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)((int)piVar1 + *(int *)(*piVar1 + -0xc));
  }
  return piVar1;
}

