/* FUN_2c15e78c @ 0x2c15e78c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c15e78c(undefined4 param_1,int param_2)

{
  code *pcVar1;
  int unaff_r4;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xd5,0x2c15e5d4);
    (*pcVar1)();
  }
  if (unaff_r4 != 0x4e) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xd5,0x2c15e7ac);
    (*pcVar1)();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

