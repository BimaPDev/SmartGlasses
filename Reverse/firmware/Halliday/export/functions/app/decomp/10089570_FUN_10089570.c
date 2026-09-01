/* FUN_10089570 @ 0x10089570 */

void FUN_10089570(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_r2;
  int iVar5;
  undefined4 extraout_r3;
  undefined8 uVar6;
  
  uVar3 = DAT_100895ec;
  piVar2 = DAT_100895e8;
  piVar1 = DAT_100895e4;
  iVar5 = *DAT_100895e4;
  iVar4 = *DAT_100895e8;
  *DAT_100895e4 = iVar5 + 1;
  iVar4 = FUN_10094280(iVar4,(iVar5 + 1) * 8,uVar3);
  *piVar2 = iVar4;
  if (iVar4 == 0) {
    uVar6 = FUN_10094174(3,DAT_100895fc,0x147,DAT_100895ec,DAT_100895f8,DAT_100895f4,DAT_100895f0);
    FUN_10119dc2(DAT_10089604,DAT_10089600,DAT_100895fc,0x147,uVar6);
    FUN_10119dc2(DAT_10089608);
    FUN_1011a1f0(DAT_100895fc,0x147,extraout_r2,extraout_r3);
  }
  iVar4 = *piVar1;
  iVar5 = *piVar2;
  *(undefined4 *)(iVar5 + (iVar4 + 0x1fffffff) * 8) = param_1;
  *(undefined4 *)(iVar5 + (iVar4 + 0x1fffffff) * 8 + 4) = param_2;
  return;
}

