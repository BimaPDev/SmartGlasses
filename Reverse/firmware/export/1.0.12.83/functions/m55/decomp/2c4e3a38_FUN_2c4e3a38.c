/* FUN_2c4e3a38 @ 0x2c4e3a38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e3a38(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iStack_18;
  int iStack_14;
  
  iStack_14 = *_LAB_2c4e3b14;
  iVar1 = FUN_2c4e36cc();
  if (iVar1 == 0) {
    FUN_2c4e34f4(0x8ffd,0x124,1);
    FUN_2c4e0504(_LAB_2c4e3b1c,0,0,0,_LAB_2c4e3b24,0x124,_LAB_2c4e3b20,0x1300,_LAB_2c4e3b18);
    uVar3 = 0;
  }
  else {
    iStack_18 = 0;
    iVar2 = func_0x2c4de670(iVar1,_LAB_2c4e3b28,&iStack_18);
    if (iVar2 == 0) {
      FUN_2c4e34f4(0x8ffd,0x126,1);
      uVar4 = 0x126;
      uVar5 = _LAB_2c4e3b2c;
    }
    else {
      if (iStack_18 != 0) {
        uVar3 = FUN_2c4de6ae(iVar1,1,iStack_18);
        goto LAB_2c4e3a80;
      }
      FUN_2c4e34f4(0x8ffd,0x127,1);
      uVar4 = 0x127;
      uVar5 = _LAB_2c4e3b30;
    }
    uVar3 = 0;
    FUN_2c4e0504(_LAB_2c4e3b1c,0,0,0,_LAB_2c4e3b24,uVar4,_LAB_2c4e3b20,0x1300,uVar5);
  }
LAB_2c4e3a80:
  if (*_LAB_2c4e3b14 != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar3;
}

