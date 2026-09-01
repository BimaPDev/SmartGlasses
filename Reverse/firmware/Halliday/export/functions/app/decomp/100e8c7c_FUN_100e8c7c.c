/* FUN_100e8c7c @ 0x100e8c7c */

void FUN_100e8c7c(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_1011dbf4(DAT_100e8cac,0xffffffff);
  iVar2 = *DAT_100e8cb0;
  if (*DAT_100e8cb0 == 0) {
    *DAT_100e8cb0 = param_1;
    FUN_10113fd0(DAT_100e8cb4);
  }
  else {
    do {
      iVar1 = iVar2;
      iVar2 = *(int *)(iVar1 + 0x18);
    } while (iVar2 != 0);
    *(int *)(iVar1 + 0x18) = param_1;
  }
  FUN_100e8c70();
  return;
}

