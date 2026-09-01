/* FUN_100d04d8 @ 0x100d04d8 */

undefined4 FUN_100d04d8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r2;
  undefined4 extraout_r3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  int iVar8;
  
  uVar7 = CONCAT44(param_2,param_1);
  iVar1 = param_3;
  uVar2 = param_4;
  iVar3 = param_1;
  iVar8 = param_2;
  if (param_1 == 0) {
    FUN_10119dc2(DAT_100d05b0,DAT_100d05ac,DAT_100d05a8,2999,0,param_2,param_3,param_4,0,param_2);
    uVar7 = FUN_1011a1f0(DAT_100d05a8,2999,iVar1,uVar2);
    iVar1 = extraout_r2;
    uVar2 = extraout_r3;
  }
  if (param_2 == 0) {
    FUN_10119dc2(DAT_100d05b0,DAT_100d05b4,DAT_100d05a8,3000,uVar7,iVar1,uVar2,iVar3,iVar8);
    FUN_1011a1f0(DAT_100d05a8,3000,iVar1,uVar2);
  }
  iVar1 = FUN_100cf740(param_1);
  if (iVar1 == 0) {
    FUN_100c1c90(param_2);
    uVar2 = 0xffffff80;
  }
  else if (param_3 == 0) {
    piVar4 = *(int **)(iVar1 + 0x28);
    if (piVar4 == (int *)0x0) {
      piVar6 = (int *)0x0;
      piVar4 = (int *)0x0;
    }
    else {
      piVar6 = piVar4 + -0x4d;
      if (piVar6 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)*piVar4;
        if (piVar4 != (int *)0x0) {
          piVar4 = piVar4 + -0x4d;
        }
      }
    }
    iVar3 = 0;
    while (piVar5 = piVar4, piVar6 != (int *)0x0) {
      iVar3 = FUN_100cf5a4(piVar6,param_2,0);
      if (-1 < iVar3) goto LAB_100d0588;
      piVar4 = piVar5;
      piVar6 = piVar5;
      if (((piVar5 != (int *)0x0) && (piVar4 = piVar5 + 0x4d, piVar5 + 0x4d != (int *)0x0)) &&
         (piVar4 = (int *)piVar5[0x4d], piVar4 != (int *)0x0)) {
        piVar4 = piVar4 + -0x4d;
      }
    }
    if (iVar3 == 0) {
LAB_100d0588:
      uVar2 = 0;
    }
    else {
      FUN_100c1c20(iVar1 + 0xc,param_2);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = FUN_10134022(param_1,4,param_2,param_3,param_4);
  }
  return uVar2;
}

