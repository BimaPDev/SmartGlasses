/* FUN_2c514bec @ 0x2c514bec */

/* WARNING: Removing unreachable block (ram,0x2c606a44) */
/* WARNING: Removing unreachable block (ram,0x2c606a84) */

void FUN_2c514bec(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_2c511f90();
  iVar4 = param_1 + 0x104;
  iVar5 = param_1 + 0xa4;
  if ((*(char *)(*(int *)(param_1 + 0x10) + 2) == '\0') ||
     (*(char *)(*(int *)(param_1 + 0x10) + 1) == '\x03')) {
    iVar2 = func_0x2c5167a4(iVar4);
    if (iVar2 == 0) goto LAB_2c514c10;
    FUN_2c51681c(iVar4);
    iVar4 = func_0x2c5167a4(iVar5);
  }
  else {
    iVar2 = FUN_2c512360(uVar1,*(undefined1 *)(param_1 + 0x162));
    if (iVar2 == 0) {
      iVar2 = func_0x2c5167a4(iVar4);
      if (iVar2 != 0) {
        FUN_2c51681c(iVar4);
      }
    }
    else {
      iVar2 = func_0x2c5167a4(iVar4);
      if (iVar2 == 0) {
        FUN_2c5167fc(iVar4);
      }
    }
    iVar4 = FUN_2c512360(uVar1,*(undefined1 *)(param_1 + 0x102));
    if ((iVar4 != 0) ||
       ((*(char *)(param_1 + 0x102) == '\x03' && (iVar4 = func_0x2c5125b8(uVar1), iVar4 != 0)))) {
      iVar4 = func_0x2c5167a4(iVar5);
      if (iVar4 == 0) {
        FUN_2c5167fc(iVar5);
      }
      goto SUB_2c516bec;
    }
LAB_2c514c10:
    iVar4 = func_0x2c5167a4(iVar5);
  }
  if (iVar4 != 0) {
    FUN_2c51681c(iVar5);
  }
SUB_2c516bec:
  iVar5 = *(int *)(param_1 + 0x40);
  iVar4 = FUN_2c606b94(iVar5,1);
  if (iVar4 != 0) {
    return;
  }
  iVar3 = *DAT_2c606ab8;
  iVar4 = FUN_2c607214();
  FUN_2c607df0(iVar5);
  *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 1;
  FUN_2c607df0(iVar5);
  iVar2 = FUN_2c607214(iVar5);
  if (iVar2 != iVar4) {
    FUN_2c6041d4(iVar5);
    FUN_2c607248();
    FUN_2c607248(iVar5);
  }
  if (*DAT_2c606ab8 == iVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

