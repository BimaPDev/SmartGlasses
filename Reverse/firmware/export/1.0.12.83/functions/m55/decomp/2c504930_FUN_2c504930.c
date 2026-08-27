/* FUN_2c504930 @ 0x2c504930 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c504930(undefined4 param_1,int param_2)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  
  pcVar2 = _LAB_2c504994;
  pcVar1 = _LAB_2c504990;
  piVar5 = *(int **)(param_2 + 8);
  if (piVar5 != *(int **)(param_2 + 0xc)) {
    do {
      while (piVar6 = piVar5 + 1, *piVar5 != 0) {
        iVar3 = FUN_2c5ef904(param_1);
        if ((iVar3 != 0) || (iVar3 = FUN_2c5efa10(param_1), iVar3 == 0)) {
          pcVar4 = *(code **)(*(int *)*piVar5 + 0x14);
          if (pcVar4 != pcVar1) goto LAB_2c504982;
          break;
        }
        pcVar4 = *(code **)(*(int *)*piVar5 + 0x10);
        if (pcVar4 == pcVar2) break;
LAB_2c504982:
        (*pcVar4)();
        piVar5 = piVar6;
        if (*(int **)(param_2 + 0xc) == piVar6) {
          return;
        }
      }
      piVar5 = piVar6;
    } while (*(int **)(param_2 + 0xc) != piVar6);
  }
  return;
}

