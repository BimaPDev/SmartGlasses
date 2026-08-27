/* FUN_14037cb8 @ 0x14037cb8 */

void FUN_14037cb8(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  
  if (param_1[0xc0] == 0) {
    piVar7 = param_1 + 0xc2;
  }
  else {
    uVar4 = 0;
    piVar1 = param_1 + 0xc5;
    do {
      while( true ) {
        piVar7 = piVar1;
        uVar6 = piVar7[-1];
        if ((int)uVar6 < 0) break;
        FUN_14038944(piVar7[-3],piVar7[-2] + (int)param_1,uVar6);
        uVar4 = uVar4 + 1;
        piVar1 = piVar7 + 3;
        if ((uint)param_1[0xc0] <= uVar4) goto LAB_14037d22;
      }
      if ((4 < (uVar6 & 0x7fffffff)) || ((uVar6 & 0x7fffffff) == 3)) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_14037dd0,DAT_14037dd4,piVar7[-3],piVar7[-2],uVar6);
      }
      FUN_140e5278(piVar7[-3],piVar7 + -2);
      uVar4 = uVar4 + 1;
      piVar1 = piVar7 + 3;
    } while (uVar4 < (uint)param_1[0xc0]);
  }
LAB_14037d22:
  piVar3 = DAT_14037dc4;
  piVar5 = DAT_14037dc8;
  piVar1 = DAT_14037dcc;
  if (param_1[0xc1] != 0) {
    uVar4 = 0;
    do {
      FUN_140e5658(piVar7[uVar4 * 2],0,piVar7[uVar4 * 2 + 1]);
      uVar4 = uVar4 + 1;
      piVar3 = DAT_14037dc4;
      piVar5 = DAT_14037dc8;
      piVar1 = DAT_14037dcc;
    } while (uVar4 < (uint)param_1[0xc1]);
  }
  do {
    while (*param_1 == 1) {
      piVar7 = piVar3 + 1;
      *piVar5 = (param_1[1] | 1U) + 0x60000000;
      iVar2 = FUN_14037c58(param_1[1] & 0xfffffffe,(param_1[2] & 0xfffffffeU) + 0xe0200000);
      *piVar3 = iVar2;
      param_1 = param_1 + 3;
      piVar3 = piVar7;
      piVar5 = piVar5 + 1;
      if (piVar7 == piVar1) {
        return;
      }
    }
    if (*param_1 == 2) {
      *piVar3 = param_1[2];
      *piVar5 = (param_1[1] | 1U) + 0x60000000;
    }
    piVar3 = piVar3 + 1;
    param_1 = param_1 + 3;
    piVar5 = piVar5 + 1;
  } while (piVar3 != piVar1);
  return;
}

