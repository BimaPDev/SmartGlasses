/* FUN_2c5fbb60 @ 0x2c5fbb60 */

int FUN_2c5fbb60(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  if (999 < *(int *)(param_2 + 4) - 1U) {
    return 0;
  }
  if (((param_1 != (int *)0x0) && (param_1[3] != 0)) && (iVar1 = FUN_2c5fb9e0(*param_1), iVar1 != 0)
     ) {
    iVar7 = param_1[2];
    if (iVar7 == 0) {
      uVar5 = param_1[3];
      piVar2 = (int *)param_1[1];
      iVar7 = (**(code **)*param_1)(uVar5,4);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c5fbc60,0x6a,DAT_2c5fbc5c,DAT_2c5fbc58);
      }
      if (piVar2 != (int *)0x0) {
        piVar6 = (int *)(iVar7 + -4);
        do {
          piVar6 = piVar6 + 1;
          *piVar6 = (int)piVar2;
          piVar2 = (int *)*piVar2;
        } while (piVar2 != (int *)0x0);
      }
      FUN_2c66aea0(iVar7,uVar5,4,DAT_2c5fbc54);
      if (uVar5 < 2) {
        iVar4 = 1;
      }
      else {
        iVar4 = 0;
        uVar8 = 1;
        do {
          iVar9 = *(int *)(iVar7 + uVar8 * 4);
          iVar10 = iVar4 * 4;
          uVar8 = uVar8 + 1;
          iVar3 = FUN_2c66b624(*(undefined4 *)(iVar9 + 4),
                               *(undefined4 *)(*(int *)(iVar7 + iVar4 * 4) + 4));
          if (iVar3 != 0) {
            iVar4 = iVar4 + 1;
            *(int *)(iVar10 + iVar7 + 4) = iVar9;
          }
        } while (uVar5 != uVar8);
        iVar4 = iVar4 + 1;
      }
      param_1[2] = iVar7;
      param_1[3] = iVar4;
    }
    else {
      iVar4 = param_1[3];
    }
    piVar2 = (int *)FUN_2c6684dc(iVar1,iVar7,iVar4,4,DAT_2c5fbc50);
    (**(code **)(*param_1 + 8))(iVar1);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      if (param_1[5] == 0) {
        uVar5 = *(uint *)(iVar1 + 0x14);
        iVar7 = param_1[4];
      }
      else {
        iVar7 = param_1[4];
        uVar5 = *(uint *)(iVar1 + 0x14);
        if ((uint)(param_1[5] - iVar7) < uVar5) {
          return 0;
        }
      }
      param_1[4] = uVar5 + iVar7;
      return iVar1;
    }
  }
  return 0;
}

