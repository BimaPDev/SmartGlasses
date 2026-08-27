/* FUN_2c15905c @ 0x2c15905c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c15905c(undefined4 param_1,uint param_2)

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
  if (unaff_r4 == 0x4e) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_r4 != 0x4f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xd5,0x2c15907c);
    (*pcVar1)();
  }
  iRam000000c3 = unaff_r4 - unaff_r7;
  if ((param_2 & 3) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

