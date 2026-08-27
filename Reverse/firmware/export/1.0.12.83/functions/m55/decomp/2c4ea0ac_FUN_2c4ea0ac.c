/* FUN_2c4ea0ac @ 0x2c4ea0ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4ea0ac(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_2c4e9504();
  iVar1 = FUN_2c4e9950();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(1,0x1ad,_LAB_2c4ea124,_LAB_2c4ea120,_LAB_2c4ea11c);
    }
    iVar1 = *_LAB_2c4ea114;
    if (0xf < param_2) {
      param_2 = 0x10;
    }
    FUN_2c674668(iVar1 + 0x26c,param_1,param_2);
    uVar2 = func_0x2c4c2878(0,iVar1 + 0x14c,0x15c);
    *(undefined4 *)(iVar1 + 0x148) = uVar2;
    uVar2 = FUN_2c4e9738();
  }
  FUN_2c644080(*_LAB_2c4ea118);
  return uVar2;
}

