/* FUN_2c4ad294 @ 0x2c4ad294 */

undefined4 FUN_2c4ad294(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = FUN_2c4ad13c(3);
    if (iVar1 < 0) goto LAB_2c4ad2ca;
    iVar1 = FUN_2c4acd50(3);
  }
  else {
    iVar1 = FUN_2c4ad0b4(param_1,3);
    if (iVar1 < 0) goto LAB_2c4ad2ca;
    iVar1 = FUN_2c4acc38(param_1,3);
  }
  if (-1 < iVar1) {
    return 0;
  }
LAB_2c4ad2ca:
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x49d,DAT_2c4ad2fc,DAT_2c4ad2f8,DAT_2c4ad2f4,*(undefined1 *)(param_1 + 0xa0),DAT_2c4ad2f0)
  ;
}

