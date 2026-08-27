/* FUN_2c38b232 @ 0x2c38b232 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c38b232(void)

{
  int unaff_r4;
  int unaff_r5;
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined4 unaff_pc;
  undefined4 in_cr0;
  
  uVar1 = *(undefined4 *)(unaff_r4 + 0x38);
  *(short *)(*(int *)(unaff_r4 + 4) + 0x2e) = (short)(int *)(unaff_r4 + 0x40);
  *(short *)(unaff_r5 + 4) = (short)uVar1;
  puVar2 = *(undefined2 **)(*(int *)(unaff_r4 + 0x48) + 0x28);
  *(undefined4 *)(*(int *)(unaff_r4 + 0x40) + (int)puVar2) =
       *(undefined4 *)(*(int *)(unaff_r4 + 0x48) + 0x20);
  *puVar2 = (short)((int)puVar2 << 2);
  coprocessor_loadlong(0,in_cr0,unaff_pc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

