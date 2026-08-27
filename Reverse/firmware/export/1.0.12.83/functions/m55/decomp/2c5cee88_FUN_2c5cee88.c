/* FUN_2c5cee88 @ 0x2c5cee88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5cee88(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x52) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5cefb8,0x183,_LAB_2c5cefc4,_LAB_2c5cefc0);
  }
  iVar2 = FUN_2c5ce0e8();
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5cefb8,0x1ba,_LAB_2c5cefb4,_LAB_2c5cefc8);
  }
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5cefb8,0x1be,_LAB_2c5cefb4,_LAB_2c5cefd0);
  }
  if (*(char *)(param_1 + 0x75) == '\0') {
    return 0;
  }
  FUN_2c629df4();
  uVar1 = _LAB_2c5cefb0;
  FUN_2c66b140();
  uVar3 = FUN_2c66b19c();
  uVar4 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5cefb8,0x1c4,_LAB_2c5cefb4,uVar1,
               *(undefined4 *)(*(int *)(param_1 + 0x14) + (uVar3 - (uVar3 / uVar4) * uVar4) * 4));
}

