/* FUN_2c5c5b3c @ 0x2c5c5b3c */

undefined4 FUN_2c5c5b3c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    return DAT_2c5c5b94;
  }
  iVar1 = *(int *)(iVar2 + 0x24);
  if (iVar1 != *(int *)(iVar2 + 0x14)) {
    if (iVar1 != *(int *)(iVar2 + 0x28)) {
      return *(undefined4 *)(*(int *)(iVar1 + -4) + 0xc);
    }
    return *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x30) + -4) + 0x1fc) + 0xc);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5c5b90,0x19a,DAT_2c5c5b8c,DAT_2c5c5b88);
}

