/* FUN_2c55db6c @ 0x2c55db6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c55db6c(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = _LAB_2c55dc24;
  if (param_1[0x10] != 0) {
    FUN_2c62bea8();
    param_1[0x10] = 0;
  }
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 0x10))();
  }
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 0x10))();
  }
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 0x10))();
  }
  if ((int *)param_1[0xc] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xc] + 0x10))();
  }
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 0x10))();
  }
  piVar2 = (int *)param_1[9];
  if ((piVar2 != (int *)0x0) && (iVar1 = piVar2[1], piVar2[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*piVar2 + 8))(piVar2);
    iVar1 = piVar2[2];
    piVar2[2] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)(*piVar2 + 0xc))(piVar2);
    }
  }
  piVar2 = (int *)param_1[7];
  if ((piVar2 != (int *)0x0) && (iVar1 = piVar2[1], piVar2[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*piVar2 + 8))(piVar2);
    iVar1 = piVar2[2];
    piVar2[2] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)(*piVar2 + 0xc))(piVar2);
    }
  }
  if (param_1[5] != 0) {
    FUN_2c58d410(param_1 + 5);
  }
  piVar2 = (int *)param_1[3];
  if ((piVar2 != (int *)0x0) && (iVar1 = piVar2[2], piVar2[2] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*piVar2 + 0xc))();
  }
  return param_1;
}

