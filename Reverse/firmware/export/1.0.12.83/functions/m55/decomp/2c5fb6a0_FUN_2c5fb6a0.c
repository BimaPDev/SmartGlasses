/* FUN_2c5fb6a0 @ 0x2c5fb6a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5fb6a0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  piVar7 = *(int **)(param_1 + 0xc);
  if (piVar7[1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5fb754,0xa2,_LAB_2c5fb750,_LAB_2c5fb74c);
  }
  if (*(char *)((int)piVar7 + 0x26) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5fb754,0x6f,_LAB_2c5fb75c,_LAB_2c5fb758,piVar7);
  }
  if (piVar7[2] == 0) {
    FUN_2c606abc(*piVar7,1);
    piVar7[2] = *piVar7;
    piVar7[3] = *piVar7;
  }
  iVar4 = 0;
  if (piVar7[2] != 0) {
    iVar4 = FUN_2c606c30();
    if ((DAT_2c5fb678 == iVar4) && (iVar4 = FUN_2c606b94(piVar7[2],1), iVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5fb684,0x85,DAT_2c5fb690,DAT_2c5fb68c);
    }
    iVar4 = piVar7[2];
  }
  uVar2 = DAT_2c5fb698;
  uVar1 = DAT_2c5fb694;
  FUN_2c606abc(iVar4,1);
  do {
    iVar9 = *piVar7;
    iVar4 = piVar7[2];
    if ((iVar9 == 0) || (iVar4 == 0)) {
LAB_2c5fb556:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5fb684,0x57,DAT_2c5fb680,DAT_2c5fb67c,iVar4);
    }
    iVar6 = iVar4;
    if (iVar9 != iVar4) {
      while (iVar6 = *(int *)(iVar6 + 4), iVar9 != iVar6) {
        if (iVar6 == 0) goto LAB_2c5fb556;
      }
    }
    iVar6 = FUN_2c6041fc(iVar4);
    uVar3 = DAT_2c5fb69c;
    if (iVar6 == 0) {
      do {
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5fb684,0x30,uVar3,uVar1,DAT_2c5fb688);
        }
        if (*(int *)(iVar4 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5fb684,0x31,uVar3,uVar1,uVar2);
        }
        if (iVar9 == iVar4) {
          piVar7[3] = piVar7[2];
          goto LAB_2c5fb568;
        }
        iVar8 = *(int *)(iVar4 + 4);
        iVar6 = FUN_2c604204(iVar4);
        iVar5 = FUN_2c6041fc(iVar8);
        iVar4 = iVar8;
      } while (iVar5 + -1 <= iVar6);
      iVar4 = FUN_2c6041dc(iVar8,iVar6 + 1);
    }
    else {
      iVar4 = FUN_2c6041dc(iVar4,0);
    }
    piVar7[3] = piVar7[2];
    if (iVar4 == 0) {
LAB_2c5fb568:
      if (piVar7[10] << 0x1f < 0) {
        *(undefined1 *)((int)piVar7 + 0x26) = 1;
      }
      if ((piVar7[10] << 0x1e < 0) && (*(char *)((int)piVar7 + 0x25) != '\0')) {
        *(undefined1 *)((int)piVar7 + 0x26) = 1;
        return 2;
      }
      return 2;
    }
    piVar7[2] = iVar4;
    iVar4 = FUN_2c5fb510(piVar7);
    if (iVar4 == 1) {
      return 1;
    }
  } while( true );
}

