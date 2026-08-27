/* FUN_2c441a92 @ 0x2c441a92 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c441a92(undefined4 param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int unaff_r4;
  undefined4 unaff_r5;
  uint *puVar12;
  uint unaff_r6;
  int *piVar13;
  undefined4 unaff_r7;
  undefined4 unaff_r10;
  int *piVar14;
  char in_NG;
  char in_OV;
  undefined4 in_cr3;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 *in_stack_000001e8;
  int in_stack_00000304;
  
  if (in_NG != in_OV) {
    coprocessor_movefromRt(7,6,1,in_cr3,in_cr10);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(param_2 + 0x17) = (char)unaff_r4;
  software_interrupt(0x3c);
  *(short *)(unaff_r4 + 0x994) = (short)param_2;
  bVar2 = *(byte *)(in_stack_00000304 + 0x1a);
  uVar8 = (uint)bVar2;
  *in_stack_000001e8 = unaff_r5;
  in_stack_000001e8[1] = unaff_r6;
  in_stack_000001e8[2] = unaff_r7;
  puVar9 = in_stack_000001e8 + 3;
  puVar12 = (uint *)(int)(char)bVar2;
  while( true ) {
    uVar5 = (uint)puVar9 >> 0x11;
    if (uVar5 != 0 && in_OV == '\0') {
      coprocessor_movefromRt(0xd,5,7,in_cr6,in_cr3);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *puVar12 = uVar8;
    puVar12[1] = (uint)puVar12;
    puVar12[2] = unaff_r6;
    iVar7 = 0;
    piVar11 = *(int **)((int)puVar12 + uVar5);
    *(uint *)(unaff_r6 + 0x28) = uVar8;
    puVar12 = (uint *)(uint)*(ushort *)(uVar5 + 0x1e);
    in_OV = SBORROW4((int)piVar11,0x16);
    if (uVar5 != 0) break;
    coprocessor_storelong(8,in_cr7,unaff_r10);
  }
  *puVar12 = uVar8;
  puVar12[1] = (uint)puVar12;
  puVar12[2] = unaff_r6;
  piVar13 = (int *)(int)*(short *)(uint)*(byte *)((int)in_stack_000001e8 + 0x22);
  software_bkpt(0x9d);
  *(char *)((int)(uint)*(byte *)((int)in_stack_000001e8 + 0x22) + 0xd) = (char)unaff_r6;
  piVar14 = (int *)&stack0x00000130;
  while( true ) {
    piVar10 = piVar11;
    iVar6 = piVar13[1];
    *(short *)(*piVar13 + 0x18) = (short)piVar13 + 0x10;
    piVar11 = (int *)(iVar7 * 0x400000);
    coprocessor_store(1,in_cr8,piVar14 + 0x6e);
    puVar4 = puVar9 + -0x98;
    iVar3 = piVar11[(int)puVar4 * 0x80];
    puVar9 = *(undefined4 **)(iVar6 * -0x80000000 + 0x30);
    iVar6 = (int)(char)iVar3 + 0x1d;
    if (-1 < iVar6) {
      *(char *)((int)puVar4 * 0x200 + 0x16) = (char)iVar7 + '\x05';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    piVar14[0x32] = (int)(piVar14 + 0xcc);
    iVar7 = piVar10[0x94];
    if (0xffffffe2 < (uint)(int)(char)iVar3) break;
    piVar10[0x14] = iVar7;
    software_hlt(0x26);
    piVar13 = (int *)0x2c441474;
    if (iVar7 < 0xa3) {
      *piVar10 = iVar7;
      piVar10[1] = 0x2c441474;
      piVar11[3] = (int)(piVar10 + 2);
      *(short *)(iVar7 + 6) = (short)puVar9;
      piVar10[2] = (int)piVar11;
      piVar10[0xcc] = 0x2c441474;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *piVar11 = (int)puVar4;
    piVar11[1] = (int)puVar9;
    piVar11[2] = iVar6;
    iVar7 = piVar10[2];
    piVar11 = piVar10 + 4;
    piVar14 = piVar10;
  }
  *piVar10 = iVar7;
  piVar10[1] = (int)puVar4 * 0x200;
  piVar10[2] = iVar6;
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0x4b,0x2c441354);
  (*pcVar1)();
}

