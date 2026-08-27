/* FUN_2c319832 @ 0x2c319832 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c319832(undefined2 param_1,int param_2,undefined1 param_3,int param_4)

{
  ushort uVar1;
  int unaff_r4;
  int unaff_r5;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr4;
  undefined4 in_cr15;
  
  if (param_2 != 0) {
    *(undefined2 *)(unaff_r4 + 8) = param_1;
    uVar1 = *(ushort *)(unaff_r5 + 0x44);
    *(undefined1 *)(Reserved1 + 6) = param_3;
    *(int *)(uVar1 + 0x34) = param_2 << 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_function(0xc,8,0,in_cr0,in_cr15,in_cr4);
  *(short *)(param_4 + 0x32) = (short)unaff_r5;
  coprocessor_store(2,in_cr1,unaff_r5 + 0x10e);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

