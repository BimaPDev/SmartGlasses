/* FUN_100d1ed4 @ 0x100d1ed4 */

void FUN_100d1ed4(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint extraout_r1;
  uint uVar3;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int iVar4;
  code *pcVar5;
  int extraout_r3;
  uint uVar6;
  undefined8 uVar7;
  undefined4 local_18;
  int iStack_14;
  
  local_18 = param_1;
  iStack_14 = param_2;
  FUN_1013547c((int)&local_18 + 1,*param_1 + 0x90);
  local_18 = (int *)((uint)local_18 & 0xffffff00);
  uVar7 = FUN_100e0b10(*(undefined1 *)(extraout_r2 + 8),&local_18);
  piVar1 = DAT_100d1f50;
  uVar3 = (uint)((ulonglong)uVar7 >> 0x20);
  if (param_2 == 0) {
    uVar3 = FUN_1013577a(param_1 + 0x19,0xd);
    if ((uVar3 != 0) && (extraout_r3 != 0)) {
      FUN_100e0bb4(extraout_r3);
    }
    iVar2 = *piVar1;
    if ((iVar2 == 0) || (pcVar5 = *(code **)(iVar2 + 0x1c), pcVar5 == (code *)0x0))
    goto LAB_100d1f1e;
    iVar2 = *param_1;
  }
  else {
    iVar2 = extraout_r2_00;
    if ((int)uVar7 != 0) {
      FUN_100e0b60();
      uVar3 = extraout_r1;
      iVar2 = extraout_r2_01;
    }
    iVar4 = *piVar1;
    if ((iVar4 == 0) || (pcVar5 = *(code **)(iVar4 + 0x20), pcVar5 == (code *)0x0))
    goto LAB_100d1f1e;
    uVar6 = param_2 - 1U & 0xff;
    iVar4 = DAT_100d1f54;
    if (0xd < uVar6) {
      uVar3 = 8;
      iVar4 = iVar2;
    }
    iVar2 = *param_1;
    if (uVar6 < 0xe) {
      uVar3 = (uint)*(byte *)(iVar4 + uVar6);
    }
  }
  (*pcVar5)(iVar2,uVar3);
LAB_100d1f1e:
  FUN_101359dc(param_1);
  return;
}

