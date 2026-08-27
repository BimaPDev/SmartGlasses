/* FUN_140dbd24 @ 0x140dbd24 */

/* WARNING: Removing unreachable block (ram,0x140dbe58) */
/* WARNING: Removing unreachable block (ram,0x140dbe5e) */
/* WARNING: Removing unreachable block (ram,0x140dbe66) */
/* WARNING: Removing unreachable block (ram,0x140dbe68) */
/* WARNING: Removing unreachable block (ram,0x140dbe6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_140dbd24(code *UNRECOVERED_JUMPTABLE,uint *param_2,undefined4 param_3,code *param_4,
                   int *param_5)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined2 *puVar13;
  int iVar14;
  undefined1 *puVar15;
  uint uVar16;
  short *psVar17;
  int iVar18;
  int iVar19;
  code *local_24;
  
  iVar8 = DAT_140dbf68;
  iVar7 = iRam00000074;
  bVar2 = (byte)param_2[6];
  puVar10 = (undefined1 *)((int)param_2 + 0x43);
  local_24 = param_4;
  if (bVar2 < 0x79) {
    if (bVar2 < 99) {
      if (bVar2 == 0) {
        param_2[4] = 0;
        goto LAB_140dbe74;
      }
      if (bVar2 == 0x58) {
        *(undefined1 *)((int)param_2 + 0x45) = 0x58;
        uVar12 = *param_2;
        uVar16 = *(uint *)*param_5;
        *param_5 = (int)((uint *)*param_5 + 1);
        if ((-1 < (int)(uVar12 << 0x18)) && ((int)(uVar12 << 0x19) < 0)) {
          uVar16 = uVar16 & 0xffff;
        }
        if ((int)(uVar12 << 0x1f) < 0) {
          *param_2 = uVar12 | 0x20;
        }
        if (uVar16 == 0) {
          *param_2 = *param_2 & 0xffffffdf;
        }
        *(undefined1 *)((int)param_2 + 0x43) = 0;
        uVar12 = param_2[1];
        param_2[2] = uVar12;
        if (-1 < (int)uVar12) {
          *param_2 = *param_2 & 0xfffffffb;
        }
        puVar15 = puVar10;
        if ((uVar16 != 0) || (uVar12 != 0)) {
          do {
            puVar15 = puVar15 + -1;
            *puVar15 = *(undefined1 *)(iVar8 + uVar16 % 0x10);
            bVar1 = 0xf < uVar16;
            uVar16 = uVar16 / 0x10;
          } while (bVar1);
        }
        param_2[4] = (int)puVar10 - (int)puVar15;
        puVar10 = puVar15;
        goto LAB_140dbe74;
      }
    }
    else {
      switch(bVar2) {
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x71:
      case 0x72:
      case 0x74:
      case 0x76:
      case 0x77:
      case 99:
      case 100:
      case 0x69:
      case 0x6f:
      case 0x75:
      case 0x70:
      case 0x78:
      case 0x6e:
      case 0x73:
        uRam00000011 = 0;
        _IRQ = 0;
        uVar11 = *(undefined4 *)(iRam00000074 + 0x14);
        *(int *)(iRam00000074 + 0x54) = iRam00000074;
        uVar4 = (undefined1)uVar11;
        *(undefined1 *)(iVar7 + 0xd) = uVar4;
        *(undefined1 *)(iVar7 + 0x11) = 0;
        cVar6 = (char)iRam00000044;
        _Reserved2 = 0;
        sVar3 = *(short *)(iVar7 + 0x31);
        _DAT_00000054 = (short *)(int)sVar3;
        uVar5 = (undefined1)sVar3;
        *(undefined1 *)((int)_DAT_00000054 + 9) = uVar5;
        psVar17 = (short *)(int)*(short *)(iVar7 + 0x31);
        *(undefined4 *)(psVar17 + 0x2a) = uVar11;
        iRam00000044 = (int)*_DAT_00000054;
        uRam00000009 = (undefined1)*_DAT_00000054;
        _Reserved5 = psVar17;
        *(char *)((int)psVar17 + 1) = cVar6 + '0';
        *(undefined1 *)((int)_DAT_00000054 + 0x11) = uVar4;
        *(undefined1 *)((int)psVar17 + 0x19) = uVar4;
        _DAT_00000054[0x3a] = 0;
        iVar7 = iRam00000074;
        _DAT_00000054[0x3b] = 0;
        sVar3 = *psVar17;
        uVar4 = (undefined1)iRam00000074;
        _MasterStackPointer = CONCAT11(uVar4,MasterStackPointer);
        *(undefined1 *)((int)psVar17 + 9) = uVar4;
        _Reserved6 = iVar7;
        *(undefined1 *)((int)psVar17 + 9) = uVar5;
        iVar8 = (int)_MasterStackPointer;
        *(short **)(iVar8 + 0x54) = psVar17;
        *(undefined1 *)(iVar8 + 0x11) = 0;
        iVar14 = *(int *)(iVar8 + 0x14);
        *(int *)(psVar17 + 10) = (int)*psVar17;
        *(char *)(iVar14 + 0xc) = (char)(iVar14 << 1);
        *(int *)(iVar14 + 0x50) = (int)sVar3;
        *(char *)(iVar14 + 0x15) = (char)iVar14;
        iVar8 = (int)psVar17 * 2;
        uVar5 = (undefined1)*(undefined4 *)(iVar14 + 0x44);
        *(undefined1 *)(iVar14 + 0x11) = uVar5;
        *(int *)(iVar8 + 0x44) = iVar7;
        *(undefined1 *)((int)psVar17 + 0x19) = uVar5;
        *(undefined1 *)(iVar8 + 9) = uVar4;
        *(undefined4 *)(iVar14 + 0x74) = 0x20;
        uVar11 = *(undefined4 *)(iVar8 + 0x74);
        *(int *)(psVar17 + 0x2a) = (int)psVar17[0x10];
        iVar7 = _DAT_00000094;
        iVar18 = *(int *)(_DAT_00000094 + 0x14);
        iVar14 = *(int *)(iVar18 + 0x74);
        sVar3 = *(short *)(iVar18 + _DAT_00000094);
        *(int *)(iVar18 + 0x14) = (int)psVar17[0x10];
        *(int *)(iVar18 + 0x14) = (int)sVar3;
        *(char *)(iVar7 + 0xd) = (char)iVar7;
        uVar4 = (undefined1)sVar3;
        *(undefined1 *)(iVar14 + 0x11) = uVar4;
        *(undefined4 *)(iVar8 + 0x44) = uVar11;
        *(undefined1 *)(iVar18 + 0x19) = uVar4;
        *(char *)(iVar8 + 9) = (char)uVar11;
        *(int *)(iVar14 + 0x74) = iVar7;
        iVar19 = *(int *)(iVar8 + 0x74);
        *(int *)(iVar14 + 0x54) = iVar19;
        puVar13 = *(undefined2 **)(*(short *)(iVar18 + iVar7) + 0x74);
        *(char *)(iVar7 + 0x11) = (char)iVar18;
        iVar8 = *(int *)(iVar7 + 0x44);
        *(char *)(iVar8 + 9) = (char)iVar7;
        *(char *)((int)puVar13 + 0x11) = (char)iVar19;
        sVar3 = *(short *)(iVar19 + iVar7);
        *(char *)(iVar8 + 9) = (char)iVar18;
        *(int *)(iVar8 + 0x54) = iVar7;
        *(int *)(puVar13 + 0x12) = iVar19;
        *(int *)(iVar18 + 100) = iVar7;
        *(int *)(iVar8 + 0x54) = iVar18;
        *(char *)(int)sVar3 = (char)(iVar18 << 1);
        *puVar13 = (short)iVar19;
                    /* WARNING: Could not recover jumptable at 0x14108378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pcVar9 = (code *)(*UNRECOVERED_JUMPTABLE)();
        return pcVar9;
      }
    }
  }
  *(byte *)((int)param_2 + 0x42) = bVar2;
  param_2[4] = 1;
  *(undefined1 *)((int)param_2 + 0x43) = 0;
  puVar10 = (undefined1 *)((int)param_2 + 0x42);
LAB_140dbe74:
  iVar7 = FUN_140dbc44(UNRECOVERED_JUMPTABLE,param_2,&local_24,param_3,param_4,param_2,param_3);
  if ((iVar7 == -1) ||
     (iVar7 = (*param_4)(UNRECOVERED_JUMPTABLE,param_3,puVar10,param_2[4]), iVar7 == -1)) {
LAB_140dbe88:
    pcVar9 = (code *)0xffffffff;
  }
  else {
    if ((int)(*param_2 << 0x1e) < 0) {
      for (iVar7 = 0; iVar7 < (int)(param_2[3] - (int)local_24); iVar7 = iVar7 + 1) {
        iVar8 = (*param_4)(UNRECOVERED_JUMPTABLE,param_3,(int)param_2 + 0x19,1);
        if (iVar8 == -1) goto LAB_140dbe88;
      }
    }
    pcVar9 = (code *)param_2[3];
    if ((int)param_2[3] < (int)local_24) {
      pcVar9 = local_24;
    }
  }
  return pcVar9;
}

