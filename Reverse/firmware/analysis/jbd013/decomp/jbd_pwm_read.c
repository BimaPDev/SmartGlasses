/* FUN_2c4a8764 @ 0x2c4a8764 */

int FUN_2c4a8764(int param_1,undefined4 param_2,undefined2 *param_3)

{
  int iVar1;
  
  FUN_2c4a94d0();
  iVar1 = FUN_2c4a8638(param_1,param_2,param_3);
  if (-1 < iVar1) {
    FUN_2c4a94e0();
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xa1,DAT_2c4a87bc,DAT_2c4a87c0,DAT_2c4a87b8,*(undefined1 *)(param_1 + 0xc),DAT_2c4a87b4,
        param_2,*param_3,iVar1);
}

