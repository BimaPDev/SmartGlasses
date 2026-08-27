/* FUN_2c092418 @ 0x2c092418 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c092418(int param_1)

{
  code *pcVar1;
  int unaff_r4;
  uint uVar2;
  uint uStack000000c0;
  undefined1 in_stack_000003a8;
  
  uVar2 = *(uint *)(*(int *)(param_1 + 8) + 0x10);
  if ((uVar2 >> 0x17 & 1) == 0 || uVar2 >> 0x18 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uStack000000c0 = *(uint *)(*(int *)(param_1 + 8) + 8) >> 2;
  software_bkpt(0xd8);
  *(undefined1 *)(*(int *)(*(int *)(unaff_r4 + 8) + 4) + 0x1c) = in_stack_000003a8;
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xd8,0x2c092500);
  (*pcVar1)();
}

