/* FUN_2c13c2fc @ 0x2c13c2fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c13c2fc(void)

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
  
  iStack_1c = *_DAT_2c13c3ac;
  iVar4 = FUN_2c13c2ac();
  uVar3 = _DAT_2c13c3c0;
  uVar2 = _DAT_2c13c3b4;
  uVar1 = _DAT_2c13c3b0;
  if (iVar4 != 0) {
    uVar5 = 5;
    iStack_20 = 0;
LAB_2c13c33a:
    uVar5 = uVar5 - 1 & 0xff;
    iVar7 = iVar4;
    if (uVar5 != 0xff) {
      while ((0xf >> uVar5) << 0x1f < 0) {
        FUN_2c13bc94(uVar5 * 4 + 0x560,&iStack_20);
        func_0x2c13ad14(3,uVar1,uVar5,iStack_20);
        if (iStack_20 - 0x1eU < 0x1e3) break;
        uVar6 = uVar5 - 1 & 0xff;
        FUN_2c135988(4,0x6b9,_DAT_2c13c3b8,uVar2,uVar3,uVar5,iStack_20);
        iVar4 = 0;
        iVar7 = 0;
        uVar5 = uVar6;
        if (uVar6 == 0xff) goto LAB_2c13c38e;
      }
      goto LAB_2c13c33a;
    }
LAB_2c13c38e:
    if (iVar7 != 0) {
      FUN_2c135988(4,0x6d4,_DAT_2c13c3b8,_DAT_2c13c3b4,_DAT_2c13c3bc);
      goto LAB_2c13c314;
    }
  }
  iVar7 = 0;
LAB_2c13c314:
  if (*_DAT_2c13c3ac == iStack_1c) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

