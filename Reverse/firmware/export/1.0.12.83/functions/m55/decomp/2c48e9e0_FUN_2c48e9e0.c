/* FUN_2c48e9e0 @ 0x2c48e9e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48e9e0(uint param_1)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = _DAT_2c48eb84;
  iVar2 = *_LAB_2c48eb80;
  if (*_DAT_2c48eb84 != param_1) {
    if (param_1 != 0) {
      func_0x2c4c4da0(5,0x28);
      func_0x2c4f74ac(0xe,0xf);
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x9a,_LAB_2c48eb90,_LAB_2c48eb8c,_LAB_2c48eb88,0xf);
    }
    func_0x2c4c4500(0,1);
    func_0x2c4c46a0(0,1);
    func_0x2c4c4500(0,0);
    func_0x2c4c46a0(0,0);
    FUN_2c4faf18(2);
    func_0x2c4f74ac(0xe,0);
    func_0x2c4c4da0(5,0x20);
    *pbVar1 = 0;
  }
  if (*_LAB_2c48eb80 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

