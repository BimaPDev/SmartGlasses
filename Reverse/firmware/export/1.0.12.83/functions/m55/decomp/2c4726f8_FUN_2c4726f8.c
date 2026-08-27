/* FUN_2c4726f8 @ 0x2c4726f8 */

int FUN_2c4726f8(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  puVar2 = DAT_2c4727b4;
  if ((param_1 != 0) && (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(4,param_1);
  }
  if (param_1 == 0) {
    iVar7 = FUN_2c47245c(4,param_2);
    return iVar7;
  }
  FUN_2c644044(*DAT_2c4727b4,0xffffffff);
  uVar3 = FUN_2c4731dc(param_1);
  iVar4 = FUN_2c473544(*DAT_2c4727b8,param_1,param_2);
  iVar7 = DAT_2c4727bc;
  if (iVar4 != 0) {
    iVar5 = FUN_2c4731dc();
    uVar6 = *(uint *)(iVar7 + 0x4c);
    if (uVar6 < uVar3) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x169,DAT_2c4727c4,DAT_2c4727c8,DAT_2c4727c0,param_1,uVar6,uVar3);
    }
    uVar8 = iVar5 + (uVar6 - uVar3);
    uVar6 = 0;
    *(uint *)(iVar7 + 0x4c) = uVar8;
    uVar3 = *(uint *)(iVar7 + 0x54);
    if (*(uint *)(iVar7 + 0x54) < uVar8) {
      uVar3 = uVar8;
    }
    *(uint *)(iVar7 + 0x54) = uVar3;
    iVar7 = DAT_2c4727bc;
    do {
      piVar1 = (int *)(iVar7 + 0x1c);
      iVar7 = iVar7 + 0xc;
      uVar6 = uVar6 + *piVar1;
    } while (DAT_2c4727bc + 0x90 != iVar7);
    uVar3 = *(uint *)(DAT_2c4727bc + 0x14);
    if (*(uint *)(DAT_2c4727bc + 0x14) < uVar6) {
      uVar3 = uVar6;
    }
    *(uint *)(DAT_2c4727bc + 0x14) = uVar3;
  }
  FUN_2c644080(*puVar2);
  return iVar4;
}

