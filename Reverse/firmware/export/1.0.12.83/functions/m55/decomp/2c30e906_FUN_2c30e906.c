/* FUN_2c30e906 @ 0x2c30e906 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c30e906(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 extraout_r1;
  int *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 in_cr0;
  undefined4 in_cr8;
  undefined4 in_cr9;
  
  *unaff_r4 = param_3;
  unaff_r4[1] = unaff_r5;
  unaff_r4[2] = unaff_r6;
  puVar2 = _DAT_2c30eb60;
  cVar1 = *(char *)(param_3 * 2);
  *_DAT_2c30eb60 = param_2;
  iVar3 = param_1 * 0x10;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(iVar3 + 4) = param_2;
  *(undefined4 **)(iVar3 + 8) = puVar2;
  *(int *)(iVar3 + 0xc) = param_1 << 0xc;
  *(int **)(iVar3 + 0x10) = unaff_r4 + 3;
  *(int *)(iVar3 + 0x14) = (int)cVar1;
  *(int *)(iVar3 + 0x18) = unaff_r6;
  *(undefined4 *)(iVar3 + 0x1c) = unaff_r7;
  *(char *)((int)unaff_r4 + 0x16) = (char)unaff_r6;
  coprocessor_function2(0,8,0,in_cr8,in_cr9,in_cr0);
  func_0x2ce0de48(param_1 << 0x18,param_2,(int)cVar1 >> 0xf,param_1 << 0xc,param_1,param_4);
  *(undefined2 *)(unaff_r6 + 8) = 0xdf;
  uRam00000390 = extraout_r1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

