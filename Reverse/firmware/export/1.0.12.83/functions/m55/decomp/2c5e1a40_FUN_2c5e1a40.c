/* FUN_2c5e1a40 @ 0x2c5e1a40 */

int FUN_2c5e1a40(uint param_1,int param_2)

{
  int unaff_r4;
  int unaff_r5;
  undefined4 in_r12;
  undefined4 unaff_lr;
  undefined4 in_cr3;
  
  while( true ) {
    register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -4);
    *(undefined4 *)register0x00000054 = unaff_lr;
    coprocessor_store(0xc,in_cr3,in_r12);
    if (0x30 < unaff_r4) break;
    param_1 = (uint)*(byte *)(unaff_r5 + 0x10);
    unaff_r4 = unaff_r4 + -0x6e;
  }
  coprocessor_store(0xc,in_cr3,param_1);
  return param_2 >> 0x17;
}

