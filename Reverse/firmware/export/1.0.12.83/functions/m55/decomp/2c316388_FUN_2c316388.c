/* FUN_2c316388 @ 0x2c316388 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c316388(int param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int unaff_r5;
  int unaff_r6;
  uint *unaff_r7;
  undefined4 unaff_pc;
  undefined4 in_cr0;
  undefined4 in_cr10;
  undefined1 in_q6 [16];
  undefined1 auStack_1c [16];
  
  bVar1 = *(byte *)(param_1 + param_2);
  VectorShiftRight(in_q6,8);
  uVar2 = (undefined1)unaff_r5;
  *(undefined1 *)(unaff_r6 * 2) = uVar2;
  *(char *)((int)unaff_r7 + param_4) = (char)unaff_r7;
  *(short *)((int)unaff_r7 + param_4) = (short)auStack_1c;
  *unaff_r7 = (uint)bVar1;
  uVar5 = (uint)*(ushort *)(bVar1 + 6);
  *(undefined1 **)(uVar5 + 0x40) = auStack_1c;
  coprocessor_loadlong(5,in_cr10,unaff_r5 + -0x170);
  *(undefined1 *)(param_4 + unaff_r5) = uVar2;
  *(byte *)(param_1 + unaff_r5) = bVar1;
  *(undefined1 *)(unaff_r5 * 2) = uVar2;
  *(int *)(unaff_r6 + param_4) = unaff_r5;
  iRam000000e2 = _DAT_2c315ee0;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_4 >> 0x12;
  *(uint *)(param_1 + 8) = uVar5;
  *(int *)(param_1 + 0xc) = unaff_r5;
  *(int *)(param_1 + 0x10) = iRam000000e2;
  coprocessor_loadlong(1,in_cr0,unaff_pc);
  *(int *)(iRam000000e2 + 0x2c316224) = param_1 << 4;
  iVar4 = iRam2c31622c;
  piVar3 = piRam2c316224;
  *piRam2c316224 = param_1 << 4;
  piVar3[1] = 0xae;
  piVar3[2] = iVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

