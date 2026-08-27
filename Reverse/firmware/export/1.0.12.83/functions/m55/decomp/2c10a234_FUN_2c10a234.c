/* FUN_2c10a234 @ 0x2c10a234 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c10a42a) */
/* WARNING: Removing unreachable block (ram,0x2c109e5e) */
/* WARNING: Removing unreachable block (ram,0x2c109e64) */
/* WARNING: Removing unreachable block (ram,0x2c109e92) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c10a234(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int *piVar10;
  undefined4 unaff_r5;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *unaff_r7;
  int iVar14;
  undefined4 unaff_r9;
  undefined4 unaff_lr;
  undefined8 unaff_d12;
  undefined8 unaff_d14;
  undefined8 in_d18;
  undefined8 in_d24;
  undefined8 in_d30;
  undefined4 uStack00000034;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack00000070;
  uint uStack0000007c;
  int iStack000000a0;
  undefined4 uStack000000fc;
  undefined4 uStack000001f0;
  int iStack_10;
  undefined4 uStack_c;
  
  VectorTableLookup(unaff_r5,unaff_r5,1);
  iStack_10 = *unaff_r7;
  iVar7 = unaff_r7[1];
  iVar11 = unaff_r7[3];
  iVar13 = unaff_r7[4];
  iVar14 = unaff_r7[5];
  *(short *)(unaff_r7[2] + 0x24) = (short)iVar11;
  *(short *)(iStack_10 + 0x10) = (short)iStack_10;
  piVar10 = (int *)(iVar7 * 4);
  iVar9 = 0x85;
  iVar4 = 0;
  if (iStack_10 != 0) {
    iVar4 = iVar14 << 0x14;
  }
  *piVar10 = iVar7;
  piVar10[1] = iVar13;
  uRam00000089 = 0;
  *(char *)(iVar4 + 0x18) = (char)iVar11;
  uVar5 = iVar14 * 0x100;
  piVar10[2] = iVar7;
  piVar10[3] = iVar13 + -0xe7;
  *(short *)(uVar5 + 4) = (short)uVar5;
  VectorReciprocalEstimate(in_d24,0);
  uVar12 = 0;
  do {
    pbVar8 = (byte *)(uVar5 >> 0x1d);
    uVar6 = uVar5;
    while( true ) {
      iVar4 = (int)*(short *)(uVar12 + iVar9);
      iVar11 = (int)uVar6 >> 0x18;
      *(int *)(iVar9 + 0x38) = iVar4;
      uVar2 = (ushort)(uVar5 >> 0x1d);
      *(ushort *)(iVar9 + 0x1e) = uVar2;
      iVar7 = *(int *)(iVar9 + 0x18);
      sVar3 = (short)(char)(uVar6 >> 0x18);
      *(short *)(iVar9 + 0x38) = sVar3;
      uVar12 = iVar9 << 0xf;
      uVar6 = iVar4 + 0xbe;
      if (uVar6 == 0 || iVar4 + 3 < -0xbb) {
        sVar1 = *(short *)(iVar11 + iVar4 + 3);
        *(int *)(iVar9 + 0x34) = iVar4;
        *(ushort *)(sVar1 + 0x18) = uVar2;
        *(short *)(iVar9 + 0x3e) = sVar3;
        uStack0000007c = iVar4 + 0xbe;
        *(uint *)(iVar9 * 4 + 0x5c) = uStack0000007c;
        VectorMultiplySubtractLong(unaff_d12,unaff_d14,2,1);
        uStack00000034 = 2;
        if ((uStack0000007c & 8) == 0 || (uStack0000007c & 7) == 0) {
          uStack000001f0 = _DAT_2c10a44c;
          *pbVar8 = (byte)(uVar5 >> 0x1d);
          iStack000000a0 = uStack0000007c * 0x400000;
          *(short *)(iVar9 + 0x34) = (short)uStack0000007c;
          uStack000000fc = 0x30;
          uRam00000069 = 0x30;
          *(undefined2 *)(PendSV_1 + 0x14) = 0;
          uRam00000075 = 0;
          uStack00000070 = 0xbb;
          VectorTableLookup(unaff_lr,unaff_r9,3);
          *(undefined4 *)(_DAT_00000051 + 0x50) = 0x30;
          uStack_c = param_2;
                    /* WARNING: Could not recover jumptable at 0x2c109eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,0,(uint)UNRECOVERED_JUMPTABLE >> 2,0x151);
          return;
        }
        *(char *)(iVar11 + 0x1a) = (char)&iStack_10;
        _Reserved5 = &iStack_10;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(iVar4 + 0xdc) = (short)uVar6;
      iVar9 = 0;
      if (pbVar8 == (byte *)0x0) break;
      uVar6 = uVar6 >> 0x18;
      pbVar8[iVar11] = 0;
    }
    *(short *)(iVar7 + 2) = (short)iVar7;
    uVar5 = iVar4 + 0xab;
    *(short *)(iVar7 + -0xd0) = (short)uVar5;
    uVar12 = iVar7 - 0xd8U >> 0x1a;
    _PendSV = (uint3)PendSV_1._1_1_ << 0x10;
    iVar9 = 0;
    in_d18 = VectorShiftLeftInsert(in_d18,in_d30,0x19);
  } while( true );
}

