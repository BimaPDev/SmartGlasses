/* FUN_2c016004 @ 0x2c016004 */

void FUN_2c016004(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_2 & 0x3ffffff;
  if ((0x10000 < uVar1 + param_3) && (uVar1 < 0xe50000)) {
    if (((DAT_2c016080 & param_2) == 0) || ((uVar1 < 0x730000 && (0x730000 < uVar1 + param_3)))) {
                    /* WARNING: Subroutine does not return */
      FUN_2c00dfac(DAT_2c016090,DAT_2c016084,uVar1,param_3,0x10000,0x720000);
    }
    iVar2 = FUN_2c006918(param_1,0);
    if (iVar2 == 0) {
      iVar2 = FUN_2c0068c8(param_1,0);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c00dfac(DAT_2c01608c,DAT_2c016084,iVar2);
      }
    }
    else {
      iVar2 = thunk_FUN_2c0068f4(param_1,0);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c00dfac(DAT_2c016088,DAT_2c016084,iVar2);
      }
    }
  }
  return;
}

