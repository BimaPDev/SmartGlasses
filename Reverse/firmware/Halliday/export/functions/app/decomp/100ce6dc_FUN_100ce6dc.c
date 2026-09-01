/* FUN_100ce6dc @ 0x100ce6dc */

undefined4 FUN_100ce6dc(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  ushort uVar4;
  undefined4 extraout_r3;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int *piVar9;
  
  uVar7 = CONCAT44(param_2,param_1);
  iVar3 = param_1;
  piVar9 = param_2;
  if (param_1 == 0) {
    FUN_10119dc2(DAT_100ce7b8,DAT_100ce7b4,DAT_100ce7b0,0x1053,0,param_2,param_3,param_4,0,param_2);
    FUN_10119dc2(DAT_100ce7bc);
    uVar7 = FUN_1011a1f0(DAT_100ce7b0,0x1053,param_3,param_4);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if ((param_2 == (int *)0x0) || (param_4 = 0, *param_2 == 0)) {
    FUN_10119dc2(DAT_100ce7b8,DAT_100ce7c0,DAT_100ce7b0,0x1054,uVar7,param_3,param_4,iVar3,piVar9);
    FUN_10119dc2(DAT_100ce7bc);
    uVar7 = FUN_1011a1f0(DAT_100ce7b0,0x1054,param_3,param_4);
    param_3 = extraout_r2_00;
  }
  uVar5 = (uint)*(ushort *)(param_2 + 1);
  if (uVar5 == 0) {
    FUN_10119dc2(DAT_100ce7b8,DAT_100ce7c4,DAT_100ce7b0,0x1055,uVar7,param_3,0,iVar3,piVar9);
    FUN_10119dc2(DAT_100ce7bc);
    FUN_1011a1f0(DAT_100ce7b0,0x1055,param_3,uVar5);
  }
  if (*(char *)(param_1 + 0xd) != '\a') {
    return 0xffffff80;
  }
  if (*(short *)((int)param_2 + 6) == 0) {
    uVar4 = *(ushort *)(param_2 + 3);
    iVar3 = FUN_10135318(param_1);
    uVar5 = uVar4 + 2;
    if (uVar5 <= iVar3 - 1U) {
      uVar8 = 0x12;
      uVar2 = DAT_100ce7d0;
      uVar6 = DAT_100ce7d4;
      goto LAB_100ce780;
    }
  }
  sVar1 = FUN_10135318(param_1);
  uVar4 = *(ushort *)(param_2 + 3);
  if ((ushort)(sVar1 - 5U) <= *(ushort *)(param_2 + 3)) {
    uVar4 = sVar1 - 5U;
  }
  uVar5 = (uint)(ushort)(uVar4 + 4);
  uVar8 = 0x16;
  uVar2 = DAT_100ce7c8;
  uVar6 = DAT_100ce7cc;
LAB_100ce780:
  uVar2 = FUN_10134ab0(param_1,uVar2,param_2,uVar6,uVar8,uVar5);
  return uVar2;
}

