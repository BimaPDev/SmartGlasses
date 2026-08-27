/* FUN_2c29525a @ 0x2c29525a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c29525a(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_r5;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_lr;
  undefined4 in_cr0;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined4 unaff_s29;
  uint in_stack_0000002c;
  undefined1 auStack_14 [8];
  
  coprocessor_moveto(0xe,7,7,unaff_lr,in_cr14,in_cr15);
  coprocessor_function(1,0xe,0,in_cr0,in_cr14,in_cr0);
  coprocessor_function(0xe,0xf,7,in_cr14,in_cr14,in_cr14);
  coprocessor_function(7,0xe,7,in_cr14,in_cr14,in_cr14);
  *(uint *)(param_2 + 0x22) = in_stack_0000002c;
  *(undefined2 *)((in_stack_0000002c >> 0xc) + 0x3e) = unaff_r5;
  iVar2 = *(int *)(*(int *)(in_stack_0000002c * 0x80 + 0x14) + 4);
  uVar3 = *(undefined4 *)(iVar2 + 8);
  iVar4 = *(int *)(iVar2 + 0xc);
  if (SBORROW4(in_stack_0000002c,0x50)) {
    coprocessor_function(0xe,0xe,7,in_cr15,in_cr14,in_cr15);
    coprocessor_function(0,0xe,7,in_cr0,in_cr14,in_cr0);
    coprocessor_function(0xf,0xb,7,in_cr14,in_cr14,in_cr14);
    VectorFloatToSignedFixed(unaff_s29,0x20,3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = (char)*(undefined4 *)(iVar2 + 0x10) + '\x04';
  *(short *)(*(int *)(iVar2 + 4) + 0x1e) = (short)*(int *)(iVar2 + 4);
  coprocessor_load(0,in_cr0,auStack_14);
  *(char *)(iRam2c2950d8 + 0x1c) = (char)uVar3;
  *(char *)(iVar4 + 0x1d) = cVar1;
  *(char *)(iVar4 + 0x1d) = cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

