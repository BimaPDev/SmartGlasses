/* FUN_2c48d620 @ 0x2c48d620 */

int * FUN_2c48d620(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return (int *)0x0;
  }
  piVar4 = *(int **)(param_1 + 8);
  if (param_3 == 0) {
    for (; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
      iVar2 = piVar4[8];
      if (iVar2 != 0) {
        if (iVar2 == param_2) {
          return piVar4;
        }
        pbVar5 = (byte *)(param_2 + -1);
        pbVar7 = (byte *)(iVar2 + -1);
        while( true ) {
          pbVar5 = pbVar5 + 1;
          uVar3 = (uint)*pbVar5;
          pbVar7 = pbVar7 + 1;
          uVar6 = (uint)*pbVar7;
          uVar1 = uVar3;
          if ((*(byte *)(DAT_2c48d6a0 + uVar3) & 3) == 1) {
            uVar1 = uVar3 + 0x20;
          }
          if ((*(byte *)(DAT_2c48d6a0 + uVar6) & 3) == 1) {
            uVar6 = uVar6 + 0x20;
          }
          if (uVar1 != uVar6) break;
          if (uVar3 == 0) {
            return piVar4;
          }
        }
      }
    }
  }
  else {
    for (; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
      if (piVar4[8] == 0) {
        return (int *)0x0;
      }
      iVar2 = FUN_2c66b624(param_2);
      if (iVar2 == 0) {
        return piVar4;
      }
    }
  }
  return (int *)0x0;
}

