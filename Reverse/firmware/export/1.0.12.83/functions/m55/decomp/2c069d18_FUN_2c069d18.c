/* FUN_2c069d18 @ 0x2c069d18 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c0693a4) */
/* WARNING: Removing unreachable block (ram,0x2c0a8d7a) */
/* WARNING: Removing unreachable block (ram,0x2c1091c0) */
/* WARNING: Removing unreachable block (ram,0x2c108a0e) */
/* WARNING: Removing unreachable block (ram,0x2c108a92) */
/* WARNING: Removing unreachable block (ram,0x2c108210) */
/* WARNING: Removing unreachable block (ram,0x2c108256) */
/* WARNING: Removing unreachable block (ram,0x2c1081a2) */
/* WARNING: Removing unreachable block (ram,0x2c108104) */
/* WARNING: Removing unreachable block (ram,0x2c10842a) */
/* WARNING: Removing unreachable block (ram,0x2c108788) */
/* WARNING: Removing unreachable block (ram,0x2c1081b8) */
/* WARNING: Removing unreachable block (ram,0x2c10825c) */
/* WARNING: Removing unreachable block (ram,0x2c108266) */
/* WARNING: Removing unreachable block (ram,0x2c108294) */
/* WARNING: Removing unreachable block (ram,0x2c1087f6) */
/* WARNING: Removing unreachable block (ram,0x2c0690c6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c069d18(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  code *pcVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  int unaff_r4;
  int iVar6;
  int iVar7;
  int unaff_r5;
  int unaff_r6;
  int *piVar8;
  uint unaff_r10;
  char in_OV;
  bool bVar9;
  undefined4 in_cr0;
  undefined4 in_cr5;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr13;
  undefined4 in_cr15;
  undefined8 in_d30;
  undefined4 in_stack_000001f4;
  int iStack_8;
  
  piVar8 = (int *)(unaff_r5 * 0x1000);
  bVar9 = param_1 << 8 < 0;
  software_bkpt(0x90);
  iStack_8 = param_1;
  if (bVar9 != (bool)in_OV) {
    *(char *)(unaff_r5 + 1) = (char)*(undefined2 *)(unaff_r4 + 0x10);
    iVar6 = *(int *)(param_2 + -0x53);
    *(undefined1 *)(unaff_r5 + -5) = (char)unaff_r5;
    iVar7 = iVar6 + -0xd6;
    *piVar8 = param_1 + 199;
    piVar8[1] = param_2 + -0x7f;
    piVar8[2] = unaff_r5 + -5;
    piVar8[3] = unaff_r6;
    piVar8[4] = (int)piVar8;
    uRam00000025 = 0xc0;
    *(int *)iVar7 = iVar7;
    *(int *)(iVar6 + -0xd2) = param_2 + -0xf2;
    *(undefined4 *)(iVar6 + -0xce) = 0x2c069e78;
    *(int *)(iVar6 + -0xca) = iVar7;
    *(undefined4 *)(iVar6 + -0xc6) = 0x2c0;
    *(undefined1 *)(param_2 + -0xda) = 0;
    *(undefined1 *)(iVar7 * 0x8000 + 0x13) = 0;
    *(int *)(_HardFault + 0x48) = _HardFault;
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0x7e,0x2c069392);
    (*pcVar1)();
  }
  if (bVar9 == (bool)in_OV) {
    *(undefined1 *)(param_1 + 0x18) = 0;
    coprocessor_load(8,in_cr8,piVar8);
    bVar2 = *(byte *)(unaff_r4 * 2 + 0x18);
    uVar4 = (uint)bVar2;
    uVar3 = (ushort)bVar2;
    VectorCountLeadingSignBits(in_d30,4);
    uRam0000007d = uVar3;
    if (uVar4 << 0x1c != 0 && (int)(uVar4 << 0x1c) < 0 == (bool)in_OV) {
      *(undefined1 *)(piVar8 + 7) = 0;
      if ((bVar2 & 0x10) == 0) {
        func_0x2c526f3c(uVar4,0,0x49,in_stack_000001f4);
        uRam00d80008 = 0xf00;
        coprocessor_function2(10,0xd,1,in_cr0,in_cr10,in_cr13);
        puVar5 = *(uint **)((unaff_r5 >> 0xc) + 0x8b);
        *puVar5 = unaff_r10 | 0x20;
        puVar5[1] = (uint)puVar5;
        puVar5[2] = 0x8b;
        puVar5[3] = 0x36000000;
        puVar5[4] = 0x2c108fc0;
        uRam00000f18 = 0xf0;
        _NMI = CONCAT22(_DAT_0000000a,0xf00);
      }
      else {
        coprocessor_moveto(0,5,7,uVar4,in_cr5,in_cr15);
        coprocessor_moveto(0,5,7,uVar4,in_cr5,in_cr15);
        *(short *)(param_5 + 0xe) =
             (short)*(undefined4 *)(((uint)&iStack_8 & 0xffffff57) + 0x10) + -0xca;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(uVar4 + 0x15) = (short)piVar8;
    *(ushort *)(uVar4 + 0x34) = uVar3;
    *(ushort *)(uVar4 + 0x11) = (ushort)bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  software_interrupt(0x7b);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

