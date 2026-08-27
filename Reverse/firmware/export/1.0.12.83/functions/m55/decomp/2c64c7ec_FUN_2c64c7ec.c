/* FUN_2c64c7ec @ 0x2c64c7ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c64c7ec(undefined4 param_1,ushort param_2)

{
  undefined4 uStack_124;
  ushort uStack_120;
  undefined1 auStack_11e [258];
  int iStack_1c;
  
  iStack_1c = *_LAB_2c64c850;
  uStack_124 = 0;
  FUN_2c674268(&uStack_120,0,0x101);
  uStack_124 = CONCAT22(uStack_124._2_2_,0x14);
  uStack_120 = param_2;
  if (param_2 < 0x100) {
    FUN_2c674668(auStack_11e,param_1,param_2);
    func_0x2c4f6890(1,0x14,&uStack_124,param_2 + 6);
  }
  if (*_LAB_2c64c850 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

