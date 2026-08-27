/* FUN_2c49aa24 @ 0x2c49aa24 */

int FUN_2c49aa24(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_2c000070();
  if ((iVar1 == 0) && (iVar1 = FUN_2c49a6c4(param_1,param_2,1), iVar1 == 0)) {
    uVar3 = DAT_2c49aa84;
    if (DAT_2c49aa84 < DAT_2c49aa88) {
      uVar3 = DAT_2c49aa88;
    }
    iVar2 = FUN_2c49a87c(0x40000,uVar3 - 0x40000,1);
    iVar1 = 0;
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x271,DAT_2c49aa98,DAT_2c49aa94,DAT_2c49aa90,DAT_2c49aa8c,iVar2);
    }
  }
  return iVar1;
}

