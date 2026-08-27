/* FUN_2c45313a @ 0x2c45313a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c45313a(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint in_stack_00000208;
  
  *(short *)((int)param_4 + 0x2e) = (short)param_3;
  iVar2 = *param_4;
  puVar3 = (uint *)param_4[1];
  uVar4 = param_4[2];
  iVar5 = param_4[3];
  uVar6 = param_4[4];
  *(char *)((int)puVar3 + 0x1f) = (char)puVar3;
  if (uVar4 < 0xfffffff3) {
    uVar4 = (int)*(short *)(iVar2 + param_3) << 0x12;
    if (-1 < (int)uVar4) {
      return;
    }
    *puVar3 = in_stack_00000208;
    puVar3[1] = uVar4;
    puVar3[2] = uVar6;
    *(uint *)(iVar2 + 100) = uVar6;
    return;
  }
  uVar4 = in_stack_00000208 >> 0x10;
  iVar2 = uVar6 * 0x8000000;
  *(char *)(uVar4 + 0x12) = (char)uVar6;
  if (iVar2 < 0 == SBORROW4(uVar6,0x8b)) {
    *(short *)(uVar4 + 0x36) = (short)in_stack_00000208;
    **(int **)(in_stack_00000208 + 0x24) = iVar5 + -0x89;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SBORROW4(uVar6,0x8b)) {
    *(char *)(in_stack_00000208 + 0x17) = (char)uVar6;
    *(char *)(uVar4 + iVar5) = (char)iVar5;
    return;
  }
  *(int *)(iVar2 + 0x78) = iVar2;
  if ((uVar6 >> 10 & 1) == 0 || uVar6 >> 0xb == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xea,0x2c452fe8);
  (*pcVar1)();
}

