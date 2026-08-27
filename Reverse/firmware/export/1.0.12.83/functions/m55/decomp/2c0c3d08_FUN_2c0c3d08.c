/* FUN_2c0c3d08 @ 0x2c0c3d08 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c0c3b06) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0c3d08(undefined4 param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *unaff_r7;
  int unaff_pc;
  undefined4 in_cr0;
  undefined4 in_stack_000000e8;
  int iStack000000fc;
  undefined4 in_stack_000001f0;
  
  iStack000000fc = _DAT_2c0c3f1c;
  piVar5 = piRam2c0c3d38;
  puVar7 = (uint *)*unaff_r7;
  software_interrupt(9);
  *(short *)(piRam2c0c3d38 + 8) = (short)param_2;
  uVar8 = *puVar7;
  if (param_2 != 0) {
    *piVar5 = param_2;
    *(int *)(iStack000000fc >> 0x11) = (int)&stack0x0000001c;
    ((int *)(iStack000000fc >> 0x11))[1] = param_2 >> 9;
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0x41,0x2c0c3d68);
    (*pcVar1)();
  }
  cVar2 = *(char *)((uVar8 >> 0x19) + 0x11);
  if ((int)uVar8 < 1) {
    *(char *)(int)cVar2 = cVar2;
    puVar9 = *(undefined4 **)(iStack000000fc + 0xc);
    *(undefined4 *)(uVar8 + 0x38) = 0xb;
    uVar6 = _DAT_2c0c3f10;
    uVar4 = uRam20000010;
    uVar3 = uRam20000004;
    *puVar9 = _DAT_2c0c41a4;
    puVar9[1] = uVar3;
    puVar9[2] = 0xad;
    puVar9[3] = puVar9;
    puVar9[4] = uVar6;
    puVar9[5] = uVar4;
    *puVar9 = 0xad;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000002 = 0;
  coprocessor_storelong(0,in_cr0,(uint)(int)cVar2 >> 4);
  coprocessor_load(0,in_cr0,unaff_pc + -0x160);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

