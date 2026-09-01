/* FUN_10134a0c @ 0x10134a0c */

void FUN_10134a0c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_10134580(param_5 + 4,0xfffffffb);
  if (param_2 == 0) {
    if (*(short *)(param_5 + 3) == 0) {
      (*(code *)*param_5)(param_1,param_5,0,0);
    }
  }
  else {
    iVar2 = FUN_100cc814(param_1);
    if (iVar2 == 0) {
      return;
    }
    puVar5 = *(undefined4 **)(iVar2 + 8);
    if (puVar5 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar5;
      puVar4 = (undefined4 *)0x0;
      while (puVar3 = puVar1, puVar5 != param_5 + 5) {
        if (puVar3 == (undefined4 *)0x0) goto LAB_10134a46;
        puVar1 = (undefined4 *)*puVar3;
        puVar4 = puVar5;
        puVar5 = puVar3;
      }
      FUN_101347ba(param_1,iVar2,puVar4,param_5);
    }
  }
LAB_10134a46:
  if ((code *)param_5[1] == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10134a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_5[1])(param_1,param_2,0);
  return;
}

