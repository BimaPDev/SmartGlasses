/* FUN_2c4579b8 @ 0x2c4579b8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4579b8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_stack_00000280;
  
  *(short *)(in_stack_00000280 + 2) = (short)*(undefined4 *)(param_2 + 8);
  puVar2 = (undefined4 *)(uint)uRam0000005d;
  iVar1 = puVar2[4];
  *(undefined4 *)(puVar2[2] + 0xf42) = *puVar2;
  *(char *)(iVar1 + 0x10) = (char)uRam000000c5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

