/* FUN_2c11f962 @ 0x2c11f962 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c11f962(int param_1,undefined4 param_2,undefined2 param_3)

{
  ushort uVar1;
  int unaff_r6;
  char in_CY;
  undefined4 in_cr5;
  undefined4 in_cr9;
  
  uVar1 = *(ushort *)(param_1 + 0x2a);
  if (in_CY != '\0') {
    *(undefined2 *)(unaff_r6 + (uint)uVar1) = param_3;
    *(char *)(unaff_r6 + 0x2c1200e1) = (char)uVar1;
    coprocessor_store(1,in_cr5,0x2c120500);
    _Reserved2 = 0x2c120440;
    uRam00000001 = 0xbc;
    coprocessor_store(2,in_cr9,0x2c12042d);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

