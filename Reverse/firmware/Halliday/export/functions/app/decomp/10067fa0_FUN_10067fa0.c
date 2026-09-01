/* FUN_10067fa0 @ 0x10067fa0 */

void FUN_10067fa0(uint param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar6;
  undefined4 unaff_r6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 uVar9;
  undefined4 unaff_lr;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  
  if (param_2 != (undefined4 *)0x0) {
    uVar6 = (DAT_100680e4 - DAT_100680e0) * 0x20 & 0xff00;
    FUN_100a5b78(uVar6 | 0x180013,DAT_100680ec,DAT_100680e8,*param_2,param_2[1],param_2[2]);
    FUN_100a5b78(uVar6 | 0x1a0013,DAT_100680ec,DAT_100680f0,param_2[3],param_2[4],param_2[5]);
    FUN_100a5b78(uVar6 | 0x1c0011,DAT_100680ec,DAT_100680f4,param_2[7]);
    uVar4 = DAT_10068110;
    uVar9 = DAT_100680ec;
    iVar2 = 0;
    puVar8 = param_2;
    do {
      iVar10 = (uint)(0.0 < (float)puVar8[9]) * (int)(float)puVar8[9];
      iVar5 = iVar2 + 1;
      iVar11 = (uint)(0.0 < (float)puVar8[8]) * (int)(float)puVar8[8];
      iVar7 = iVar2 + 2;
      FUN_100a5b78(uVar6 | 0x1f0014,uVar9,uVar4,iVar2,iVar11,iVar5,iVar10);
      puVar8 = puVar8 + 2;
      iVar2 = iVar7;
    } while (iVar7 != 0x10);
    FUN_100a5b78(uVar6 | 0x230011,DAT_100680ec,DAT_100680f8,param_2[0x18],iVar11,iVar5,iVar10);
    puVar8 = (undefined4 *)param_2[0x1a];
    if (puVar8 != (undefined4 *)0x0) {
      FUN_100a5b78(uVar6 | 0x290013,DAT_100680ec,DAT_100680fc,*puVar8,puVar8[1],puVar8[2],iVar10);
      FUN_100a5b78(uVar6 | 0x2b0013,DAT_100680ec,DAT_10068100,puVar8[3],puVar8[4],puVar8[5]);
      iVar5 = puVar8[8];
      iVar11 = puVar8[7];
      FUN_100a5b78(uVar6 | 0x2d0013,DAT_100680ec,DAT_10068104,puVar8[6],iVar11,iVar5);
    }
    FUN_100a5b78(uVar6 | 0x310011,DAT_100680ec,DAT_10068108,param_2[0x1c],iVar11,iVar5,iVar10);
    FUN_100a5b78(uVar6 | 0x340011,DAT_100680ec,DAT_1006810c,param_2[6]);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  uVar9 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar9 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar6 = getBasePriority(), uVar6 == 0 || 0x20 < uVar6)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar5 = FUN_10115464();
  iVar2 = DAT_1011309c;
  if (param_1 < 5) {
    iVar2 = DAT_101130a4;
  }
  uVar4 = DAT_101130a8;
  if (param_1 < 5) {
    uVar4 = *(undefined4 *)(iVar2 + param_1 * 4);
  }
  uVar6 = (DAT_101130a0 - DAT_1011309c) * 0x20 & 0xff00;
  uVar13 = 0;
  FUN_100a5b78(uVar6 | 0x700013,DAT_101130ac,DAT_101130b0,param_1,uVar4,0,param_3,param_4,unaff_r4,
               unaff_r5,unaff_r6,unaff_r7,unaff_r8,unaff_lr);
  if ((param_2 != (undefined4 *)0x0) && ((param_2[7] & 0x1ff) != 0)) {
    FUN_100a5b78(uVar6 | 0x7b0011,DAT_101130ac,DAT_101130b4,param_2[7] & 0x1ff,uVar4,uVar13,param_3,
                 param_4,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8,unaff_lr);
  }
  FUN_10056ae4(7,1);
  iVar2 = FUN_10057234();
  if (iVar2 == 0) {
    if (((iVar5 == 0) || (pcVar3 = (char *)FUN_1013c71a(iVar5), pcVar3 == (char *)0x0)) ||
       (*pcVar3 == '\0')) {
      pcVar3 = DAT_101130b8;
    }
    FUN_100a5b78(uVar6 | 0x820012,DAT_101130ac,DAT_101130bc,iVar5,pcVar3);
    FUN_1005d8ec(param_1,param_2);
    FUN_10057940();
    FUN_100691bc(param_1,param_2,iVar5);
    FUN_1006a2c8(param_2,0);
  }
  iVar2 = 1;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar6 = getBasePriority(), uVar6 == 0 || 0x20 < uVar6)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar12 = FUN_100552e8();
  do {
  } while (iVar2 != 0);
  uVar4 = extraout_r2_00;
  if (param_1 == 4) {
    FUN_10119dc2(DAT_101130c8,DAT_101130c4,DAT_101130c0,0xa0,uVar12);
    FUN_10119dc2(DAT_101130cc);
    uVar12 = FUN_1011a1f0(DAT_101130c0,0xa0,uVar4,0);
    uVar4 = extraout_r2_01;
  }
  if (((param_2 != (undefined4 *)0x0) && (uVar6 = param_2[7], (uVar6 & 0x1ff) != 0)) &&
     (param_1 != 2)) {
    FUN_10119dc2(DAT_101130c8,DAT_101130d0,DAT_101130c0,0xa7,uVar12);
    FUN_10119dc2(DAT_101130d4);
    FUN_1011a1f0(DAT_101130c0,0xa7,uVar4,uVar6 & 0x1ff);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar9);
  }
  InstructionSynchronizationBarrier(0xf);
  FUN_10068ad0(iVar5);
  return;
}

