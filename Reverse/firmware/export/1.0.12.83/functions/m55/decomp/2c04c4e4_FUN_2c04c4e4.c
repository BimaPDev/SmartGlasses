/* FUN_2c04c4e4 @ 0x2c04c4e4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c04c4e4(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined1 *puVar1;
  int unaff_r5;
  int unaff_r8;
  undefined4 in_cr0;
  
  puVar1 = (undefined1 *)((param_4 & 0x1ffffff) >> 0xe);
  if (SCARRY4(unaff_r5,0x46)) {
    *puVar1 = (char)puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_3 << 0x15 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_storelong(0,in_cr0,unaff_r8 + -0x1e0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

