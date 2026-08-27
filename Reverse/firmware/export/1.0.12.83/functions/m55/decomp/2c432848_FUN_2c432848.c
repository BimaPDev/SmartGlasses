/* FUN_2c432848 @ 0x2c432848 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c432848(uint param_1,int param_2,uint param_3)

{
  int unaff_lr;
  char in_OV;
  undefined1 auStack_1c [12];
  
  if ((int)(param_3 & ~((int)auStack_1c * 0x400000)) < 0 == (bool)in_OV) {
    software_interrupt(0x24);
    *(uint *)((unaff_lr - (uint)((param_1 & 0x100) == 0)) + -0x78fc0) =
         (uint)*(ushort *)(param_2 + 0x16);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

