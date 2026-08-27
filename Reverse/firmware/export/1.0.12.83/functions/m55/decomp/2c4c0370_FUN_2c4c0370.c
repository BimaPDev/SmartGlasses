/* FUN_2c4c0370 @ 0x2c4c0370 */

uint FUN_2c4c0370(uint param_1,byte *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (0x8e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4c0484,param_1,0x8f);
  }
  if (param_1 - 0x50 < 3) {
    return 1;
  }
  if (param_1 - 0x53 < 0x3c) {
    uVar7 = FUN_2c673b78();
  }
  else {
    iVar2 = FUN_2c4c0030();
    iVar4 = DAT_2c4c0470;
    uVar5 = param_1;
    if (((0x17 < param_1) && (uVar5 = param_1 - 0x18, 0x1f < uVar5)) &&
       (uVar5 = param_1 - 0x38, 0x17 < uVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4c046c,DAT_2c4c0468,param_1);
    }
    uVar7 = *param_2 & 1;
    if ((*param_2 & 1) == 0) {
      FUN_2c4b74ac(param_1);
      iVar4 = DAT_2c4c0474;
      iVar2 = *(int *)(DAT_2c4c0470 + iVar2 * 4);
      iVar3 = 1 << (uVar5 & 0xff);
      *(int *)(iVar2 + 0x34) = iVar3;
      *(uint *)(iVar4 + param_1 * 4) = uVar7;
      *(int *)(iVar2 + 0x18) = iVar3;
    }
    else {
      iVar6 = 1 << (uVar5 & 0xff);
      iVar3 = *(int *)(DAT_2c4c0470 + iVar2 * 4);
      *(int *)(iVar3 + 0x34) = iVar6;
      if (param_2[2] == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c4c048c,DAT_2c4c0488,param_1);
      }
      if (param_2[1] == 1) {
        *(int *)(iVar3 + 0x38) = iVar6;
      }
      else {
        *(int *)(iVar3 + 0x20) = iVar6;
      }
      if (param_2[2] == 1) {
        *(int *)(iVar3 + 0x3c) = iVar6;
      }
      else {
        *(int *)(iVar3 + 0x24) = iVar6;
      }
      if ((int)((uint)*param_2 << 0x1e) < 0) {
        *(int *)(iVar3 + 0x48) = iVar6;
      }
      else {
        *(int *)(iVar3 + 0x28) = iVar6;
      }
      *(undefined4 *)(DAT_2c4c0474 + param_1 * 4) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(*(int *)(DAT_2c4c0478 + 8) + 0x98) = DAT_2c4c047c;
      puVar1 = DAT_2c4c0480;
      DataSynchronizationBarrier(0xf);
      *(undefined1 *)((int)DAT_2c4c0480 + 0x316) = 0xa0;
      *puVar1 = 0x400000;
      FUN_2c4b7490(param_1);
      iVar4 = *(int *)(iVar4 + iVar2 * 4);
      uVar7 = 0;
      *(int *)(iVar4 + 0x4c) = iVar6;
      *(int *)(iVar4 + 0x1c) = iVar6;
      *(int *)(iVar4 + 0x30) = iVar6;
    }
  }
  return uVar7;
}

