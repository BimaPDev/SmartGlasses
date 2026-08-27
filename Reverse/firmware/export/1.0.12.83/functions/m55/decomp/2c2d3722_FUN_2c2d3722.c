/* FUN_2c2d3722 @ 0x2c2d3722 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2d3722(void)

{
  uint uVar1;
  int in_r3;
  uint uVar2;
  uint unaff_r5;
  uint unaff_r7;
  int *piVar3;
  undefined4 in_cr0;
  
  piVar3 = (int *)(unaff_r7 ^ unaff_r5);
  uVar2 = piVar3[2];
  if (*piVar3 * 0x1000 != 0) {
    uVar1 = (*(uint *)(*piVar3 * 0x1000 + 0x70) & 0x1fffffff) >> 1;
    *(uint *)(uVar1 + 0x10) = uVar1;
    *(uint *)(in_r3 * 8 + 0x10) = uVar2;
    *(uint *)uVar1 = uVar1;
    uVar2 = (uint)*(byte *)(((uVar2 & 0x1fffffff) >> 0x18) * 2 + 8);
    *(uint *)uVar2 = uVar2;
    *(int *)(uVar2 + 4) = in_r3 * 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_store(0,in_cr0,piVar3[5] + -0x3c4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

