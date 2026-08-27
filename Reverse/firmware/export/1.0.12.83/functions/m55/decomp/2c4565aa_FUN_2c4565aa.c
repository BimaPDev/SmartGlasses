/* FUN_2c4565aa @ 0x2c4565aa */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4565aa(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  code *pcVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  uint unaff_r4;
  uint unaff_r5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint unaff_r6;
  int *unaff_r7;
  int iVar9;
  char in_CY;
  undefined4 *puVar10;
  undefined4 in_cr7;
  undefined4 in_cr14;
  
  if (in_CY == '\0') {
    uVar3 = *(ushort *)(unaff_r4 + 0x3e);
    iVar4 = unaff_r6 + 0xf5;
    *(undefined1 *)(unaff_r4 + 0x4a) = 0x4a;
    *param_4 = 0x128;
    param_4[1] = 0x13c;
    param_4[2] = iVar4;
    param_4[3] = (uint)uVar3;
    puVar10 = param_4 + 4;
    *(short *)((int)param_4 + 0x16) = (short)puVar10;
    *(undefined2 *)(param_3 + -0x8d) = 0x13c;
    software_bkpt(0xfe);
    iVar6 = (int)puVar10 >> 3;
    *(short *)(iVar6 + 0xe) = (short)iVar6;
    coprocessor_moveto(0xe,0,5,0x13c,in_cr7,in_cr14);
    *puVar10 = 0x25000;
    param_4[5] = 0x13c;
    param_4[6] = iVar4;
    *(short *)(iVar6 + 6) = (short)iVar6;
    puVar8 = (uint *)(uint)*(ushort *)((int)unaff_r7 + param_3 + -199);
    if (SBORROW4(iVar4,0xfe)) {
      *(undefined2 *)(param_3 + -0xa7) = 0;
      uVar7 = _LAB_2c4569d0;
      *puVar8 = (uint)*(byte *)((int)puVar8 + 5);
      puVar8[1] = uVar7;
      *(byte *)((unaff_r4 >> 0x14) + 6) = *(byte *)((int)puVar8 + 5);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0 < (int)(unaff_r6 & unaff_r5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xe2,0x2c4565c8);
    (*pcVar1)();
  }
  *(short *)((int)unaff_r7 + 10) = (short)unaff_r5;
  iVar4 = *unaff_r7;
  piVar5 = (int *)unaff_r7[1];
  iVar6 = unaff_r7[3];
  iVar9 = unaff_r7[5];
  *(char *)(unaff_r7[4] + 0x17) = (char)piVar5;
  bVar2 = *(byte *)(iVar4 + 0xf);
  uVar7 = (uint)*(byte *)(iVar6 + 0x1b);
  *piVar5 = iVar4;
  piVar5[1] = param_2;
  piVar5[2] = (int)piVar5;
  piVar5[3] = 0x2c4568b8;
  piVar5[4] = uVar7;
  software_interrupt(0x59);
  if (iVar9 * 0x10000000 < 0 != SBORROW4(iVar9,3)) {
    *(int *)(iVar9 + -3) = iVar4 + 0xd3;
    *(undefined4 *)(iVar9 + 1) = 0x2c4568a8;
    *(uint *)(iVar9 + 5) = (uint)bVar2 * 2;
    *(uint *)(iVar9 + 9) = uVar7;
    *(int *)(iVar9 + 0xd) = iVar9 * 0x10000000;
    software_interrupt(0xf8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)((char)((int *)(iVar9 + -3))[iVar9 * 0x4000000] + 4) = uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

