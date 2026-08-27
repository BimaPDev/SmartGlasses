/* FUN_2c493f18 @ 0x2c493f18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c493f18(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = _LAB_2c494110;
  uVar2 = FUN_2c48e738();
  uVar3 = FUN_2c48e6c0(_LAB_2c494114);
  FUN_2c48e474(uVar2,_LAB_2c494118,uVar3);
  uVar3 = FUN_2c48e738();
  FUN_2c48e474(uVar2,_LAB_2c49411c,uVar3);
  FUN_2c48e5b4(uVar3,_LAB_2c494124,_LAB_2c494120);
  FUN_2c48e518((int)uRam2c494100,uVar3,_LAB_2c494128);
  FUN_2c48e518((int)uRam2c494108,uVar3,_LAB_2c49412c);
  FUN_2c48e484(uVar3,_LAB_2c494130);
  FUN_2c48e518(0,uVar3,_LAB_2c494134);
  func_0x2c48e3e0(uVar2);
  iVar4 = *_LAB_2c494138;
  *_LAB_2c494138 = iVar4 + 1;
  uVar2 = FUN_2c66c4ec();
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x1c7,_LAB_2c494144,_LAB_2c494140,_LAB_2c49413c,uVar1,uVar2,iVar4 + 1);
}

