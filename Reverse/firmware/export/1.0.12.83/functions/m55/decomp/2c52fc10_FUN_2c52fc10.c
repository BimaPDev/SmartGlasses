/* FUN_2c52fc10 @ 0x2c52fc10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c52fc10(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[3];
  *param_1 = _DAT_2c52fc70;
  param_1[2] = 0;
  param_1[3] = 0;
  if (piVar2 != (int *)0x0) {
    iVar1 = piVar2[1];
    piVar2[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      iVar1 = piVar2[2];
      piVar2[2] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)(*piVar2 + 0xc))(piVar2);
      }
    }
    piVar2 = (int *)param_1[3];
    if ((piVar2 != (int *)0x0) && (iVar1 = piVar2[1], piVar2[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*piVar2 + 8))(piVar2);
      iVar1 = piVar2[2];
      piVar2[2] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)(*piVar2 + 0xc))(piVar2);
      }
    }
  }
  return param_1;
}

