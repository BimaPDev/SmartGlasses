/* FUN_2c4477d4 @ 0x2c4477d4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4477d4(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int unaff_r4;
  int unaff_r5;
  undefined2 *unaff_r6;
  int unaff_r7;
  char in_NG;
  
  if (in_NG == '\0') {
    *(short *)(param_1 + 0x34) = (short)unaff_r7;
    *(char *)(param_2 + 0xc) = (char)param_4;
    *(short *)(param_1 + 0x12) = (short)*(undefined4 *)(unaff_r5 + 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)((int)unaff_r6 + param_2) = (short)param_2;
  *(char *)(unaff_r4 + (int)unaff_r6) = (char)param_3;
  *(short *)(unaff_r7 + 6) = (short)unaff_r4;
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r6 = (short)param_4;
  if (!SBORROW4(param_4,0x68)) {
    func_0x2cc22fa6(0x10,_MasterStackPointer,*param_3,param_3[1],param_2,param_3,param_4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

