/* FUN_2c5ea9a4 @ 0x2c5ea9a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ea9a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  int *piVar2;
  int *piVar3;
  
  iVar1 = _LAB_2c5ea9d4;
  piVar3 = (int *)*_LAB_2c5ea9d0;
  if (piVar3 != (int *)0x0) {
    piVar2 = (int *)*piVar3;
    while (piVar2 != (int *)0x0) {
      *piVar3 = *piVar2;
      (**(code **)(iVar1 + 0x38))(param_1,piVar2[2],param_3,*(code **)(iVar1 + 0x38),param_4);
      FUN_2c62bea8(piVar2);
      param_3 = extraout_r2;
      piVar2 = (int *)*piVar3;
    }
  }
  return;
}

