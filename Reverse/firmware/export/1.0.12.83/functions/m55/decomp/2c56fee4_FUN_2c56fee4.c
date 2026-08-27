/* FUN_2c56fee4 @ 0x2c56fee4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c56fee4(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    iVar1 = FUN_2c571dd8();
    if (iVar1 != 1) {
      iVar1 = *(int *)(param_1 + 0x28);
      FUN_2c55fe40(*(undefined4 *)(iVar1 + 4));
      iVar2 = *(int *)(iVar1 + 8);
      iVar1 = FUN_2c571dd8(iVar2);
      *(int *)(iVar2 + 0xc) = iVar1 + -1;
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c56ff24,0xf6,_LAB_2c56ff20,_LAB_2c56ff1c);
}

