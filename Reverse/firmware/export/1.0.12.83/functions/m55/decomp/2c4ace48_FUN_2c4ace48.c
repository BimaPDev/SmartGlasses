/* FUN_2c4ace48 @ 0x2c4ace48 */

undefined4 FUN_2c4ace48(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulonglong)DAT_2c4aced8 *
                 (ulonglong)
                 (uint)(*(int *)(param_1 + 0x300) + *(int *)(param_1 + 0x2f0) <<
                       (*(uint *)(param_1 + 0x284) & 0xff)) >> 0x26);
  iVar1 = (**(code **)(param_1 + 0x344))
                    (param_1,*(undefined2 *)(param_1 + 0x27c),uVar2,*(undefined1 *)(param_1 + 0x280)
                    );
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x78,DAT_2c4acee8,DAT_2c4acee4,DAT_2c4acee0,*(undefined1 *)(param_1 + 0xa0),DAT_2c4acedc
         );
  }
  iVar1 = FUN_2c4aab6c(param_1,*(undefined4 *)(param_1 + 0x27c),uVar2,
                       *(undefined1 *)(param_1 + 0x280));
  if (-1 < iVar1) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x7f,DAT_2c4acee8,DAT_2c4acee4,DAT_2c4aceec,*(undefined1 *)(param_1 + 0xa0),DAT_2c4acedc);
}

