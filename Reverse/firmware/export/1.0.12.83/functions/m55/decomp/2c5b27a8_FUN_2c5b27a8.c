/* FUN_2c5b27a8 @ 0x2c5b27a8 */

void FUN_2c5b27a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x154);
  iVar1 = FUN_2c5abf68();
  FUN_2c5b3850(param_1 + 0x108,uVar2,*(undefined4 *)(iVar1 + 0xc));
  FUN_2c5b314c(param_1 + 8);
  iVar1 = FUN_2c606b94(*(undefined4 *)(param_1 + 0x10c),1);
  if (iVar1 != 0) {
    FUN_2c5b5db0(param_1 + 0x110,*(undefined4 *)(param_1 + 0x10c),0,0xff,DAT_2c5b392c,DAT_2c5b3928,0
                 ,DAT_2c5b3924,200);
    *(undefined4 *)(param_1 + 0x140) = 0xffffff38;
    FUN_2c62e8ec(param_1 + 0x110);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5b393c,0x47,DAT_2c5b3938,DAT_2c5b3934,DAT_2c5b3930);
}

