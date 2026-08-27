/* FUN_2c082db0 @ 0x2c082db0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c082db0(undefined2 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint unaff_r4;
  uint unaff_r5;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  char cVar3;
  undefined4 *puVar4;
  undefined4 in_cr6;
  undefined4 in_cr13;
  uint in_stack_0000012c;
  
  *param_1 = (short)param_3;
  *unaff_r6 = param_3;
  unaff_r6[1] = param_4;
  unaff_r6[2] = unaff_r4;
  unaff_r6[3] = unaff_r5;
  unaff_r6[4] = unaff_r7;
  puVar4 = unaff_r6 + 5;
  cVar3 = SBORROW4(param_4,0x77);
  *(char *)(((int)puVar4 >> 0x19) + 0x1f) = (char)puVar4;
  iVar1 = func_0x2b8ade28((int)puVar4 >> 0x19,param_2,0x5f,(int)puVar4 * 0x4000,param_2,param_3);
  *(char *)(unaff_r5 + 0x1c) = (char)puVar4;
  *(char *)(param_2 + 0x12) = (char)param_2;
  if (unaff_r5 >> 0x1c != 0 && cVar3 == '\0') {
    *(int *)((unaff_r5 >> 0x1c) + 0x2c) = iVar1;
    iVar2 = iVar1 + 0x21;
    *(int *)iVar2 = iVar2;
    *(undefined4 *)(iVar1 + 0x25) = 0x2c08349c;
    *(uint *)(iVar1 + 0x29) = unaff_r4;
    *(uint *)(iVar1 + 0x2d) = in_stack_0000012c | unaff_r4;
    *(short *)(iVar1 + 0x2c08332d) = (short)iVar2;
    coprocessor_movefromRt(6,7,6,in_cr13,in_cr6);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

