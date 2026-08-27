/* FUN_2c570310 @ 0x2c570310 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c570310(int param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  undefined4 *puStack_68;
  uint uStack_64;
  undefined4 *puStack_60;
  uint uStack_5c;
  int *piStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint *puStack_44;
  int iStack_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iStack_2c = *DAT_2c5705c8;
  if ((*(int *)(param_1 + 0x24) == 0) || (*(int *)(param_1 + 0x28) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5705f8,0x99,_LAB_2c5705f4,_LAB_2c5705f0);
  }
  iVar4 = FUN_2c571dd8();
  iVar5 = func_0x2c571ddc(*(undefined4 *)(param_1 + 0x24));
  FUN_2c5924cc(param_1);
  iVar6 = FUN_2c66b624(param_2,_LAB_2c5705cc);
  if (iVar6 == 0) {
    iVar6 = _LAB_2c5705fc;
    if (iVar4 == 1) goto LAB_2c570566;
    func_0x2c57175c(*(undefined4 *)(param_1 + 0x28));
LAB_2c570362:
    uStack_5c = *(uint *)(DAT_2c5705d0 + 4);
    puStack_60 = DAT_2c5705d4;
    FUN_2c593c2c(param_1,&puStack_60,0);
  }
  else {
    iVar6 = FUN_2c66b624(param_2,_LAB_2c5705d8);
    if (iVar6 == 0) {
      iVar6 = _LAB_2c570604;
      if (iVar4 != iVar5) {
        FUN_2c57173c(*(undefined4 *)(param_1 + 0x28));
        goto LAB_2c570362;
      }
    }
    else {
      iVar6 = FUN_2c66b624(param_2,_LAB_2c5705dc);
      if (iVar6 == 0) {
        if (param_3 == -1) {
          iVar6 = _LAB_2c570604;
          if ((iVar4 != iVar5) &&
             ((param_3 = iVar5, iVar5 != 1 || (iVar6 = _LAB_2c5705fc, iVar4 != 1)))) {
LAB_2c5705bc:
            FUN_2c57177c(*(undefined4 *)(param_1 + 0x28),param_3);
            goto LAB_2c570362;
          }
        }
        else if ((param_3 != 1) || (iVar6 = _LAB_2c5705fc, iVar4 != 1)) {
          if (param_3 <= iVar5) goto LAB_2c5705bc;
          uStack_50 = 0x3f800000;
          puStack_60 = &uStack_48;
          uStack_5c = 1;
          piStack_58 = (int *)0x0;
          iStack_54 = 0;
          uStack_4c = 0;
          uStack_48 = 0;
          FUN_2c5dcca4(&puStack_44,param_3);
          if (*_LAB_2c5705e0 == 0) {
            FUN_2c4723c4();
            *_LAB_2c570734 = 1;
          }
          piVar7 = (int *)FUN_2c47245c(0,0x38);
          puVar2 = _LAB_2c5705e4;
          *piVar7 = 0;
          piVar7[1] = (int)(piVar7 + 3);
          uVar1 = *(undefined1 *)(puVar2 + 1);
          *(undefined2 *)(piVar7 + 3) = *puVar2;
          *(undefined1 *)((int)piVar7 + 0xe) = uVar1;
          *(undefined1 *)((int)piVar7 + 0xf) = 0;
          piVar7[7] = (int)(piVar7 + 9);
          piVar7[2] = 3;
          if (puStack_44 == &uStack_3c) {
            piVar7[9] = uStack_3c;
            piVar7[10] = iStack_38;
            piVar7[0xb] = iStack_34;
            piVar7[0xc] = iStack_30;
          }
          else {
            piVar7[7] = (int)puStack_44;
            piVar7[9] = uStack_3c;
          }
          uVar3 = _LAB_2c5705e8;
          puStack_44 = &uStack_3c;
          piVar7[8] = iStack_40;
          uStack_3c = uStack_3c & 0xffffff00;
          iStack_40 = 0;
          uVar8 = FUN_2c64c9f4(piVar7[1],piVar7[2],uVar3);
          uVar11 = uStack_5c;
          iVar4 = uVar8 - uStack_5c * (uVar8 / uStack_5c);
          piVar13 = (int *)puStack_60[iVar4];
          if (piVar13 != (int *)0x0) {
            uVar10 = ((int *)*piVar13)[0xd];
            piVar14 = (int *)*piVar13;
            do {
              piVar12 = piVar14;
              if (uVar10 == uVar8) {
                piVar14 = (int *)piVar7[1];
                iVar5 = FUN_2c66b624(piVar14,piVar12[1]);
                if (iVar5 == 0) {
                  if (*piVar13 != 0) {
                    if (piVar7 + 9 != (int *)piVar7[7]) {
                    /* WARNING: Subroutine does not return */
                      FUN_2c472680();
                    }
                    if (piVar7 + 3 != piVar14) {
                    /* WARNING: Subroutine does not return */
                      FUN_2c472680(0,piVar14);
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_2c472680(0,piVar7);
                  }
                  break;
                }
              }
              piVar14 = (int *)*piVar12;
              if ((piVar14 == (int *)0x0) ||
                 (uVar10 = piVar14[0xd], piVar13 = piVar12,
                 iVar4 != uVar10 - uVar11 * (uVar10 / uVar11))) break;
            } while( true );
          }
          FUN_2c658768(&puStack_68,&uStack_50,uVar11,iStack_54,1);
          if ((char)puStack_68 != '\0') {
            if (uStack_64 == 1) {
              puVar9 = &uStack_48;
              uStack_48 = 0;
            }
            else {
              if (*_LAB_2c570734 == 0) {
                FUN_2c4723c4();
                *_LAB_2c570734 = 1;
              }
              puVar9 = (undefined4 *)FUN_2c47245c(0,uStack_64 << 2);
              FUN_2c674268(puVar9,0,uStack_64 << 2);
            }
            piVar13 = piStack_58;
            piStack_58 = (int *)0x0;
            if (piVar13 != (int *)0x0) {
              iVar4 = 0;
              do {
                piVar14 = (int *)*piVar13;
                iVar5 = piVar13[0xd] - uStack_64 * ((uint)piVar13[0xd] / uStack_64);
                if ((int *)puVar9[iVar5] == (int *)0x0) {
                  *piVar13 = (int)piStack_58;
                  puVar9[iVar5] = &piStack_58;
                  piStack_58 = piVar13;
                  if (*piVar13 != 0) {
                    puVar9[iVar4] = piVar13;
                  }
                }
                else {
                  *piVar13 = *(int *)puVar9[iVar5];
                  *(int **)puVar9[iVar5] = piVar13;
                  iVar5 = iVar4;
                }
                piVar13 = piVar14;
                iVar4 = iVar5;
              } while (piVar14 != (int *)0x0);
            }
            if (puStack_60 != &uStack_48) {
                    /* WARNING: Subroutine does not return */
              FUN_2c472680(0);
            }
            iVar4 = uVar8 - uStack_64 * (uVar8 / uStack_64);
            puStack_60 = puVar9;
            uStack_5c = uStack_64;
          }
          piVar7[0xd] = uVar8;
          if ((int *)puStack_60[iVar4] == (int *)0x0) {
            *piVar7 = (int)piStack_58;
            if (*piVar7 != 0) {
              uVar11 = *(uint *)(*piVar7 + 0x34);
              puStack_60[uVar11 - uStack_5c * (uVar11 / uStack_5c)] = piVar7;
            }
            puStack_60[iVar4] = &piStack_58;
            piStack_58 = piVar7;
          }
          else {
            *piVar7 = *(int *)puStack_60[iVar4];
            *(int **)puStack_60[iVar4] = piVar7;
          }
          iStack_54 = iStack_54 + 1;
          if (puStack_44 != &uStack_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          uStack_64 = *(uint *)(_LAB_2c5705ec + 4);
          puStack_68 = DAT_2c5705d4;
          FUN_2c593758(param_1,&puStack_68,&puStack_60,0);
          if (piStack_58 != (int *)0x0) {
            if ((int *)piStack_58[7] != piStack_58 + 9) {
                    /* WARNING: Subroutine does not return */
              FUN_2c472680(0);
            }
            if ((int *)piStack_58[1] != piStack_58 + 3) {
                    /* WARNING: Subroutine does not return */
              FUN_2c472680(0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,piStack_58);
          }
          FUN_2c674268(puStack_60,0,uStack_5c << 2);
          piStack_58 = (int *)0x0;
          iStack_54 = 0;
          if (puStack_60 != &uStack_48) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680();
          }
          goto LAB_2c570376;
        }
      }
      else {
        iVar4 = FUN_2c66b624(param_2,_LAB_2c570600);
        iVar6 = _LAB_2c570608;
        if (iVar4 == 0) {
          if (*DAT_2c5705c8 == iStack_2c) {
            iVar4 = *_LAB_2c5702f4;
            if ((*(int *)(param_1 + 0x24) == 0) || (*(int *)(param_1 + 0x28) == 0)) {
              uStack_28 = _LAB_2c570304;
                    /* WARNING: Subroutine does not return */
              FUN_2c62c82c(4,_LAB_2c57030c,0xda,_LAB_2c570308);
            }
            FUN_2c5924cc();
            iVar5 = func_0x2c572e3c(*(undefined4 *)(param_1 + 0x24),param_3,5);
            if (iVar5 != 0) {
              FUN_2c571794(*(undefined4 *)(param_1 + 0x28),param_3);
            }
            FUN_2c593c2c(param_1,&stack0xffffffe4,0);
            if (*_LAB_2c5702f4 == iVar4) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            stack_chk_fail();
          }
          goto LAB_2c57072e;
        }
      }
    }
LAB_2c570566:
    uStack_5c = *(uint *)(iVar6 + 4);
    puStack_60 = DAT_2c5705d4;
    FUN_2c593c2c(param_1,&puStack_60,0);
  }
LAB_2c570376:
  if (*DAT_2c5705c8 == iStack_2c) {
    return;
  }
LAB_2c57072e:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

