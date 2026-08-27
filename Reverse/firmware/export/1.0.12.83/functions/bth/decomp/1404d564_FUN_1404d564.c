/* FUN_1404d564 @ 0x1404d564 */

void FUN_1404d564(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  piVar1 = (int *)FUN_140388f0();
  switch(param_2) {
  case 8:
  case 9:
  case 0xc:
    iVar2 = FUN_1405162c();
    if (((iVar2 == 0) && (iVar2 = FUN_14051668(), iVar2 == 0)) &&
       (UNRECOVERED_JUMPTABLE = (code *)*piVar1, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      uVar3 = 2;
LAB_1404d5a6:
                    /* WARNING: Could not recover jumptable at 0x1404d5aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(uVar3);
      return;
    }
    break;
  case 0xb:
  case 0x1d:
    iVar2 = FUN_14051668();
    if (iVar2 == 0) {
      UNRECOVERED_JUMPTABLE = (code *)*piVar1;
      uVar3 = 0;
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_1404d5a6;
    }
  }
  return;
}

