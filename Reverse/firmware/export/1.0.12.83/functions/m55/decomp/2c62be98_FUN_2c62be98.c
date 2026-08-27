/* FUN_2c62be98 @ 0x2c62be98 */

int FUN_2c62be98(undefined4 param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  puVar3 = DAT_2c472668;
  piVar1 = DAT_2c472664;
  if (param_2 == 0) {
    return DAT_2c62bea4;
  }
  if (DAT_2c472638 <= param_2) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x135,DAT_2c47264c,DAT_2c472648,DAT_2c472644,DAT_2c472640,DAT_2c472638);
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x13a,DAT_2c47264c,DAT_2c472648,DAT_2c472650,DAT_2c472640);
  }
  if (*DAT_2c472664 != 0) {
    FUN_2c644044(*DAT_2c472668,0xffffffff);
    iVar4 = FUN_2c473300(*piVar1,param_1,param_2);
    iVar2 = DAT_2c47263c;
    if (iVar4 != 0) {
      FUN_2c674268(iVar4,0,param_2);
      iVar5 = FUN_2c4731dc(iVar4);
      uVar8 = 0;
      uVar6 = iVar5 + *(int *)(iVar2 + 0x4c);
      *(uint *)(iVar2 + 0x4c) = uVar6;
      if (uVar6 < *(uint *)(iVar2 + 0x54)) {
        uVar6 = *(uint *)(iVar2 + 0x54);
      }
      *(uint *)(iVar2 + 0x54) = uVar6;
      *(int *)(iVar2 + 0x50) = *(int *)(iVar2 + 0x50) + 1;
      iVar5 = iVar2;
      do {
        piVar1 = (int *)(iVar5 + 0x1c);
        iVar5 = iVar5 + 0xc;
        uVar8 = uVar8 + *piVar1;
      } while (iVar2 + 0x90 != iVar5);
      uVar7 = *puVar3;
      uVar6 = *(uint *)(iVar2 + 0x14);
      if (*(uint *)(iVar2 + 0x14) < uVar8) {
        uVar6 = uVar8;
      }
      *(uint *)(iVar2 + 0x14) = uVar6;
      FUN_2c644080(uVar7);
      return iVar4;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x2ec,DAT_2c47264c,DAT_2c472648,DAT_2c47265c,DAT_2c472658,param_2);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x13f,DAT_2c47264c,DAT_2c472648,DAT_2c472654,DAT_2c472640);
}

