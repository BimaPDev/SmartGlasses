/* FUN_2c504194 @ 0x2c504194 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c504194(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  piVar1 = (int *)*piVar3;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0x1c);
    if (pcVar2 != _LAB_2c5041b0) {
      (*pcVar2)();
    }
    *piVar3 = 0;
  }
  return;
}

