/* FUN_2c3ec9f2 @ 0x2c3ec9f2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c3ecb24) */
/* WARNING: Removing unreachable block (ram,0x2c3ecb26) */
/* WARNING: Removing unreachable block (ram,0x2c3ecb28) */
/* WARNING: Removing unreachable block (ram,0x2c3ecb2a) */
/* WARNING: Removing unreachable block (ram,0x2c3ecb3e) */
/* WARNING: Removing unreachable block (ram,0x2c3ecb40) */
/* WARNING: Removing unreachable block (ram,0x2c3ecb42) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c3ec9f2(void)

{
  int in_r3;
  int unaff_r4;
  int unaff_r6;
  undefined2 uVar1;
  int unaff_r7;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr15;
  undefined8 in_d0;
  int in_stack_00000144;
  
  if (in_r3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_r3 == 0) {
    *(undefined2 *)(unaff_r7 + (uint)*(ushort *)(unaff_r4 + 0x18)) = 0x22;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_r3 == 0) {
    uVar1 = (undefined2)*(undefined4 *)(unaff_r6 + 0x10);
    coprocessor_function2(2,0xf,6,in_cr2,in_cr15,in_cr3);
    if (*(int *)(unaff_r6 + 4) != 0) goto LAB_2c3ecb54;
    in_stack_00000144 = 0;
    uVar1 = uRam00000044;
  }
  else {
    uVar1 = (undefined2)unaff_r7;
LAB_2c3ecb54:
    if (in_stack_00000144 != 0) goto LAB_2c3ecbc8;
  }
  uRam00000044 = uVar1;
LAB_2c3ecbc8:
  uRam00000002 = 2;
  _DAT_00000006 = in_stack_00000144;
  VectorHalvingSubtract(in_d0,in_d0,1,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

