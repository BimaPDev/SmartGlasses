/* FUN_2c101aba @ 0x2c101aba */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c101e12) */
/* WARNING: Removing unreachable block (ram,0x2c101f06) */
/* WARNING: Removing unreachable block (ram,0x2c101c42) */
/* WARNING: Removing unreachable block (ram,0x2c101c70) */
/* WARNING: Removing unreachable block (ram,0x2c101d16) */
/* WARNING: Removing unreachable block (ram,0x2c101d42) */
/* WARNING: Removing unreachable block (ram,0x2c101da0) */
/* WARNING: Removing unreachable block (ram,0x2c101db0) */
/* WARNING: Removing unreachable block (ram,0x2c101dba) */
/* WARNING: Removing unreachable block (ram,0x2c101dbc) */
/* WARNING: Removing unreachable block (ram,0x2c101dd8) */
/* WARNING: Removing unreachable block (ram,0x2c101de6) */
/* WARNING: Removing unreachable block (ram,0x2c1016e4) */
/* WARNING: Removing unreachable block (ram,0x2c101ef4) */
/* WARNING: Removing unreachable block (ram,0x2c101e16) */
/* WARNING: Removing unreachable block (ram,0x2c101f1a) */
/* WARNING: Removing unreachable block (ram,0x2c101e2c) */
/* WARNING: Removing unreachable block (ram,0x2c101e6a) */
/* WARNING: Removing unreachable block (ram,0x2c101b00) */

void FUN_2c101aba(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 unaff_r5;
  uint unaff_r6;
  int in_r12;
  undefined4 in_cr11;
  
  *(undefined4 *)(param_3 + 0x30) = param_4;
  iVar3 = *param_1;
  iVar4 = param_1[1];
  iVar6 = param_1[2];
  param_1 = param_1 + 3;
  *(undefined1 *)(iVar6 + (int)param_1) = unaff_r5;
  *(short *)(iVar4 * 2) = (short)param_1;
  if (((int)((int)param_1 + (uint)(0x22 < unaff_r6) + param_2) >> 0x17 & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar7 = (iVar6 << 0x1a) >> 0x18;
  piVar5 = (int *)(iVar4 * 4);
  bVar1 = *(byte *)(iVar7 + 0x1b);
  uVar2 = (uint)bVar1;
  *(undefined4 *)(uVar2 + 0x20) = *(undefined4 *)(*(short *)(iVar6 + iVar3) + 0x6c);
  *(ushort *)((int)piVar5 + 0x16) = (ushort)bVar1;
  *(int *)(iVar7 + 0x20) = iVar7;
  coprocessor_load(9,in_cr11,in_r12 + -0x200);
  piVar8 = (int *)((int)uVar2 >> 1);
  *piVar5 = uVar2 << 9;
  piVar5[1] = (int)piVar8;
  piVar5[2] = 0x2c101e6c;
  *(undefined1 *)(uVar2 + 8) = 0;
  *piVar8 = uVar2 << 9;
  piVar8[1] = 0x2c101ddc;
  *(char *)(uVar2 + 0x2c101ddc) = (char)piVar5 + '\f';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

