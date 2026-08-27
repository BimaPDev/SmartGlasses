/* FUN_2c0f5790 @ 0x2c0f5790 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0f5790(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int unaff_r7;
  int unaff_r11;
  undefined4 in_cr0;
  
  coprocessor_storelong(10,in_cr0,unaff_r11 + 0xf4);
  uRam000000ff = (uint)((int *)(param_1 >> 0x10))[1] >> 0x10;
  iRam00000103 = param_4 + -0xe5;
  uRam00000107 = (uint)*(byte *)(*(int *)(unaff_r7 + 0x6c) + 0x17);
  uRam0000010b = *(undefined4 *)
                  (((int)*(short *)((uint)*(byte *)(*(int *)(param_1 >> 0x10) + 0x14) + param_4) >>
                   0x14) + uRam000000ff);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

