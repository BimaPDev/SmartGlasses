/* FUN_2c42d980 @ 0x2c42d980 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c42d980(void)

{
  int extraout_r1;
  int iVar1;
  int extraout_r2;
  int extraout_r3;
  int *piVar2;
  char *unaff_r5;
  uint unaff_r6;
  int iVar3;
  int unaff_r7;
  int extraout_r12;
  code *unaff_lr;
  bool bVar4;
  bool bVar5;
  undefined4 in_cr2;
  undefined4 in_cr10;
  uint in_stack_00000334;
  
  (*unaff_lr)();
  *unaff_r5 = (char)unaff_r7 + '\x11';
  software_bkpt(0x3d);
  if (in_stack_00000334 - 0x3e != 0) {
    *(uint *)(extraout_r1 + extraout_r3) = in_stack_00000334 - 0x3e;
    if (0x3d < in_stack_00000334) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = unaff_r7 + -0x172;
    bVar5 = SBORROW4(extraout_r2,0x84);
    do {
      if (bVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar1 = *(int *)(iVar3 + 8);
      piVar2 = *(int **)(iVar3 + 0xc);
      unaff_r5[iVar1] = (char)unaff_r5;
      bVar5 = SBORROW4(iVar3 + 0x10,0xa5);
      bVar4 = iVar3 == 0x95;
      iVar3 = 0;
    } while (bVar4);
    piVar2[0x1e] = (int)piVar2;
    coprocessor_function2(0xe,0xf,2,in_cr2,in_cr10,in_cr2);
    *piVar2 = iVar1;
    piVar2[1] = (int)unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((unaff_r6 & 0x100000) == 0) {
    *(undefined4 *)(*(int *)(extraout_r12 + -0x38c) + 0x120) =
         *(undefined4 *)(extraout_r12 + -0x388);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

