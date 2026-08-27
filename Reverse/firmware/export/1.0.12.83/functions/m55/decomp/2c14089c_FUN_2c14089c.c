/* FUN_2c14089c @ 0x2c14089c */

int FUN_2c14089c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(iVar2 + 8);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = param_1;
  }
  *(undefined4 *)(iVar2 + 0xc) = 0;
  return iVar2;
}

