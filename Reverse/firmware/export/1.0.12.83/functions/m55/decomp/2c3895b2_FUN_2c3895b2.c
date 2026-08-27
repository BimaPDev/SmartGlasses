/* FUN_2c3895b2 @ 0x2c3895b2 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c3895b2(void)

{
  int unaff_r4;
  undefined2 *puVar1;
  
  *(short *)(*(int *)(unaff_r4 + 4) + 0x2e) = (short)(int *)(unaff_r4 + 0x40);
  puVar1 = *(undefined2 **)(*(int *)(unaff_r4 + 0x48) + 0x28);
  *(undefined4 *)(*(int *)(unaff_r4 + 0x40) + (int)puVar1) =
       *(undefined4 *)(*(int *)(unaff_r4 + 0x48) + 0x20);
  *puVar1 = (short)((int)puVar1 << 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

