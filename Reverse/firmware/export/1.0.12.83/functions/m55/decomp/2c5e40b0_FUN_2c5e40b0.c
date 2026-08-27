/* FUN_2c5e40b0 @ 0x2c5e40b0 */

/* WARNING: Removing unreachable block (ram,0x2c606a44) */
/* WARNING: Removing unreachable block (ram,0x2c606a84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e40b0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  (**(code **)(*_LAB_2c5e40c8 + 0x54))();
  iVar1 = *_LAB_2c5e40cc;
  iVar4 = *DAT_2c606ab8;
  iVar2 = FUN_2c607214();
  FUN_2c607df0(iVar1);
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 1;
  FUN_2c607df0(iVar1);
  iVar3 = FUN_2c607214(iVar1);
  if (iVar3 != iVar2) {
    FUN_2c6041d4(iVar1);
    FUN_2c607248();
    FUN_2c607248(iVar1);
  }
  if (*DAT_2c606ab8 != iVar4) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

