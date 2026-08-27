/* FUN_2c5e3c38 @ 0x2c5e3c38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e3c38(undefined4 param_1,undefined1 param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *param_4;
  if (cVar1 == '\x03') {
    uVar2 = FUN_2c6041dc(param_1,0);
  }
  else if (cVar1 == '\x05') {
    uVar2 = FUN_2c6041dc(param_1,0);
  }
  else {
    if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_DAT_2c5e3c8c,0xb1,_DAT_2c5e3c88,_DAT_2c5e3c84,cVar1);
    }
    uVar2 = FUN_2c6041dc(param_1,0);
  }
  FUN_2c603c40(uVar2,0x60,param_2,0);
  return;
}

