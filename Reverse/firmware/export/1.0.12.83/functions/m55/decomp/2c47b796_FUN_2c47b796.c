/* FUN_2c47b796 @ 0x2c47b796 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47b796(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint in_fpscr;
  undefined8 uVar8;
  undefined1 auStack_2c [16];
  int iStack_1c;
  
  iVar5 = FUN_2c479650();
  if (iVar5 == 0) {
    FUN_2c6741e8(0x711,_LAB_2c47b7ec,_LAB_2c47b7e8);
  }
  puVar1 = _LAB_2c47b7f0;
  if (*(ushort *)(_LAB_2c47b7e4 + 0x4e) != (ushort)*(byte *)(_LAB_2c47b7e4 + -0xde47)) {
    return;
  }
  uVar6 = *_LAB_2c47b7f0;
  *_LAB_2c47b7f4 = 0;
  FUN_2c644958(uVar6);
  *puVar1 = 0;
  if (*(char *)(_LAB_2c479930 + -0xbe48) == '\x11') {
    uVar7 = FUN_2c478604(_LAB_2c479930 + -0xbe46);
    if (uVar7 == 0) {
      uVar4 = (uint)*_LAB_2c479938;
    }
    else {
      if ((int)(uint)*_LAB_2c479938 <= (int)uVar7) {
        uVar7 = (uint)*_LAB_2c479938;
      }
      uVar4 = uVar7 & 0xffff;
      *_LAB_2c479938 = (ushort)uVar7;
    }
    iStack_1c = *_LAB_2c477408;
    puVar2 = (undefined1 *)FUN_2c46de74();
    FUN_2c66b4b8(auStack_2c,_LAB_2c47740c,puVar2[5],puVar2[4],puVar2[3],puVar2[2],puVar2[1],*puVar2)
    ;
    uVar6 = FUN_2c48e738();
    FUN_2c48e5b4(uVar6,_LAB_2c477410,auStack_2c);
    FUN_2c48e518(0,uVar6,_LAB_2c477414);
    FUN_2c48e518(0,uVar6,_LAB_2c477418);
    uVar8 = VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    FUN_2c48e518((int)uVar8,uVar6,_LAB_2c47741c);
    FUN_2c48e518(0,uVar6,_LAB_2c477420);
    uVar6 = FUN_2c48e3e8(uVar6);
    uVar3 = FUN_2c66c4ec();
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x72,_LAB_2c47742c,_LAB_2c477428,_LAB_2c477424,uVar3,uVar6);
  }
  uVar7 = *(uint *)(_LAB_2c479930 + 0x50c) & 0xffff;
  iStack_1c = *DAT_2c47ae70;
  iVar5 = FUN_2c473878(_LAB_2c479934,uVar7,_LAB_2c479930 + -0xc000,0);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x186,DAT_2c47ae80,DAT_2c47ae7c,DAT_2c47ae74,DAT_2c47ae78,uVar7,
          *(undefined4 *)(iVar5 + 0x14));
  }
  FUN_2c6741e8(0x710,DAT_2c47ae84);
  if (*DAT_2c47ae70 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

