/* FUN_2c4a8dce @ 0x2c4a8dce */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4a8dce(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x328,DAT_2c4a8f04,DAT_2c4a8efc,_LAB_2c4a8f0c,_LAB_2c4a8f08,param_1);
  }
  piVar9 = *(int **)(_LAB_2c4a8ef4 + param_1 * 4);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x32d,DAT_2c4a8f04,DAT_2c4a8efc,_LAB_2c4a8f10,_LAB_2c4a8f08,param_1);
  }
  if (param_2 != 0) {
    *(undefined1 *)(piVar9 + 5) = 0;
    FUN_2c4abfec(*piVar9);
    return 0;
  }
  piVar7 = (int *)*piVar9;
  *(undefined1 *)(piVar9 + 5) = 1;
  uVar5 = _LAB_2c4a8f14;
  uVar2 = DAT_2c4a8efc;
  uVar1 = _LAB_2c4a8ef8;
  if ((((char)piVar7[0x2e] == '\x01') && (piVar9[4] != 0)) && (*piVar7 != 1)) {
    iVar8 = FUN_2c4ab5c8(piVar7,0,*(char *)((int)piVar9 + 0xe) != '\0');
    uVar6 = DAT_2c4a8f18;
    uVar4 = DAT_2c4a8f00;
    uVar3 = DAT_2c4a8efc;
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1c8,DAT_2c4a8f04,uVar2,uVar1,(char)piVar9[3],uVar5);
    }
    if (((piVar9[4] != 0) && ((char)piVar9[5] != '\0')) &&
       (iVar8 = FUN_2c4aba70(*piVar9), iVar8 != 0)) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1a4,DAT_2c4a8f04,uVar3,uVar6,(char)piVar9[3],uVar4);
    }
  }
  return 0;
}

