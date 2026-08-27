/* FUN_2c110900 @ 0x2c110900 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c110930) */

void FUN_2c110900(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *extraout_r3;
  int iVar6;
  int *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  undefined8 uVar7;
  undefined4 uStack00000164;
  int iStack000001e4;
  
  iStack000001e4 = unaff_r7 + -4;
  iVar3 = *unaff_r5;
  iVar4 = unaff_r5[1];
  iVar5 = unaff_r5[2];
  iVar6 = unaff_r5[3];
  *(short *)(iVar6 + 0x24) = (short)iVar6;
  uStack00000164 = param_4;
  uVar7 = func_0x2c83f7bc(*(undefined4 *)(iVar6 + 0x58),iVar3 + -0x7d,iVar4,iVar5,param_1,param_2,
                          param_3,param_4);
  puVar2 = (undefined4 *)uVar7;
  *puVar2 = (int)((ulonglong)uVar7 >> 0x20);
  puVar2[1] = iVar6;
  puVar2[2] = unaff_r7;
  iVar3 = (int)(puVar2 + 3) * 0x100;
  *(int *)(iVar3 + 0x34) = (int)(puVar2 + 3) * 0x400;
  uVar1 = *(ushort *)(unaff_r6 + 0x24);
  *extraout_r3 = 0;
  extraout_r3[1] = iVar3;
  extraout_r3[2] = (uint)uVar1;
  extraout_r3[3] = unaff_r6;
  extraout_r3[4] = unaff_r6 << 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

