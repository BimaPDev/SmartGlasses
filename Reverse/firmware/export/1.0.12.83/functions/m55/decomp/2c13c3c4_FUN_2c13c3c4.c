/* FUN_2c13c3c4 @ 0x2c13c3c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13c3c4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar4 = FUN_2c13bc94(0,param_1);
  if (iVar4 != 0) {
    func_0x2c13f650(10);
    iVar4 = FUN_2c13bc94(0,param_1);
    if (iVar4 != 0) {
      FUN_2c135988(4,0x2cc,_DAT_2c13c418,_DAT_2c13c414,_DAT_2c13c410);
      return;
    }
  }
  uVar3 = _DAT_2c13c40c;
  uVar1 = _DAT_2c13ad80;
  iVar4 = *_DAT_2c13ad7c;
  if (2 < *_DAT_2c13ad78) {
    puVar5 = &stack0xfffffff8;
    FUN_2c13e9dc(_DAT_2c13ad80,0,0x80);
    uVar2 = _DAT_2c13ad84;
    FUN_2c142878(uVar1,0x80,uVar3,&stack0xfffffff8);
    FUN_2c135988(4,0x25,_DAT_2c13ad8c,_DAT_2c13ad88,uVar2,uVar1,puVar5);
  }
  if (*_DAT_2c13ad7c == iVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

