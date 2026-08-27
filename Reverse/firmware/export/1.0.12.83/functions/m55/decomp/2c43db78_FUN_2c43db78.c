/* FUN_2c43db78 @ 0x2c43db78 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c43db78(undefined4 param_1,char param_2,int param_3,int param_4)

{
  ushort uVar1;
  int unaff_r4;
  int unaff_r6;
  int unaff_r11;
  undefined4 in_cr7;
  
  coprocessor_load(7,in_cr7,unaff_r11 + -100);
  uVar1 = *(ushort *)(param_4 + 4);
  *(char *)(unaff_r6 + 5) = param_2;
  *(uint *)(param_3 + 0x118) = (uint)uVar1;
  *(char *)(unaff_r4 + 5) = param_2 + '\x03';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

