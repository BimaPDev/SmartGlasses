/* FUN_2c615b98 @ 0x2c615b98 */

/* WARNING: Possible PIC construction at 0x2c615bbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c615bc0) */

void FUN_2c615b98(void)

{
  undefined4 uVar1;
  short *psVar2;
  int iVar3;
  ushort uVar4;
  undefined4 in_r3;
  short sStack_24;
  short sStack_22;
  short sStack_20;
  short sStack_1e;
  int iStack_1c;
  short *psStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = in_r3;
  uVar1 = FUN_2c602400();
  FUN_2c6041d4();
  psVar2 = (short *)FUN_2c615964();
  iVar3 = FUN_2c6041dc(uVar1,0);
  uVar4 = 0x7e7 - *psVar2;
  if (*(ushort *)(iVar3 + 0x36) == uVar4) {
    return;
  }
  if (*(ushort *)(iVar3 + 0x34) <= uVar4) {
    uVar4 = *(ushort *)(iVar3 + 0x34) - 1;
  }
  *(ushort *)(iVar3 + 0x36) = uVar4;
  *(ushort *)(iVar3 + 0x38) = uVar4;
  uStack_14 = 0x2c615bc1;
  iStack_1c = *DAT_2c607e4c;
  psStack_18 = psVar2;
  sStack_24 = FUN_2c600c2c();
  sStack_1e = *(short *)(iVar3 + 0x1a) + sStack_24;
  sStack_20 = sStack_24 + *(short *)(iVar3 + 0x18);
  sStack_22 = *(short *)(iVar3 + 0x16) - sStack_24;
  sStack_24 = *(short *)(iVar3 + 0x14) - sStack_24;
  FUN_2c6078f0(iVar3,&sStack_24);
  if (*DAT_2c607e4c == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

