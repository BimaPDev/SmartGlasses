/* FUN_2c067894 @ 0x2c067894 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c067100) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c067894(int param_1)

{
  code *pcVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint unaff_r4;
  int iVar11;
  uint uVar12;
  uint unaff_r7;
  int unaff_lr;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr5;
  undefined4 in_cr9;
  undefined4 in_cr11;
  uint in_stack_000000c4;
  undefined1 *in_stack_000000d4;
  int in_stack_000000d8;
  undefined4 in_stack_000000dc;
  undefined4 in_stack_00000318;
  int in_stack_00000328;
  
  sVar3 = *(short *)(unaff_r4 + param_1);
  iVar11 = *(int *)(unaff_lr + 8);
  uVar12 = *(uint *)(unaff_lr + 0x10);
  if (CARRY4(unaff_r7,unaff_r4) && unaff_r7 + unaff_r4 != 0) {
    coprocessor_store(1,in_cr1,*(int *)(unaff_lr + 0xc) + -0x278);
    coprocessor_load(1,in_cr9,*(int *)(unaff_lr + 0x14) + -0x224);
    iVar11 = 0x2c0674e8;
  }
  else if (*(ushort *)(iVar11 + 0x2c) <= uVar12) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(uVar12 * 0x40000 + 0x30) = (short)uVar12;
  iVar8 = iVar11 * 0x2000000;
  uVar5 = (int)sVar3 + 0xfd;
  *(short *)(iVar8 + 0x14) = (short)uVar5;
  uVar9 = uVar5 >> 0x10;
  coprocessor_load(8,in_cr11,in_stack_000000d8 + -0x278);
  cVar2 = *(char *)(uVar9 + uVar5);
  *(int *)iVar8 = iVar8;
  *(uint *)(iVar8 + 4) = uVar9;
  *(int *)(iVar8 + 8) = (int)cVar2;
  *(int *)(iVar8 + 0xc) = iVar11;
  *(char *)(in_stack_000000d8 + 0xb) = (char)uVar5;
  *(int *)(uVar12 + 0x1c) = in_stack_000000d8;
  puVar6 = *(undefined4 **)(iVar8 + -5);
  uVar5 = *(uint *)(iVar8 + -1);
  puVar10 = *(undefined4 **)(iVar8 + 3);
  *(undefined4 *)(uVar9 + 4) = 0xffffff89;
  if (uVar5 != 0) {
    puVar7 = (uint *)(uint)uRamffffff75;
    puRam2c067a04 = puVar7;
    *puVar7 = uVar9;
    puVar7[1] = uVar5;
    puVar7[2] = (uint)puVar7;
    puVar7[3] = unaff_r4 + 0x11;
    puVar7[4] = uVar9 << 1;
    puVar7[5] = uVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRamffffffbb = 0xff89;
  *puVar10 = *puVar6;
  iRam00000003 = puVar10[2];
  uRam0000000f = puVar10[3];
  iRam00000013 = iRam00000003 << 1;
  *(undefined4 *)(((uint)puVar10[1] >> 0x1b) + 0x50) = 3;
  uVar4 = uRam2c0674ac;
  puVar6 = puRam2c0674a8;
  uRam00000007 = 0;
  uRam0000000b = 3;
  coprocessor_load(6,in_cr2,_DAT_2c067ae8 + 0xc);
  uRam0000006b = 0x2c06799c;
  uRam2c067668 = 0x2c067624;
  uRam00000017 = uVar12;
  *puRam2c0674a8 = 0x2c0674b4;
  puVar6[1] = puVar6;
  puVar6[2] = uVar4;
  puVar6[3] = in_stack_000000dc;
  uVar12 = uRam2c0674c0;
  iVar11 = 0x2c0674c4;
  if ((uRam2c0674c0 >> 0xd & 1) == 0 || uRam2c0674c0 >> 0xe == 0) {
    in_stack_00000328 = iRam2c0674b8 << 0x12;
  }
  else {
    iVar11 = 0x2c067586;
    in_stack_000000d4 = &stack0x00000340;
    in_stack_000000c4 = 0xac300000;
  }
  uVar5 = (in_stack_00000328 - iVar11) - 1U | (uint)(in_stack_000000d4 + 1);
  *(uint *)((in_stack_000000c4 >> 0x14) + 0x44) = uVar5;
  coprocessor_load(1,in_cr5,uVar5 - 0x2f8);
  if ((in_stack_000000c4 >> 0x11 & 1) == 0 || in_stack_000000c4 >> 0x12 == 0) {
    coprocessor_store(0xc,in_cr0,0xfd);
    func_0x2b967150(in_stack_000000c4,0,in_stack_00000318);
    iVar11 = (int)(uVar12 << 0x13) >> 8;
    puVar7 = *(uint **)(iVar11 + 4);
    uVar5 = *(uint *)(iVar11 + 0x10);
    uVar9 = *(uint *)(iVar11 + 0x14);
    *puVar7 = (in_stack_000000c4 >> 0x14) + 0x40 >> (uVar12 + 0x93 & 0xff);
    puVar7[1] = uVar5;
    puVar7[2] = uVar9;
  }
  else if ((in_stack_000000c4 & 0x10) == 0 || (in_stack_000000c4 & 0xf) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x2c0670fc);
    (*pcVar1)();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

