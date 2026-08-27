/* FUN_2c4fee2c @ 0x2c4fee2c */

void FUN_2c4fee2c(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int local_28;
  int local_24;
  
  local_24 = *DAT_2c4fefa0;
  piVar4 = (int *)FUN_2c4fe3e8();
  sVar1 = *(short *)(*piVar4 + 8);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(int *)(param_1 + 0x90) = (int)sVar1;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(int *)(param_1 + 0x70) = (int)sVar1;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_2c62bea8(*(int *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    FUN_2c607df0(param_1);
  }
  if ((param_2 != 0) && (iVar5 = FUN_2c66c4ec(param_2), iVar5 != 0)) {
    FUN_2c4fe26c(param_2,0,&local_28,iVar5);
    uVar6 = lv_mem_alloc(local_28 << 2);
    *(undefined4 *)(param_1 + 0x24) = uVar6;
    FUN_2c4fe26c(param_2,uVar6,&local_28,local_28);
    *(int *)(param_1 + 0x2c) = local_28;
    sVar1 = FUN_2c607404(param_1);
    sVar2 = FUN_2c6033b4(param_1,0,0x12);
    sVar3 = FUN_2c6033b4(param_1,0,0x13);
    uVar7 = *(uint *)(param_1 + 0x2c);
    iVar5 = (int)(short)(sVar1 - (sVar3 + sVar2));
    if (iVar5 < 0x150) {
      iVar5 = 0x150;
    }
    if (uVar7 != 0) {
      iVar11 = 0;
      uVar8 = 0;
      do {
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x24) + uVar8 * 4);
        uVar9 = uVar8 + 1;
        if (uVar9 < uVar7) {
          sVar1 = FUN_2c6298c0(*piVar4,uVar6,
                               *(undefined4 *)(*(int *)(param_1 + 0x24) + uVar8 * 4 + 4));
        }
        else {
          sVar1 = FUN_2c6298c0(*piVar4,uVar6,0);
        }
        if (iVar5 < sVar1 + iVar11) {
          uVar7 = *(uint *)(param_1 + 0x2c);
          if (uVar8 < uVar7) {
            uVar9 = uVar8 - 3 >> 1;
            uVar10 = uVar9 + 1;
            iVar5 = uVar9 << 2;
            if (uVar9 + 3 < uVar10) {
              iVar11 = 1;
            }
            else {
              iVar11 = 3;
            }
            do {
              *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar5) = 0x2e;
              iVar5 = iVar5 + 4;
            } while (iVar5 != (iVar11 + uVar9) * 4);
            if (uVar9 + 3 < uVar10) {
              iVar5 = 0;
            }
            else {
              iVar5 = 2;
            }
            iVar5 = iVar5 + uVar10;
            FUN_2c62c0d8(*(int *)(param_1 + 0x24) + iVar5 * 4,
                         *(int *)(param_1 + 0x24) + (((uVar7 + 3) - uVar8) + iVar5) * 4,
                         ((*(int *)(param_1 + 0x2c) + -3 + (uVar8 - uVar7)) - iVar5) * 4);
            *(uint *)(param_1 + 0x2c) = (uVar8 - uVar7) + *(int *)(param_1 + 0x2c) + -3;
          }
          break;
        }
        uVar7 = *(uint *)(param_1 + 0x2c);
        iVar11 = (int)(short)(*(short *)((int)piVar4 + 0x1a) + (short)iVar11 + sVar1);
        uVar8 = uVar9;
      } while (uVar9 < uVar7);
    }
    FUN_2c607df0(param_1);
  }
  if (*DAT_2c4fefa0 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

