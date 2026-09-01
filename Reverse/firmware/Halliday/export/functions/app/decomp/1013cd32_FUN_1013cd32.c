/* FUN_1013cd32 @ 0x1013cd32 */

undefined4 FUN_1013cd32(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = 0;
  while ((piVar2 = (int *)*param_1, param_1 != piVar2 && (piVar2 != (int *)0x0))) {
    FUN_1013cc34(piVar2);
    FUN_1013cc6c(piVar2);
    uVar1 = 1;
  }
  return uVar1;
}

