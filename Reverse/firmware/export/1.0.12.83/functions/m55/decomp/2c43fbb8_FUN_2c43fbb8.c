/* FUN_2c43fbb8 @ 0x2c43fbb8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c43fbb8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined2 unaff_r4;
  int *unaff_r5;
  int unaff_r6;
  char in_OV;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr14;
  
  *(int *)(param_1 + 0x3c) = unaff_r6;
  coprocessor_function(6,2,7,in_cr14,in_cr3,in_cr4);
  uVar1 = *(ushort *)(param_2 + 0xc);
  uVar2 = (uint)uVar1;
  param_2 = param_2 * 2;
  *(undefined2 *)(param_4 + 4) = unaff_r4;
  *unaff_r5 = param_1;
  unaff_r5[1] = param_2;
  unaff_r5[2] = uVar2;
  unaff_r5[3] = unaff_r6;
  unaff_r5[4] = 0x2c43fc50;
  uRam2c43fc50 = uVar2;
  uRam2c43fc54 = 0x2c43fc50;
  if (in_OV != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_store(9,in_cr2,param_2);
  uRam00000069 = 0x68;
  *(short *)((uVar1 >> 0xf) + 6) = (short)param_2 + 0x358;
  *(char *)(param_2 + 0x365) = -(char)((short)uVar1 >> 0xf) - (char)uVar1;
  *(uint *)(*(ushort *)(param_4 + 0x45 + (uint)(uVar1 >> 0xf)) + 0x68) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

