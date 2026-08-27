/* FUN_2c5ced44 @ 0x2c5ced44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5ced44(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *apuStack_2c [2];
  undefined1 auStack_24 [16];
  int iStack_14;
  
  iStack_14 = *_LAB_2c5cee70;
  if (*(char *)(param_1 + 0x52) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5cee7c,0x183,_LAB_2c5cee78,_LAB_2c5cee74);
  }
  iVar1 = FUN_2c5ce0e8();
  if (iVar1 != 0) {
    FUN_2c5c562c(apuStack_2c);
    if ((*(char *)(param_1 + 0x50) == '\0') &&
       (iVar1 = FUN_2c5cea44(param_1,apuStack_2c), iVar1 != 0)) {
      FUN_2c629df4();
      FUN_2c66b140();
      uVar3 = FUN_2c66b19c();
      uVar4 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2;
      FUN_2c5cec20(param_1,*(undefined4 *)
                            (*(int *)(param_1 + 0x20) + (uVar3 - (uVar3 / uVar4) * uVar4) * 4));
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
    else if ((*(char *)(param_1 + 0x51) == '\0') &&
            (iVar1 = FUN_2c5ceabc(param_1,apuStack_2c), iVar1 != 0)) {
      FUN_2c629df4();
      FUN_2c66b140();
      uVar3 = FUN_2c66b19c();
      uVar4 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2;
      FUN_2c5cec20(param_1,*(undefined4 *)
                            (*(int *)(param_1 + 0x2c) + (uVar3 - (uVar3 / uVar4) * uVar4) * 4));
      *(undefined1 *)(param_1 + 0x51) = 1;
    }
    else {
      iVar1 = FUN_2c5ceabc(param_1,apuStack_2c);
      if ((iVar1 == 0) && (*(char *)(param_1 + 0x51) != '\0')) {
        *(undefined1 *)(param_1 + 0x51) = 0;
      }
      iVar2 = FUN_2c5cea44(param_1,apuStack_2c);
      iVar1 = 0;
      if ((iVar2 == 0) && (iVar1 = 0, *(char *)(param_1 + 0x50) != '\0')) {
        *(undefined1 *)(param_1 + 0x50) = 0;
        iVar1 = 0;
      }
    }
    if (apuStack_2c[0] != auStack_24) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (*_LAB_2c5cee70 == iStack_14) {
      return iVar1;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5cee7c,0x19b,_LAB_2c5cee84,_LAB_2c5cee80);
}

