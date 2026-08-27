/* thunk_FUN_140debc0 @ 0x140df564 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint thunk_FUN_140debc0(int param_1,int param_2,int *param_3)

{
  short sVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  int iVar13;
  code *UNRECOVERED_JUMPTABLE;
  code *apcStack_4a8 [289];
  
  uVar8 = 0;
  while( true ) {
    iVar6 = *param_3;
    if (iVar6 == 0) {
      if (param_2 != 0) {
        *(undefined4 *)(param_1 + uVar8 * 4) = 0;
      }
      return uVar8;
    }
    if (iVar6 == 0x25) break;
    if (param_2 - 1U <= uVar8) {
      return 0;
    }
    *(int *)(param_1 + uVar8 * 4) = iVar6;
    param_3 = param_3 + 1;
    uVar8 = uVar8 + 1;
  }
  if ((param_3[1] == 0x30) || (param_3[1] == 0x2b)) {
    UNRECOVERED_JUMPTABLE = (code *)(param_3 + 2);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(param_3 + 1);
  }
  if (*(int *)UNRECOVERED_JUMPTABLE - 0x31U < 9) {
    FUN_140df66c(UNRECOVERED_JUMPTABLE,apcStack_4a8,10);
    UNRECOVERED_JUMPTABLE = apcStack_4a8[0];
  }
  iVar6 = iRam00000074;
  if ((*(int *)UNRECOVERED_JUMPTABLE == 0x45) || (*(int *)UNRECOVERED_JUMPTABLE == 0x4f)) {
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + 4;
  }
  switch(*(undefined4 *)UNRECOVERED_JUMPTABLE) {
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x45:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4e:
  case 0x4f:
  case 0x51:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x66:
  case 0x69:
  case 0x6f:
  case 0x71:
  case 0x76:
  case 0x61:
  case 0x41:
  case 0x62:
  case 0x68:
  case 0x42:
  case 99:
  case 0x72:
  case 0x78:
  case 0x58:
  case 0x43:
  case 100:
  case 0x65:
  case 0x44:
  case 0x46:
  case 0x67:
  case 0x47:
  case 0x48:
  case 0x6b:
  case 0x49:
  case 0x6c:
  case 0x6a:
  case 0x6d:
  case 0x4d:
  case 0x6e:
  case 0x50:
  case 0x70:
  case 0x52:
  case 0x73:
  case 0x53:
  case 0x74:
  case 0x54:
  case 0x75:
  case 0x55:
  case 0x56:
  case 0x77:
  case 0x57:
  case 0x79:
  case 0x59:
  case 0x7a:
  case 0x5a:
  case 0x25:
    uRam00000011 = 0;
    _IRQ = 0;
    uVar5 = *(undefined4 *)(iRam00000074 + 0x14);
    *(int *)(iRam00000074 + 0x54) = iRam00000074;
    uVar2 = (undefined1)uVar5;
    *(undefined1 *)(iVar6 + 0xd) = uVar2;
    *(undefined1 *)(iVar6 + 0x11) = 0;
    cVar4 = (char)iRam00000044;
    _Reserved2 = 0;
    sVar1 = *(short *)(iVar6 + 0x31);
    _DAT_00000054 = (short *)(int)sVar1;
    uVar3 = (undefined1)sVar1;
    *(undefined1 *)((int)_DAT_00000054 + 9) = uVar3;
    psVar11 = (short *)(int)*(short *)(iVar6 + 0x31);
    *(undefined4 *)(psVar11 + 0x2a) = uVar5;
    iRam00000044 = (int)*_DAT_00000054;
    uRam00000009 = (undefined1)*_DAT_00000054;
    _Reserved5 = psVar11;
    *(char *)((int)psVar11 + 1) = cVar4 + '0';
    *(undefined1 *)((int)_DAT_00000054 + 0x11) = uVar2;
    *(undefined1 *)((int)psVar11 + 0x19) = uVar2;
    _DAT_00000054[0x3a] = 0;
    iVar6 = iRam00000074;
    _DAT_00000054[0x3b] = 0;
    sVar1 = *psVar11;
    uVar2 = (undefined1)iRam00000074;
    _MasterStackPointer = CONCAT11(uVar2,MasterStackPointer);
    *(undefined1 *)((int)psVar11 + 9) = uVar2;
    _Reserved6 = iVar6;
    *(undefined1 *)((int)psVar11 + 9) = uVar3;
    iVar9 = (int)_MasterStackPointer;
    *(short **)(iVar9 + 0x54) = psVar11;
    *(undefined1 *)(iVar9 + 0x11) = 0;
    iVar10 = *(int *)(iVar9 + 0x14);
    *(int *)(psVar11 + 10) = (int)*psVar11;
    *(char *)(iVar10 + 0xc) = (char)(iVar10 << 1);
    *(int *)(iVar10 + 0x50) = (int)sVar1;
    *(char *)(iVar10 + 0x15) = (char)iVar10;
    iVar9 = (int)psVar11 * 2;
    uVar3 = (undefined1)*(undefined4 *)(iVar10 + 0x44);
    *(undefined1 *)(iVar10 + 0x11) = uVar3;
    *(int *)(iVar9 + 0x44) = iVar6;
    *(undefined1 *)((int)psVar11 + 0x19) = uVar3;
    *(undefined1 *)(iVar9 + 9) = uVar2;
    *(undefined4 *)(iVar10 + 0x74) = 0x20;
    uVar5 = *(undefined4 *)(iVar9 + 0x74);
    *(int *)(psVar11 + 0x2a) = (int)psVar11[0x10];
    iVar6 = _DAT_00000094;
    iVar12 = *(int *)(_DAT_00000094 + 0x14);
    iVar10 = *(int *)(iVar12 + 0x74);
    sVar1 = *(short *)(iVar12 + _DAT_00000094);
    *(int *)(iVar12 + 0x14) = (int)psVar11[0x10];
    *(int *)(iVar12 + 0x14) = (int)sVar1;
    *(char *)(iVar6 + 0xd) = (char)iVar6;
    uVar2 = (undefined1)sVar1;
    *(undefined1 *)(iVar10 + 0x11) = uVar2;
    *(undefined4 *)(iVar9 + 0x44) = uVar5;
    *(undefined1 *)(iVar12 + 0x19) = uVar2;
    *(char *)(iVar9 + 9) = (char)uVar5;
    *(int *)(iVar10 + 0x74) = iVar6;
    iVar13 = *(int *)(iVar9 + 0x74);
    *(int *)(iVar10 + 0x54) = iVar13;
    puVar7 = *(undefined2 **)(*(short *)(iVar12 + iVar6) + 0x74);
    *(char *)(iVar6 + 0x11) = (char)iVar12;
    iVar9 = *(int *)(iVar6 + 0x44);
    *(char *)(iVar9 + 9) = (char)iVar6;
    *(char *)((int)puVar7 + 0x11) = (char)iVar13;
    sVar1 = *(short *)(iVar13 + iVar6);
    *(char *)(iVar9 + 9) = (char)iVar12;
    *(int *)(iVar9 + 0x54) = iVar6;
    *(int *)(puVar7 + 0x12) = iVar13;
    *(int *)(iVar12 + 100) = iVar6;
    *(int *)(iVar9 + 0x54) = iVar12;
    *(char *)(int)sVar1 = (char)(iVar12 << 1);
    *puVar7 = (short)iVar13;
                    /* WARNING: Could not recover jumptable at 0x14108378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*UNRECOVERED_JUMPTABLE)();
    return uVar8;
  default:
    return 0;
  }
}

