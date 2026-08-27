/* FUN_2c5cf230 @ 0x2c5cf230 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cf230(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x52) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5cf3b4,0x183,_LAB_2c5cf3c4,_LAB_2c5cf3c0);
  }
  iVar2 = FUN_2c5ce0e8();
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x44) != *(int *)(param_1 + 0x48)) {
      FUN_2c629df4();
      uVar1 = _LAB_2c5cf3ac;
      FUN_2c66b140();
      uVar3 = FUN_2c66b19c();
      uVar4 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 2;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5cf3b4,0x2cc,_LAB_2c5cf3b0,uVar1,
                   *(undefined4 *)(*(int *)(param_1 + 0x44) + (uVar3 - (uVar3 / uVar4) * uVar4) * 4)
                  );
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5cf3b4,0x2c8,_LAB_2c5cf3b0,_LAB_2c5cf3cc);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5cf3b4,0x2c4,_LAB_2c5cf3b0,_LAB_2c5cf3c8);
}

