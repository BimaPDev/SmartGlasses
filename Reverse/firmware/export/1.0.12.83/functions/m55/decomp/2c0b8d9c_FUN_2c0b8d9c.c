/* FUN_2c0b8d9c @ 0x2c0b8d9c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0b8d9c(int param_1,uint param_2,uint param_3,uint *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r4;
  undefined4 unaff_r5;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int unaff_r6;
  int iVar7;
  int iVar8;
  int unaff_r7;
  undefined4 in_cr4;
  undefined8 in_d5;
  undefined8 in_d19;
  uint in_stack_00000264;
  
  *(int *)(unaff_r6 + -0xd1) = param_1;
  *(uint *)(unaff_r6 + -0xcd) = param_2;
  *(uint *)(unaff_r6 + -0xc9) = param_3;
  *(undefined4 *)(unaff_r6 + -0xc5) = unaff_r5;
  *(int **)(unaff_r6 + -0xc1) = (int *)(unaff_r6 + -0xd1);
  *(int *)(unaff_r6 + -0xbd) = unaff_r7;
  if (!SBORROW4(unaff_r7,0x18)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)((int)param_4 + 0xe) = (short)param_1;
  iVar8 = _DAT_2c0b91a8;
  param_2 = param_2 & param_1 + 0x40U;
  *(short *)(unaff_r7 + -0x37a + (param_3 >> 0x1d)) = (short)_DAT_2c0b91a8;
  uVar4 = _DAT_2c0b8b8c;
  uVar2 = unaff_r4 ^ 0xa4000000;
  iVar8 = iVar8 * 0x8000;
  uVar5 = (uint)*(byte *)((int)param_4 + 0xe);
  puVar6 = (uint *)(uVar5 - 0x153);
  if (uVar2 == 0) {
    uVar2 = (uint)puVar6 >> 0x14;
    uRam00000048 = unaff_r4;
    *puVar6 = uVar2;
    *(uint *)(uVar5 - 0x14f) = param_2;
    *(uint *)(uVar5 - 0x14b) = uVar4;
    *(uint *)(uVar5 - 0x147) = in_stack_00000264;
    *(uint **)(uVar5 - 0x143) = puVar6;
    *(int *)(uVar5 - 0x13f) = iVar8 + -0x227;
    *param_4 = uVar2;
    param_4[1] = in_stack_00000264;
    param_4[2] = (uint)puVar6;
    *(byte *)(uVar4 + 0x11) = (byte)unaff_r4 & (byte)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = (uint)puVar6 & in_stack_00000264;
  if ((int)uVar4 < 0) {
    uVar5 = (uint)*(ushort *)(in_stack_00000264 + iVar8);
    iVar8 = 0x2c0b8750;
  }
  else {
    uVar4 = uVar4 - 0xe8;
    uVar5 = _DAT_2c0b8b8c;
  }
  puVar6 = (uint *)(uVar4 - 0xe7);
  *(short *)(in_stack_00000264 + 0xc) = (short)puVar6;
  *puVar6 = param_2;
  *(uint *)(uVar4 - 0xe3) = uVar5;
  *(uint **)(uVar4 - 0xdf) = param_4;
  *(uint *)(uVar4 - 0xdb) = unaff_r4;
  *(uint *)(uVar4 - 0xd7) = in_stack_00000264;
  *(uint **)(uVar4 - 0xd3) = puVar6;
  *(byte *)(uVar5 + 1) = (byte)unaff_r4;
  iVar7 = iVar8 + -0x21b;
  uVar3 = unaff_r4;
  if (uVar2 == 0) {
    uVar3 = *(uint *)((int)puVar6 * 2);
    param_4 = (uint *)((uint)param_4 & uVar3);
    if (-1 < (int)param_4) goto LAB_2c0b8150;
    FloatVectorCompareEqual(in_d19,in_d5,2);
    uVar5 = param_2 << 0x16;
    puVar6 = (uint *)(uVar4 - 0x1f7);
    *(short *)(uVar3 + 0x26) = (short)unaff_r4;
    *(undefined1 *)(iVar8 + -0x389) = 0;
    iVar7 = iVar8 + -0x43e;
    _MasterStackPointer = 0;
    _Reset = param_4;
    _NMI = uVar3;
    _HardFault = puVar6;
  }
  *(char *)(param_2 + 0x17) = (char)in_stack_00000264;
  uVar3 = uVar3 & (uint)param_4;
  if (uVar3 == 0 || (int)uVar3 < 0 != SBORROW4(iVar7 + -0x18d,0xf8)) {
    iVar8 = (int)*(short *)(uVar3 + (uVar2 & in_stack_00000264));
    uVar1 = *(ushort *)(iVar8 + 0x16);
    *(int *)(iVar8 + (uint)uVar1) = iVar7 + -0x3d9;
    *(ushort *)(iVar8 + 0x36) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_storelong(0,in_cr4,*(undefined4 *)(in_stack_00000264 + 0xc));
  *(uint *)((uVar5 + 0x23 & (uint)puVar6) + 8) =
       *(uint *)(in_stack_00000264 + 4) & (uint)param_4 & param_2;
LAB_2c0b8150:
  software_bkpt(0x66);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

