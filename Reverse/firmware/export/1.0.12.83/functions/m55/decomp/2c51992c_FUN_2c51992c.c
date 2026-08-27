/* FUN_2c51992c @ 0x2c51992c */

void FUN_2c51992c(undefined4 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if ((int *)*piVar2 != (int *)0x0) {
    iVar1 = *(int *)*piVar2;
    if (*(code **)(iVar1 + 0x18) != (code *)PTR_LAB_2c529854_1_2c51997c) {
      (**(code **)(iVar1 + 0x18))();
      iVar1 = *(int *)*piVar2;
    }
    if (*(code **)(iVar1 + 0x2c) != (code *)PTR_LAB_2c529868_1_2c519980) {
      (**(code **)(iVar1 + 0x2c))();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)piVar2[1] + 0xc);
  if (UNRECOVERED_JUMPTABLE == (code *)PTR_LAB_2c52984a_3_2c519984) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)piVar2[1] + 0x20);
    if (UNRECOVERED_JUMPTABLE != (code *)PTR_LAB_2c52985c_1_2c519988) {
LAB_2c51996a:
                    /* WARNING: Could not recover jumptable at 0x2c51996e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    (*UNRECOVERED_JUMPTABLE)();
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)piVar2[1] + 0x20);
    if (UNRECOVERED_JUMPTABLE != (code *)PTR_LAB_2c52985c_1_2c519988) goto LAB_2c51996a;
  }
  return;
}

