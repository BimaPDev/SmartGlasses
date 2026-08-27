/* FUN_2c103cb0 @ 0x2c103cb0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c103cb0(int param_1)

{
  int iVar1;
  uint unaff_r4;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x12) = 0;
  iVar2 = _DAT_2c103f40 >> 0x14;
  iVar1 = *(int *)(iVar2 + 0x6c);
  *(short *)(iVar1 + 4) = (short)iVar1;
  *(uint *)(iVar2 + 0x58) = ((unaff_r4 >> 0xb) - unaff_r4) + 0xe;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

