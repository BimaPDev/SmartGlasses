/* FUN_2c2c55da @ 0x2c2c55da */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2c55da(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r5;
  undefined4 in_cr1;
  undefined4 in_cr15;
  
  iVar1 = coprocessor_movefromRt(0,1,4,in_cr15,in_cr1);
  uRam000000fe = 0xfe;
  uRam00000102 = param_2;
  uRam00000106 = param_3;
  uRam0000010a = param_4;
  uRam0000010e = *(undefined4 *)(iVar1 * 2);
  uRam00000112 = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

