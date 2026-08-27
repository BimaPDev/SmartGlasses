/* FUN_2c4ade20 @ 0x2c4ade20 */

int FUN_2c4ade20(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_24 [4];
  int local_14;
  
  iVar4 = DAT_2c4adef0;
  local_14 = *DAT_2c4adeec;
  uVar3 = *(uint *)(DAT_2c4adef0 + 0x6bc);
  if ((1 < uVar3) || (iVar2 = *(int *)(DAT_2c4adef0 + (uVar3 + 0x1aa) * 4), iVar2 == 0)) {
    iVar2 = 3;
    goto LAB_2c4ade94;
  }
  iVar1 = *(int *)(DAT_2c4adef0 + uVar3 * 4 + 0x6b4);
  if (*(uint *)(DAT_2c4adef0 + 0x6b0) <= iVar1 + 0x10U) {
    iVar2 = FUN_2c4adb40(DAT_2c4adef0);
    if (iVar2 != 0) goto LAB_2c4ade94;
    local_24[2] = 0xffffffff;
    local_24[0] = iVar4;
    local_24[1] = 0xffffffff;
    local_24[3] = iVar2;
    iVar2 = FUN_2c4b4674(5,local_24);
    if (iVar2 != 0) goto LAB_2c4ade94;
    *DAT_2c4adef4 = 0;
    iVar2 = *(int *)(iVar4 + (*(int *)(iVar4 + 0x6bc) + 0x1aa) * 4);
    iVar1 = *(int *)(iVar4 + *(int *)(iVar4 + 0x6bc) * 4 + 0x6b4);
  }
  *(uint *)(iVar2 + iVar1) = param_2 + 7U >> 3 | 0x60000000;
  iVar2 = 0;
  *(undefined4 *)
   (*(int *)(iVar4 + *(int *)(iVar4 + 0x6bc) * 4 + 0x6b4) +
    *(int *)(iVar4 + (*(int *)(iVar4 + 0x6bc) + 0x1aa) * 4) + 4) = param_1;
  iVar4 = iVar4 + (*(int *)(iVar4 + 0x6bc) + 0x1ac) * 4;
  *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 8;
LAB_2c4ade94:
  if (*DAT_2c4adeec == local_14) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

