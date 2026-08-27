/* FUN_140ee364 @ 0x140ee364 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ee364(void)

{
  short sVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  int iVar12;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar5 = iRam00000074;
  uRam00000011 = 0;
  _IRQ = 0;
  uVar6 = *(undefined4 *)(iRam00000074 + 0x14);
  *(int *)(iRam00000074 + 0x54) = iRam00000074;
  uVar2 = (undefined1)uVar6;
  *(undefined1 *)(iVar5 + 0xd) = uVar2;
  *(undefined1 *)(iVar5 + 0x11) = 0;
  cVar3 = (char)iRam00000044 + '0';
  _Reserved2 = 0;
  sVar1 = *(short *)(iVar5 + 0x31);
  _DAT_00000054 = (short *)(int)sVar1;
  uVar4 = (undefined1)sVar1;
  *(undefined1 *)((int)_DAT_00000054 + 9) = uVar4;
  psVar10 = (short *)(int)*(short *)(iVar5 + 0x31);
  *(undefined4 *)(psVar10 + 0x2a) = uVar6;
  iRam00000044 = (int)*_DAT_00000054;
  uRam00000009 = (undefined1)*_DAT_00000054;
  _Reserved5 = psVar10;
  *(char *)((int)psVar10 + 1) = cVar3;
  *(undefined1 *)((int)_DAT_00000054 + 0x11) = uVar2;
  *(undefined1 *)((int)psVar10 + 0x19) = uVar2;
  _DAT_00000054[0x3a] = 0;
  iVar5 = iRam00000074;
  _DAT_00000054[0x3b] = 0;
  sVar1 = *psVar10;
  uVar2 = (undefined1)iRam00000074;
  _MasterStackPointer = CONCAT11(uVar2,MasterStackPointer);
  *(undefined1 *)((int)psVar10 + 9) = uVar2;
  _Reserved6 = iVar5;
  *(undefined1 *)((int)psVar10 + 9) = uVar4;
  iVar8 = (int)_MasterStackPointer;
  *(short **)(iVar8 + 0x54) = psVar10;
  *(undefined1 *)(iVar8 + 0x11) = 0;
  iVar9 = *(int *)(iVar8 + 0x14);
  *(int *)(psVar10 + 10) = (int)*psVar10;
  *(char *)(iVar9 + 0xc) = (char)(iVar9 << 1);
  *(int *)(iVar9 + 0x50) = (int)sVar1;
  *(char *)(iVar9 + 0x15) = (char)iVar9;
  iVar8 = (int)psVar10 * 2;
  uVar4 = (undefined1)*(undefined4 *)(iVar9 + 0x44);
  *(undefined1 *)(iVar9 + 0x11) = uVar4;
  *(int *)(iVar8 + 0x44) = iVar5;
  *(undefined1 *)((int)psVar10 + 0x19) = uVar4;
  *(undefined1 *)(iVar8 + 9) = uVar2;
  *(undefined4 *)(iVar9 + 0x74) = 0x20;
  uVar6 = *(undefined4 *)(iVar8 + 0x74);
  *(int *)(psVar10 + 0x2a) = (int)psVar10[0x10];
  iVar5 = _DAT_00000094;
  iVar11 = *(int *)(_DAT_00000094 + 0x14);
  iVar9 = *(int *)(iVar11 + 0x74);
  sVar1 = *(short *)(iVar11 + _DAT_00000094);
  *(int *)(iVar11 + 0x14) = (int)psVar10[0x10];
  *(int *)(iVar11 + 0x14) = (int)sVar1;
  *(char *)(iVar5 + 0xd) = (char)iVar5;
  uVar2 = (undefined1)sVar1;
  *(undefined1 *)(iVar9 + 0x11) = uVar2;
  *(undefined4 *)(iVar8 + 0x44) = uVar6;
  *(undefined1 *)(iVar11 + 0x19) = uVar2;
  *(char *)(iVar8 + 9) = (char)uVar6;
  *(int *)(iVar9 + 0x74) = iVar5;
  iVar12 = *(int *)(iVar8 + 0x74);
  *(int *)(iVar9 + 0x54) = iVar12;
  puVar7 = *(undefined2 **)(*(short *)(iVar11 + iVar5) + 0x74);
  *(char *)(iVar5 + 0x11) = (char)iVar11;
  iVar8 = *(int *)(iVar5 + 0x44);
  *(char *)(iVar8 + 9) = (char)iVar5;
  *(char *)((int)puVar7 + 0x11) = (char)iVar12;
  sVar1 = *(short *)(iVar12 + iVar5);
  *(char *)(iVar8 + 9) = (char)iVar11;
  *(int *)(iVar8 + 0x54) = iVar5;
  *(int *)(puVar7 + 0x12) = iVar12;
  *(int *)(iVar11 + 100) = iVar5;
  *(int *)(iVar8 + 0x54) = iVar11;
  *(char *)(int)sVar1 = (char)(iVar11 << 1);
  *puVar7 = (short)iVar12;
                    /* WARNING: Could not recover jumptable at 0x14108378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

