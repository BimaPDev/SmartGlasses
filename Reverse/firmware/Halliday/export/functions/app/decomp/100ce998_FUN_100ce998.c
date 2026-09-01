/* FUN_100ce998 @ 0x100ce998 */

undefined4 FUN_100ce998(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_r2;
  uint uVar4;
  undefined4 extraout_r3;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  int *piVar10;
  undefined8 uVar11;
  
  uVar11 = CONCAT44(param_2,param_1);
  iVar1 = param_1;
  piVar5 = param_2;
  uVar2 = param_3;
  if (param_1 == 0) {
    FUN_10119dc2(DAT_100ceabc,DAT_100ceab8,DAT_100ceab4,0x1147,0,param_2,param_3,param_4,0,param_2,
                 param_3);
    FUN_10119dc2(DAT_100ceac0);
    uVar11 = FUN_1011a1f0(DAT_100ceab4,0x1147,param_3,param_4);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (param_2 == (int *)0x0) {
    FUN_10119dc2(DAT_100ceabc,DAT_100ceac4,DAT_100ceab4,0x1148,uVar11,param_3,param_4,iVar1,piVar5,
                 uVar2);
    FUN_10119dc2(DAT_100ceac0);
    FUN_1011a1f0(DAT_100ceab4,0x1148,param_3,param_4);
  }
  if (*(char *)(param_1 + 0xd) == '\a') {
    iVar1 = FUN_100cc814(param_1);
    if (iVar1 != 0) {
      piVar5 = *(int **)(iVar1 + 8);
      if (piVar5 == (int *)0x0) {
        piVar8 = (int *)0x0;
        piVar6 = (int *)0x0;
      }
      else {
        piVar8 = piVar5 + -5;
        piVar6 = piVar8;
        if ((piVar8 != (int *)0x0) && (piVar6 = (int *)*piVar5, piVar6 != (int *)0x0)) {
          piVar6 = piVar6 + -5;
        }
      }
      uVar4 = 0;
      bVar9 = false;
      piVar5 = (int *)0x0;
      while (piVar7 = piVar6, piVar8 != (int *)0x0) {
        piVar10 = piVar8 + 5;
        if (piVar8 == param_2) {
          FUN_101343c0(iVar1 + 8,piVar5,piVar10);
          uVar3 = FUN_1013457a(param_2 + 4);
          uVar4 = (uVar3 & 7) >> 2;
          piVar10 = piVar5;
          if ((int)(uVar3 << 0x1d) < 0) {
            FUN_100d06c4(param_1,param_2);
          }
          else {
            uVar4 = 1;
          }
        }
        else if ((short)piVar8[2] == (short)param_2[2]) {
          bVar9 = true;
        }
        piVar6 = piVar7;
        piVar8 = piVar7;
        piVar5 = piVar10;
        if (((piVar7 != (int *)0x0) && (piVar6 = piVar7 + 5, piVar7 + 5 != (int *)0x0)) &&
           (piVar6 = (int *)piVar7[5], piVar6 != (int *)0x0)) {
          piVar6 = piVar6 + -5;
        }
      }
      if (uVar4 != 0) {
        if (bVar9) {
          (*(code *)*param_2)(param_1,param_2,0,0);
          return 0;
        }
        *(undefined2 *)(param_2 + 3) = 0;
        uVar2 = FUN_100cd1e0(param_1,param_2);
        return uVar2;
      }
    }
    uVar2 = 0xffffffea;
  }
  else {
    uVar2 = 0xffffff80;
  }
  return uVar2;
}

