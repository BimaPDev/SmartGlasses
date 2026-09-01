/* FUN_1005c1ac @ 0x1005c1ac */

void FUN_1005c1ac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = 0;
  uVar1 = 0xffffffff;
  iVar2 = 0x7fffffff;
  iVar4 = 0;
  piVar3 = DAT_1005c214;
  do {
    if (*piVar3 != 0) {
      uVar6 = piVar3[2];
      iVar7 = piVar3[3];
      if ((int)((iVar7 - iVar2) - (uint)(uVar6 < uVar1)) < 0 !=
          (SBORROW4(iVar7,iVar2) != SBORROW4(iVar7 - iVar2,(uint)(uVar6 < uVar1)))) {
        uVar1 = uVar6;
        iVar2 = iVar7;
        iVar5 = iVar4;
      }
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 6;
  } while (iVar4 != 5);
  *(int *)(DAT_1005c218 + 0x34) = iVar5;
  if (iVar2 < 0) {
    uVar1 = 0;
    iVar2 = 0;
  }
  FUN_10115a38(DAT_1005c218,0xffffffff,-2 - uVar1,(-1 - iVar2) - (uint)(0xfffffffe < uVar1),
               0xffffffff,0xffffffff,param_3);
  return;
}

