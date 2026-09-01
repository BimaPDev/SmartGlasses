/* FUN_100d05b8 @ 0x100d05b8 */

int FUN_100d05b8(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined8 uVar8;
  
  uVar8 = CONCAT44(param_2,param_1);
  uVar1 = param_4;
  if (param_1 == 0) {
    FUN_10119dc2(DAT_100d06bc,DAT_100d06b8,DAT_100d06b4,0xbe2,0,param_2,param_3,param_4,param_4);
    uVar8 = FUN_1011a1f0(DAT_100d06b4,0xbe2,param_3,param_4);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (param_2 == (undefined4 *)0x0) {
    FUN_10119dc2(DAT_100d06bc,DAT_100d06c0,DAT_100d06b4,0xbe3,uVar8,param_3,param_4,uVar1);
    FUN_1011a1f0(DAT_100d06b4,0xbe3,param_3,param_4);
  }
  uVar1 = FUN_10115464();
  iVar2 = FUN_1013cd52();
  if (-1 < iVar2) {
    FUN_10115194(uVar1,0xffffffff);
  }
  iVar3 = FUN_100cf740(param_1);
  if (iVar3 == 0) {
    if (-1 < iVar2) {
      FUN_10115194(uVar1,iVar2);
    }
    iVar2 = -0x80;
  }
  else {
    piVar5 = *(int **)(iVar3 + 0x28);
    if ((piVar5 != (int *)0x0) && (piVar7 = piVar5 + -0x4d, piVar7 != (int *)0x0)) {
      piVar5 = (int *)*piVar5;
      if (piVar5 != (int *)0x0) {
        piVar5 = piVar5 + -0x4d;
      }
      while( true ) {
        piVar6 = piVar5;
        if (piVar7[0x37] == 0) {
          iVar4 = FUN_100cf698(piVar7,param_2);
          if (-1 < iVar4) {
            if (iVar2 < 0) {
              return iVar4;
            }
            FUN_10115194(uVar1,iVar2);
            return iVar4;
          }
          if (param_2 == (undefined4 *)piVar7[0x37]) goto LAB_100d0672;
        }
        if (piVar6 == (int *)0x0) break;
        piVar5 = (int *)0x0;
        piVar7 = piVar6;
        if ((piVar6 != (int *)0xfffffecc) && (piVar5 = (int *)piVar6[0x4d], piVar5 != (int *)0x0)) {
          piVar5 = piVar5 + -0x4d;
        }
      }
    }
    *param_2 = 0;
    if (*(undefined4 **)(iVar3 + 8) == (undefined4 *)0x0) {
      *(undefined4 **)(iVar3 + 4) = param_2;
      *(undefined4 **)(iVar3 + 8) = param_2;
    }
    else {
      **(undefined4 **)(iVar3 + 8) = param_2;
      *(undefined4 **)(iVar3 + 8) = param_2;
    }
LAB_100d0672:
    if (-1 < iVar2) {
      FUN_10115194(uVar1,iVar2);
    }
    iVar2 = 0;
  }
  return iVar2;
}

