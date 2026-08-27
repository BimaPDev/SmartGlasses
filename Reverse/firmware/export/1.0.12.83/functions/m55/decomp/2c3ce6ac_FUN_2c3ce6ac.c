/* FUN_2c3ce6ac @ 0x2c3ce6ac */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c3ce35e) */

void FUN_2c3ce6ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *(undefined4 *)(uint)*(ushort *)(*(ushort *)(param_4 + 6) + 4) = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

