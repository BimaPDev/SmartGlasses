/* FUN_2c44c298 @ 0x2c44c298 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c44c298(int param_1,int param_2)

{
  int unaff_r4;
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x3c);
  *(short *)(unaff_r4 + 6) = (short)iVar1;
  *(int *)(param_2 + 0x18) = unaff_r4;
  software_bkpt(0xf);
  *(char *)(*(int *)(iVar1 + 4) + 5) = (char)*(undefined4 *)(*(ushort *)(param_1 + unaff_r4) + 0x9e)
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

