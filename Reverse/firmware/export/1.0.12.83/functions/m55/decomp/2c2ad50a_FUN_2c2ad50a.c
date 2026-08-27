/* FUN_2c2ad50a @ 0x2c2ad50a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2ad50a(void)

{
  uint uVar1;
  int unaff_r4;
  undefined8 in_d1;
  undefined8 in_d16;
  int in_stack_00000364;
  
  uVar1 = *(uint *)(unaff_r4 + 4);
  VectorShiftRightAccumulate(in_d16,in_d1,0xb);
  *(undefined4 *)(*(int *)(unaff_r4 + 0xc) + 100) = *(undefined4 *)(unaff_r4 + 0x14);
  *(char *)((uVar1 >> 0xc) + in_stack_00000364) = (char)(uVar1 << 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

