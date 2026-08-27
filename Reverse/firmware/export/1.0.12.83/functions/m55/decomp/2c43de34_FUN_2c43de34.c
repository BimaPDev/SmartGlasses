/* FUN_2c43de34 @ 0x2c43de34 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c43de34(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int extraout_r2;
  undefined4 *unaff_r4;
  undefined4 *puVar4;
  uint unaff_r7;
  undefined4 unaff_r8;
  code *unaff_lr;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr7;
  undefined4 in_cr14;
  undefined8 uVar5;
  int in_stack_00000000;
  int *in_stack_00000004;
  
  iVar1 = *(int *)(unaff_lr + 0x44);
  puVar4 = unaff_r4;
  if (!in_CY || in_ZR) {
    *unaff_r4 = unaff_lr;
    unaff_r4[1] = in_stack_00000004;
    unaff_r4[2] = unaff_r7;
    *(short *)((int)unaff_r4 + in_stack_00000000 + 0xc) = (short)unaff_r7;
    *(int *)(in_stack_00000000 + 0x28) = in_stack_00000000;
    if ((unaff_r7 & 0x200000) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    piVar2 = *(int **)(unaff_r7 * 0x800 + 0x44);
    iVar1 = *piVar2;
    iVar3 = piVar2[1];
    in_stack_00000004 = (int *)piVar2[3];
    unaff_r4 = (undefined4 *)(piVar2[4] << 0x1f);
    unaff_lr = (code *)(iVar3 >> 9);
    *(char *)(iVar3 + 5) = (char)iVar3;
    in_stack_00000004[0x13] = iVar1;
    coprocessor_moveto(0xb,1,4,unaff_r8,in_cr14,in_cr7);
    *in_stack_00000004 = (int)unaff_r4;
    in_stack_00000004[1] = in_stack_00000000;
    in_stack_00000004[2] = (int)in_stack_00000004;
    puVar4 = _LAB_2c43e12c;
  }
  uVar5 = (*unaff_lr)(unaff_r4,iVar1);
  *(char *)((int)((ulonglong)uVar5 >> 0x20) + 10) = (char)in_stack_00000004;
  *(undefined4 **)((int)uVar5 + 0x20) = puVar4;
  *(char *)(extraout_r2 + 8) = (char)puVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

