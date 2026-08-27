/* FUN_2c59e29c @ 0x2c59e29c */

uint FUN_2c59e29c(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  
  uVar7 = param_1 + 4;
  if (*(uint *)(param_1 + 8) == 0) {
    return uVar7;
  }
  uVar8 = *param_2;
  uVar5 = param_2[1];
  uVar2 = *(uint *)(param_1 + 8);
  uVar6 = uVar7;
  uVar9 = param_4;
  do {
    while( true ) {
      uVar3 = uVar2;
      uVar4 = *(uint *)(uVar3 + 0x14);
      uVar2 = uVar4;
      if (uVar5 <= uVar4) {
        uVar2 = uVar5;
      }
      if ((uVar2 == 0) ||
         (iVar1 = FUN_2c66960c(*(undefined4 *)(uVar3 + 0x10),uVar8,uVar2,param_4,uVar9), iVar1 == 0)
         ) {
        iVar1 = uVar4 - uVar5;
      }
      param_4 = *(uint *)(uVar3 + 8);
      if (iVar1 < 0) break;
      uVar2 = param_4;
      uVar6 = uVar3;
      if (param_4 == 0) goto LAB_2c59e2d6;
    }
    uVar2 = *(uint *)(uVar3 + 0xc);
  } while (*(uint *)(uVar3 + 0xc) != 0);
LAB_2c59e2d6:
  if (uVar7 != uVar6) {
    uVar3 = *(uint *)(uVar6 + 0x14);
    uVar2 = uVar3;
    if (uVar5 <= uVar3) {
      uVar2 = uVar5;
    }
    if ((uVar2 == 0) ||
       (iVar1 = FUN_2c66960c(uVar8,*(undefined4 *)(uVar6 + 0x10),uVar2,param_4,uVar9), iVar1 == 0))
    {
      iVar1 = uVar5 - uVar3;
    }
    uVar6 = uVar6 & ~(iVar1 >> 0x20);
    if (iVar1 < 0) {
      uVar6 = uVar7;
    }
  }
  return uVar6;
}

