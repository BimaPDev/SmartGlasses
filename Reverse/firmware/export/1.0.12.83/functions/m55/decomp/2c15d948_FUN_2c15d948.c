/* FUN_2c15d948 @ 0x2c15d948 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c15d86a) */
/* WARNING: Removing unreachable block (ram,0x2c15d8b8) */
/* WARNING: Removing unreachable block (ram,0x2c15d86e) */
/* WARNING: Removing unreachable block (ram,0x2c15d8fe) */
/* WARNING: Removing unreachable block (ram,0x2c15d882) */

void FUN_2c15d948(undefined4 param_1,int param_2)

{
  code *pcVar1;
  int unaff_r4;
  undefined4 unaff_r5;
  int unaff_r7;
  
  if (param_2 == 0) {
    *(undefined4 *)(unaff_r4 + 0x74) = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_r4 != 0x4e) {
    if (unaff_r4 == 0x4f) {
      iRam000000c3 = unaff_r4 - unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xd5,0x2c15d968);
    (*pcVar1)();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

