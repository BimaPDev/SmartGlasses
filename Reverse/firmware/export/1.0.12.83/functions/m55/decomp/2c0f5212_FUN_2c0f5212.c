/* FUN_2c0f5212 @ 0x2c0f5212 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0f5212(int param_1,int param_2,undefined1 param_3,int param_4,int param_5)

{
  undefined2 extraout_r1;
  int extraout_r3;
  int iVar1;
  int iVar2;
  uint unaff_r6;
  int unaff_r10;
  undefined4 in_cr4;
  undefined4 in_cr10;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  iVar1 = 0x2c0f5228;
  *(undefined1 *)(param_2 + 10) = param_3;
  if (param_1 == 0) {
    coprocessor_load(0xd,in_cr10,unaff_r10 + -0x394);
    func_0x2cbfb43e(0x28000000,0x2c0f522c,&DAT_50000000,param_4 << 6);
    iVar1 = _DAT_2c0f53e0;
    if (!SCARRY4(extraout_r3,param_5)) {
      iVar2 = ((int)_DAT_2c0f5424 >> (_DAT_2c0f5424 & 0xff)) + -2;
      *(undefined2 *)(*(char *)(param_5 + _DAT_2c0f53e0) + -0xf4) = extraout_r1;
      goto LAB_2c0f51ca;
    }
    iVar1 = param_5 << 0x11;
    unaff_r6 = _DAT_2c0f5424;
  }
  coprocessor_function2(0,0,0,in_cr14,in_cr4,in_cr15);
  iVar2 = _DAT_2c0f5320;
  if ((unaff_r6 & 0x20000000) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_2c0f51ca:
  *(int *)(iVar2 * 2) = iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

