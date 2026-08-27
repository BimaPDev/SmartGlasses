/* FUN_2c13b62c @ 0x2c13b62c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c13b62c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iStack_20;
  int iStack_1c;
  
  iStack_1c = *_DAT_2c13b6e8;
  iVar4 = FUN_2c13b5ac();
  uVar3 = _DAT_2c13b6fc;
  uVar2 = _DAT_2c13b6f0;
  uVar1 = _DAT_2c13b6ec;
  if (iVar4 != 0) {
    uVar5 = 5;
    iStack_20 = 0;
LAB_2c13b66a:
    uVar5 = uVar5 - 1 & 0xff;
    iVar7 = iVar4;
    if (uVar5 != 0xff) {
      while( true ) {
        if (-1 < (0xf >> uVar5) << 0x1f) break;
        FUN_2c13b1dc(uVar5 * 4 + 0x548,&iStack_20);
        FUN_2c135988(4,0x131,uVar2,uVar3,uVar1,uVar5,iStack_20);
        if (iStack_20 - 0x1eU < 0x1e3) break;
        uVar6 = uVar5 - 1 & 0xff;
        FUN_2c135988(4,0x134,uVar2,uVar3,_DAT_2c13b6f4,uVar5,iStack_20);
        iVar4 = 0;
        iVar7 = 0;
        uVar5 = uVar6;
        if (uVar6 == 0xff) goto LAB_2c13b6ca;
      }
      goto LAB_2c13b66a;
    }
LAB_2c13b6ca:
    if (iVar7 != 0) {
      FUN_2c135988(4,0x150,_DAT_2c13b6f0,_DAT_2c13b6fc,_DAT_2c13b6f8);
      goto LAB_2c13b644;
    }
  }
  iVar7 = 0;
LAB_2c13b644:
  if (*_DAT_2c13b6e8 == iStack_1c) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

