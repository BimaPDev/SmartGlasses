/* FUN_140765f4 @ 0x140765f4 */

void FUN_140765f4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_1407663c;
  FUN_140e5148(*(undefined4 *)(DAT_1407663c + 4),0xffffffff);
  iVar2 = (uint)*(ushort *)(iVar1 + 0x264) + param_1;
  if (iVar2 <= (int)(uint)*(ushort *)(iVar1 + 0x266)) {
    *(short *)(iVar1 + 0x264) = (short)iVar2;
    FUN_140e52d8(*(undefined4 *)(iVar1 + 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x44,DAT_14076640,(uint)*(ushort *)(iVar1 + 0x264),param_1,
               (uint)*(ushort *)(iVar1 + 0x266));
}

