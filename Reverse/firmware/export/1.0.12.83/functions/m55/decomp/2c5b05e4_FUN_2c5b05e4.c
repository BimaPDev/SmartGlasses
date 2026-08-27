/* FUN_2c5b05e4 @ 0x2c5b05e4 */

/* WARNING: Removing unreachable block (ram,0x2c606b46) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5b05e4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_2 + 8) == 0) || (*(int *)(param_2 + 0x20) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5b0638,0x30b,_LAB_2c5b0634,_LAB_2c5b0630);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_2c638730(*(int *)(param_1 + 0x18),*(undefined4 *)(param_2 + 4));
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_2c638730(*(int *)(param_1 + 0x1c),*(undefined4 *)(param_2 + 0x1c));
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    return;
  }
  iVar4 = *DAT_2c606b68;
  iVar2 = FUN_2c607214();
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffe;
  FUN_2c607df0(iVar1);
  iVar3 = FUN_2c607214(iVar1);
  if (iVar3 != 0) {
    FUN_2c6041d4(iVar1);
    FUN_2c607248();
    FUN_2c607248(iVar1);
  }
  iVar3 = FUN_2c607214(iVar1);
  if (iVar3 == iVar2) {
    if (*DAT_2c606b68 == iVar4) {
      return;
    }
  }
  else {
    FUN_2c6041d4(iVar1);
    if (*DAT_2c606b68 == iVar4) {
      FUN_2c607248();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

