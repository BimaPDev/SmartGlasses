/* FUN_2c64c854 @ 0x2c64c854 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c64c854(undefined4 param_1,ushort param_2)

{
  int iVar1;
  undefined4 uStack_124;
  ushort uStack_120;
  undefined1 auStack_11e [258];
  int iStack_1c;
  
  iStack_1c = *_LAB_2c64c8e4;
  uStack_124 = 0;
  FUN_2c674268(&uStack_120,0,0x101);
  uStack_124 = CONCAT13(uStack_124._3_1_,0x10014);
  uStack_120 = param_2;
  if (param_2 < 0x100) {
    FUN_2c674668(auStack_11e,param_1,param_2);
    func_0x2c4f6890(1,0x14,&uStack_124,param_2 + 6);
    iVar1 = FUN_2c6471b4(*_DAT_2c64c8e8,5000);
    if (iVar1 != 0) {
      FUN_2c6741e8(0x11a2,_LAB_2c64c8f0,_LAB_2c64c8ec,iVar1);
    }
  }
  if (*_LAB_2c64c8e4 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

