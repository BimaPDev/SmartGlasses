/* FUN_2c1133f4 @ 0x2c1133f4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c1135c6) */

void FUN_2c1133f4(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_r5;
  undefined4 unaff_r6;
  int unaff_r7;
  int iVar8;
  uint uVar9;
  undefined4 in_r12;
  undefined4 in_cr8;
  undefined4 in_cr15;
  undefined8 in_d0;
  undefined8 unaff_d14;
  undefined2 in_stack_00000038;
  int *in_stack_00000374;
  
  *(int *)(param_4 + 0xc) = param_2 >> 0x1c;
  *(short *)(unaff_r5 + 0x12) = (short)(param_2 >> 0x1c);
  piVar4 = (int *)*param_1;
  iVar6 = param_1[2];
  iVar8 = *(int *)(unaff_r7 + 0x6c);
  piVar4[0x1a] = (int)piVar4;
  *(undefined4 *)(iVar6 + 4) = unaff_r6;
  *(undefined2 *)(unaff_r5 + 0x12) = in_stack_00000038;
  iVar6 = *piVar4;
  iVar5 = piVar4[1];
  iVar7 = piVar4[2];
  uVar2 = *(ushort *)(iVar8 + 0x36);
  uVar9 = (uint)uVar2;
  *(char *)(iVar7 + 0x1b) = (char)iVar6;
  coprocessor_load(8,in_cr8,uVar9);
  bVar1 = *(byte *)(iVar7 * 2 + 0x18);
  *(undefined4 *)(iVar5 + 0x6c) = 0x2c1136e4;
  *(ushort *)((iVar6 - iVar7) + 0x34) = (ushort)bVar1;
  vrev(in_d0,4);
  uVar3 = *(ushort *)(bVar1 + 0x30);
  *(char *)(iVar7 * 2 + 0x1b) = (char)uVar3;
  coprocessor_load(8,in_cr8,uVar9);
  bVar1 = *(byte *)(iVar7 * 4 + 0x18);
  uRam2c11376c = 0x2c11370c;
  *(ushort *)((uint)uVar3 + iVar7 * -2 + 0x34) = (ushort)bVar1;
  vrev(in_d0,4);
  uVar3 = *(ushort *)(bVar1 + 0x30);
  *(char *)(iVar7 * 4 + 0x1b) = (char)uVar3;
  coprocessor_load(8,in_cr8,uVar9);
  bVar1 = *(byte *)(iVar7 * 8 + 0x18);
  *(undefined4 *)(iVar5 + 0x6c) = 0x2c113734;
  *(ushort *)((uint)uVar3 + iVar7 * -4 + 0x34) = (ushort)bVar1;
  vrev(in_d0,4);
  uVar3 = *(ushort *)(bVar1 + 0x30);
  iVar6 = (uint)uVar3 + iVar7 * -8;
  *(char *)(iVar7 * 8 + 0x1b) = (char)uVar3;
  coprocessor_load(8,in_cr8,uVar9);
  bVar1 = *(byte *)(iVar7 * 0x10 + 0x18);
  *(undefined4 *)(uVar9 + 0x68) = 0x2c11375c;
  *(ushort *)(iVar6 + 0x34) = (ushort)bVar1;
  VectorShiftRight(unaff_d14,8);
  bVar1 = *(byte *)(iVar7 * 0x20 + 0x18);
  *(undefined4 *)(uVar9 + 0x68) = 0x2c1137ac;
  *(ushort *)(iVar6 + 0x34) = (ushort)bVar1;
  VectorShiftRight(unaff_d14,8);
  iVar5 = *(int *)(iVar6 + 8);
  iVar7 = *(int *)(iVar6 + 0x10);
  iVar8 = *(int *)(iVar6 + 0x14);
  *(char *)(*(int *)(iVar6 + 0xc) + 5) = (char)iVar8;
  *(char *)(iVar8 + 0xeff) = (char)uVar2;
  do {
    software_bkpt(0xfc);
  } while (iVar7 + iVar8 < 0 != SCARRY4(iVar7,iVar8));
  software_bkpt(0xfb);
  *in_stack_00000374 = iVar7 + -3;
  in_stack_00000374[1] = 0x582;
  in_stack_00000374[2] = iVar5;
  in_stack_00000374[3] = iVar5 + 2;
  coprocessor_load(0xf,in_cr15,in_r12);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

