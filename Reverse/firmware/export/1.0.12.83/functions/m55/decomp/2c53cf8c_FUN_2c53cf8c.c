/* FUN_2c53cf8c @ 0x2c53cf8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c53cf8c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c53cff0,0x13c,_LAB_2c53cfec,_DAT_2c53cfe8);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    return;
  }
  if (param_2 != *(int *)(param_1 + 0x30)) {
    *(int *)(param_1 + 0x30) = param_2;
  }
  uVar1 = FUN_2c53cbcc(param_1,*(undefined2 *)(_DAT_2c53cfe4 + 10),
                       *(undefined2 *)(_DAT_2c53cfe4 + 0xc),param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  FUN_2c628b70(uVar1,1,5,1,4,1,2);
  return;
}

