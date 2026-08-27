/* FUN_2c44c7c4 @ 0x2c44c7c4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c44c7c4(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *unaff_r5;
  int unaff_r7;
  char in_NG;
  char in_OV;
  
  if (in_NG != '\0') {
    *unaff_r5 = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = (uint)uRam00000048;
  if (in_OV != '\0') {
    *param_2 = (int)&stack0x00000070;
    param_2[1] = param_4;
    param_2[2] = uVar2;
    param_2[3] = (int)unaff_r5;
    param_2[4] = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xd7,0x2c44c8ae);
  (*pcVar1)();
}

