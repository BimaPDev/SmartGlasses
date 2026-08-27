/* FUN_2c30645a @ 0x2c30645a */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c30645a(undefined2 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int unaff_r4;
  int iVar2;
  int unaff_r6;
  int iVar3;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr5;
  
  if (param_2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(unaff_r4 + 8) = param_1;
  iVar2 = param_2 * 0x100;
  uVar1 = coprocessor_movefromRt(9,4,3,in_cr5,in_cr2);
  *(char *)(iVar2 + uVar1) = (char)param_3;
  iVar3 = (int)*(short *)(param_2 + unaff_r6);
  *(int *)(uVar1 + param_3) = iVar2;
  *(uint *)param_3 = param_3;
  uVar1 = uVar1 ^ param_3;
  *(short *)(iVar3 + (param_2 & 0xffffff) * 0x20) = (short)_DAT_2c306808;
  *(uint *)(uVar1 + iVar3) = uVar1;
  *(short *)(iVar2 + 0x2c) = (short)uVar1;
  if ((uVar1 & 0x10000) != 0) {
    coprocessor_moveto(2,5,4,(int *)(uVar1 << 0x10),in_cr5,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(uVar1 << 0x10) = iVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

