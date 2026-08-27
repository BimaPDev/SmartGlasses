/* FUN_2c4d9db4 @ 0x2c4d9db4 */

void FUN_2c4d9db4(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  if (param_3 == 0) {
    return;
  }
  iVar7 = (int)param_2 >> 2;
  if (param_3 < 1) {
    if (param_3 < -0x1f) {
      param_3 = -0x1f;
    }
    uVar4 = -param_3;
    if ((param_2 & 3) != 0) {
      piVar8 = param_1 + (param_2 & 3);
      piVar6 = param_1;
      do {
        piVar5 = piVar6 + 1;
        *piVar6 = *piVar6 >> (uVar4 & 0xff);
        piVar6 = piVar5;
        param_1 = piVar8;
      } while (piVar5 != piVar8);
    }
    iVar9 = iVar7 + -1;
    if (iVar7 != 0) {
      do {
        iVar9 = iVar9 + -1;
        *param_1 = *param_1 >> (uVar4 & 0xff);
        param_1[1] = param_1[1] >> (uVar4 & 0xff);
        param_1[2] = param_1[2] >> (uVar4 & 0xff);
        param_1[3] = param_1[3] >> (uVar4 & 0xff);
        param_1 = param_1 + 4;
      } while (iVar9 != -1);
    }
  }
  else if (param_3 == 1) {
    if ((param_2 & 3) != 0) {
      piVar8 = param_1 + (param_2 & 3);
      piVar6 = param_1;
      do {
        iVar9 = SignedSaturate(*piVar6 << 1,0x1f);
        SignedDoesSaturate(*piVar6 << 1,0x1f);
        piVar5 = piVar6 + 1;
        *piVar6 = iVar9;
        piVar6 = piVar5;
        param_1 = piVar8;
      } while (piVar5 != piVar8);
    }
    if (iVar7 != 0) {
      do {
        iVar9 = SignedSaturate(*param_1 << 1,0x1f);
        SignedDoesSaturate(*param_1 << 1,0x1f);
        iVar1 = SignedSaturate(param_1[1] << 1,0x1f);
        SignedDoesSaturate(param_1[1] << 1,0x1f);
        iVar2 = SignedSaturate(param_1[2] << 1,0x1f);
        SignedDoesSaturate(param_1[2] << 1,0x1f);
        iVar3 = SignedSaturate(param_1[3] << 1,0x1f);
        SignedDoesSaturate(param_1[3] << 1,0x1f);
        iVar7 = iVar7 + -1;
        *param_1 = iVar9;
        param_1[1] = iVar1;
        param_1[2] = iVar2;
        param_1[3] = iVar3;
        param_1 = param_1 + 4;
      } while (iVar7 != 0);
      return;
    }
  }
  else if (param_3 == 2) {
    if ((param_2 & 3) != 0) {
      piVar8 = param_1 + (param_2 & 3);
      piVar6 = param_1;
      do {
        iVar9 = SignedSaturate(*piVar6 << 2,0x1f);
        SignedDoesSaturate(*piVar6 << 2,0x1f);
        piVar5 = piVar6 + 1;
        *piVar6 = iVar9;
        piVar6 = piVar5;
        param_1 = piVar8;
      } while (piVar5 != piVar8);
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar9 = SignedSaturate(*param_1 << 2,0x1f);
      SignedDoesSaturate(*param_1 << 2,0x1f);
      iVar1 = SignedSaturate(param_1[1] << 2,0x1f);
      SignedDoesSaturate(param_1[1] << 2,0x1f);
      iVar2 = SignedSaturate(param_1[2] << 2,0x1f);
      SignedDoesSaturate(param_1[2] << 2,0x1f);
      iVar3 = SignedSaturate(param_1[3] << 2,0x1f);
      SignedDoesSaturate(param_1[3] << 2,0x1f);
      *param_1 = iVar9;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      param_1 = param_1 + 4;
    }
  }
  else if (param_3 == 3) {
    if ((param_2 & 3) != 0) {
      piVar8 = param_1 + (param_2 & 3);
      piVar6 = param_1;
      do {
        iVar9 = SignedSaturate(*piVar6 << 3,0x1f);
        SignedDoesSaturate(*piVar6 << 3,0x1f);
        piVar5 = piVar6 + 1;
        *piVar6 = iVar9;
        piVar6 = piVar5;
        param_1 = piVar8;
      } while (piVar8 != piVar5);
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar9 = SignedSaturate(*param_1 << 3,0x1f);
      SignedDoesSaturate(*param_1 << 3,0x1f);
      iVar1 = SignedSaturate(param_1[1] << 3,0x1f);
      SignedDoesSaturate(param_1[1] << 3,0x1f);
      iVar2 = SignedSaturate(param_1[2] << 3,0x1f);
      SignedDoesSaturate(param_1[2] << 3,0x1f);
      iVar3 = SignedSaturate(param_1[3] << 3,0x1f);
      SignedDoesSaturate(param_1[3] << 3,0x1f);
      *param_1 = iVar9;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      param_1 = param_1 + 4;
    }
  }
  else if (param_3 == 4) {
    if ((param_2 & 3) != 0) {
      piVar8 = param_1 + (param_2 & 3);
      piVar6 = param_1;
      do {
        iVar9 = SignedSaturate(*piVar6 << 4,0x1f);
        SignedDoesSaturate(*piVar6 << 4,0x1f);
        piVar5 = piVar6 + 1;
        *piVar6 = iVar9;
        piVar6 = piVar5;
        param_1 = piVar8;
      } while (piVar8 != piVar5);
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar9 = SignedSaturate(*param_1 << 4,0x1f);
      SignedDoesSaturate(*param_1 << 4,0x1f);
      iVar1 = SignedSaturate(param_1[1] << 4,0x1f);
      SignedDoesSaturate(param_1[1] << 4,0x1f);
      iVar2 = SignedSaturate(param_1[2] << 4,0x1f);
      SignedDoesSaturate(param_1[2] << 4,0x1f);
      iVar3 = SignedSaturate(param_1[3] << 4,0x1f);
      SignedDoesSaturate(param_1[3] << 4,0x1f);
      *param_1 = iVar9;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      param_1 = param_1 + 4;
    }
  }
  else if (param_3 == 5) {
    if ((param_2 & 3) != 0) {
      piVar8 = param_1 + (param_2 & 3);
      piVar6 = param_1;
      do {
        iVar9 = SignedSaturate(*piVar6 << 5,0x1f);
        SignedDoesSaturate(*piVar6 << 5,0x1f);
        piVar5 = piVar6 + 1;
        *piVar6 = iVar9;
        piVar6 = piVar5;
        param_1 = piVar8;
      } while (piVar8 != piVar5);
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar9 = SignedSaturate(*param_1 << 5,0x1f);
      SignedDoesSaturate(*param_1 << 5,0x1f);
      iVar1 = SignedSaturate(param_1[1] << 5,0x1f);
      SignedDoesSaturate(param_1[1] << 5,0x1f);
      iVar2 = SignedSaturate(param_1[2] << 5,0x1f);
      SignedDoesSaturate(param_1[2] << 5,0x1f);
      iVar3 = SignedSaturate(param_1[3] << 5,0x1f);
      SignedDoesSaturate(param_1[3] << 5,0x1f);
      *param_1 = iVar9;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      param_1 = param_1 + 4;
    }
  }
  else if (param_3 == 6) {
    if ((param_2 & 3) != 0) {
      piVar8 = param_1 + (param_2 & 3);
      piVar6 = param_1;
      do {
        iVar9 = SignedSaturate(*piVar6 << 6,0x1f);
        SignedDoesSaturate(*piVar6 << 6,0x1f);
        piVar5 = piVar6 + 1;
        *piVar6 = iVar9;
        piVar6 = piVar5;
        param_1 = piVar8;
      } while (piVar5 != piVar8);
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar9 = SignedSaturate(*param_1 << 6,0x1f);
      SignedDoesSaturate(*param_1 << 6,0x1f);
      iVar1 = SignedSaturate(param_1[1] << 6,0x1f);
      SignedDoesSaturate(param_1[1] << 6,0x1f);
      iVar2 = SignedSaturate(param_1[2] << 6,0x1f);
      SignedDoesSaturate(param_1[2] << 6,0x1f);
      iVar3 = SignedSaturate(param_1[3] << 6,0x1f);
      SignedDoesSaturate(param_1[3] << 6,0x1f);
      *param_1 = iVar9;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      param_1 = param_1 + 4;
    }
  }
  else if (param_3 == 7) {
    if ((param_2 & 3) != 0) {
      piVar8 = param_1 + (param_2 & 3);
      piVar6 = param_1;
      do {
        iVar9 = SignedSaturate(*piVar6 << 7,0x1f);
        SignedDoesSaturate(*piVar6 << 7,0x1f);
        piVar5 = piVar6 + 1;
        *piVar6 = iVar9;
        piVar6 = piVar5;
        param_1 = piVar8;
      } while (piVar5 != piVar8);
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar9 = SignedSaturate(*param_1 << 7,0x1f);
      SignedDoesSaturate(*param_1 << 7,0x1f);
      iVar1 = SignedSaturate(param_1[1] << 7,0x1f);
      SignedDoesSaturate(param_1[1] << 7,0x1f);
      iVar2 = SignedSaturate(param_1[2] << 7,0x1f);
      SignedDoesSaturate(param_1[2] << 7,0x1f);
      iVar3 = SignedSaturate(param_1[3] << 7,0x1f);
      SignedDoesSaturate(param_1[3] << 7,0x1f);
      *param_1 = iVar9;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      param_1 = param_1 + 4;
    }
  }
  else if (param_3 == 8) {
    if ((param_2 & 3) != 0) {
      piVar8 = param_1 + (param_2 & 3);
      piVar6 = param_1;
      do {
        iVar9 = SignedSaturate(*piVar6 << 8,0x1f);
        SignedDoesSaturate(*piVar6 << 8,0x1f);
        piVar5 = piVar6 + 1;
        *piVar6 = iVar9;
        piVar6 = piVar5;
        param_1 = piVar8;
      } while (piVar5 != piVar8);
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar9 = SignedSaturate(*param_1 << 8,0x1f);
      SignedDoesSaturate(*param_1 << 8,0x1f);
      iVar1 = SignedSaturate(param_1[1] << 8,0x1f);
      SignedDoesSaturate(param_1[1] << 8,0x1f);
      iVar2 = SignedSaturate(param_1[2] << 8,0x1f);
      SignedDoesSaturate(param_1[2] << 8,0x1f);
      iVar3 = SignedSaturate(param_1[3] << 8,0x1f);
      SignedDoesSaturate(param_1[3] << 8,0x1f);
      *param_1 = iVar9;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      param_1 = param_1 + 4;
    }
  }
  else if (param_3 == 9) {
    if ((param_2 & 3) != 0) {
      piVar8 = param_1 + (param_2 & 3);
      piVar6 = param_1;
      do {
        iVar9 = SignedSaturate(*piVar6 << 9,0x1f);
        SignedDoesSaturate(*piVar6 << 9,0x1f);
        piVar5 = piVar6 + 1;
        *piVar6 = iVar9;
        piVar6 = piVar5;
        param_1 = piVar8;
      } while (piVar5 != piVar8);
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar9 = SignedSaturate(*param_1 << 9,0x1f);
      SignedDoesSaturate(*param_1 << 9,0x1f);
      iVar1 = SignedSaturate(param_1[1] << 9,0x1f);
      SignedDoesSaturate(param_1[1] << 9,0x1f);
      iVar2 = SignedSaturate(param_1[2] << 9,0x1f);
      SignedDoesSaturate(param_1[2] << 9,0x1f);
      iVar3 = SignedSaturate(param_1[3] << 9,0x1f);
      SignedDoesSaturate(param_1[3] << 9,0x1f);
      *param_1 = iVar9;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      param_1 = param_1 + 4;
    }
  }
  else if (param_3 == 10) {
    if ((param_2 & 3) != 0) {
      piVar8 = param_1 + (param_2 & 3);
      piVar6 = param_1;
      do {
        iVar9 = SignedSaturate(*piVar6 << 10,0x1f);
        SignedDoesSaturate(*piVar6 << 10,0x1f);
        piVar5 = piVar6 + 1;
        *piVar6 = iVar9;
        piVar6 = piVar5;
        param_1 = piVar8;
      } while (piVar5 != piVar8);
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar9 = SignedSaturate(*param_1 << 10,0x1f);
      SignedDoesSaturate(*param_1 << 10,0x1f);
      iVar1 = SignedSaturate(param_1[1] << 10,0x1f);
      SignedDoesSaturate(param_1[1] << 10,0x1f);
      iVar2 = SignedSaturate(param_1[2] << 10,0x1f);
      SignedDoesSaturate(param_1[2] << 10,0x1f);
      iVar3 = SignedSaturate(param_1[3] << 10,0x1f);
      SignedDoesSaturate(param_1[3] << 10,0x1f);
      *param_1 = iVar9;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      param_1 = param_1 + 4;
    }
  }
  else if (param_3 == 0xb) {
    if ((param_2 & 3) != 0) {
      piVar8 = param_1 + (param_2 & 3);
      piVar6 = param_1;
      do {
        iVar9 = SignedSaturate(*piVar6 << 0xb,0x1f);
        SignedDoesSaturate(*piVar6 << 0xb,0x1f);
        piVar5 = piVar6 + 1;
        *piVar6 = iVar9;
        piVar6 = piVar5;
        param_1 = piVar8;
      } while (piVar5 != piVar8);
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar9 = SignedSaturate(*param_1 << 0xb,0x1f);
      SignedDoesSaturate(*param_1 << 0xb,0x1f);
      iVar1 = SignedSaturate(param_1[1] << 0xb,0x1f);
      SignedDoesSaturate(param_1[1] << 0xb,0x1f);
      iVar2 = SignedSaturate(param_1[2] << 0xb,0x1f);
      SignedDoesSaturate(param_1[2] << 0xb,0x1f);
      iVar3 = SignedSaturate(param_1[3] << 0xb,0x1f);
      SignedDoesSaturate(param_1[3] << 0xb,0x1f);
      *param_1 = iVar9;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      param_1 = param_1 + 4;
    }
  }
  else if (param_3 == 0xc) {
    if ((param_2 & 3) != 0) {
      piVar8 = param_1 + (param_2 & 3);
      piVar6 = param_1;
      do {
        iVar9 = SignedSaturate(*piVar6 << 0xc,0x1f);
        SignedDoesSaturate(*piVar6 << 0xc,0x1f);
        piVar5 = piVar6 + 1;
        *piVar6 = iVar9;
        piVar6 = piVar5;
        param_1 = piVar8;
      } while (piVar5 != piVar8);
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar9 = SignedSaturate(*param_1 << 0xc,0x1f);
      SignedDoesSaturate(*param_1 << 0xc,0x1f);
      iVar1 = SignedSaturate(param_1[1] << 0xc,0x1f);
      SignedDoesSaturate(param_1[1] << 0xc,0x1f);
      iVar2 = SignedSaturate(param_1[2] << 0xc,0x1f);
      SignedDoesSaturate(param_1[2] << 0xc,0x1f);
      iVar3 = SignedSaturate(param_1[3] << 0xc,0x1f);
      SignedDoesSaturate(param_1[3] << 0xc,0x1f);
      *param_1 = iVar9;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      param_1 = param_1 + 4;
    }
  }
  else if (param_3 == 0xd) {
    if ((param_2 & 3) != 0) {
      piVar8 = param_1 + (param_2 & 3);
      piVar6 = param_1;
      do {
        iVar9 = SignedSaturate(*piVar6 << 0xd,0x1f);
        SignedDoesSaturate(*piVar6 << 0xd,0x1f);
        piVar5 = piVar6 + 1;
        *piVar6 = iVar9;
        piVar6 = piVar5;
        param_1 = piVar8;
      } while (piVar5 != piVar8);
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar9 = SignedSaturate(*param_1 << 0xd,0x1f);
      SignedDoesSaturate(*param_1 << 0xd,0x1f);
      iVar1 = SignedSaturate(param_1[1] << 0xd,0x1f);
      SignedDoesSaturate(param_1[1] << 0xd,0x1f);
      iVar2 = SignedSaturate(param_1[2] << 0xd,0x1f);
      SignedDoesSaturate(param_1[2] << 0xd,0x1f);
      iVar3 = SignedSaturate(param_1[3] << 0xd,0x1f);
      SignedDoesSaturate(param_1[3] << 0xd,0x1f);
      *param_1 = iVar9;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      param_1 = param_1 + 4;
    }
  }
  else if (param_3 == 0xe) {
    if ((param_2 & 3) != 0) {
      piVar8 = param_1 + (param_2 & 3);
      piVar6 = param_1;
      do {
        iVar9 = SignedSaturate(*piVar6 << 0xe,0x1f);
        SignedDoesSaturate(*piVar6 << 0xe,0x1f);
        piVar5 = piVar6 + 1;
        *piVar6 = iVar9;
        piVar6 = piVar5;
        param_1 = piVar8;
      } while (piVar5 != piVar8);
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar9 = SignedSaturate(*param_1 << 0xe,0x1f);
      SignedDoesSaturate(*param_1 << 0xe,0x1f);
      iVar1 = SignedSaturate(param_1[1] << 0xe,0x1f);
      SignedDoesSaturate(param_1[1] << 0xe,0x1f);
      iVar2 = SignedSaturate(param_1[2] << 0xe,0x1f);
      SignedDoesSaturate(param_1[2] << 0xe,0x1f);
      iVar3 = SignedSaturate(param_1[3] << 0xe,0x1f);
      SignedDoesSaturate(param_1[3] << 0xe,0x1f);
      *param_1 = iVar9;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      param_1 = param_1 + 4;
    }
  }
  else if (param_3 == 0xf) {
    if ((param_2 & 3) != 0) {
      piVar8 = param_1 + (param_2 & 3);
      piVar6 = param_1;
      do {
        iVar9 = SignedSaturate(*piVar6 << 0xf,0x1f);
        SignedDoesSaturate(*piVar6 << 0xf,0x1f);
        piVar5 = piVar6 + 1;
        *piVar6 = iVar9;
        piVar6 = piVar5;
        param_1 = piVar8;
      } while (piVar5 != piVar8);
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar9 = SignedSaturate(*param_1 << 0xf,0x1f);
      SignedDoesSaturate(*param_1 << 0xf,0x1f);
      iVar1 = SignedSaturate(param_1[1] << 0xf,0x1f);
      SignedDoesSaturate(param_1[1] << 0xf,0x1f);
      iVar2 = SignedSaturate(param_1[2] << 0xf,0x1f);
      SignedDoesSaturate(param_1[2] << 0xf,0x1f);
      iVar3 = SignedSaturate(param_1[3] << 0xf,0x1f);
      SignedDoesSaturate(param_1[3] << 0xf,0x1f);
      *param_1 = iVar9;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      param_1 = param_1 + 4;
    }
  }
  else if (param_3 == 0x10) {
    if ((param_2 & 3) != 0) {
      piVar8 = param_1 + (param_2 & 3);
      piVar6 = param_1;
      do {
        iVar9 = SignedSaturate(*piVar6 << 0x10,0x1f);
        SignedDoesSaturate(*piVar6 << 0x10,0x1f);
        piVar5 = piVar6 + 1;
        *piVar6 = iVar9;
        piVar6 = piVar5;
        param_1 = piVar8;
      } while (piVar5 != piVar8);
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar9 = SignedSaturate(*param_1 << 0x10,0x1f);
      SignedDoesSaturate(*param_1 << 0x10,0x1f);
      iVar1 = SignedSaturate(param_1[1] << 0x10,0x1f);
      SignedDoesSaturate(param_1[1] << 0x10,0x1f);
      iVar2 = SignedSaturate(param_1[2] << 0x10,0x1f);
      SignedDoesSaturate(param_1[2] << 0x10,0x1f);
      iVar3 = SignedSaturate(param_1[3] << 0x10,0x1f);
      SignedDoesSaturate(param_1[3] << 0x10,0x1f);
      *param_1 = iVar9;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      param_1 = param_1 + 4;
    }
  }
  else {
    piVar6 = param_1 + (param_2 & 3);
    if (param_3 == 0x11) {
      for (; param_1 != piVar6; param_1 = param_1 + 1) {
        iVar9 = SignedSaturate(*param_1 << 0x11,0x1f);
        SignedDoesSaturate(*param_1 << 0x11,0x1f);
        *param_1 = iVar9;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        iVar9 = SignedSaturate(*param_1 << 0x11,0x1f);
        SignedDoesSaturate(*param_1 << 0x11,0x1f);
        iVar1 = SignedSaturate(param_1[1] << 0x11,0x1f);
        SignedDoesSaturate(param_1[1] << 0x11,0x1f);
        iVar2 = SignedSaturate(param_1[2] << 0x11,0x1f);
        SignedDoesSaturate(param_1[2] << 0x11,0x1f);
        iVar3 = SignedSaturate(param_1[3] << 0x11,0x1f);
        SignedDoesSaturate(param_1[3] << 0x11,0x1f);
        *param_1 = iVar9;
        param_1[1] = iVar1;
        param_1[2] = iVar2;
        param_1[3] = iVar3;
        param_1 = param_1 + 4;
      }
    }
    else if (param_3 == 0x12) {
      for (; param_1 != piVar6; param_1 = param_1 + 1) {
        iVar9 = SignedSaturate(*param_1 << 0x12,0x1f);
        SignedDoesSaturate(*param_1 << 0x12,0x1f);
        *param_1 = iVar9;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        iVar9 = SignedSaturate(*param_1 << 0x12,0x1f);
        SignedDoesSaturate(*param_1 << 0x12,0x1f);
        iVar1 = SignedSaturate(param_1[1] << 0x12,0x1f);
        SignedDoesSaturate(param_1[1] << 0x12,0x1f);
        iVar2 = SignedSaturate(param_1[2] << 0x12,0x1f);
        SignedDoesSaturate(param_1[2] << 0x12,0x1f);
        iVar3 = SignedSaturate(param_1[3] << 0x12,0x1f);
        SignedDoesSaturate(param_1[3] << 0x12,0x1f);
        *param_1 = iVar9;
        param_1[1] = iVar1;
        param_1[2] = iVar2;
        param_1[3] = iVar3;
        param_1 = param_1 + 4;
      }
    }
    else if (param_3 == 0x13) {
      for (; param_1 != piVar6; param_1 = param_1 + 1) {
        iVar9 = SignedSaturate(*param_1 << 0x13,0x1f);
        SignedDoesSaturate(*param_1 << 0x13,0x1f);
        *param_1 = iVar9;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        iVar9 = SignedSaturate(*param_1 << 0x13,0x1f);
        SignedDoesSaturate(*param_1 << 0x13,0x1f);
        iVar1 = SignedSaturate(param_1[1] << 0x13,0x1f);
        SignedDoesSaturate(param_1[1] << 0x13,0x1f);
        iVar2 = SignedSaturate(param_1[2] << 0x13,0x1f);
        SignedDoesSaturate(param_1[2] << 0x13,0x1f);
        iVar3 = SignedSaturate(param_1[3] << 0x13,0x1f);
        SignedDoesSaturate(param_1[3] << 0x13,0x1f);
        *param_1 = iVar9;
        param_1[1] = iVar1;
        param_1[2] = iVar2;
        param_1[3] = iVar3;
        param_1 = param_1 + 4;
      }
    }
    else if (param_3 == 0x14) {
      for (; param_1 != piVar6; param_1 = param_1 + 1) {
        iVar9 = SignedSaturate(*param_1 << 0x14,0x1f);
        SignedDoesSaturate(*param_1 << 0x14,0x1f);
        *param_1 = iVar9;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        iVar9 = SignedSaturate(*param_1 << 0x14,0x1f);
        SignedDoesSaturate(*param_1 << 0x14,0x1f);
        iVar1 = SignedSaturate(param_1[1] << 0x14,0x1f);
        SignedDoesSaturate(param_1[1] << 0x14,0x1f);
        iVar2 = SignedSaturate(param_1[2] << 0x14,0x1f);
        SignedDoesSaturate(param_1[2] << 0x14,0x1f);
        iVar3 = SignedSaturate(param_1[3] << 0x14,0x1f);
        SignedDoesSaturate(param_1[3] << 0x14,0x1f);
        *param_1 = iVar9;
        param_1[1] = iVar1;
        param_1[2] = iVar2;
        param_1[3] = iVar3;
        param_1 = param_1 + 4;
      }
    }
    else if (param_3 == 0x15) {
      for (; param_1 != piVar6; param_1 = param_1 + 1) {
        iVar9 = SignedSaturate(*param_1 << 0x15,0x1f);
        SignedDoesSaturate(*param_1 << 0x15,0x1f);
        *param_1 = iVar9;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        iVar9 = SignedSaturate(*param_1 << 0x15,0x1f);
        SignedDoesSaturate(*param_1 << 0x15,0x1f);
        iVar1 = SignedSaturate(param_1[1] << 0x15,0x1f);
        SignedDoesSaturate(param_1[1] << 0x15,0x1f);
        iVar2 = SignedSaturate(param_1[2] << 0x15,0x1f);
        SignedDoesSaturate(param_1[2] << 0x15,0x1f);
        iVar3 = SignedSaturate(param_1[3] << 0x15,0x1f);
        SignedDoesSaturate(param_1[3] << 0x15,0x1f);
        *param_1 = iVar9;
        param_1[1] = iVar1;
        param_1[2] = iVar2;
        param_1[3] = iVar3;
        param_1 = param_1 + 4;
      }
    }
    else if (param_3 == 0x16) {
      for (; param_1 != piVar6; param_1 = param_1 + 1) {
        iVar9 = SignedSaturate(*param_1 << 0x16,0x1f);
        SignedDoesSaturate(*param_1 << 0x16,0x1f);
        *param_1 = iVar9;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        iVar9 = SignedSaturate(*param_1 << 0x16,0x1f);
        SignedDoesSaturate(*param_1 << 0x16,0x1f);
        iVar1 = SignedSaturate(param_1[1] << 0x16,0x1f);
        SignedDoesSaturate(param_1[1] << 0x16,0x1f);
        iVar2 = SignedSaturate(param_1[2] << 0x16,0x1f);
        SignedDoesSaturate(param_1[2] << 0x16,0x1f);
        iVar3 = SignedSaturate(param_1[3] << 0x16,0x1f);
        SignedDoesSaturate(param_1[3] << 0x16,0x1f);
        *param_1 = iVar9;
        param_1[1] = iVar1;
        param_1[2] = iVar2;
        param_1[3] = iVar3;
        param_1 = param_1 + 4;
      }
    }
    else if (param_3 == 0x17) {
      for (; param_1 != piVar6; param_1 = param_1 + 1) {
        iVar9 = SignedSaturate(*param_1 << 0x17,0x1f);
        SignedDoesSaturate(*param_1 << 0x17,0x1f);
        *param_1 = iVar9;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        iVar9 = SignedSaturate(*param_1 << 0x17,0x1f);
        SignedDoesSaturate(*param_1 << 0x17,0x1f);
        iVar1 = SignedSaturate(param_1[1] << 0x17,0x1f);
        SignedDoesSaturate(param_1[1] << 0x17,0x1f);
        iVar2 = SignedSaturate(param_1[2] << 0x17,0x1f);
        SignedDoesSaturate(param_1[2] << 0x17,0x1f);
        iVar3 = SignedSaturate(param_1[3] << 0x17,0x1f);
        SignedDoesSaturate(param_1[3] << 0x17,0x1f);
        *param_1 = iVar9;
        param_1[1] = iVar1;
        param_1[2] = iVar2;
        param_1[3] = iVar3;
        param_1 = param_1 + 4;
      }
    }
    else if (param_3 == 0x18) {
      for (; param_1 != piVar6; param_1 = param_1 + 1) {
        iVar9 = SignedSaturate(*param_1 << 0x18,0x1f);
        SignedDoesSaturate(*param_1 << 0x18,0x1f);
        *param_1 = iVar9;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        iVar9 = SignedSaturate(*param_1 << 0x18,0x1f);
        SignedDoesSaturate(*param_1 << 0x18,0x1f);
        iVar1 = SignedSaturate(param_1[1] << 0x18,0x1f);
        SignedDoesSaturate(param_1[1] << 0x18,0x1f);
        iVar2 = SignedSaturate(param_1[2] << 0x18,0x1f);
        SignedDoesSaturate(param_1[2] << 0x18,0x1f);
        iVar3 = SignedSaturate(param_1[3] << 0x18,0x1f);
        SignedDoesSaturate(param_1[3] << 0x18,0x1f);
        *param_1 = iVar9;
        param_1[1] = iVar1;
        param_1[2] = iVar2;
        param_1[3] = iVar3;
        param_1 = param_1 + 4;
      }
    }
    else if (param_3 == 0x19) {
      for (; param_1 != piVar6; param_1 = param_1 + 1) {
        iVar9 = SignedSaturate(*param_1 << 0x19,0x1f);
        SignedDoesSaturate(*param_1 << 0x19,0x1f);
        *param_1 = iVar9;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        iVar9 = SignedSaturate(*param_1 << 0x19,0x1f);
        SignedDoesSaturate(*param_1 << 0x19,0x1f);
        iVar1 = SignedSaturate(param_1[1] << 0x19,0x1f);
        SignedDoesSaturate(param_1[1] << 0x19,0x1f);
        iVar2 = SignedSaturate(param_1[2] << 0x19,0x1f);
        SignedDoesSaturate(param_1[2] << 0x19,0x1f);
        iVar3 = SignedSaturate(param_1[3] << 0x19,0x1f);
        SignedDoesSaturate(param_1[3] << 0x19,0x1f);
        *param_1 = iVar9;
        param_1[1] = iVar1;
        param_1[2] = iVar2;
        param_1[3] = iVar3;
        param_1 = param_1 + 4;
      }
    }
    else if (param_3 == 0x1a) {
      for (; param_1 != piVar6; param_1 = param_1 + 1) {
        iVar9 = SignedSaturate(*param_1 << 0x1a,0x1f);
        SignedDoesSaturate(*param_1 << 0x1a,0x1f);
        *param_1 = iVar9;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        iVar9 = SignedSaturate(*param_1 << 0x1a,0x1f);
        SignedDoesSaturate(*param_1 << 0x1a,0x1f);
        iVar1 = SignedSaturate(param_1[1] << 0x1a,0x1f);
        SignedDoesSaturate(param_1[1] << 0x1a,0x1f);
        iVar2 = SignedSaturate(param_1[2] << 0x1a,0x1f);
        SignedDoesSaturate(param_1[2] << 0x1a,0x1f);
        iVar3 = SignedSaturate(param_1[3] << 0x1a,0x1f);
        SignedDoesSaturate(param_1[3] << 0x1a,0x1f);
        *param_1 = iVar9;
        param_1[1] = iVar1;
        param_1[2] = iVar2;
        param_1[3] = iVar3;
        param_1 = param_1 + 4;
      }
    }
    else if (param_3 == 0x1b) {
      for (; param_1 != piVar6; param_1 = param_1 + 1) {
        iVar9 = SignedSaturate(*param_1 << 0x1b,0x1f);
        SignedDoesSaturate(*param_1 << 0x1b,0x1f);
        *param_1 = iVar9;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        iVar9 = SignedSaturate(*param_1 << 0x1b,0x1f);
        SignedDoesSaturate(*param_1 << 0x1b,0x1f);
        iVar1 = SignedSaturate(param_1[1] << 0x1b,0x1f);
        SignedDoesSaturate(param_1[1] << 0x1b,0x1f);
        iVar2 = SignedSaturate(param_1[2] << 0x1b,0x1f);
        SignedDoesSaturate(param_1[2] << 0x1b,0x1f);
        iVar3 = SignedSaturate(param_1[3] << 0x1b,0x1f);
        SignedDoesSaturate(param_1[3] << 0x1b,0x1f);
        *param_1 = iVar9;
        param_1[1] = iVar1;
        param_1[2] = iVar2;
        param_1[3] = iVar3;
        param_1 = param_1 + 4;
      }
    }
    else if (param_3 == 0x1c) {
      for (; param_1 != piVar6; param_1 = param_1 + 1) {
        iVar9 = SignedSaturate(*param_1 << 0x1c,0x1f);
        SignedDoesSaturate(*param_1 << 0x1c,0x1f);
        *param_1 = iVar9;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        iVar9 = SignedSaturate(*param_1 << 0x1c,0x1f);
        SignedDoesSaturate(*param_1 << 0x1c,0x1f);
        iVar1 = SignedSaturate(param_1[1] << 0x1c,0x1f);
        SignedDoesSaturate(param_1[1] << 0x1c,0x1f);
        iVar2 = SignedSaturate(param_1[2] << 0x1c,0x1f);
        SignedDoesSaturate(param_1[2] << 0x1c,0x1f);
        iVar3 = SignedSaturate(param_1[3] << 0x1c,0x1f);
        SignedDoesSaturate(param_1[3] << 0x1c,0x1f);
        *param_1 = iVar9;
        param_1[1] = iVar1;
        param_1[2] = iVar2;
        param_1[3] = iVar3;
        param_1 = param_1 + 4;
      }
    }
    else if (param_3 == 0x1d) {
      for (; param_1 != piVar6; param_1 = param_1 + 1) {
        iVar9 = SignedSaturate(*param_1 << 0x1d,0x1f);
        SignedDoesSaturate(*param_1 << 0x1d,0x1f);
        *param_1 = iVar9;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        iVar9 = SignedSaturate(*param_1 << 0x1d,0x1f);
        SignedDoesSaturate(*param_1 << 0x1d,0x1f);
        iVar1 = SignedSaturate(param_1[1] << 0x1d,0x1f);
        SignedDoesSaturate(param_1[1] << 0x1d,0x1f);
        iVar2 = SignedSaturate(param_1[2] << 0x1d,0x1f);
        SignedDoesSaturate(param_1[2] << 0x1d,0x1f);
        iVar3 = SignedSaturate(param_1[3] << 0x1d,0x1f);
        SignedDoesSaturate(param_1[3] << 0x1d,0x1f);
        *param_1 = iVar9;
        param_1[1] = iVar1;
        param_1[2] = iVar2;
        param_1[3] = iVar3;
        param_1 = param_1 + 4;
      }
    }
    else if (param_3 == 0x1e) {
      for (; param_1 != piVar6; param_1 = param_1 + 1) {
        iVar9 = SignedSaturate(*param_1 << 0x1e,0x1f);
        SignedDoesSaturate(*param_1 << 0x1e,0x1f);
        *param_1 = iVar9;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        iVar9 = SignedSaturate(*param_1 << 0x1e,0x1f);
        SignedDoesSaturate(*param_1 << 0x1e,0x1f);
        iVar1 = SignedSaturate(param_1[1] << 0x1e,0x1f);
        SignedDoesSaturate(param_1[1] << 0x1e,0x1f);
        iVar2 = SignedSaturate(param_1[2] << 0x1e,0x1f);
        SignedDoesSaturate(param_1[2] << 0x1e,0x1f);
        iVar3 = SignedSaturate(param_1[3] << 0x1e,0x1f);
        SignedDoesSaturate(param_1[3] << 0x1e,0x1f);
        *param_1 = iVar9;
        param_1[1] = iVar1;
        param_1[2] = iVar2;
        param_1[3] = iVar3;
        param_1 = param_1 + 4;
      }
    }
    else {
      for (; param_1 != piVar6; param_1 = param_1 + 1) {
        iVar9 = SignedSaturate(*param_1 << 0x1f,0x1f);
        SignedDoesSaturate(*param_1 << 0x1f,0x1f);
        *param_1 = iVar9;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        iVar9 = SignedSaturate(*param_1 << 0x1f,0x1f);
        SignedDoesSaturate(*param_1 << 0x1f,0x1f);
        iVar1 = SignedSaturate(param_1[1] << 0x1f,0x1f);
        SignedDoesSaturate(param_1[1] << 0x1f,0x1f);
        iVar2 = SignedSaturate(param_1[2] << 0x1f,0x1f);
        SignedDoesSaturate(param_1[2] << 0x1f,0x1f);
        iVar3 = SignedSaturate(param_1[3] << 0x1f,0x1f);
        SignedDoesSaturate(param_1[3] << 0x1f,0x1f);
        *param_1 = iVar9;
        param_1[1] = iVar1;
        param_1[2] = iVar2;
        param_1[3] = iVar3;
        param_1 = param_1 + 4;
      }
    }
  }
  return;
}

