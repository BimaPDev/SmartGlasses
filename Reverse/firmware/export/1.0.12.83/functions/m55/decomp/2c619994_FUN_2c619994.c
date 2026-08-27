/* FUN_2c619994 @ 0x2c619994 */

/* WARNING: Removing unreachable block (ram,0x2c606a44) */
/* WARNING: Removing unreachable block (ram,0x2c606a84) */
/* WARNING: Removing unreachable block (ram,0x2c606b46) */

void FUN_2c619994(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_2c602414();
  if ((*(int *)(iVar1 + 0x2c) != 0) && (*(int *)(iVar1 + 0x38) != 0)) {
    if (*(int *)(*(int *)(iVar1 + 0x2c) + 0x24) == 0) {
      lv_obj_add_flag_invalidate(*(int *)(iVar1 + 0x38),1);
    }
    else {
      FUN_2c638730();
      FUN_2c606abc(*(undefined4 *)(iVar1 + 0x38),1);
    }
  }
  if ((*(int *)(iVar1 + 0x40) == 0) || (iVar2 = *(int *)(iVar1 + 0x4c), iVar2 == 0)) {
    return;
  }
  if (*(int *)(*(int *)(iVar1 + 0x40) + 0x24) != 0) {
    FUN_2c638730();
    iVar3 = *(int *)(iVar1 + 0x4c);
    iVar4 = *DAT_2c606b68;
    iVar1 = FUN_2c607214();
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffe;
    FUN_2c607df0(iVar3);
    iVar2 = FUN_2c607214(iVar3);
    if (iVar2 != 0) {
      FUN_2c6041d4(iVar3);
      FUN_2c607248();
      FUN_2c607248(iVar3);
    }
    iVar2 = FUN_2c607214(iVar3);
    if (iVar2 == iVar1) {
      if (*DAT_2c606b68 == iVar4) {
        return;
      }
    }
    else {
      FUN_2c6041d4(iVar3);
      if (*DAT_2c606b68 == iVar4) {
        FUN_2c607248();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  iVar4 = *DAT_2c606ab8;
  iVar1 = FUN_2c607214();
  FUN_2c607df0(iVar2);
  *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 1;
  FUN_2c607df0(iVar2);
  iVar3 = FUN_2c607214(iVar2);
  if (iVar3 != iVar1) {
    FUN_2c6041d4(iVar2);
    FUN_2c607248();
    FUN_2c607248(iVar2);
  }
  if (*DAT_2c606ab8 != iVar4) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

