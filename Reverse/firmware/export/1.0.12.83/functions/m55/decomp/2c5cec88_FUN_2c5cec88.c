/* FUN_2c5cec88 @ 0x2c5cec88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_2c5cec88(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x52) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5ced30,0x183,_LAB_2c5ced2c,_LAB_2c5ced28);
  }
  iVar2 = FUN_2c5ce0e8();
  if (iVar2 != 0) {
    cVar1 = *(char *)(param_1 + 0x74);
    if (cVar1 != '\0') {
      FUN_2c629df4();
      FUN_2c66b140();
      uVar3 = FUN_2c66b19c();
      uVar4 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38) >> 2;
      FUN_2c5cec20(param_1,*(undefined4 *)
                            (*(int *)(param_1 + 0x38) + (uVar3 - (uVar3 / uVar4) * uVar4) * 4));
      *(undefined1 *)(param_1 + 0x74) = 0;
      if (*(int *)(param_1 + 0x58) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,_LAB_2c5ced30,0x171,_LAB_2c5ced40,_LAB_2c5ced3c,1);
      }
    }
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5ced30,0x11c,_LAB_2c5ced38,_LAB_2c5ced34);
}

