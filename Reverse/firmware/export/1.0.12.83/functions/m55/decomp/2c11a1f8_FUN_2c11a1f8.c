/* FUN_2c11a1f8 @ 0x2c11a1f8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c11a1f8(void)

{
  int iVar1;
  int iVar2;
  int *in_r3;
  undefined4 uVar3;
  int unaff_r4;
  int unaff_r5;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int unaff_r9;
  undefined4 in_cr5;
  
  iVar1 = *in_r3;
  iVar4 = in_r3[2];
  iVar6 = in_r3[3];
  iVar2 = *(int *)(unaff_r4 + 0x34);
  *(short *)(unaff_r5 + 0x1d) = (short)iVar1;
  *(short *)(iVar2 + 8) = (short)iVar4;
  puVar5 = (undefined4 *)(uint)*(ushort *)(iVar4 + 0x34);
  *(undefined4 **)(iVar1 + 0x18) = puVar5;
  coprocessor_load(1,in_cr5,unaff_r9 + -0xf8);
  uVar3 = ((undefined4 *)(iVar1 >> 0xc))[1];
  *puVar5 = *(undefined4 *)(iVar1 >> 0xc);
  puVar5[1] = iVar1;
  puVar5[2] = iVar2 + -0xd;
  puVar5[3] = uVar3;
  puVar5[4] = iVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

