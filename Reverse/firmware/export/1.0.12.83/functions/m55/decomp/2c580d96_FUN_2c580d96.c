/* FUN_2c580d96 @ 0x2c580d96 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c580d96(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  piVar6 = _LAB_2c580fb0;
  iVar3 = *param_2;
  iVar9 = param_2[1];
  piVar5 = (int *)*param_1;
  uVar8 = iVar9 - iVar3;
  if (uVar8 <= (uint)(param_1[2] - (int)piVar5)) {
    piVar6 = (int *)param_1[1];
    uVar2 = (int)piVar6 - (int)piVar5;
    if (uVar2 < uVar8) {
      iVar1 = ((int)uVar2 >> 2) * -0x47dc11f7;
      if (0 < (int)uVar2) {
        do {
          FUN_2c52f5f4(piVar5 + 1,iVar3 + 4);
          piVar5[7] = *(int *)(iVar3 + 0x1c);
          FUN_2c52f5f4(piVar5 + 8,iVar3 + 0x20);
          *(undefined1 *)(piVar5 + 0xe) = *(undefined1 *)(iVar3 + 0x38);
          FUN_2c52f5f4(piVar5 + 0xf,iVar3 + 0x3c);
          FUN_2c52f5f4(piVar5 + 0x15,iVar3 + 0x54);
          FUN_2c52f5f4(piVar5 + 0x1b,iVar3 + 0x6c);
          FUN_2c52f5f4(piVar5 + 0x21,iVar3 + 0x84);
          FUN_2c52f5f4(piVar5 + 0x27,iVar3 + 0x9c);
          FUN_2c52f5f4(piVar5 + 0x2d,iVar3 + 0xb4);
          iVar9 = iVar3 + 0xcc;
          iVar3 = iVar3 + 0xe4;
          FUN_2c52f5f4(piVar5 + 0x33,iVar9);
          iVar1 = iVar1 + -1;
          piVar5 = piVar5 + 0x39;
        } while (iVar1 != 0);
        piVar5 = (int *)*param_1;
        piVar6 = (int *)param_1[1];
        iVar3 = *param_2;
        iVar9 = param_2[1];
        uVar2 = (int)piVar6 - (int)piVar5;
      }
      iVar1 = iVar3 + uVar2;
      if (iVar3 + uVar2 != iVar9) {
        do {
          iVar3 = iVar1 + 0xe4;
          FUN_2c57ff38(piVar6,iVar1);
          iVar1 = iVar3;
          piVar6 = piVar6 + 0x39;
        } while (iVar3 != iVar9);
        piVar5 = (int *)*param_1;
      }
    }
    else {
      if (0 < (int)uVar8) {
        iVar9 = ((int)uVar8 >> 2) * -0x47dc11f7;
        piVar6 = piVar5;
        do {
          FUN_2c52f5f4(piVar6 + 1,iVar3 + 4);
          piVar6[7] = *(int *)(iVar3 + 0x1c);
          FUN_2c52f5f4(piVar6 + 8,iVar3 + 0x20);
          *(undefined1 *)(piVar6 + 0xe) = *(undefined1 *)(iVar3 + 0x38);
          FUN_2c52f5f4(piVar6 + 0xf,iVar3 + 0x3c);
          FUN_2c52f5f4(piVar6 + 0x15,iVar3 + 0x54);
          FUN_2c52f5f4(piVar6 + 0x1b,iVar3 + 0x6c);
          FUN_2c52f5f4(piVar6 + 0x21,iVar3 + 0x84);
          FUN_2c52f5f4(piVar6 + 0x27,iVar3 + 0x9c);
          FUN_2c52f5f4(piVar6 + 0x2d,iVar3 + 0xb4);
          iVar1 = iVar3 + 0xcc;
          iVar3 = iVar3 + 0xe4;
          FUN_2c52f5f4(piVar6 + 0x33,iVar1);
          iVar9 = iVar9 + -1;
          piVar6 = piVar6 + 0x39;
        } while (iVar9 != 0);
        piVar6 = (int *)param_1[1];
        uVar2 = uVar8;
        if ((int)uVar8 < 1) {
          uVar2 = 0xe4;
        }
        piVar5 = (int *)((int)piVar5 + uVar2);
      }
      for (; piVar5 != piVar6; piVar5 = piVar5 + 0x39) {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      piVar5 = (int *)*param_1;
    }
    param_1[1] = (int)piVar5 + uVar8;
    return;
  }
  if (uVar8 == 0) {
    iVar1 = 0;
    iVar7 = iVar1;
  }
  else {
    iVar1 = *_LAB_2c580fb0;
    if (iVar1 == 0) {
      FUN_2c4723c4();
      iVar1 = 1;
      *piVar6 = 1;
      param_3 = extraout_r2;
    }
    iVar1 = FUN_2c47245c(0,uVar8,param_3,iVar1,param_4);
    iVar7 = iVar1;
  }
  for (; iVar9 != iVar3; iVar3 = iVar3 + 0xe4) {
    FUN_2c57ff38(iVar1,iVar3);
    iVar1 = iVar1 + 0xe4;
  }
  piVar6 = (int *)param_1[1];
  piVar5 = (int *)*param_1;
  if ((int *)*param_1 != piVar6) {
    do {
      piVar4 = piVar5 + 0x39;
      (**(code **)(*piVar5 + 4))(piVar5);
      piVar5 = piVar4;
    } while (piVar6 != piVar4);
    piVar6 = (int *)*param_1;
  }
  if (piVar6 == (int *)0x0) {
    *param_1 = iVar7;
    param_1[2] = iVar7 + uVar8;
    param_1[1] = iVar7 + uVar8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,piVar6);
}

