/* FUN_10059990 @ 0x10059990 */

void FUN_10059990(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 uVar1;
  undefined4 extraout_r3;
  int iVar2;
  int extraout_r3_00;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_4;
  
  iVar6 = param_1;
  uVar7 = param_2;
  uStack_4 = param_4;
  if (param_1 == 0) {
    iVar2 = param_3;
    FUN_10119dc2(DAT_10059a60,DAT_10059a5c,DAT_10059a58,0x1e7,0,param_2,param_3,param_4,0,param_2);
    FUN_1011a1f0(DAT_10059a58,0x1e7,iVar2,param_4);
  }
  uVar3 = FUN_1013c70e();
  uVar4 = uVar3 & 0xffffffff00000000;
  uVar1 = extraout_r2;
  if ((int)uVar3 != 0) {
    uVar5 = extraout_r3;
    FUN_10119dc2(DAT_10059a60,DAT_10059a64,DAT_10059a58,0x1e8,uVar3,extraout_r2,extraout_r3,iVar6,
                 uVar7);
    FUN_10119dc2(DAT_10059a68);
    uVar4 = FUN_1011a1f0(DAT_10059a58,0x1e8,uVar1,uVar5);
    uVar1 = extraout_r2_00;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    FUN_10119dc2(DAT_10059a60,DAT_10059a6c,DAT_10059a58,0x1e9,uVar4,uVar1,0,iVar6,uVar7);
    uVar4 = FUN_1011a1f0(DAT_10059a58,0x1e9,uVar1,iVar2);
    uVar1 = extraout_r2_01;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    FUN_10119dc2(DAT_10059a60,DAT_10059a70,DAT_10059a58,0x1ea,uVar4,uVar1,0,iVar6,uVar7);
    uVar4 = FUN_1011a1f0(DAT_10059a58,0x1ea,uVar1,iVar2);
    uVar1 = extraout_r2_02;
    iVar2 = extraout_r3_00;
  }
  if (param_3 == 0) {
    FUN_10119dc2(DAT_10059a60,DAT_10059a74,DAT_10059a58,0x1eb,uVar4);
    FUN_1011a1f0(DAT_10059a58,0x1eb,uVar1,iVar2);
  }
  FUN_1011afa0(param_1,param_2,param_3,&uStack_4,iVar6,&uStack_4);
  return;
}

