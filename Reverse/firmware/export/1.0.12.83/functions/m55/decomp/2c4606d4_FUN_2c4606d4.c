/* FUN_2c4606d4 @ 0x2c4606d4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4606d4(undefined4 param_1,int param_2,undefined2 param_3,int param_4)

{
  int unaff_r7;
  
  *(undefined2 *)(unaff_r7 + 0x2a) = 0x84c;
  *(undefined2 *)(param_2 + 0x16) = param_3;
  *(undefined4 *)(param_2 + 0x72) = param_1;
  *(undefined4 **)(param_2 + 0x76) = (undefined4 *)(param_2 + 0x72);
  *(undefined4 *)(param_2 + 0x7a) = 0x2c46084c;
  *(int *)(param_2 + 0x7e) = unaff_r7;
  *(undefined1 *)(param_4 * 0x1000000 + 8) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

