/* FUN_2c2c9a2e @ 0x2c2c9a2e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c2c99e2) */

void FUN_2c2c9a2e(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_r3;
  int unaff_r4;
  undefined1 *unaff_r5;
  int unaff_pc;
  undefined4 in_cr0;
  undefined8 uVar3;
  undefined8 in_d2;
  undefined8 in_d16;
  undefined8 in_d19;
  undefined8 in_d27;
  undefined1 auStack_20 [16];
  
  coprocessor_loadlong(1,in_cr0,unaff_pc + 0x2d8);
  *(int *)(unaff_r4 * 2) = (int)unaff_r5 << 2;
  *unaff_r5 = (char)((int)unaff_r5 << 2);
  software_bkpt(0xc2);
  puVar2 = (undefined4 *)(int)(char)(&stack0x000001ac)[in_r3];
  uVar3 = VectorAdd(in_d27,in_d2,8,1);
  SatQ(uVar3,8,1);
  while (iVar1 = iRam2c2c99d4, SBORROW4(unaff_r4 << 0xc,0xe8)) {
    *(char *)((int)&stack0x000001ac * 8 + 0x13) = (char)auStack_20 + '\x10';
    puVar2 = (undefined4 *)(iVar1 << 2);
  }
  *puVar2 = unaff_r5;
  uVar3 = VectorAdd(in_d16,in_d19,1,0);
  SatQ(uVar3,1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

