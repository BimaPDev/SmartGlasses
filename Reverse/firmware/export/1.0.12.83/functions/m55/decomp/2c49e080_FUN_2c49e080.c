/* FUN_2c49e080 @ 0x2c49e080 */

undefined4 FUN_2c49e080(uint param_1,uint param_2)

{
  int iVar1;
  ushort local_1c;
  ushort uStack_1a;
  ushort local_18;
  undefined2 uStack_16;
  int local_14;
  
  local_1c = (ushort)((param_1 & 0xff) << 8) | (ushort)(param_1 >> 8) & 0xff;
  local_18 = (ushort)((param_2 << 0x18) >> 0x10) | (ushort)(param_2 >> 8) & 0xff;
  uStack_1a = (ushort)((param_2 >> 0x10 & 0xff) << 8) | (ushort)(byte)(param_2 >> 0x18);
  uStack_16 = 0;
  local_14 = *DAT_2c49e0e4;
  iVar1 = FUN_2c4bd438(0,0x28,&local_1c,6);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1f7,DAT_2c49e0f0,DAT_2c49e0ec,DAT_2c49e0e8,0,param_1,iVar1);
  }
  if (*DAT_2c49e0e4 == local_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

