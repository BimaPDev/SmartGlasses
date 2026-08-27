/* FUN_2c669224 @ 0x2c669224 */

int * FUN_2c669224(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar9;
  int iVar10;
  
  iVar9 = *DAT_2c669254;
  if (*(int *)(iVar9 + 0x3c) == 0) {
    param_3 = FUN_2c669578(0x24);
    *(int *)(iVar9 + 0x3c) = param_3;
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c668484(DAT_2c66925c,0x32,0,DAT_2c669258);
    }
  }
  uVar3 = *(undefined4 *)(iVar9 + 0x3c);
  piVar1 = (int *)FUN_2c6705d0(param_1,uVar3,param_3,param_4,param_1,uVar3,unaff_r4,unaff_r5);
  piVar2 = (int *)FUN_2c668f44(param_1,uVar3);
  iVar9 = piVar2[5] + 0x76c;
  if (((piVar2[5] & 3U) == 0) && (iVar9 != (iVar9 / 100) * 100)) {
    uVar6 = 1;
  }
  else {
    uVar6 = (uint)(iVar9 % 400 == 0);
  }
  iVar10 = uVar6 * 0x30 + DAT_2c669440;
  FUN_2c66d84c();
  FUN_2c66d864();
  iVar4 = 0;
  if (*DAT_2c669444 == 0) {
LAB_2c66930a:
    piVar2[8] = iVar4;
LAB_2c6692e8:
    iVar9 = piVar1[10];
  }
  else {
    if ((piVar1[1] != iVar9) && (iVar9 = FUN_2c66d6f8(iVar9), iVar9 == 0)) {
      iVar4 = -1;
      goto LAB_2c66930a;
    }
    uVar5 = *param_1;
    uVar7 = param_1[1];
    uVar6 = piVar1[8];
    iVar9 = piVar1[9];
    if (*piVar1 == 0) {
      if ((int)((uVar7 - iVar9) - (uint)(uVar5 < uVar6)) < 0 ==
          (SBORROW4(uVar7,iVar9) != SBORROW4(uVar7 - iVar9,(uint)(uVar5 < uVar6))))
      goto LAB_2c669318;
      uVar6 = piVar1[0x12];
      iVar9 = piVar1[0x13];
      piVar2[8] = (uint)((int)((uVar7 - iVar9) - (uint)(uVar5 < uVar6)) < 0 !=
                        (SBORROW4(uVar7,iVar9) != SBORROW4(uVar7 - iVar9,(uint)(uVar5 < uVar6))));
      if ((int)((uVar7 - iVar9) - (uint)(uVar5 < uVar6)) < 0 !=
          (SBORROW4(uVar7,iVar9) != SBORROW4(uVar7 - iVar9,(uint)(uVar5 < uVar6))))
      goto LAB_2c66931c;
      goto LAB_2c6692e8;
    }
    if (((int)((uVar7 - iVar9) - (uint)(uVar5 < uVar6)) < 0 !=
         (SBORROW4(uVar7,iVar9) != SBORROW4(uVar7 - iVar9,(uint)(uVar5 < uVar6)))) ||
       (iVar9 = piVar1[0x13],
       (int)((uVar7 - iVar9) - (uint)(uVar5 < (uint)piVar1[0x12])) < 0 ==
       (SBORROW4(uVar7,iVar9) != SBORROW4(uVar7 - iVar9,(uint)(uVar5 < (uint)piVar1[0x12]))))) {
      iVar4 = 0;
      goto LAB_2c66930a;
    }
LAB_2c669318:
    piVar2[8] = 1;
LAB_2c66931c:
    iVar9 = piVar1[0x14];
  }
  iVar4 = piVar2[1] - (iVar9 % 0xe10) / 0x3c;
  iVar8 = *piVar2 - (iVar9 % 0xe10) % 0x3c;
  iVar9 = piVar2[2] - iVar9 / 0xe10;
  piVar2[1] = iVar4;
  *piVar2 = iVar8;
  piVar2[2] = iVar9;
  if (iVar8 < 0x3c) {
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0x3c;
      piVar2[1] = iVar4 + -1;
      goto LAB_2c669350;
    }
  }
  else {
    iVar8 = iVar8 + -0x3c;
    piVar2[1] = iVar4 + 1;
LAB_2c669350:
    *piVar2 = iVar8;
  }
  iVar4 = piVar2[1];
  if (iVar4 < 0x3c) {
    if (-1 < iVar4) goto LAB_2c669360;
    iVar4 = iVar4 + 0x3c;
    piVar2[2] = iVar9 + -1;
  }
  else {
    iVar4 = iVar4 + -0x3c;
    piVar2[2] = iVar9 + 1;
  }
  piVar2[1] = iVar4;
LAB_2c669360:
  iVar9 = piVar2[2];
  if (iVar9 < 0x18) {
    if (iVar9 < 0) {
      piVar2[2] = iVar9 + 0x18;
      piVar2[7] = piVar2[7] + -1;
      iVar9 = piVar2[6] + -1;
      if (iVar9 < 0) {
        iVar9 = 6;
      }
      piVar2[6] = iVar9;
      iVar9 = piVar2[3];
      piVar2[3] = iVar9 + -1;
      if (iVar9 + -1 == 0) {
        if (piVar2[4] + -1 < 0) {
          piVar2[4] = 0xb;
          uVar6 = piVar2[5] + 0x76b;
          piVar2[5] = piVar2[5] + -1;
          if (((uVar6 & 3) == 0) && ((int)uVar6 % 100 != 0)) {
            uVar6 = 1;
          }
          else {
            uVar6 = (uint)((int)uVar6 % 400 == 0);
          }
          piVar2[7] = uVar6 + 0x16c;
        }
        else {
          piVar2[4] = piVar2[4] + -1;
        }
        piVar2[3] = *(int *)(iVar10 + piVar2[4] * 4);
      }
    }
  }
  else {
    piVar2[2] = iVar9 + -0x18;
    iVar4 = piVar2[4];
    piVar2[7] = piVar2[7] + 1;
    iVar9 = piVar2[6] + 1;
    if (6 < iVar9) {
      iVar9 = 0;
    }
    piVar2[6] = iVar9;
    iVar8 = piVar2[3] + 1;
    piVar2[3] = iVar8;
    iVar9 = *(int *)(iVar10 + iVar4 * 4);
    if (iVar9 < iVar8) {
      piVar2[3] = iVar8 - iVar9;
      if (iVar4 == 0xb) {
        piVar2[4] = 0;
        piVar2[7] = 0;
        piVar2[5] = piVar2[5] + 1;
      }
      else {
        piVar2[4] = iVar4 + 1;
      }
    }
  }
  FUN_2c66d858();
  return piVar2;
}

