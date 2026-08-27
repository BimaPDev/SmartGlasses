/* FUN_2c5fb510 @ 0x2c5fb510 */

undefined4 FUN_2c5fb510(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = 0;
  if (param_1[2] != 0) {
    iVar4 = FUN_2c606c30();
    if ((DAT_2c5fb678 == iVar4) && (iVar4 = FUN_2c606b94(param_1[2],1), iVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5fb684,0x85,DAT_2c5fb690,DAT_2c5fb68c);
    }
    iVar4 = param_1[2];
  }
  uVar2 = DAT_2c5fb698;
  uVar1 = DAT_2c5fb694;
  FUN_2c606abc(iVar4,1);
  do {
    iVar8 = *param_1;
    iVar4 = param_1[2];
    if ((iVar8 == 0) || (iVar4 == 0)) {
LAB_2c5fb556:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5fb684,0x57,DAT_2c5fb680,DAT_2c5fb67c,iVar4);
    }
    iVar6 = iVar4;
    if (iVar8 != iVar4) {
      while (iVar6 = *(int *)(iVar6 + 4), iVar8 != iVar6) {
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
        if (iVar8 == iVar4) {
          param_1[3] = param_1[2];
          goto LAB_2c5fb568;
        }
        iVar7 = *(int *)(iVar4 + 4);
        iVar6 = FUN_2c604204(iVar4);
        iVar5 = FUN_2c6041fc(iVar7);
        iVar4 = iVar7;
      } while (iVar5 + -1 <= iVar6);
      iVar4 = FUN_2c6041dc(iVar7,iVar6 + 1);
    }
    else {
      iVar4 = FUN_2c6041dc(iVar4,0);
    }
    param_1[3] = param_1[2];
    if (iVar4 == 0) {
LAB_2c5fb568:
      if (param_1[10] << 0x1f < 0) {
        *(undefined1 *)((int)param_1 + 0x26) = 1;
      }
      if ((param_1[10] << 0x1e < 0) && (*(char *)((int)param_1 + 0x25) != '\0')) {
        *(undefined1 *)((int)param_1 + 0x26) = 1;
        return 2;
      }
      return 2;
    }
    param_1[2] = iVar4;
    iVar4 = FUN_2c5fb510(param_1);
    if (iVar4 == 1) {
      return 1;
    }
  } while( true );
}

