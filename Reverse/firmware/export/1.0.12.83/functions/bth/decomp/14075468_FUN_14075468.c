/* FUN_14075468 @ 0x14075468 */

undefined4 FUN_14075468(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = (uint)*(ushort *)(param_1 + 10) + (uint)*(ushort *)(param_1 + 8) + 0x10;
    if ((uint)(param_3 + iVar1 + param_1) <= *(ushort *)(param_1 + 6) + 0x10 + param_1) {
      FUN_140e5278(iVar1 + param_1,param_2);
      *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + (short)param_3;
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_140754e4,(uint)*(ushort *)(param_1 + 8),param_3,
                 (uint)*(ushort *)(param_1 + 6));
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x43,DAT_140754e0,param_2,param_3);
}

