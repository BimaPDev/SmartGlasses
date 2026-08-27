/* FUN_2c017b90 @ 0x2c017b90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c017b90(void)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  int unaff_r4;
  uint uVar5;
  int unaff_r5;
  uint uVar6;
  int unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = _DAT_2c017bec;
  iVar4 = func_0x2c015374();
  puVar3 = _DAT_2c017bf4;
  puVar2 = _DAT_2c017bf0;
  *(uint *)(iVar1 + 0x174) = *(uint *)(iVar1 + 0x174) & 0xfffffffc;
  func_0x2c015228(*puVar3 | *puVar2,0);
  uVar6 = *(uint *)(iVar1 + 0x168);
  uVar5 = (*_DAT_2c017bfc | *_DAT_2c017bf8) & 0x7ff;
  func_0x2c01528c(uVar5,0);
  *(uint *)(iVar1 + 0x168) = uVar6 & ~(uVar5 | uVar5 << 0xb) | 0xca000000;
  *(int *)(unaff_r5 + 0x30) = unaff_r6 + 0x31;
  *(char *)(unaff_r4 + 0xc) = (char)unaff_r5;
  *(short *)(unaff_r4 + iVar4 + 0x30) = (short)(iVar4 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x2c0153c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

