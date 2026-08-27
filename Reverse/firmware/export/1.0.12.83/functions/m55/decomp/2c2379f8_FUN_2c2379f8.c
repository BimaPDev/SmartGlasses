/* FUN_2c2379f8 @ 0x2c2379f8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2379f8(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int unaff_r4;
  uint uVar1;
  undefined4 unaff_r7;
  
  *param_4 = unaff_r7;
  *(int *)(param_1 * 0x100 + 0x60) = param_3;
  uVar1 = (uint)*(ushort *)(unaff_r4 + 0x3a);
  *(uint *)(param_3 + 0x68) = uVar1;
  *(uint *)(unaff_r4 + 100) = uVar1;
  *(uint *)(unaff_r4 + param_2) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

