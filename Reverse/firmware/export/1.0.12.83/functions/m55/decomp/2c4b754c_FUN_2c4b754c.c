/* FUN_2c4b754c @ 0x2c4b754c */

void FUN_2c4b754c(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = DAT_2c4b75ac;
  uVar2 = *(uint *)(DAT_2c4b75ac + 200);
  uVar6 = 0;
  uVar4 = 0;
  do {
    uVar5 = uVar4 + 1;
    uVar3 = 0xc0000 << ((uVar4 & 0x7f) << 1);
    if ((0x100 << (uVar4 & 0xff) & param_1) != 0) {
      uVar6 = uVar6 | 1 << ((int)uVar4 >> 1 & 0xffU);
    }
    uVar2 = uVar2 & ~uVar3 | uVar3;
    uVar4 = uVar5;
  } while (uVar5 != 6);
  *(uint *)(DAT_2c4b75ac + 200) = uVar2;
  *(uint *)(iVar1 + 0xc4) = *(uint *)(iVar1 + 0xc4) & 0xfffffff3 | 5;
                    /* WARNING: Could not recover jumptable at 0x2c673b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_2c673b34)(uVar6);
  return;
}

