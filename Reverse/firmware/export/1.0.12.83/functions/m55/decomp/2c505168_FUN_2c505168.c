/* FUN_2c505168 @ 0x2c505168 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c505168(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 unaff_r4;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x20),1);
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x78),1);
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x7c),1);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x2c),1);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x24),1);
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_2c50ed7c(param_1 + 0x1b8);
  FUN_2c50ed7c(param_1 + 0x254);
  FUN_2c50ed7c(param_1 + 0x80);
  FUN_2c50ed7c(param_1 + 0x11c);
  if (*(int *)(param_1 + 0x3c) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x3c),1);
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x58),1);
  }
  FUN_2c50ed7c(param_1 + 0x2f0);
  FUN_2c50ed7c(param_1 + 0x38c);
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(iVar2 + 8);
  uVar10 = 0;
  if (iVar3 != 0) {
    uVar10 = *(byte *)(iVar3 + 0x1a) & 0x3f;
    if ((*(byte *)(iVar3 + 0x1a) & 0x3f) == 0) {
      return uVar10;
    }
    iVar11 = 0;
    iVar5 = *(int *)(iVar3 + 0xc);
    uVar8 = 0;
    while (iVar1 = iVar11 * 4, iVar11 = iVar11 + 3, *(int *)(iVar5 + iVar1) != _LAB_2c5051f4) {
      uVar8 = uVar8 + 1;
      if (uVar8 == uVar10) {
        return 0;
      }
    }
    if ((int)uVar8 < (int)(uVar10 - 1)) {
      iVar11 = uVar8 * 0xc;
      while( true ) {
        puVar9 = (undefined4 *)(iVar5 + iVar11);
        uVar8 = uVar8 + 1;
        puVar6 = (undefined4 *)(iVar5 + iVar11 + 0xc);
        uVar4 = puVar6[1];
        uVar7 = puVar6[2];
        *puVar9 = *puVar6;
        puVar9[1] = uVar4;
        puVar9[2] = uVar7;
        iVar3 = *(int *)(iVar2 + 8);
        uVar10 = *(byte *)(iVar3 + 0x1a) & 0x3f;
        iVar5 = uVar10 - 1;
        if (iVar5 <= (int)uVar8) break;
        iVar5 = *(int *)(iVar3 + 0xc);
        iVar11 = iVar11 + 0xc;
      }
    }
    uVar10 = *(byte *)(iVar3 + 0x1a) & 0xffffffc0 | uVar10 + 0x3f & 0x3f;
    *(char *)(iVar3 + 0x1a) = (char)uVar10;
    iVar2 = *(int *)(iVar2 + 8);
    uVar4 = FUN_2c62bebc(*(undefined4 *)(iVar2 + 0xc),(*(byte *)(iVar2 + 0x1a) & 0x3f) * 0xc,iVar5,
                         uVar10,unaff_r4);
    uVar10 = 1;
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
  }
  return uVar10;
}

