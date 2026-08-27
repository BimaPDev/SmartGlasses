/* FUN_2c4a9b28 @ 0x2c4a9b28 */

undefined4 FUN_2c4a9b28(int param_1,short *param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  ushort local_16;
  uint local_14;
  
  local_14 = *DAT_2c4a9b88;
  local_16 = 0;
  FUN_2c4a8764(*(undefined4 *)(param_1 + 0xa8),5,&local_16,0);
  puVar2 = DAT_2c4a9b88;
  uVar3 = (local_16 & 0xfff) >> 6;
  lVar1 = (ulonglong)DAT_2c4a9b8c * (ulonglong)uVar3;
  *param_2 = (ushort)(((uint)local_16 << 0x14) >> 0x1a) +
             (short)(uint)((ulonglong)lVar1 >> 0x25) * -0x30 + (local_16 >> 0xc) * 0x30;
  if ((*puVar2 ^ local_14) == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)lVar1,uVar3,*puVar2 ^ local_14,0);
}

