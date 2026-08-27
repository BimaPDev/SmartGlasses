/* FUN_2c5745f2 @ 0x2c5745f2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5745f2(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  piVar4 = _LAB_2c5748d8;
  iVar3 = *param_2;
  iVar9 = param_2[1];
  piVar6 = (int *)*param_1;
  uVar5 = iVar9 - iVar3;
  if ((uint)(param_1[2] - (int)piVar6) < uVar5) {
    if (uVar5 == 0) {
      iVar10 = 0;
      iVar8 = iVar10;
    }
    else {
      if (*_LAB_2c5748d8 == 0) {
        FUN_2c4723c4();
        *piVar4 = 1;
      }
      iVar10 = FUN_2c47245c(0,uVar5);
      iVar8 = iVar10;
    }
    for (; iVar9 != iVar3; iVar3 = iVar3 + 0xf0) {
      FUN_2c573370(iVar10,iVar3);
      iVar10 = iVar10 + 0xf0;
    }
    piVar6 = (int *)param_1[1];
    piVar4 = (int *)*param_1;
    if ((int *)*param_1 != piVar6) {
      do {
        piVar7 = piVar4 + 0x3c;
        (**(code **)(*piVar4 + 4))(piVar4);
        piVar4 = piVar7;
      } while (piVar6 != piVar7);
      piVar6 = (int *)*param_1;
    }
    if (piVar6 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,piVar6);
    }
    *param_1 = iVar8;
    param_1[2] = uVar5 + iVar8;
    param_1[1] = uVar5 + iVar8;
    return;
  }
  piVar4 = (int *)param_1[1];
  uVar1 = (int)piVar4 - (int)piVar6;
  if (uVar1 < uVar5) {
    iVar10 = _LAB_2c5748d4 * ((int)uVar1 >> 4);
    if (0 < (int)uVar1) {
      uVar2 = uVar1;
      iVar3 = iVar3 + 4;
      piVar4 = piVar6 + 1;
      do {
        FUN_2c52f5f4(piVar4,iVar3,uVar1,uVar2,param_4);
        FUN_2c52f5f4(piVar4 + 6,iVar3 + 0x18);
        FUN_2c52f5f4(piVar4 + 0xc,iVar3 + 0x30);
        FUN_2c52f5f4(piVar4 + 0x12,iVar3 + 0x48);
        iVar9 = *(int *)(iVar3 + 0x68);
        piVar4[0x19] = *(int *)(iVar3 + 100);
        piVar4[0x1a] = iVar9;
        iVar9 = *(int *)(iVar3 + 0x70);
        piVar4[0x1b] = *(int *)(iVar3 + 0x6c);
        piVar4[0x1c] = iVar9;
        FUN_2c52f5f4(piVar4 + 0x1d,iVar3 + 0x74);
        FUN_2c52f5f4(piVar4 + 0x23,iVar3 + 0x8c);
        iVar10 = iVar10 + -1;
        iVar9 = *(int *)(iVar3 + 0xa8);
        piVar4[0x29] = *(int *)(iVar3 + 0xa4);
        piVar4[0x2a] = iVar9;
        uVar1 = *(uint *)(iVar3 + 0xac);
        iVar9 = *(int *)(iVar3 + 0xb0);
        piVar4[0x2b] = uVar1;
        piVar4[0x2c] = iVar9;
        piVar4[0x2d] = *(int *)(iVar3 + 0xb4);
        piVar4[0x2e] = *(int *)(iVar3 + 0xb8);
        piVar4[0x2f] = *(int *)(iVar3 + 0xbc);
        piVar4[0x30] = *(int *)(iVar3 + 0xc0);
        piVar4[0x31] = *(int *)(iVar3 + 0xc4);
        piVar4[0x32] = *(int *)(iVar3 + 200);
        piVar4[0x33] = *(int *)(iVar3 + 0xcc);
        piVar4[0x34] = *(int *)(iVar3 + 0xd0);
        piVar4[0x35] = *(int *)(iVar3 + 0xd4);
        piVar4[0x36] = *(int *)(iVar3 + 0xd8);
        piVar4[0x37] = *(int *)(iVar3 + 0xdc);
        piVar4[0x38] = *(int *)(iVar3 + 0xe0);
        piVar4[0x39] = *(int *)(iVar3 + 0xe4);
        uVar2 = *(uint *)(iVar3 + 0xe8);
        piVar4[0x3a] = uVar2;
        iVar3 = iVar3 + 0xf0;
        piVar4 = piVar4 + 0x3c;
      } while (iVar10 != 0);
      piVar6 = (int *)*param_1;
      piVar4 = (int *)param_1[1];
      iVar3 = *param_2;
      iVar9 = param_2[1];
      uVar1 = (int)piVar4 - (int)piVar6;
    }
    iVar10 = iVar3 + uVar1;
    if (iVar3 + uVar1 == iVar9) {
      iVar3 = uVar5 + (int)piVar6;
      goto LAB_2c57473a;
    }
    do {
      iVar3 = iVar10 + 0xf0;
      FUN_2c573370(piVar4,iVar10);
      iVar10 = iVar3;
      piVar4 = piVar4 + 0x3c;
    } while (iVar3 != iVar9);
  }
  else {
    if (0 < (int)uVar5) {
      iVar10 = _LAB_2c5748d4 * ((int)uVar5 >> 4);
      iVar9 = _LAB_2c5748d4;
      iVar3 = iVar3 + 4;
      piVar4 = piVar6 + 1;
      do {
        FUN_2c52f5f4(piVar4,iVar3,uVar1,iVar9,param_4);
        FUN_2c52f5f4(piVar4 + 6,iVar3 + 0x18);
        FUN_2c52f5f4(piVar4 + 0xc,iVar3 + 0x30);
        FUN_2c52f5f4(piVar4 + 0x12,iVar3 + 0x48);
        iVar9 = *(int *)(iVar3 + 0x68);
        piVar4[0x19] = *(int *)(iVar3 + 100);
        piVar4[0x1a] = iVar9;
        iVar9 = *(int *)(iVar3 + 0x70);
        piVar4[0x1b] = *(int *)(iVar3 + 0x6c);
        piVar4[0x1c] = iVar9;
        FUN_2c52f5f4(piVar4 + 0x1d,iVar3 + 0x74);
        FUN_2c52f5f4(piVar4 + 0x23,iVar3 + 0x8c);
        iVar10 = iVar10 + -1;
        iVar9 = *(int *)(iVar3 + 0xa8);
        piVar4[0x29] = *(int *)(iVar3 + 0xa4);
        piVar4[0x2a] = iVar9;
        uVar1 = *(uint *)(iVar3 + 0xac);
        iVar9 = *(int *)(iVar3 + 0xb0);
        piVar4[0x2b] = uVar1;
        piVar4[0x2c] = iVar9;
        piVar4[0x2d] = *(int *)(iVar3 + 0xb4);
        piVar4[0x2e] = *(int *)(iVar3 + 0xb8);
        piVar4[0x2f] = *(int *)(iVar3 + 0xbc);
        piVar4[0x30] = *(int *)(iVar3 + 0xc0);
        piVar4[0x31] = *(int *)(iVar3 + 0xc4);
        piVar4[0x32] = *(int *)(iVar3 + 200);
        piVar4[0x33] = *(int *)(iVar3 + 0xcc);
        piVar4[0x34] = *(int *)(iVar3 + 0xd0);
        piVar4[0x35] = *(int *)(iVar3 + 0xd4);
        piVar4[0x36] = *(int *)(iVar3 + 0xd8);
        piVar4[0x37] = *(int *)(iVar3 + 0xdc);
        piVar4[0x38] = *(int *)(iVar3 + 0xe0);
        piVar4[0x39] = *(int *)(iVar3 + 0xe4);
        iVar9 = *(int *)(iVar3 + 0xe8);
        piVar4[0x3a] = iVar9;
        iVar3 = iVar3 + 0xf0;
        piVar4 = piVar4 + 0x3c;
      } while (iVar10 != 0);
      piVar4 = (int *)param_1[1];
      uVar1 = uVar5;
      if ((int)uVar5 < 1) {
        uVar1 = 0xf0;
      }
      piVar6 = (int *)((int)piVar6 + uVar1);
    }
    if (piVar6 == piVar4) {
      iVar3 = uVar5 + *param_1;
      goto LAB_2c57473a;
    }
    do {
      piVar7 = piVar6 + 0x3c;
      (**(code **)(*piVar6 + 4))(piVar6);
      piVar6 = piVar7;
    } while (piVar7 != piVar4);
  }
  iVar3 = uVar5 + *param_1;
LAB_2c57473a:
  param_1[1] = iVar3;
  return;
}

