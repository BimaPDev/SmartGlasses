/* FUN_1009331c @ 0x1009331c */

int * FUN_1009331c(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar5;
  
  if (param_1[1] != 0) {
    FUN_100932b0(*param_1);
  }
  iVar2 = FUN_1012b09e(DAT_100933cc);
  if (iVar2 != 0) {
    uVar3 = FUN_1012a75c();
    *DAT_100933d0 = uVar3;
  }
  piVar4 = (int *)FUN_10094064(DAT_100933cc);
  if (piVar4 == (int *)0x0) {
    uVar5 = FUN_10094174(3,DAT_100933e0,0x5d,DAT_100933e4,DAT_100933dc,DAT_100933d8,DAT_100933d4);
    FUN_10119dc2(DAT_100933ec,DAT_100933e8,DAT_100933e0,0x5d,uVar5);
    FUN_10119dc2(DAT_100933f0);
    FUN_1011a1f0(DAT_100933e0,0x5d,extraout_r2,extraout_r3);
  }
  else {
    FUN_1011ea40(piVar4,param_1,0x44);
    if ((undefined4 *)*param_1 == param_1) {
      *piVar4 = (int)piVar4;
    }
    bVar1 = *(byte *)((int)piVar4 + 0x42);
    *(byte *)((int)piVar4 + 0x42) = bVar1 & 0xfb | (*DAT_100933f4 & 1) << 2;
    if ((int)((uint)bVar1 << 0x1f) < 0) {
      if ((code *)piVar4[5] != (code *)0x0) {
        iVar2 = (*(code *)piVar4[5])(piVar4);
        piVar4[8] = piVar4[8] + iVar2;
        piVar4[10] = iVar2 + piVar4[10];
      }
      if (((code *)piVar4[1] != (code *)0x0) && (*piVar4 != 0)) {
        (*(code *)piVar4[1])(*piVar4,piVar4[8]);
      }
    }
    FUN_100930a8();
  }
  return piVar4;
}

