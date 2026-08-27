/* FUN_2c4e4fb8 @ 0x2c4e4fb8 */

void FUN_2c4e4fb8(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 8;
  piVar2 = DAT_2c4e4fd0;
  do {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 0x40))();
    }
    iVar1 = iVar1 + -1;
    piVar2 = piVar2 + 1;
  } while (iVar1 != 0);
  return;
}

