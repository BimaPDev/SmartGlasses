/* FUN_2c2c5a26 @ 0x2c2c5a26 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2c5a26(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 unaff_r4;
  int unaff_r6;
  int unaff_r7;
  uint uStack0000001c;
  
  software_bkpt(5);
  *(undefined4 *)(unaff_r7 + param_4) = unaff_r4;
  uStack0000001c = param_1;
  func_0x2c9ce7d8(param_1 >> 0x1c,param_2,(uint)*(ushort *)(unaff_r6 + param_3) << 3,param_4,param_2
                  ,param_3,param_4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

