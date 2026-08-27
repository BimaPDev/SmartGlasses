/* FUN_2c4aa790 @ 0x2c4aa790 */

undefined4 FUN_2c4aa790(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x40,DAT_2c4aa8c8,DAT_2c4aa8c4,DAT_2c4aa8dc,param_1,DAT_2c4aa8bc);
  }
  uVar3 = *(uint *)(param_2 + 4);
  if (uVar3 != 0) {
    iVar6 = *(int *)(param_2 + 8);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x4c,DAT_2c4aa8c8,DAT_2c4aa8c4,DAT_2c4aa8cc,param_1,DAT_2c4aa8bc);
    }
    uVar2 = 0;
    while( true ) {
      uVar2 = uVar2 + 1;
      if (*(int *)(iVar6 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x51,DAT_2c4aa8c8,DAT_2c4aa8c4,DAT_2c4aa8c0,param_1,DAT_2c4aa8bc,0);
      }
      if (*(int *)(iVar6 + 0x38) == 0) break;
      if (uVar2 == uVar3) {
        uVar2 = 0;
        do {
          uVar7 = uVar2 + 1;
          iVar4 = iVar6 + 0x4c;
          for (uVar5 = uVar7; uVar5 < uVar3; uVar5 = uVar5 + 1) {
            iVar1 = FUN_2c66c540(iVar6,iVar4,0x32);
            if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              TRACE(4,0x5f,DAT_2c4aa8c8,DAT_2c4aa8c4,DAT_2c4aa8d4,param_1,DAT_2c4aa8bc,uVar2,uVar5,
                    iVar4);
            }
            iVar4 = iVar4 + 0x4c;
          }
          uVar2 = uVar7;
          iVar6 = iVar6 + 0x4c;
        } while (uVar7 != uVar3);
        return 0;
      }
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x56,DAT_2c4aa8c8,DAT_2c4aa8c4,DAT_2c4aa8d0,param_1,DAT_2c4aa8bc);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x45,DAT_2c4aa8c8,DAT_2c4aa8c4,DAT_2c4aa8d8,param_1,DAT_2c4aa8bc,0);
}

