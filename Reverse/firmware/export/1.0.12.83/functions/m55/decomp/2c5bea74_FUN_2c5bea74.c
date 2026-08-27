/* FUN_2c5bea74 @ 0x2c5bea74 */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_2c5bea74(void)

{
  int iVar1;
  
  iVar1 = FUN_2c536358();
  if (((iVar1 == 7) || (iVar1 = FUN_2c536358(), iVar1 == 4)) && (iVar1 = FUN_2c4f8730(), iVar1 == 0)
     ) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  registry_lookup(0x6006);
  FUN_2c5e4068();
  return 0;
}

