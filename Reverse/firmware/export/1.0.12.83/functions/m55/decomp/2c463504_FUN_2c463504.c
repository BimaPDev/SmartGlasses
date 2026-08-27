/* FUN_2c463504 @ 0x2c463504 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c463504(undefined4 param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  int extraout_r2;
  uint unaff_r4;
  int iVar2;
  undefined4 in_cr1;
  
  if ((unaff_r4 >> 0x18 & 1) != 0) {
    *(undefined2 *)(param_2 + 0x1e) = param_3;
    func_0x2cc0b442();
    iVar1 = coprocessor_movefromRt(7,1,in_cr1);
    iVar2 = coprocessor_movefromRt2(7,1,in_cr1);
    software_bkpt(0x45);
    func_0x2b85e27e(*(undefined2 *)(iVar2 + 8),iVar1 + -0x33,*(undefined4 *)(extraout_r2 + 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

