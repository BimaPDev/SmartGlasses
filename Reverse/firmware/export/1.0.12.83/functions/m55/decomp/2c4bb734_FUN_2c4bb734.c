/* FUN_2c4bb734 @ 0x2c4bb734 */

void FUN_2c4bb734(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  
  if ((*(char *)(DAT_2c4bb770 + param_1) != -1) && (*(char *)(DAT_2c4bb774 + param_1) == '\0')) {
    uVar2 = FUN_2c4bb6b8();
    uVar3 = *(uint *)(DAT_2c4bb77c + param_1 * 4);
    if (uVar2 < uVar3) {
      iVar1 = uVar3 - uVar2;
      goto LAB_2c4bb74a;
    }
  }
  iVar1 = 0;
LAB_2c4bb74a:
  UNRECOVERED_JUMPTABLE = *(code **)(DAT_2c4bb778 + param_1 * 4);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c4bb75a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar1,0,param_2);
    return;
  }
  return;
}

