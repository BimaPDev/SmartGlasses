/* FUN_2c58c310 @ 0x2c58c310 */

int FUN_2c58c310(int *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  
  uVar5 = param_1[1];
  uVar6 = *param_2;
  iVar1 = uVar6 - uVar5 * (uVar6 / uVar5);
  piVar7 = *(int **)(*param_1 + iVar1 * 4);
  if (piVar7 != (int *)0x0) {
    uVar4 = ((int *)*piVar7)[1];
    piVar2 = (int *)*piVar7;
    while (piVar3 = piVar2, uVar6 != uVar4) {
      piVar2 = (int *)*piVar3;
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      uVar4 = piVar2[1];
      piVar7 = piVar3;
      if (iVar1 != uVar4 - uVar5 * (uVar4 / uVar5)) {
        return 0;
      }
    }
    if (*piVar7 != 0) {
      return *piVar7;
    }
  }
  return 0;
}

