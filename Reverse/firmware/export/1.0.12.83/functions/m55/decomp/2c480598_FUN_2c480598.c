/* FUN_2c480598 @ 0x2c480598 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c480598(uint *param_1,int param_2,int param_3,char *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  char *pcVar10;
  uint auStack_6c [8];
  undefined1 auStack_4c [32];
  int iStack_2c;
  
  iVar9 = (int)*param_4;
  iStack_2c = *_LAB_2c4807c8;
  if (0 < iVar9) {
    puVar8 = (uint *)(param_3 + -4);
    uVar5 = iVar9 - 1U & 0xff;
    uVar3 = 0;
    puVar6 = (uint *)(param_3 + uVar5 * 4);
    puVar4 = puVar8;
    do {
      puVar4 = puVar4 + 1;
      uVar3 = uVar3 | *puVar4;
    } while (puVar4 != puVar6);
    if (uVar3 != 0) {
      FUN_2c47f554(auStack_6c,param_2,param_2,param_4);
      pcVar10 = param_4 + 4;
      FUN_2c47f554(auStack_4c,param_1,auStack_6c,param_4);
      FUN_2c47f554(auStack_6c,auStack_6c,auStack_6c,param_4);
      FUN_2c47f554(param_2,param_2,param_3,param_4);
      FUN_2c47f554(param_3,param_3,param_3,param_4);
      FUN_2c47fbb8(param_1,param_1,param_3,pcVar10,iVar9);
      FUN_2c47fbb8(param_3,param_3,param_3,pcVar10,iVar9);
      iVar1 = FUN_2c47f470(param_3,param_1,param_3,iVar9);
      if (iVar1 != 0) {
        FUN_2c47f410(param_3,param_3,pcVar10,iVar9);
      }
      FUN_2c47f554(param_1,param_1,param_3,param_4);
      FUN_2c47fbb8(param_3,param_1,param_1,pcVar10,iVar9);
      FUN_2c47fbb8(param_1,param_1,param_3,pcVar10,iVar9);
      if ((*param_1 & 1) == 0) {
        puVar4 = param_1 + iVar9;
        uVar3 = 0;
        while (param_1 < puVar4) {
          puVar4 = puVar4 + -1;
          uVar2 = *puVar4;
          *puVar4 = uVar3 | uVar2 >> 1;
          uVar3 = uVar2 << 0x1f;
        }
      }
      else {
        iVar1 = FUN_2c47f410(param_1,param_1,pcVar10,iVar9);
        puVar4 = param_1 + iVar9;
        if (param_1 < puVar4) {
          uVar3 = 0;
          do {
            puVar4 = puVar4 + -1;
            uVar2 = *puVar4;
            *puVar4 = uVar3 | uVar2 >> 1;
            uVar3 = uVar2 << 0x1f;
          } while (param_1 < puVar4);
        }
        param_1[iVar9 + -1] = param_1[iVar9 + -1] | iVar1 << 0x1f;
      }
      FUN_2c47f554(param_3,param_1,param_1,param_4);
      iVar1 = FUN_2c47f470(param_3,param_3,auStack_4c,iVar9);
      if (iVar1 != 0) {
        FUN_2c47f410(param_3,param_3,pcVar10,iVar9);
      }
      iVar1 = FUN_2c47f470(param_3,param_3,auStack_4c,iVar9);
      if (iVar1 != 0) {
        FUN_2c47f410(param_3,param_3,pcVar10,iVar9);
      }
      iVar1 = FUN_2c47f470(auStack_4c,auStack_4c,param_3,iVar9);
      if (iVar1 != 0) {
        FUN_2c47f410(auStack_4c,auStack_4c,pcVar10,iVar9);
      }
      FUN_2c47f554(param_1,param_1,auStack_4c,param_4);
      iVar1 = FUN_2c47f470(auStack_6c,param_1,auStack_6c,iVar9);
      if (iVar1 != 0) {
        FUN_2c47f410(auStack_6c,auStack_6c,pcVar10,iVar9);
      }
      param_1 = param_1 + -1;
      puVar4 = puVar8;
      do {
        puVar4 = puVar4 + 1;
        param_1 = param_1 + 1;
        *param_1 = *puVar4;
      } while (puVar4 != puVar6);
      puVar6 = (uint *)(param_2 + -4);
      puVar7 = (uint *)(param_2 + uVar5 * 4);
      puVar4 = puVar6;
      do {
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
        *puVar8 = *puVar4;
      } while (puVar7 != puVar4);
      puVar4 = auStack_6c;
      do {
        puVar6 = puVar6 + 1;
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
      } while (puVar7 != puVar6);
    }
  }
  if (*_LAB_2c4807c8 == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

