/* FUN_2c3dca86 @ 0x2c3dca86 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c3dcabc) */

void FUN_2c3dca86(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int unaff_r4;
  int unaff_r5;
  
  uVar1 = (undefined1)unaff_r5;
  *(undefined1 *)(param_3 + unaff_r5) = uVar1;
  *(undefined1 *)(param_3 + unaff_r5) = uVar1;
  *(undefined1 *)(unaff_r5 + 0xc) = uVar1;
  *(int *)(param_4 + param_1 * 2) = unaff_r5;
  *(char *)(unaff_r4 + 0x2c3dcb51) = (char)param_4;
  *(undefined1 *)(param_3 + 0x2c3e003f) = 0x3c;
  *(undefined2 *)(param_3 + 0x2c3e003f) = 0x3c;
  uRam2c3dcb4b = (char)(param_1 * 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

