/* FUN_2c2c9728 @ 0x2c2c9728 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2c9728(undefined4 param_1,undefined4 param_2,int param_3,undefined2 *param_4)

{
  uint uVar1;
  int iVar2;
  int unaff_r8;
  int unaff_pc;
  undefined4 in_cr0;
  
  coprocessor_loadlong(1,in_cr0,unaff_pc + 0x2d8);
  uVar1 = 0x2c996c00;
  if (param_3 == 0) {
    uVar1 = 0;
    coprocessor_store(0,in_cr0,unaff_r8 + -0x180);
  }
  do {
    iVar2 = (uVar1 >> 0x18) + 0xfb;
    software_interrupt(0x37);
    uVar1 = iVar2 * 8;
    *param_4 = (short)uVar1;
  } while (iVar2 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

