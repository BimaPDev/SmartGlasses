/* FUN_2c64c704 @ 0x2c64c704 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c64c704(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_14;
  
  uVar5 = _LAB_2c64c7e8;
  puVar4 = _LAB_2c64c7e4;
  puVar3 = _LAB_2c64c7e0;
  uStack_14 = *_LAB_2c64c7d0;
  do {
    do {
      FUN_2c644134(&iStack_20,0,0xffffffff);
      iVar6 = iStack_1c;
    } while (iStack_20 != 8);
    func_0x2c4f74ac(0x20,0xf);
    uVar1 = _DAT_2c64c7dc;
    if (iVar6 << 0x14 < 0) {
      do {
        FUN_2c644044(*puVar3,0xffffffff);
        uVar7 = FUN_2c673d58(uVar5);
        uVar8 = uVar7;
        if (0xfe < uVar7) {
          uVar8 = 0xff;
        }
        FUN_2c674208(uVar5,uVar1,uVar8);
        FUN_2c644080(*puVar3);
        func_0x2c6481a8(uVar1,uVar8);
      } while (0xff < uVar7);
    }
    uVar2 = _DAT_2c64c7d8;
    uVar1 = _LAB_2c64c7d4;
    if (iVar6 << 0x13 < 0) {
      do {
        FUN_2c644044(*puVar4,0xffffffff);
        uVar7 = FUN_2c673d58(uVar1);
        uVar8 = uVar7;
        if (0x7fc < uVar7) {
          uVar8 = 0x7fd;
        }
        FUN_2c674208(uVar1,uVar2,uVar8);
        FUN_2c644080(*puVar4);
        func_0x2c64870c(uVar2,uVar8);
      } while (0x7fd < uVar7);
    }
    func_0x2c4f74ac(0x20,0);
  } while( true );
}

