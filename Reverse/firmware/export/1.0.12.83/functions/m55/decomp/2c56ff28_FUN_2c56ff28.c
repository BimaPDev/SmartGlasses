/* FUN_2c56ff28 @ 0x2c56ff28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c56ff28(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    iVar1 = FUN_2c571dd8();
    iVar2 = func_0x2c571ddc(*(undefined4 *)(param_1 + 0x24));
    if (iVar1 != iVar2) {
      iVar1 = *(int *)(param_1 + 0x28);
      FUN_2c55fddc(*(undefined4 *)(iVar1 + 4));
      iVar2 = *(int *)(iVar1 + 8);
      iVar1 = FUN_2c571dd8(iVar2);
      *(int *)(iVar2 + 0xc) = iVar1 + 1;
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c56ff70,0xeb,_LAB_2c56ff6c,_LAB_2c56ff68);
}

