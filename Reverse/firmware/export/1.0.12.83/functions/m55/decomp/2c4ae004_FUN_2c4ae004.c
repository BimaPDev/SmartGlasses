/* FUN_2c4ae004 @ 0x2c4ae004 */

int FUN_2c4ae004(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_34 [4];
  int local_24;
  
  iVar3 = DAT_2c4ae13c;
  local_24 = *DAT_2c4ae138;
  uVar4 = *(uint *)(DAT_2c4ae13c + 0x6bc);
  if ((1 < uVar4) || (iVar2 = *(int *)(DAT_2c4ae13c + (uVar4 + 0x1aa) * 4), iVar2 == 0)) {
    iVar5 = 3;
    goto LAB_2c4ae0de;
  }
  iVar1 = *(int *)(DAT_2c4ae13c + uVar4 * 4 + 0x6b4);
  if (*(uint *)(DAT_2c4ae13c + 0x6b0) <= iVar1 + 0x10U) {
    iVar5 = FUN_2c4adb40(DAT_2c4ae13c);
    if (iVar5 != 0) goto LAB_2c4ae0de;
    local_34[0] = iVar3;
    local_34[1] = 0xffffffff;
    local_34[2] = 0xffffffff;
    local_34[3] = iVar5;
    iVar5 = FUN_2c4b4674(5,local_34);
    if (iVar5 != 0) goto LAB_2c4ae0de;
    iVar5 = *(int *)(iVar3 + 0x6bc);
    *DAT_2c4ae144 = 0;
    iVar2 = *(int *)(iVar3 + (iVar5 + 0x1aa) * 4);
    iVar1 = *(int *)(iVar3 + iVar5 * 4 + 0x6b4);
  }
  iVar5 = 0;
  *(undefined4 *)(iVar2 + iVar1) = DAT_2c4ae140;
  *(undefined4 *)
   (*(int *)(iVar3 + *(int *)(iVar3 + 0x6bc) * 4 + 0x6b4) +
    *(int *)(iVar3 + (*(int *)(iVar3 + 0x6bc) + 0x1aa) * 4) + 4) = 0;
  *(undefined2 *)
   (*(int *)(iVar3 + *(int *)(iVar3 + 0x6bc) * 4 + 0x6b4) +
    *(int *)(iVar3 + (*(int *)(iVar3 + 0x6bc) + 0x1aa) * 4) + 8) = param_1;
  *(undefined2 *)
   (*(int *)(iVar3 + *(int *)(iVar3 + 0x6bc) * 4 + 0x6b4) +
    *(int *)(iVar3 + (*(int *)(iVar3 + 0x6bc) + 0x1aa) * 4) + 10) = param_2;
  *(undefined2 *)
   (*(int *)(iVar3 + *(int *)(iVar3 + 0x6bc) * 4 + 0x6b4) +
    *(int *)(iVar3 + (*(int *)(iVar3 + 0x6bc) + 0x1aa) * 4) + 0xc) = param_3;
  *(undefined2 *)
   (*(int *)(iVar3 + *(int *)(iVar3 + 0x6bc) * 4 + 0x6b4) +
    *(int *)(iVar3 + (*(int *)(iVar3 + 0x6bc) + 0x1aa) * 4) + 0xe) = param_4;
  iVar3 = iVar3 + (*(int *)(iVar3 + 0x6bc) + 0x1ac) * 4;
  *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 0x10;
LAB_2c4ae0de:
  if (*DAT_2c4ae138 == local_24) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

