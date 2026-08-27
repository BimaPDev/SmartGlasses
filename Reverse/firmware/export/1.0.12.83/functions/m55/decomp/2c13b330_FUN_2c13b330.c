/* FUN_2c13b330 @ 0x2c13b330 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13b330(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  uint auStack_50 [3];
  undefined4 uStack_44;
  undefined4 uStack_2c;
  int iStack_14;
  
  iVar4 = 0;
  iStack_14 = *_DAT_2c13b3c4;
  auStack_50[0] = 0;
  FUN_2c13e9dc(auStack_50 + 1,0,0x38,0);
  FUN_2c13b1dc(0x16c,auStack_50);
  iVar1 = _DAT_2c13b3c8;
  auStack_50[0] = auStack_50[0] & 0x3f;
  if (auStack_50[0] == 0) {
    iVar3 = *(int *)(_DAT_2c13b3c8 + 4);
    if (iVar3 == -1) goto LAB_2c13b368;
    iVar4 = 5;
  }
  else {
    iVar3 = *(int *)(_DAT_2c13b3c8 + 4);
  }
  if (iVar3 != iVar4) {
    *(int *)(_DAT_2c13b3c8 + 4) = iVar4;
    auStack_50[1] = 3;
    FUN_2c14486c();
    uVar2 = FUN_2c1448c4();
    auStack_50[2] = VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    uStack_44 = VectorSignedToFloat(*(undefined4 *)(iVar1 + 4),(byte)(in_fpscr >> 0x16) & 3);
    uStack_2c = 3;
    func_0x2c13ad14(4,_DAT_2c13b3cc);
    FUN_2c13aa78(auStack_50 + 1);
  }
LAB_2c13b368:
  if (*_DAT_2c13b3c4 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

