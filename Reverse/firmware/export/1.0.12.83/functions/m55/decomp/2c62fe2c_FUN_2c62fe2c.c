/* FUN_2c62fe2c @ 0x2c62fe2c */

/* WARNING: Removing unreachable block (ram,0x2c606aa0) */
/* WARNING: Removing unreachable block (ram,0x2c606a84) */

void FUN_2c62fe2c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_2c606abc(param_2,0x10);
  iVar3 = *DAT_2c606ab8;
  iVar1 = FUN_2c607214();
  *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x400;
  iVar2 = FUN_2c607214(param_2);
  if (iVar2 != iVar1) {
    FUN_2c6041d4(param_2);
    FUN_2c607248();
    FUN_2c607248(param_2);
  }
  if (*DAT_2c606ab8 != iVar3) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

