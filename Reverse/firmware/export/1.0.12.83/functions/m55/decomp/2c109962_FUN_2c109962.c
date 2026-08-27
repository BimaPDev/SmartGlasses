/* FUN_2c109962 @ 0x2c109962 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c109962(void)

{
  undefined2 *puVar1;
  undefined4 unaff_r4;
  uint unaff_r6;
  int iVar2;
  int unaff_r7;
  undefined4 in_cr11;
  
  puVar1 = (undefined2 *)(unaff_r6 & 0xffdaffda);
  coprocessor_store(1,in_cr11,unaff_r6 - 0x204);
  iVar2 = *(int *)(unaff_r7 + (int)puVar1);
  *puVar1 = (short)puVar1;
  *(undefined4 *)(iVar2 + 0x78) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

