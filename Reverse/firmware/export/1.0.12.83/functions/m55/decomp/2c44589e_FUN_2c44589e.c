/* FUN_2c44589e @ 0x2c44589e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c44579c) */
/* WARNING: Removing unreachable block (ram,0x2c4458d0) */
/* WARNING: Removing unreachable block (ram,0x2c4458e6) */
/* WARNING: Removing unreachable block (ram,0x2c445844) */
/* WARNING: Removing unreachable block (ram,0x2c445798) */
/* WARNING: Removing unreachable block (ram,0x2c445806) */
/* WARNING: Removing unreachable block (ram,0x2c445814) */
/* WARNING: Removing unreachable block (ram,0x2c44581a) */
/* WARNING: Removing unreachable block (ram,0x2c44583a) */
/* WARNING: Removing unreachable block (ram,0x2c4458f8) */
/* WARNING: Removing unreachable block (ram,0x2c4459ae) */

void FUN_2c44589e(int param_1,int param_2,int *param_3,int *param_4)

{
  int unaff_r4;
  uint unaff_r6;
  int unaff_r7;
  int unaff_lr;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined8 unaff_d14;
  undefined8 in_d29;
  
  do {
    *(int *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r7;
    *(uint *)((int)register0x00000054 + -0xc) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x10) = unaff_r4;
    *(int **)((int)register0x00000054 + -0x14) = param_3;
    *(int *)((int)register0x00000054 + -0x18) = param_1;
    *(char *)(param_1 + 0x14) = (char)unaff_r6;
    VectorRoundShiftLeft(unaff_d14,4,in_d29);
    unaff_r7 = param_1 * 2;
    software_bkpt(0xb8);
    coprocessor_function2(2,0xe,3,in_cr4,in_cr5,in_cr2);
    unaff_r6 = (unaff_r6 | (uint)param_4) - 0x1e;
    *(int *)((int)register0x00000054 + 0x38) = param_2;
    param_3 = (int *)((int)register0x00000054 + 0x44);
    param_1 = *param_4;
    unaff_r4 = param_4[2];
    unaff_lr = param_4[6];
    param_2 = 0x44;
    *(int **)(unaff_r4 + 0x20) = param_3;
    param_4 = (int *)(unaff_r7 + 7U >> 2);
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
  } while ((unaff_r7 + 7U >> 1 & 1) != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

