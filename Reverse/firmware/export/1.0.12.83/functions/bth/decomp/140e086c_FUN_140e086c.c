/* FUN_140e086c @ 0x140e086c */

void FUN_140e086c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_140e05e4(param_1,1);
  if (iVar1 == 0) {
    iVar1 = FUN_140da8c8(DAT_140e0894,0x140,0,DAT_140e0890);
  }
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = 1;
  return;
}

