/* FUN_14076a2c @ 0x14076a2c */

void FUN_14076a2c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_14076aa0;
  iVar2 = FUN_14074d5c(DAT_14076aa0 + 0x230);
  if (iVar2 == 0) {
    FUN_140e52d8(*(undefined4 *)(iVar1 + 4));
    return;
  }
  *(int *)(iVar1 + 0x248) = iVar2;
  FUN_14074c04(iVar2,iVar1 + 0x23c);
  if (*(char *)(iVar1 + 0x24c) == '\0') {
    FUN_14075168(iVar1 + 0x24c,5000,DAT_14076aa4,0,1);
    if (*(char *)(iVar1 + 0x24c) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_14076aac,DAT_14076aa8);
    }
    FUN_14075074(iVar1 + 0x24c);
  }
  else {
    FUN_14074f8c(iVar1 + 0x24c);
  }
  FUN_140e52d8(*(undefined4 *)(iVar1 + 4));
  thunk_FUN_140a20f4();
  return;
}

