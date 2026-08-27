/* FUN_2c619818 @ 0x2c619818 */

/* WARNING: Removing unreachable block (ram,0x2c606b46) */
/* WARNING: Removing unreachable block (ram,0x2c606b24) */
/* WARNING: Removing unreachable block (ram,0x2c606b34) */

void FUN_2c619818(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_2c627e28(param_2,1);
  iVar3 = *DAT_2c606b68;
  iVar1 = FUN_2c607214();
  *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) & 0xfffffffd;
  iVar2 = FUN_2c607214(param_2);
  if (iVar2 == iVar1) {
    if (*DAT_2c606b68 == iVar3) {
      return;
    }
  }
  else {
    FUN_2c6041d4(param_2);
    if (*DAT_2c606b68 == iVar3) {
      FUN_2c607248();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

