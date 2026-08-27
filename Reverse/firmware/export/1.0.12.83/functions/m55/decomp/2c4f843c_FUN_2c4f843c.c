/* FUN_2c4f843c @ 0x2c4f843c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f843c(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uStack_28;
  int iStack_24;
  undefined4 uStack_1c;
  
  uStack_1c = *_LAB_2c4f85c4;
  iVar2 = FUN_2c5ec1ac();
  if (((param_1 == 1) && (iVar3 = FUN_2c66b624(param_2,_DAT_2c4f85f8), iVar3 != 0)) && (iVar2 == 2))
  {
    iVar3 = FUN_2c5e31b4(0x14,&uStack_28);
    puVar1 = _LAB_2c4f85c8;
    if (iVar3 == 0) {
      *_LAB_2c4f85c8 = 0;
    }
    else if (iStack_24 < (int)(uint)(uStack_28 < 3)) {
      FUN_2c5e317c(0x14,iStack_24 - (uint)(uStack_28 < 3),uStack_28 + 1,
                   iStack_24 + (uint)(0xfffffffe < uStack_28),1);
      *puVar1 = 1;
    }
    func_0x2c48fe74();
  }
  else {
    *_LAB_2c4f85c8 = 0;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x787,_FUN_2c4f85d0,uRam2c4f85d4,_DAT_2c4f85cc,iVar2);
}

