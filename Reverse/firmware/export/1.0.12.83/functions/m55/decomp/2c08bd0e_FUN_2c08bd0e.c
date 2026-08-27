/* FUN_2c08bd0e @ 0x2c08bd0e */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_2c08bd0e(undefined4 param_1)

{
  uint extraout_r3;
  undefined4 unaff_r4;
  uint uVar1;
  int unaff_r9;
  int unaff_r10;
  undefined4 in_cr14;
  undefined8 uVar2;
  undefined4 in_stack_00000220;
  undefined4 in_stack_00000224;
  undefined4 in_stack_00000228;
  int in_stack_0000022c;
  int in_stack_00000230;
  
  uVar2 = func_0x2c372f40(param_1,in_stack_00000220,in_stack_00000224,in_stack_00000228);
  uVar1 = extraout_r3 >> 0x1c;
  if ((extraout_r3 >> 0x1b & 1) == 0 || uVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar1 != 0) {
    *(char *)(in_stack_0000022c + 0x2c08bd94) = (char)in_stack_0000022c;
    *(int *)((int)((ulonglong)uVar2 >> 0x20) + extraout_r3) = (int)uVar2;
    if (in_stack_0000022c != -1) {
      *(uint *)(in_stack_00000230 + 0x3c) = uVar1;
      coprocessor_load(3,in_cr14,unaff_r9 + 0x124);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    coprocessor_storelong(8,in_cr14,unaff_r10 + -0x134);
    *(undefined4 *)(in_stack_00000230 + 0x5c) = 0x8bf68000;
    sRam2c08bf32 = (short)in_stack_0000022c;
    sRamed00003a = sRam2c08bf32 + -0x40d0;
    *(char *)(*(int *)(in_stack_0000022c + 0x6c) + (int)cRam58117e60) =
         (char)((ulonglong)uVar2 >> 0x20);
  }
  return unaff_r4;
}

