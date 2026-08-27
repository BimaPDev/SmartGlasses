/* FUN_2c47ba3e @ 0x2c47ba3e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c47ba3e(int param_1)

{
  undefined2 uVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *extraout_r3;
  undefined1 *puVar10;
  undefined1 *extraout_r3_00;
  undefined1 *extraout_r3_01;
  uint uVar11;
  int iVar12;
  undefined4 unaff_r4;
  bool in_ZR;
  bool in_CY;
  uint in_fpscr;
  undefined8 uVar13;
  undefined1 auStack_2c [16];
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  piVar4 = _LAB_2c47bb90;
  puVar5 = _LAB_2c47bb8c;
  iVar9 = _LAB_2c47bb88;
  piVar3 = _LAB_2c47bb74;
  if (in_CY && !in_ZR) {
    if (param_1 != 0x65) goto code_r0x2c6741e8;
    iVar9 = *_LAB_2c47bb74;
    *_LAB_2c47bb78 = 1;
    FUN_2c644958(iVar9);
    iVar9 = FUN_2c64418c(_LAB_2c47bb7c,0);
    *piVar3 = iVar9;
    puVar10 = extraout_r3;
  }
  else {
    switch(param_1) {
    case 0:
      *_LAB_2c47bb8c = 1;
      *(char *)(iVar9 + 0x1b9) = (char)*(undefined2 *)(iVar9 + 0xce22);
      *(undefined1 *)(iVar9 + 0x1b8) = *(undefined1 *)(iVar9 + 0xce24);
      func_0x2c47993c();
      puVar10 = (undefined1 *)0x5;
      iVar9 = *piVar4;
      *puVar5 = 5;
      if (iVar9 == 0) {
        iVar9 = FUN_2c64418c(_LAB_2c47bb94,0,0);
        *piVar4 = iVar9;
        puVar10 = extraout_r3_01;
      }
      goto FUN_2c6448b4;
    default:
code_r0x2c6741e8:
                    /* WARNING: Could not recover jumptable at 0x2c6741f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar9 = (*DAT_2c6741f4)(0x712,_LAB_2c47bb84,_LAB_2c47bb80,param_1);
      return iVar9;
    case 6:
      *_LAB_2c47bb8c = 1;
      *(undefined1 *)(iVar9 + 0x1b8) = *(undefined1 *)(iVar9 + 0xd83e);
      func_0x2c479970();
      iVar9 = *piVar4;
      *puVar5 = 0;
      FUN_2c644958(iVar9);
      *piVar4 = 0;
      uVar1 = *(undefined2 *)(_LAB_2c479a78 + 0x634);
      if (*(char *)(_LAB_2c479a78 + -0xce48) == '\x11') {
        uVar11 = FUN_2c478604(_LAB_2c479a78 + 0x433);
        if (uVar11 == 0) {
          uVar8 = (uint)*_LAB_2c479a7c;
        }
        else {
          if ((int)(uint)*_LAB_2c479a7c <= (int)uVar11) {
            uVar11 = (uint)*_LAB_2c479a7c;
          }
          uVar8 = uVar11 & 0xffff;
          *_LAB_2c479a7c = (ushort)uVar11;
        }
        iStack_1c = *_LAB_2c477408;
        puVar5 = (undefined1 *)FUN_2c46de74();
        FUN_2c66b4b8(auStack_2c,_LAB_2c47740c,puVar5[5],puVar5[4],puVar5[3],puVar5[2],puVar5[1],
                     *puVar5);
        uVar6 = FUN_2c48e738();
        FUN_2c48e5b4(uVar6,_LAB_2c477410,auStack_2c);
        FUN_2c48e518(0,uVar6,_LAB_2c477414);
        FUN_2c48e518(0,uVar6,_LAB_2c477418);
        uVar13 = VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
        FUN_2c48e518((int)uVar13,uVar6,_LAB_2c47741c);
        FUN_2c48e518(0,uVar6,_LAB_2c477420);
        uVar6 = FUN_2c48e3e8(uVar6);
        uVar7 = FUN_2c66c4ec();
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x72,_LAB_2c47742c,_LAB_2c477428,_LAB_2c477424,uVar7,uVar6);
      }
      iStack_1c = *DAT_2c47ae70;
      iVar9 = FUN_2c473878();
      if (iVar9 == 0) {
        iVar9 = FUN_2c6741e8(0x710,DAT_2c47ae84);
        if (*DAT_2c47ae70 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
          stack_chk_fail();
        }
        return iVar9;
      }
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x186,DAT_2c47ae80,DAT_2c47ae7c,DAT_2c47ae74,DAT_2c47ae78,uVar1,
            *(undefined4 *)(iVar9 + 0x14));
    case 0x10:
      iVar9 = *_LAB_2c47bb90;
      *_LAB_2c47bb8c = 8;
      break;
    case 0x12:
      iVar9 = *_LAB_2c47bb90;
      *_LAB_2c47bb8c = 9;
      break;
    case 0x13:
      uStack_18 = _LAB_2c47bb9c;
      _uStack_14 = CONCAT44(unaff_r4,_LAB_2c47bb98);
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1b9,_LAB_2c47bba4,_LAB_2c47bba0);
    }
    puVar10 = puVar5;
    if (iVar9 == 0) {
      iVar9 = FUN_2c64418c(_LAB_2c47bb94,0,0);
      *piVar4 = iVar9;
      puVar10 = extraout_r3_00;
    }
  }
FUN_2c6448b4:
  _uStack_14 = CONCAT44(puVar10,uStack_14);
  FUN_2c643ae8();
  uVar11 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar11 = getCurrentExceptionNumber();
    uVar11 = uVar11 & 0x1ff;
  }
  if (uVar11 == 0) {
    iVar12 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar12 = isIRQinterruptsEnabled();
    }
    if (iVar12 == 0) {
      iVar12 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        iVar12 = getBasePriority();
      }
      if (iVar12 == 0) {
        software_interrupt(0);
        return iVar9;
      }
    }
  }
  FUN_2c643ad8(iVar9,0xfffffffa);
  return -6;
}

