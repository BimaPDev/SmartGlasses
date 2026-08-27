/* FUN_2c4ff052 @ 0x2c4ff052 */

void FUN_2c4ff052(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  short sStack_14;
  short sStack_12;
  short sStack_10;
  short sStack_e;
  int iStack_c;
  
  FUN_2c62e838();
  FUN_2c4fe3e8(param_1);
  iVar3 = *(int *)(param_1 + 0x48);
  iVar2 = *(int *)(iVar3 + 4);
  if (*(char *)(param_1 + 0x115) == '\0') {
    if ((*(byte *)(iVar3 + 0x18) & 0xf) == 1) {
      uVar1 = *(undefined4 *)(iVar3 + 0x1c);
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x18);
    }
  }
  else {
    uVar1 = *(undefined4 *)(iVar2 + 0x1c);
  }
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  *(int *)(param_1 + 0x48) = iVar2;
  *(int *)(param_1 + 0x4c) = iVar3;
  FUN_2c4fe394(param_1);
  iVar2 = *(int *)(param_1 + 0xc0);
  if (*(int *)(param_1 + 0xbc) != iVar2) {
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xbc);
    *(int *)(param_1 + 0xe4) = iVar2;
    *(int *)(param_1 + 0xe8) = iVar2;
    FUN_2c62e8ec(param_1 + 0xc4);
    iStack_c = *DAT_2c607e4c;
    sStack_14 = FUN_2c600c2c();
    sStack_e = *(short *)(param_1 + 0x1a) + sStack_14;
    sStack_10 = sStack_14 + *(short *)(param_1 + 0x18);
    sStack_12 = *(short *)(param_1 + 0x16) - sStack_14;
    sStack_14 = *(short *)(param_1 + 0x14) - sStack_14;
    FUN_2c6078f0(param_1,&sStack_14);
    if (*DAT_2c607e4c == iStack_c) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x48);
  return;
}

