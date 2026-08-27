/* FUN_2c447f74 @ 0x2c447f74 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c447f74(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int unaff_r4;
  undefined4 in_cr5;
  undefined4 in_cr11;
  undefined4 in_cr15;
  
  bVar1 = *(byte *)(param_1 + unaff_r4);
  coprocessor_movefromRt(4,2,6,in_cr5,in_cr15);
  *(char *)(param_2 + 0x17) = (char)unaff_r4;
  iVar2 = (uint)bVar1 * 0x1000;
  coprocessor_function2(7,7,3,in_cr15,in_cr11,in_cr15);
  *(int *)iVar2 = iVar2;
  *(undefined1 **)(iVar2 + 4) = &stack0x00000360;
  *(int *)(iVar2 + 8) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

