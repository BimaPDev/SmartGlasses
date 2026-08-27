/* FUN_2c12167e @ 0x2c12167e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c12167e(undefined4 param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint *unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  uint in_stack_00000004;
  
  uVar3 = (uint)unaff_r4 >> 0x1c;
  param_2 = param_2 ^ unaff_r6;
  *(short *)(uVar3 + 0x1a) = (short)unaff_r5;
  *(short *)(unaff_r5 + 2) = (short)unaff_r4;
  uVar2 = unaff_r7 >> 0x1c;
  *(char *)(uVar2 + 0x1b) = (char)unaff_r5;
  *(uint *)(uVar2 * 2) = uVar2;
  if ((unaff_r7 >> 0x1b & 1) == 0) {
    unaff_r4 = (uint *)(param_2 << 2);
    unaff_r7 = param_2 << 0x1e;
    param_2 = param_2 << 0x1f;
    in_stack_00000004 = uVar3;
  }
  uVar1 = *(ushort *)(param_2 + 0x38);
  *unaff_r4 = in_stack_00000004;
  unaff_r4[1] = unaff_r5;
  unaff_r4[2] = 0x83;
  unaff_r4[3] = unaff_r7;
  if (0xfd < (int)param_2) {
    *(char *)(*(char *)(in_stack_00000004 * 0x800 + 0x1f) + 0xf) = (char)param_2 + -0x7b;
    DAT_0000009e = (char)(uVar1 >> 6);
    uRam00000044 = *(undefined2 *)((uint)bRam0000003d + unaff_r7 + 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

