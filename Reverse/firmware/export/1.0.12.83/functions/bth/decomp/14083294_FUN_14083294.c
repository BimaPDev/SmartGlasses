/* FUN_14083294 @ 0x14083294 */

int * FUN_14083294(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_1408b2fc(param_1 + 10,3,param_3,param_4,param_4);
  if ((iVar1 != 0) && (iVar1 = FUN_14083258(param_1 + 10), iVar1 != 0)) {
    piVar2 = (int *)(iVar1 + 0x14);
    do {
      piVar3 = piVar2 + 1;
      if (*piVar2 == param_1) {
        return piVar2;
      }
      piVar2 = piVar3;
    } while (piVar3 != (int *)(iVar1 + 0x34));
  }
  return (int *)0x0;
}

