/* FUN_2c10a332 @ 0x2c10a332 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c10a42a) */
/* WARNING: Removing unreachable block (ram,0x2c109e5e) */
/* WARNING: Removing unreachable block (ram,0x2c109e64) */
/* WARNING: Removing unreachable block (ram,0x2c109e92) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c10a332(void)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint unaff_r4;
  uint uVar9;
  int iVar10;
  uint unaff_r6;
  undefined2 unaff_r7;
  int iVar11;
  undefined4 unaff_r9;
  undefined4 unaff_lr;
  undefined8 unaff_d12;
  undefined8 unaff_d14;
  undefined8 in_d18;
  undefined8 in_d30;
  undefined4 uStack0000003c;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack00000078;
  uint uStack00000084;
  int iStack000000a8;
  undefined4 uStack00000104;
  
  *(short *)(unaff_r6 + 2) = (short)unaff_r6;
  uVar4 = _DAT_2c10a388;
  do {
    *(short *)(unaff_r6 + 8) = (short)uVar4;
    uVar9 = unaff_r6 >> 0x1a;
    *(undefined2 *)(unaff_r4 + 0x38) = unaff_r7;
    uVar7 = unaff_r4 << 0xf;
    in_d18 = VectorShiftLeftInsert(in_d18,in_d30,0x19);
    uVar6 = uVar4 >> 0x1d;
    uVar5 = uVar4;
    while( true ) {
      iVar8 = (int)*(short *)(uVar9 + uVar7);
      iVar11 = (int)uVar5 >> 0x18;
      *(int *)(uVar7 + 0x38) = iVar8;
      uVar2 = (ushort)(uVar4 >> 0x1d);
      *(ushort *)(uVar7 + 0x1e) = uVar2;
      iVar10 = *(int *)(uVar7 + 0x18);
      unaff_r4 = uVar7 >> 0x19;
      sVar3 = (short)(char)(uVar5 >> 0x18);
      *(short *)(uVar7 + 0x38) = sVar3;
      uVar9 = uVar7 << 0xf;
      uVar5 = iVar8 + 0xbe;
      if (uVar5 == 0 || iVar8 + 3 < -0xbb) {
        sVar1 = *(short *)(iVar11 + iVar8 + 3);
        *(int *)(uVar7 + 0x34) = iVar8;
        *(ushort *)(sVar1 + 0x18) = uVar2;
        *(short *)(uVar7 + 0x3e) = sVar3;
        uStack00000084 = iVar8 + 0xbe;
        *(uint *)(uVar7 * 4 + 0x5c) = uStack00000084;
        VectorMultiplySubtractLong(unaff_d12,unaff_d14,2,1);
        uStack0000003c = 2;
        if ((uStack00000084 & 8) == 0 || (uStack00000084 & 7) == 0) {
          *(byte *)((uVar7 >> 0x19) * 0x1000 + uVar6) = (byte)(uVar4 >> 0x1d);
          iStack000000a8 = uStack00000084 * 0x400000;
          *(short *)(uVar7 + 0x34) = (short)uStack00000084;
          iVar8 = (uVar7 >> 0x19) * 0x4000;
          uStack00000104 = 0x30;
          uRam00000069 = 0x30;
          *(short *)(*(short *)(iVar8 + 0x39) + 0x14) = (short)iVar8;
          uRam00000075 = 0;
          uStack00000078 = 0xbb;
          VectorTableLookup(unaff_lr,unaff_r9,3);
          *(undefined4 *)(_DAT_00000051 + 0x50) = 0x30;
                    /* WARNING: Could not recover jumptable at 0x2c109eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)
                    (UNRECOVERED_JUMPTABLE,iVar8,(uint)UNRECOVERED_JUMPTABLE >> 2,0x151);
          return;
        }
        *(char *)(iVar11 + 0x1a) = (char)&stack0xfffffff8;
        _Reserved5 = &stack0xfffffff8;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(iVar8 + 0xdc) = (short)uVar5;
      uVar7 = unaff_r4 << 8;
      if (uVar6 == 0) break;
      uVar5 = uVar5 >> 0x18;
      *(undefined1 *)(iVar11 + uVar6) = 0;
    }
    *(short *)(iVar10 + 2) = (short)iVar10;
    uVar4 = iVar8 + 0xab;
    unaff_r7 = 0;
    unaff_r6 = iVar10 - 0xd8;
  } while( true );
}

