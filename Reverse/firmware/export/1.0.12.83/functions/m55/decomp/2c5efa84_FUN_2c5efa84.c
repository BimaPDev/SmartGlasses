/* FUN_2c5efa84 @ 0x2c5efa84 */

undefined4 FUN_2c5efa84(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_2c5fee3c(param_1,0x96);
  uVar1 = DAT_2c5efb48;
  if (iVar2 != 0) {
    FUN_2c66b450(iVar2,0x10,DAT_2c5efb44,*(undefined1 *)(param_2 + 5),*(undefined1 *)(param_2 + 4),
                 *(undefined1 *)(param_2 + 3),*(undefined1 *)(param_2 + 2));
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5efb50,0x157,uVar1,DAT_2c5efb4c,uVar1,iVar2);
  }
  return 0;
}

