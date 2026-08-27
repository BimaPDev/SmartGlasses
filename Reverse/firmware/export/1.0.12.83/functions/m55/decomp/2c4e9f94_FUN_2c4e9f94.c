/* FUN_2c4e9f94 @ 0x2c4e9f94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e9f94(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_2c4e9504();
  iVar1 = FUN_2c4e9950();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(1,0x1df,_LAB_2c4ea00c,_LAB_2c4ea008,_LAB_2c4ea004);
    }
    iVar1 = *_LAB_2c4e9ffc;
    if (0x23 < param_2) {
      param_2 = 0x24;
    }
    FUN_2c674668(iVar1 + 0x27c,param_1,param_2);
    uVar2 = func_0x2c4c2878(0,iVar1 + 0x14c,0x15c);
    *(undefined4 *)(iVar1 + 0x148) = uVar2;
    uVar2 = FUN_2c4e9738();
  }
  FUN_2c644080(*_LAB_2c4ea000);
  return uVar2;
}

