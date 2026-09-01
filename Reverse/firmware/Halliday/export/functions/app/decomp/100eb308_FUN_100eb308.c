/* FUN_100eb308 @ 0x100eb308 */

undefined4 FUN_100eb308(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  
  if (param_2 == 0) {
    FUN_100a5b78(DAT_100eb538 | (DAT_100eb4fc - DAT_100eb500) * 0x20 & 0xff00U,DAT_100eb50c,
                 DAT_100eb53c);
LAB_100eb4f2:
    uVar2 = 0;
  }
  else {
    iVar7 = param_1 + 0x18;
    FUN_1006bc30(iVar7);
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_1012d1f4();
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    iVar1 = FUN_10138fe6();
    if (iVar1 == 0) {
      iVar3 = FUN_1006ba84(iVar7,param_2,1);
      iVar1 = 0;
      if (iVar3 < 0) {
        FUN_100a5b78(DAT_100eb52c | (DAT_100eb4fc - DAT_100eb500) * 0x20 & 0xff00U,DAT_100eb50c,
                     DAT_100eb530,param_2);
      }
      else {
LAB_100eb41e:
        iVar3 = FUN_1011ea10(param_2);
        iVar3 = thunk_FUN_1009f30c(iVar3 + 1,DAT_100eb4f8);
        *(int *)(param_1 + 0x38) = iVar3;
        if (iVar3 != 0) {
          iVar4 = FUN_1011ea10(param_2);
          iVar7 = DAT_100eb534;
          FUN_1011ea48(iVar3,0,iVar4 + 1);
          FUN_1011e9f0(*(undefined4 *)(param_1 + 0x38),param_2);
          piVar9 = *(int **)(iVar7 + 4);
          piVar5 = (int *)0x0;
          while (piVar8 = piVar5, piVar5 = piVar9, piVar5 != (int *)0x0) {
            piVar9 = (int *)piVar5[0xf];
            if (param_1 == *piVar5) {
              if (piVar8 != (int *)0x0) {
                piVar8[0xf] = (int)piVar9;
              }
              if (*(int **)(iVar7 + 4) == piVar5) {
                *(int **)(iVar7 + 4) = piVar9;
              }
              FUN_10138fd0(1,piVar5);
              piVar5 = piVar8;
            }
          }
          if (iVar1 == 0) {
            return 0;
          }
          FUN_1012d1f4(iVar1);
          goto LAB_100eb4f2;
        }
        FUN_100a5b78((DAT_100eb4fc - DAT_100eb500) * 0x20 & 0xff00U | 0x6100031,DAT_100eb50c,
                     DAT_100eb528);
        if (iVar1 != 0) goto LAB_100eb3f6;
      }
    }
    else {
      iVar1 = FUN_1011ea10(param_2);
      iVar1 = thunk_FUN_1009f30c(iVar1 + 1,DAT_100eb4f8);
      uVar6 = (DAT_100eb4fc - DAT_100eb500) * 0x20 & 0xff00;
      if (iVar1 == 0) {
        FUN_100a5b78(DAT_100eb504 | uVar6,DAT_100eb50c,DAT_100eb508);
      }
      else {
        iVar3 = FUN_1011ea10(param_2);
        FUN_1011ea48(iVar1,0,iVar3 + 1);
        FUN_1011e9f0(iVar1,param_2);
        iVar3 = FUN_1011ea08(iVar1,0x3a);
        if (iVar3 != -1) {
          *(undefined1 *)(iVar3 + 1) = 0x42;
          iVar4 = FUN_1006ba84(iVar7,iVar1,1);
          if (iVar4 < 0) {
            uVar10 = uVar6 | DAT_100eb540;
            FUN_100a5b78(uVar10,DAT_100eb50c,DAT_100eb510,iVar1);
            *(undefined1 *)(iVar3 + 1) = 0x41;
            iVar3 = FUN_1006ba84(iVar7,iVar1,1);
            if (iVar3 < 0) {
              FUN_100a5b78(uVar10,DAT_100eb50c,DAT_100eb510,iVar1);
              FUN_100a5b78(DAT_100eb514 | uVar6,DAT_100eb50c,DAT_100eb518,param_2);
              goto LAB_100eb3f6;
            }
          }
          FUN_100a5b78(DAT_100eb520 | uVar6,DAT_100eb50c,DAT_100eb524,iVar1);
          goto LAB_100eb41e;
        }
        FUN_100a5b78(uVar6 | 0x5e80031,DAT_100eb50c,DAT_100eb51c);
LAB_100eb3f6:
        FUN_1012d1f4(iVar1);
      }
    }
    FUN_1006bc30(iVar7);
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_1012d1f4();
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

