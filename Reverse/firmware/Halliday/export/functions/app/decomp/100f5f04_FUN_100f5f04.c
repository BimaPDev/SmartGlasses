/* FUN_100f5f04 @ 0x100f5f04 */

void FUN_100f5f04(undefined1 *param_1,int param_2,int param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    puVar2 = (undefined4 *)(param_1 + param_3);
    puVar3 = (undefined4 *)(param_2 + param_3);
    do {
      uVar5 = puVar2[-1];
      param_3 = param_3 + -8;
      puVar2[-1] = puVar3[-1];
      puVar3[-1] = uVar5;
      uVar5 = puVar2[-2];
      puVar2 = puVar2 + -2;
      *puVar2 = puVar3[-2];
      puVar3 = puVar3 + -2;
      *puVar3 = uVar5;
    } while (param_3 != 0);
    return;
  }
  if (UNRECOVERED_JUMPTABLE != (code *)0x1) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x2) {
                    /* WARNING: Could not recover jumptable at 0x100f5f16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    puVar7 = (undefined1 *)(param_2 + param_3);
    puVar4 = param_1 + param_3;
    do {
      puVar4 = puVar4 + -1;
      uVar1 = *puVar4;
      puVar7 = puVar7 + -1;
      *puVar4 = *puVar7;
      *puVar7 = uVar1;
    } while (puVar4 != param_1);
    return;
  }
  puVar2 = (undefined4 *)(param_2 + param_3);
  puVar3 = (undefined4 *)(param_1 + param_3 + -4);
  do {
    puVar2 = puVar2 + -1;
    uVar5 = *puVar3;
    puVar6 = puVar3 + -1;
    *puVar3 = *puVar2;
    *puVar2 = uVar5;
    puVar3 = puVar6;
  } while ((undefined1 *)((4 - (int)param_1) + (int)puVar6) != (undefined1 *)0x0);
  return;
}

