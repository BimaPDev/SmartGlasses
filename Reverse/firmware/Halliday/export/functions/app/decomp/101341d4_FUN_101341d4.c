/* FUN_101341d4 @ 0x101341d4 */

void FUN_101341d4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint uVar6;
  uint extraout_r2_03;
  code *pcVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  uVar1 = DAT_100e2410;
  if (*(char *)(param_1 + 2) != '\x02') {
    puVar9 = *(undefined4 **)(param_1 + 0x54);
    if ((puVar9 != (undefined4 *)0x0) && (puVar13 = puVar9 + -2, puVar13 != (undefined4 *)0x0)) {
      puVar9 = (undefined4 *)*puVar9;
      if (puVar9 != (undefined4 *)0x0) {
        puVar9 = puVar9 + -2;
      }
      while( true ) {
        puVar12 = puVar9;
        uVar6 = puVar13[0x10];
        puVar13[0x10] = uVar6 & 0xfffffffb;
        if (((int)(uVar6 << 0x1d) < 0) &&
           ((param_2 != 0 || (iVar3 = FUN_10134174(puVar13), iVar3 != 0)))) {
          FUN_10133f62(*puVar13,puVar13);
          FUN_10133f9e(puVar13);
        }
        if (*(code **)(puVar13[1] + 8) != (code *)0x0) {
          (**(code **)(puVar13[1] + 8))(puVar13,param_2);
        }
        if (puVar12 == (undefined4 *)0x0) break;
        puVar9 = (undefined4 *)0x0;
        puVar13 = puVar12;
        if ((puVar12 != (undefined4 *)0xfffffff8) &&
           (puVar9 = (undefined4 *)puVar12[2], puVar9 != (undefined4 *)0x0)) {
          puVar9 = puVar9 + -2;
        }
      }
    }
    return;
  }
  piVar10 = *(int **)(param_1 + 0x54);
  if (piVar10 != (int *)0x0) {
    uVar6 = 2;
    while (piVar11 = piVar10 + -2, piVar11 != (int *)0x0) {
      if ((char)piVar10[0xf] == '\x01') {
        if (param_2 == 0) {
          if (*(char *)(*piVar11 + 0xb) != '\0') {
            iVar3 = FUN_10138238(piVar11,0,uVar6,*(char *)(*piVar11 + 0xb),param_4);
            if (iVar3 == 0) {
              FUN_10133f98(piVar11,2);
              FUN_100e1528(piVar11);
              uVar6 = extraout_r2_02;
            }
            else {
              puVar8 = (uint *)(piVar10 + 0x14);
              uVar6 = *puVar8;
              *puVar8 = uVar6 & 0xfffffff7;
              uVar6 = uVar6 << 0x1c;
              if ((int)uVar6 < 0) {
                uVar6 = *puVar8;
                *puVar8 = uVar6 & 0xffffff7f;
                if ((int)(uVar6 << 0x18) < 0) {
                  iVar3 = FUN_1013401c(uVar1,0,0xffffffff,0xffffffff);
                  puVar4 = (undefined1 *)FUN_100c1fe4(iVar3 + 8,4);
                  *puVar4 = 2;
                  uVar2 = FUN_100e13b8();
                  puVar4[1] = uVar2;
                  puVar4[2] = 4;
                  puVar4[3] = 0;
                  puVar5 = (undefined2 *)FUN_100c1fe4(iVar3 + 8);
                  *puVar5 = *(undefined2 *)((int)piVar10 + 0x3e);
                  puVar5[1] = (short)piVar10[0x12];
                  FUN_10138156(piVar11,iVar3,40000,0);
                  uVar6 = extraout_r2_03;
                }
              }
            }
          }
        }
        else {
          FUN_10138238(piVar11,3,uVar6,1,param_4);
          uVar6 = extraout_r2;
          if (piVar10[0x14] << 0x1c < 0) {
            FUN_1013811a(piVar11);
            uVar6 = extraout_r2_00;
          }
        }
      }
      if ((piVar10[-1] != 0) && (pcVar7 = *(code **)(piVar10[-1] + 8), pcVar7 != (code *)0x0)) {
        (*pcVar7)(piVar11,param_2);
        uVar6 = extraout_r2_01;
      }
      if (piVar11 == (int *)0xfffffff8) {
        return;
      }
      piVar10 = (int *)*piVar10;
      if (piVar10 == (int *)0x0) {
        return;
      }
    }
  }
  return;
}

