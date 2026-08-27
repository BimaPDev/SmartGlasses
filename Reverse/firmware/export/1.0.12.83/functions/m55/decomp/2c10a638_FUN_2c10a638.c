/* FUN_2c10a638 @ 0x2c10a638 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c10a0f2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c10a638(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int unaff_r5;
  int *piVar2;
  undefined4 unaff_r8;
  undefined4 in_cr3;
  undefined4 in_cr11;
  
  *(char *)(param_4 + param_3) = (char)param_3;
  *(int *)(*(short *)(unaff_r5 + *(short *)(unaff_r5 + param_3)) + 0x38) =
       (int)*(short *)(unaff_r5 + param_3);
  *(short *)(param_3 + 4) = (short)param_2;
  *(short *)(*(int *)(param_3 + 0x18) + 0x38) = (short)(char)((uint)param_1 >> 0x18);
  puVar1 = (undefined4 *)(param_2 + -0x35);
  coprocessor_moveto(4,0,4,unaff_r8,in_cr11,in_cr3);
  piVar2 = *(int **)(((int)puVar1 >> 0x1c) + 8);
  *puVar1 = *(undefined4 *)(((int)puVar1 >> 0x1c) + 0xc);
  *piVar2 = (int)puVar1;
  piVar2[1] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

