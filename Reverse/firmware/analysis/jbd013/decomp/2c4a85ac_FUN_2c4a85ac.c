/* FUN_2c4a85ac @ 0x2c4a85ac */

int FUN_2c4a85ac(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_28;
  undefined1 local_27;
  int local_24;
  
  uVar3 = DAT_2c4a8634;
  uVar2 = DAT_2c4a8630;
  uVar1 = DAT_2c4a862c;
  local_28 = (undefined1)((uint)param_3 >> 8);
  local_27 = (undefined1)param_3;
  local_24 = *DAT_2c4a8624;
  iVar4 = FUN_2c4a8560(param_1,param_2,&local_28,2);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x46,DAT_2c4a8628,uVar3,uVar2,*(undefined1 *)(param_1 + 0xc),uVar1,param_2,0,iVar4);
  }
  if (*DAT_2c4a8624 == local_24) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

