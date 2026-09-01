/* FUN_101315a4 @ 0x101315a4 */

void FUN_101315a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar2;
  
  uVar2 = FUN_100bdaec(param_2,param_3,param_3,param_4,param_1);
  iVar1 = (int)uVar2;
  if (iVar1 == 0) {
    return;
  }
  switch(param_1) {
  case 0:
    UNRECOVERED_JUMPTABLE_00 = (code *)**(undefined4 **)(iVar1 + 4);
    goto LAB_101315cc;
  case 1:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(int *)(iVar1 + 4) + 4);
    break;
  case 2:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(int *)(iVar1 + 4) + 8);
LAB_101315cc:
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
      (*UNRECOVERED_JUMPTABLE_00)(param_2);
    }
    FUN_1013159c(iVar1);
    return;
  case 3:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(int *)(iVar1 + 4) + 0xc);
    break;
  case 4:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(int *)(iVar1 + 4) + 0x10);
    if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10131608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(param_2,(int)((ulonglong)uVar2 >> 0x20),param_4);
      return;
    }
  default:
    goto switchD_101315be_default;
  }
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x101315ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_2);
    return;
  }
switchD_101315be_default:
  return;
}

