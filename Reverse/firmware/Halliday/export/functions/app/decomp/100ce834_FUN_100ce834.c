/* FUN_100ce834 @ 0x100ce834 */

int FUN_100ce834(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  int iVar3;
  int extraout_r2_02;
  undefined4 extraout_r3;
  uint uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar6 = CONCAT44(param_2,param_1);
  uVar7 = param_4;
  if (param_1 == 0) {
    FUN_10119dc2(DAT_100ce984,DAT_100ce980,DAT_100ce97c,0x10e7,0,param_2,param_3,param_4,param_4);
    FUN_10119dc2(DAT_100ce988);
    uVar6 = FUN_1011a1f0(DAT_100ce97c,0x10e7,param_3,param_4);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if ((param_2 == (int *)0x0) || (param_4 = 0, *param_2 == 0)) {
    FUN_10119dc2(DAT_100ce984,DAT_100ce98c,DAT_100ce97c,0x10e8,uVar6,param_3,param_4,uVar7);
    FUN_10119dc2(DAT_100ce988);
    uVar6 = FUN_1011a1f0(DAT_100ce97c,0x10e8,param_3,param_4);
    param_3 = extraout_r2_00;
  }
  uVar4 = (uint)*(ushort *)(param_2 + 3);
  if (uVar4 == 0) {
    FUN_10119dc2(DAT_100ce984,DAT_100ce990,DAT_100ce97c,0x10e9,uVar6,param_3,0,uVar7);
    FUN_10119dc2(DAT_100ce988);
    uVar6 = FUN_1011a1f0(DAT_100ce97c,0x10e9,param_3,uVar4);
    param_3 = extraout_r2_01;
  }
  uVar4 = (uint)*(ushort *)((int)param_2 + 10);
  if (uVar4 == 0) {
    FUN_10119dc2(DAT_100ce984,DAT_100ce994,DAT_100ce97c,0x10ef,uVar6,param_3,0,uVar7);
    FUN_10119dc2(DAT_100ce988);
    FUN_1011a1f0(DAT_100ce97c,0x10ef,param_3,uVar4);
  }
  if (*(char *)(param_1 + 0xd) == '\a') {
    puVar1 = (undefined1 *)FUN_100cc814(param_1);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = (undefined1 *)FUN_100cc814();
      if (puVar1 == (undefined1 *)0x0) {
        return -0xc;
      }
      FUN_10134778(puVar1 + 1,param_1 + 0x90);
      *puVar1 = *(undefined1 *)(param_1 + 8);
    }
    iVar3 = *(int *)(puVar1 + 8);
    if (iVar3 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)(iVar3 + -0x14);
    }
    bVar2 = false;
    for (; piVar5 != (int *)0x0; piVar5 = (int *)(piVar5[5] + -0x14)) {
      if (piVar5 == param_2) {
        if (iVar3 == 0) {
          FUN_101347a2(puVar1);
        }
        return -0x78;
      }
      if (((short)piVar5[2] == (short)param_2[2]) &&
         (*(ushort *)(param_2 + 3) <= *(ushort *)(piVar5 + 3))) {
        bVar2 = true;
      }
      if ((piVar5 == (int *)0xffffffec) || (piVar5[5] == 0)) break;
    }
    if ((bVar2) || (iVar3 = FUN_100cd1e0(param_1,param_2), iVar3 == 0)) {
      param_2[5] = *(int *)(puVar1 + 8);
      *(int **)(puVar1 + 8) = param_2 + 5;
      if (*(int *)(puVar1 + 0xc) == 0) {
        *(int **)(puVar1 + 0xc) = param_2 + 5;
        iVar3 = 0;
      }
      else {
        iVar3 = 0;
      }
    }
    else if (*(int *)(puVar1 + 8) == 0) {
      FUN_101347a2(puVar1);
      iVar3 = extraout_r2_02;
    }
  }
  else {
    iVar3 = -0x80;
  }
  return iVar3;
}

