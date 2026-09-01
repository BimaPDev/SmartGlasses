/* FUN_10069ba8 @ 0x10069ba8 */

undefined4 FUN_10069ba8(int param_1,int param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar4 = param_3 & 0x1ff;
  uVar6 = (int)param_6 >> 0x1f;
  uVar7 = -(uint)(0x200 < uVar4);
  bVar8 = uVar7 <= uVar6;
  if (uVar6 == uVar7) {
    bVar8 = 0x200 - uVar4 <= param_6;
  }
  uVar5 = 0x200 - uVar4;
  if (!bVar8) {
    uVar5 = param_6;
    uVar7 = uVar6;
  }
  if (uVar5 != 0 || uVar7 != 0) {
    iVar3 = param_4 - (uint)(param_3 < uVar4);
    iVar2 = param_1 + 0x184;
    pcVar1 = (code *)**(undefined4 **)(*(int *)(param_1 + 4) + 8);
    (*pcVar1)(*(int *)(param_1 + 4),pcVar1,param_3 - uVar4,iVar3,iVar2);
    if (param_2 == 0) {
      FUN_1011ea40(param_5,iVar2 + uVar4,uVar5);
    }
    else {
      FUN_1011ea40(iVar2 + uVar4,param_5,uVar5);
      pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 4) + 8) + 4);
      (*pcVar1)(*(int *)(param_1 + 4),pcVar1,param_3 - uVar4,iVar3,iVar2);
    }
    bVar8 = CARRY4(param_3,uVar5);
    param_3 = param_3 + uVar5;
    param_5 = param_5 + uVar5;
    param_4 = param_4 + uVar7 + bVar8;
    param_6 = param_6 - uVar5;
  }
  uVar6 = param_6;
  if ((int)param_6 < 0) {
    uVar6 = param_6 + 0x1ff;
  }
  uVar7 = uVar6 & 0xfffffe00;
  if (uVar7 != 0) {
    iVar2 = *(int *)(param_1 + 4);
    if (param_2 == 0) {
      (*(code *)**(undefined4 **)(iVar2 + 8))
                (iVar2,(code *)**(undefined4 **)(iVar2 + 8),param_3,param_4,param_5);
    }
    else {
      pcVar1 = *(code **)(*(int *)(iVar2 + 8) + 4);
      (*pcVar1)(iVar2,pcVar1,param_3,param_4,param_5);
    }
    bVar8 = CARRY4(param_3,uVar7);
    param_3 = param_3 + uVar7;
    param_4 = param_4 + ((int)uVar6 >> 0x1f) + (uint)bVar8;
    iVar2 = -param_6;
    uVar6 = param_6 * -0x800000;
    param_5 = param_5 + uVar7;
    param_6 = param_6 & 0x1ff;
    if (-1 < iVar2) {
      param_6 = -(uVar6 >> 0x17);
    }
  }
  if (0 < (int)param_6) {
    iVar2 = param_1 + 0x184;
    pcVar1 = (code *)**(undefined4 **)(*(int *)(param_1 + 4) + 8);
    (*pcVar1)(*(int *)(param_1 + 4),pcVar1,param_3,param_4,iVar2);
    if (param_2 == 0) {
      FUN_1011ea40(param_5,iVar2,param_6);
      return 0;
    }
    FUN_1011ea40(iVar2,param_5,param_6);
    pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 4) + 8) + 4);
    (*pcVar1)(*(int *)(param_1 + 4),pcVar1,param_3,param_4,iVar2);
  }
  return 0;
}

