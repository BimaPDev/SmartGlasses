/* FUN_2c59df0c @ 0x2c59df0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c59df0c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  while (iVar1 != param_1 + 0x38) {
    *(undefined1 *)(iVar1 + 0x28) = 0;
    iVar1 = thunk_FUN_2c64e43a();
  }
  iVar1 = *(int *)(param_1 + 0x58);
  while (iVar1 != param_1 + 0x50) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
    iVar1 = thunk_FUN_2c64e43a();
  }
  if ((*(char *)(param_1 + 0x94) == '\0') && (*(char *)(param_1 + 0x95) == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c59deec,0x512,_LAB_2c59dee4,_LAB_2c59dee0,param_2);
  }
  return;
}

