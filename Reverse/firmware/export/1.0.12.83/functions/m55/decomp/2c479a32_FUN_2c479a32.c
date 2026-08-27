/* FUN_2c479a32 @ 0x2c479a32 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c479a32(int param_1)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint in_fpscr;
  undefined8 uVar8;
  undefined1 auStack_2c [16];
  int iStack_1c;
  
  uVar1 = *(undefined2 *)(param_1 + 0x634);
  if (*(char *)(param_1 + -0xce48) == '\x11') {
    uVar5 = FUN_2c478604(param_1 + 0x433);
    if (uVar5 == 0) {
      uVar6 = (uint)*_LAB_2c479a7c;
    }
    else {
      if ((int)(uint)*_LAB_2c479a7c <= (int)uVar5) {
        uVar5 = (uint)*_LAB_2c479a7c;
      }
      uVar6 = uVar5 & 0xffff;
      *_LAB_2c479a7c = (ushort)uVar5;
    }
    iStack_1c = *_LAB_2c477408;
    puVar2 = (undefined1 *)FUN_2c46de74();
    FUN_2c66b4b8(auStack_2c,_LAB_2c47740c,puVar2[5],puVar2[4],puVar2[3],puVar2[2],puVar2[1],*puVar2)
    ;
    uVar3 = FUN_2c48e738();
    FUN_2c48e5b4(uVar3,_LAB_2c477410,auStack_2c);
    FUN_2c48e518(0,uVar3,_LAB_2c477414);
    FUN_2c48e518(0,uVar3,_LAB_2c477418);
    uVar8 = VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    FUN_2c48e518((int)uVar8,uVar3,_LAB_2c47741c);
    FUN_2c48e518(0,uVar3,_LAB_2c477420);
    uVar3 = FUN_2c48e3e8(uVar3);
    uVar4 = FUN_2c66c4ec();
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x72,_LAB_2c47742c,_LAB_2c477428,_LAB_2c477424,uVar4,uVar3);
  }
  iStack_1c = *DAT_2c47ae70;
  iVar7 = FUN_2c473878();
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x186,DAT_2c47ae80,DAT_2c47ae7c,DAT_2c47ae74,DAT_2c47ae78,uVar1,
          *(undefined4 *)(iVar7 + 0x14));
  }
  FUN_2c6741e8(0x710,DAT_2c47ae84);
  if (*DAT_2c47ae70 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

