/* FUN_2c06ba48 @ 0x2c06ba48 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c06ba48(void)

{
  bool bVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r6;
  undefined4 uVar3;
  int unaff_pc;
  
  iVar2 = *(int *)(unaff_r6 + 4);
  uVar3 = *(undefined4 *)(unaff_r6 + 0xc);
  bVar1 = (bool)hasExclusiveAccess((int *)(unaff_pc + 0x140));
  if (bVar1) {
    *(int *)(unaff_pc + 0x140) = iVar2;
  }
  *(int *)(unaff_r6 + 0x10) = iVar2 - unaff_r4;
  *(int **)(unaff_r6 + 0x14) = (int *)(unaff_r6 + 0x10);
  *(undefined4 *)(unaff_r6 + 0x18) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

