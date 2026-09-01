/* FUN_100597f8 @ 0x100597f8 */

/* WARNING: Removing unreachable block (ram,0x100598e6) */

void FUN_100597f8(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar5;
  undefined4 extraout_r3;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint local_40;
  undefined1 auStack_3c [24];
  
  if ((param_1 == 0) || (param_2 == 0)) {
    FUN_10119dc2(DAT_100598f0,DAT_100598ec,DAT_100598e8,0x187,param_1,param_2);
    FUN_1011a1f0(DAT_100598e8,0x187,param_3,param_4);
  }
  uVar3 = DAT_100598f8;
  uVar2 = DAT_100598f0;
  uVar1 = DAT_100598e8;
  iVar7 = 0;
  while (param_3 != 0) {
    uVar8 = (**(code **)(**(int **)(param_1 + 4) + 0xc))
                      (*(int **)(param_1 + 4),param_2 + iVar7,param_3,&local_40);
    uVar9 = uVar8 & 0xffffffff00000000;
    uVar5 = extraout_r2;
    if ((int)uVar8 != 0) {
      FUN_10119dc2(uVar2,uVar3,uVar1,0x191,uVar8);
      uVar9 = FUN_1011a1f0(uVar1,0x191,extraout_r2,extraout_r3);
      uVar5 = extraout_r2_00;
    }
    uVar4 = local_40;
    if (param_3 < local_40) {
      FUN_10119dc2(uVar2,DAT_100598f4,uVar1,0x193,uVar9);
      FUN_1011a1f0(uVar1,0x193,uVar5,uVar4);
    }
    iVar7 = iVar7 + local_40;
    param_3 = param_3 - local_40;
    if (local_40 == 0) {
      iVar6 = *(int *)(param_1 + 8);
      if (*(byte *)(iVar6 + 4) != 3) {
        if (*(byte *)(iVar6 + 4) < 3) {
          FUN_10115fc4(auStack_3c,1,0,iVar6 + 0x294);
          FUN_1011606c(auStack_3c,1,0xffffffff,0xffffffff);
          FUN_1013cfc4(*(int *)(param_1 + 8) + 0x294);
        }
        else {
          do {
          } while (-1 < *(int *)(iVar6 + 0x260) << 0x1a);
          *(uint *)(iVar6 + 0x260) = *(uint *)(iVar6 + 0x260) & 0xffffffdf;
        }
      }
    }
  }
  return;
}

