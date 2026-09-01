/* FUN_101162c8 @ 0x101162c8 */

undefined4 FUN_101162c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if ((*DAT_10116360 == DAT_10116364) && (iVar2 = DAT_10116360[1], iVar2 != 0)) {
    piVar5 = (int *)0x0;
    piVar3 = DAT_10116360;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      piVar5 = piVar3 + 2;
      piVar1 = piVar3 + 2;
      piVar3 = piVar3 + 9;
      if (*piVar1 == param_1) goto LAB_10116334;
    }
    if (iVar2 != iVar4) {
LAB_10116334:
      if (piVar5[2] != 0) {
        FUN_1011ea40(piVar5[1],piVar5[3]);
      }
      if (piVar5[5] != 0) {
        FUN_1011ea40(piVar5[4],piVar5[6]);
      }
      if (piVar5[8] != 0) {
        FUN_1011ea48(piVar5[7],0);
        return 0;
      }
      return 0;
    }
    FUN_100a5b78((DAT_1011636c - DAT_10116368) * 0x20 & 0xff00U | 0xe30021,DAT_10116374,DAT_10116370
                 ,param_1,param_4);
  }
  else {
    FUN_100a5b78((DAT_1011636c - DAT_10116368) * 0x20 & 0xff00U | 0xd70021,DAT_10116374,DAT_10116378
                 ,DAT_10116368,param_4);
  }
  return 0xffffffff;
}

