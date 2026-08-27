/* FUN_2c4ab27c @ 0x2c4ab27c */

undefined4 FUN_2c4ab27c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = DAT_2c4ab2e4;
  uVar2 = DAT_2c4ab2e0;
  uVar1 = DAT_2c4ab2d8;
  iVar4 = FUN_2c4ab1f4(param_1);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x342,DAT_2c4ab2dc,uVar1,uVar3,*(undefined1 *)(param_1 + 0xa0),uVar2);
  }
  return 0;
}

