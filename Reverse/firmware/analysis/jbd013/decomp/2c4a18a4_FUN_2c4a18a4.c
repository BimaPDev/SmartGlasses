/* FUN_2c4a18a4 @ 0x2c4a18a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a18a4(void)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uStack_20;
  uint auStack_1c [2];
  undefined4 uStack_14;
  
  uVar6 = _LAB_2c4a1ae8;
  uVar5 = _LAB_2c4a1ae4;
  piVar4 = _LAB_2c4a1ae0;
  piVar3 = _LAB_2c4a1ab8;
  piVar2 = _LAB_2c4a1ab4;
  uStack_14 = *_LAB_2c4a1ab0;
  FUN_2c6471b4(*_LAB_2c4a1ac0,0xffffffff);
  iVar7 = FUN_2c4969c8();
  if (iVar7 != 0) {
    FUN_2c4967a0(0);
  }
  uStack_20 = 0;
  auStack_1c[0] = 0;
  *piVar2 = *piVar2 + 1;
  FUN_2c4a09bc(0,&uStack_20);
  iVar7 = FUN_2c4a09bc(0x184,auStack_1c);
  if (iVar7 == 0) {
    auStack_1c[0] = auStack_1c[0] & 0xff00;
    uVar1 = (undefined1)(auStack_1c[0] >> 8);
    if (*piVar2 == 1) {
      *_LAB_2c4a1ac8 = uVar1;
      iVar7 = *piVar4;
    }
    else {
      if (*piVar2 == 2) {
        _LAB_2c4a1ac8[1] = uVar1;
      }
      else if (*piVar2 == 3) {
        _LAB_2c4a1ac8[2] = uVar1;
      }
      iVar7 = *piVar4;
    }
    if (iVar7 == 0) {
      iVar7 = FUN_2c673c88();
      *piVar4 = iVar7;
    }
    iVar7 = FUN_2c673c88();
    iVar12 = *piVar4;
    iVar8 = FUN_2c6741d8(iVar7 - iVar12);
    uVar11 = auStack_1c[0] >> 8;
    *piVar3 = iVar8 + *piVar3;
    uVar9 = FUN_2c6741d8(iVar7 - iVar12);
    iVar8 = *piVar3;
    uVar10 = FUN_2c6741d8(iVar7);
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x5b1,uVar6,uVar5,_LAB_2c4a1acc,uVar11,uVar9,iVar8,uVar10);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x2f8,uVar6,uVar5,_LAB_2c4a1adc);
}

