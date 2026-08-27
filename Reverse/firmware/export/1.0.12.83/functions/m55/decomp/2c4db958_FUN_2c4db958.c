/* FUN_2c4db958 @ 0x2c4db958 */

int * FUN_2c4db958(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_2c4db8c8();
  piVar1 = (int *)(**(code **)(*piVar1 + 0xc))(piVar1,0x220);
  FUN_2c4db76c();
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)((int)piVar1 + *(int *)(*piVar1 + -0xc));
  }
  return piVar1;
}

