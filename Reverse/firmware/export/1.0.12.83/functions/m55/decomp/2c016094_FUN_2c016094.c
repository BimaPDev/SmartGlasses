/* FUN_2c016094 @ 0x2c016094 */

void FUN_2c016094(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 & 0x3ffffff;
  if ((uVar2 + param_3 < 0x10001) || (0x72ffff < uVar2)) {
    return;
  }
  if (((DAT_2c016110 & param_2) != 0) && (uVar2 + param_3 < 0x730001)) {
    iVar1 = FUN_2c006918(param_1,0);
    if (iVar1 == 0) {
      iVar1 = FUN_2c0068c8(param_1,0);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c00dfac(DAT_2c016120,DAT_2c016114,iVar1);
      }
    }
    else {
      iVar1 = thunk_FUN_2c0068f4(param_1,0);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c00dfac(DAT_2c016118,DAT_2c016114,iVar1);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c00dfac(DAT_2c01611c,DAT_2c016114,uVar2,param_3,0x10000,0x720000);
}

