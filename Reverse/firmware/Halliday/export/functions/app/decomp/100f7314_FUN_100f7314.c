/* FUN_100f7314 @ 0x100f7314 */

void FUN_100f7314(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  piVar2 = DAT_100f669c;
  piVar1 = DAT_100f667c;
  if (param_1 == (int *)0x0) {
    return;
  }
  if (0 < *DAT_100f6678) {
    piVar4 = (int *)*DAT_100f667c;
    if (param_1 == piVar4) {
      iVar8 = 0;
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      iVar12 = 0x38 - (int)piVar4;
      do {
        iVar5 = iVar5 + 1;
        iVar8 = iVar12 + (int)piVar4;
        piVar4 = piVar4 + 0xe;
        if (iVar5 == *DAT_100f6678) {
          return;
        }
      } while (param_1 != piVar4);
    }
    if ((int *)*piVar4 != (int *)0x0) {
      if (1 < (uint)piVar4[10]) {
        piVar4[10] = piVar4[10] - 1;
        return;
      }
      iVar12 = piVar4[1];
      iVar11 = 0;
      iVar9 = *(int *)*piVar4;
      uVar10 = (uint)*(ushort *)(piVar4 + 5);
      while( true ) {
        iVar3 = FUN_10138c9e();
        iVar7 = iVar11 * 0x10;
        if (iVar3 <= iVar11) break;
        iVar3 = *piVar2 + iVar11 * 0x10;
        if ((iVar9 == *(int *)(*piVar2 + iVar7)) && (uVar10 == *(uint *)(iVar3 + 8))) {
          if (iVar12 != *(int *)(iVar3 + 4)) {
            FUN_100a5b78((DAT_100f6684 - DAT_100f6680) * 0x20 & 0xff00U | 0x2e80031,DAT_100f668c,
                         DAT_100f6688,iVar12);
            iVar3 = *piVar2 + iVar7;
          }
          iVar9 = *(int *)(iVar3 + 0xc);
          if (0 < iVar9) {
            iVar9 = iVar9 + -1;
            *(int *)(iVar3 + 0xc) = iVar9;
          }
          if (((iVar9 == 0) && (uVar10 != 0x80)) && (*(int *)(iVar3 + 4) != 0)) {
            FUN_100f9880(iVar12);
            iVar12 = *piVar2;
            iVar9 = iVar12 + iVar7;
            *(undefined4 *)(iVar9 + 4) = 0;
            *(undefined4 *)(iVar9 + 8) = 0;
            *(undefined4 *)(iVar9 + 0xc) = 0;
            *(undefined4 *)(iVar12 + iVar7) = 0;
          }
          goto LAB_100f65aa;
        }
        iVar11 = iVar11 + 1;
      }
      FUN_100a5b78(DAT_100f6690 | (DAT_100f6684 - DAT_100f6680) * 0x20 & 0xff00U,DAT_100f668c,
                   DAT_100f6694,uVar10,iVar12);
LAB_100f65aa:
      iVar9 = *(int *)(*piVar1 + iVar8);
      iVar12 = *piVar1 + iVar8;
      uVar10 = *(uint *)(iVar9 + 0x20);
      if (uVar10 < 2) {
        iVar12 = FUN_10138cac(iVar12);
        piVar2 = DAT_100f669c;
        if (iVar12 == 0) {
          iVar9 = **(int **)(*piVar1 + iVar8);
          for (iVar12 = 0; iVar11 = FUN_10138c9e(), iVar12 < iVar11; iVar12 = iVar12 + 1) {
            iVar11 = *piVar2;
            iVar7 = iVar12 * 0x10;
            iVar3 = iVar11 + iVar12 * 0x10;
            if (*(int **)(iVar3 + 4) != (int *)0x0) {
              iVar6 = **(int **)(iVar3 + 4);
              if (iVar6 == 0) {
                *(undefined4 *)(iVar3 + 4) = 0;
                *(undefined4 *)(iVar3 + 8) = 0;
                *(undefined4 *)(iVar3 + 0xc) = 0;
                *(undefined4 *)(iVar11 + iVar7) = 0;
              }
              else if (iVar9 == iVar6) {
                FUN_100f9880();
                iVar11 = *piVar2;
                iVar3 = iVar11 + iVar7;
                *(undefined4 *)(iVar3 + 4) = 0;
                *(undefined4 *)(iVar3 + 8) = 0;
                *(undefined4 *)(iVar3 + 0xc) = 0;
                *(undefined4 *)(iVar11 + iVar7) = 0;
              }
            }
          }
          FUN_100f943c(iVar9);
          FUN_100e833c(*(undefined4 *)(*piVar1 + iVar8));
          iVar12 = *piVar1 + iVar8;
        }
        else {
          iVar12 = *piVar1 + iVar8;
          *(undefined4 *)(*(int *)(*piVar1 + iVar8) + 0x20) = 0;
        }
      }
      else {
        *(uint *)(iVar9 + 0x20) = uVar10 - 1;
      }
      piVar1 = DAT_100f6698;
      FUN_1011ea48(iVar12,0,0x38);
      iVar8 = *piVar1 + iVar5 * 0x50;
      if (*(int *)(iVar8 + 0xc) != 0) {
        FUN_100e833c();
        iVar8 = *piVar1 + iVar5 * 0x50;
        *(undefined4 *)(iVar8 + 0xc) = 0;
        *(undefined4 *)(iVar8 + 0x10) = 0;
        *(undefined4 *)(iVar8 + 0x14) = 0;
      }
      if (*(int *)(iVar8 + 0x34) == 1) {
        *(undefined4 *)(iVar8 + 0x34) = 0;
      }
    }
  }
  return;
}

