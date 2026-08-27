/* FUN_2c436db6 @ 0x2c436db6 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c436db6(undefined4 param_1,code *param_2,uint *param_3,undefined4 param_4)

{
  byte bVar1;
  short sVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  code **ppcVar7;
  uint uVar8;
  code **extraout_r3;
  uint unaff_r4;
  byte bVar9;
  int unaff_r5;
  uint unaff_r6;
  code *unaff_r7;
  uint uVar10;
  int unaff_r9;
  undefined4 unaff_r11;
  int extraout_r12;
  int extraout_r12_00;
  code **ppcVar11;
  code **ppcVar12;
  char in_ZR;
  char cVar13;
  undefined4 in_cr9;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined8 uVar14;
  code *pcStack_18;
  uint *puStack_14;
  undefined4 uStack_10;
  
  ppcVar12 = &pcStack_18;
  pcStack_18 = param_2;
  puStack_14 = param_3;
  uStack_10 = param_4;
  while( true ) {
    bVar9 = (byte)unaff_r5;
    sVar2 = (*param_2)(param_1,param_2,param_3);
    iVar5 = _LAB_2c436f20;
    pcVar3 = ppcVar12[0xf6];
    ppcVar7 = extraout_r3;
    ppcVar11 = ppcVar12;
    if (in_ZR == '\0') {
      uVar10 = (uint)*(ushort *)(_LAB_2c436f20 + 0x30);
      if (-1 < (int)((unaff_r6 + 8) * 0x2000)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar1 = *(byte *)((int)sVar2 + 0xa6);
      pcVar3 = (code *)(uint)bVar1;
      ppcVar11 = ppcVar12 + 0x72;
      iVar6 = ((uint)*(byte *)((unaff_r6 >> 0x12) + 0x15) - (int)pcVar3) -
              (uint)((uint)(int)sVar2 < 0xffffff6e);
      pcVar3[_LAB_2c436f20] = SUB41(unaff_r6 + 8,0);
      if (iVar6 != 0) {
        uVar10 = (int)uVar10 >> 0xb;
        *(short *)(unaff_r6 + 0x1c) = (short)uVar10;
        bVar9 = bVar1 >> 5;
        *(short *)(pcVar3 + iVar6) = (short)iVar5;
        *(code **)(uVar10 + 0x60) = pcVar3;
      }
      *(byte *)(uVar10 + 0x1a) = bVar9;
      *(ushort *)(ppcVar12 + 0x8f) = (ushort)bVar1;
      unaff_r4 = unaff_r9 - 0xf16;
      uVar4 = *(undefined4 *)((int)ppcVar12 + unaff_r9 + -0xc9e);
      ppcVar12[0x73] = pcVar3;
      *(undefined4 *)(unaff_r9 + -0xed2) = uVar4;
      *(uint *)(pcVar3 + 0x3c) = unaff_r4;
      software_bkpt(0xe0);
      ppcVar7 = ppcVar12 + 0xf0;
      unaff_r7 = ppcVar12[0x102];
      iVar5 = *(int *)(_MasterStackPointer + 0x68);
      pcVar3 = _DAT_2c436fc4;
      unaff_r6 = _HardFault;
    }
    *(code ***)((int)ppcVar11 + 0x4c) = ppcVar7;
    pcVar3[2] = SUB41(ppcVar7,0);
    *(short *)(unaff_r6 + 0x14) = (short)iVar5;
    param_1 = *(undefined4 *)unaff_r7;
    param_3 = *(uint **)(unaff_r7 + 8);
    uVar8 = *(uint *)(unaff_r7 + 0xc);
    unaff_r5 = *(int *)(unaff_r7 + 0x10);
    unaff_r6 = *(uint *)(unaff_r7 + 0x14);
    unaff_r7 = unaff_r7 + 0x18;
    uVar10 = unaff_r4 >> 0xe;
    cVar13 = uVar10 == 0;
    iVar5 = extraout_r12_00;
    if ((unaff_r4 >> 0xd & 1) == 0 || (bool)cVar13) break;
    bVar9 = *(byte *)(unaff_r4 + 0x1f);
    *param_3 = uVar10;
    param_3[1] = uVar8;
    param_3[2] = (uint)bVar9;
    param_3 = param_3 + 3;
    unaff_r4 = 0;
    param_2 = (code *)(uVar10 + 0x16);
    in_ZR = param_2 == (code *)0x0;
    coprocessor_moveto(5,1,2,unaff_r11,in_cr12,in_cr14);
    ppcVar12 = ppcVar11;
  }
  while (cVar13 != '\0') {
    *(uint *)(unaff_r5 + 8) = uVar10;
    cVar13 = (int)unaff_r6 >> 9 == 0;
    unaff_r5 = *(int *)(iRam2c436d88 + 0x10);
    coprocessor_storelong(3,in_cr9,iVar5 + -4);
    uVar14 = func_0x2b4bf540(**(undefined4 **)(iRam2c436d88 + 4),
                             (*(undefined4 **)(iRam2c436d88 + 4))[1],
                             *(undefined4 *)(iRam2c436d88 + 8),iRam2c436d88 + 0x14);
    uVar10 = (uint)((ulonglong)uVar14 >> 0x20);
    unaff_r6 = *(uint *)((int)uVar14 + 4);
    iVar5 = extraout_r12;
  }
  *(char *)(unaff_r6 + 2) = (char)uVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

