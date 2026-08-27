/* FUN_2c572770 @ 0x2c572770 */

void FUN_2c572770(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  
  piVar9 = DAT_2c5729ac;
  if (param_2 == param_1) {
    return;
  }
  iVar2 = *param_2;
  iVar8 = param_2[1];
  piVar4 = (int *)*param_1;
  uVar7 = iVar8 - iVar2;
  if ((uint)(param_1[2] - (int)piVar4) < uVar7) {
    if (uVar7 == 0) {
      iVar6 = 0;
      iVar5 = iVar6;
    }
    else {
      if (*DAT_2c5729ac == 0) {
        FUN_2c4723c4();
        *piVar9 = 1;
      }
      iVar6 = FUN_2c47245c(0,uVar7);
      iVar5 = iVar6;
    }
    for (; iVar8 != iVar2; iVar2 = iVar2 + 0x98) {
      FUN_2c571b28(iVar6,iVar2);
      iVar6 = iVar6 + 0x98;
    }
    piVar4 = (int *)param_1[1];
    piVar9 = (int *)*param_1;
    if ((int *)*param_1 != piVar4) {
      do {
        piVar3 = piVar9 + 0x26;
        (**(code **)(*piVar9 + 4))(piVar9);
        piVar9 = piVar3;
      } while (piVar4 != piVar3);
      piVar4 = (int *)*param_1;
    }
    if (piVar4 == (int *)0x0) {
      *param_1 = iVar5;
      param_1[2] = iVar5 + uVar7;
      param_1[1] = iVar5 + uVar7;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar4);
  }
  piVar9 = (int *)param_1[1];
  uVar1 = (int)piVar9 - (int)piVar4;
  if (uVar1 < uVar7) {
    iVar6 = DAT_2c5729a8 * ((int)uVar1 >> 3);
    if (0 < (int)uVar1) {
      iVar2 = iVar2 + 0xc;
      piVar9 = piVar4 + 3;
      do {
        piVar9[-1] = *(int *)(iVar2 + -4);
        FUN_2c52f5f4(piVar9,iVar2);
        piVar9[6] = *(int *)(iVar2 + 0x18);
        FUN_2c52f5f4(piVar9 + 7,iVar2 + 0x1c);
        FUN_2c52f5f4(piVar9 + 0xd,iVar2 + 0x34);
        piVar9[0x13] = *(int *)(iVar2 + 0x4c);
        piVar9[0x15] = *(int *)(iVar2 + 0x54);
        *(undefined1 *)(piVar9 + 0x16) = *(undefined1 *)(iVar2 + 0x58);
        *(undefined1 *)((int)piVar9 + 0x59) = *(undefined1 *)(iVar2 + 0x59);
        piVar9[0x17] = *(int *)(iVar2 + 0x5c);
        piVar9[0x18] = *(int *)(iVar2 + 0x60);
        piVar9[0x19] = *(int *)(iVar2 + 100);
        FUN_2c52f5f4(piVar9 + 0x1a,iVar2 + 0x68);
        iVar6 = iVar6 + -1;
        piVar9[0x20] = *(int *)(iVar2 + 0x80);
        piVar9[0x21] = *(int *)(iVar2 + 0x84);
        *(undefined1 *)(piVar9 + 0x22) = *(undefined1 *)(iVar2 + 0x88);
        iVar2 = iVar2 + 0x98;
        piVar9 = piVar9 + 0x26;
      } while (iVar6 != 0);
      piVar4 = (int *)*param_1;
      piVar9 = (int *)param_1[1];
      iVar2 = *param_2;
      iVar8 = param_2[1];
      uVar1 = (int)piVar9 - (int)piVar4;
    }
    iVar6 = iVar2 + uVar1;
    if (iVar2 + uVar1 != iVar8) {
      do {
        iVar2 = iVar6 + 0x98;
        FUN_2c571b28(piVar9,iVar6);
        iVar6 = iVar2;
        piVar9 = piVar9 + 0x26;
      } while (iVar2 != iVar8);
      piVar4 = (int *)*param_1;
    }
  }
  else {
    if (0 < (int)uVar7) {
      iVar8 = DAT_2c5729a8 * ((int)uVar7 >> 3);
      iVar2 = iVar2 + 0xc;
      piVar9 = piVar4 + 3;
      do {
        piVar9[-1] = *(int *)(iVar2 + -4);
        FUN_2c52f5f4(piVar9,iVar2);
        piVar9[6] = *(int *)(iVar2 + 0x18);
        FUN_2c52f5f4(piVar9 + 7,iVar2 + 0x1c);
        FUN_2c52f5f4(piVar9 + 0xd,iVar2 + 0x34);
        piVar9[0x13] = *(int *)(iVar2 + 0x4c);
        piVar9[0x15] = *(int *)(iVar2 + 0x54);
        *(undefined1 *)(piVar9 + 0x16) = *(undefined1 *)(iVar2 + 0x58);
        *(undefined1 *)((int)piVar9 + 0x59) = *(undefined1 *)(iVar2 + 0x59);
        piVar9[0x17] = *(int *)(iVar2 + 0x5c);
        piVar9[0x18] = *(int *)(iVar2 + 0x60);
        piVar9[0x19] = *(int *)(iVar2 + 100);
        FUN_2c52f5f4(piVar9 + 0x1a,iVar2 + 0x68);
        iVar8 = iVar8 + -1;
        piVar9[0x20] = *(int *)(iVar2 + 0x80);
        piVar9[0x21] = *(int *)(iVar2 + 0x84);
        *(undefined1 *)(piVar9 + 0x22) = *(undefined1 *)(iVar2 + 0x88);
        iVar2 = iVar2 + 0x98;
        piVar9 = piVar9 + 0x26;
      } while (iVar8 != 0);
      piVar9 = (int *)param_1[1];
      uVar1 = uVar7;
      if ((int)uVar7 < 1) {
        uVar1 = 0x98;
      }
      piVar4 = (int *)((int)piVar4 + uVar1);
    }
    for (; piVar4 != piVar9; piVar4 = piVar4 + 0x26) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    piVar4 = (int *)*param_1;
  }
  param_1[1] = (int)piVar4 + uVar7;
  return;
}

