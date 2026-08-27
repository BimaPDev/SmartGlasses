/* FUN_2c4578a0 @ 0x2c4578a0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4578a0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_r2;
  undefined4 unaff_r4;
  int iVar5;
  int unaff_r6;
  uint uVar6;
  undefined4 in_cr12;
  undefined8 in_d2;
  undefined8 in_d26;
  
  uVar2 = *(ushort *)(param_2 + 0x38);
  uVar6 = (uint)*(byte *)(param_2 + -0xe8);
  coprocessor_storelong(10,in_cr12,(int *)(uVar6 - 0x39c));
  *(int *)(uVar6 - 0x39c) = param_3;
  *(uint *)(uVar6 - 0x398) = (uint)uVar2;
  *(undefined4 *)(uVar6 - 0x394) = unaff_r4;
  *(int *)(uVar6 - 0x390) = unaff_r6;
  iVar3 = param_3 + -0xa3;
  while( true ) {
    *(ushort *)(unaff_r6 + 0x38) = uVar2;
    *(int *)(iVar3 + 0x14) = unaff_r6;
    uVar1 = VectorGetElement(in_d2,3,2,0);
    VectorMultiply(in_d26,uVar1,2);
    iVar3 = *(int *)(param_2 + -0xbe);
    if (param_3 < 0xa3) break;
    *(int *)(uVar6 - 0x38c) = param_1;
    *(int *)(uVar6 - 0x388) = iVar3;
    *(undefined4 *)(uVar6 - 900) = unaff_r4;
    *(int *)(uVar6 - 0x380) = unaff_r6;
    *(int **)(uVar6 - 0x37c) = (int *)(uVar6 - 0x38c);
  }
  puVar4 = *(undefined4 **)(iVar3 + 0xde);
  iVar3 = *(int *)(iVar3 + 0xe2);
  *(short *)(param_2 + -0xde) = (short)param_1;
  *(undefined4 *)(param_1 * 2) = unaff_r4;
  iVar5 = puVar4[3];
  iVar3 = func_0x2bfd418c(*puVar4,puVar4[1],puVar4[2],iVar3 + 4,param_2,param_4);
  *(short *)(iVar3 + 0x12) = (short)unaff_r4;
  *(char *)(extraout_r2 + 0x17) = (char)iVar5;
  uRam2c458e55 = (char)*(undefined4 *)(iVar5 + 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

