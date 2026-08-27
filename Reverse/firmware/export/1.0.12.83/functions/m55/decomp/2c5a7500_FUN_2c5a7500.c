/* FUN_2c5a7500 @ 0x2c5a7500 */

/* WARNING: Possible PIC construction at 0x2c5a7574: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c5a7578) */
/* WARNING: Removing unreachable block (ram,0x2c5a4f90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5a7500(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined1 uStack_10;
  int iStack_c;
  
  puVar3 = &stack0xfffffff8;
  if (*(char *)(in_r3 + 0x10) != '\x01') {
    FUN_2c5a2398();
    func_0x2c5a25f0();
    puVar3 = (undefined1 *)register0x00000054;
SUB_2c5aa42c:
    *(undefined4 *)(puVar3 + -4) = unaff_lr;
    *(undefined4 *)(puVar3 + -8) = unaff_r9;
    *(undefined4 *)(puVar3 + -0xc) = unaff_r8;
    *(undefined4 *)(puVar3 + -0x10) = unaff_r7;
    *(undefined4 *)(puVar3 + -0x14) = unaff_r6;
    *(undefined4 *)(puVar3 + -0x18) = unaff_r5;
    *(undefined4 *)(puVar3 + -0x1c) = unaff_r4;
    *(undefined4 *)(puVar3 + -0x28) = _LAB_2c5aa54c;
    *(undefined4 *)(puVar3 + -0x24) = 1;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c5aa554,0x341,_LAB_2c5aa550);
  }
  FUN_2c5a2398();
  FUN_2c5a240c();
  iVar1 = func_0x2c5a4b80();
  if (iVar1 == 0) {
    FUN_2c5a2398();
    FUN_2c5a240c();
    uStack_18 = registry_lookup(0x5057);
  }
  else {
    FUN_2c5a2398();
    uVar2 = FUN_2c5a240c();
    iVar1 = func_0x2c5a5bb0(uVar2,4);
    if (iVar1 != 0) {
      FUN_2c5a2398();
      func_0x2c5a25f0();
      unaff_lr = 0x2c5a7579;
      unaff_r4 = 1;
      goto SUB_2c5aa42c;
    }
    FUN_2c5a2398();
    FUN_2c5a240c();
    uStack_18 = registry_lookup(0x5058);
  }
  iStack_c = *_LAB_2c5a5ddc;
  uStack_10 = 1;
  FUN_2c5e4008(auStack_1c,0);
  if (*_LAB_2c5a5ddc == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

