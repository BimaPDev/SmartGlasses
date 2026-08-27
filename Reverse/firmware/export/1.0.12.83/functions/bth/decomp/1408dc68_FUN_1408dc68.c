/* FUN_1408dc68 @ 0x1408dc68 */

void FUN_1408dc68(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = (short *)FUN_14075258(param_3);
  sVar1 = *psVar2;
  if (sVar1 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_1408dd00,DAT_1408dcf8,psVar2[1],*(undefined4 *)(psVar2 + 2));
  }
  if (sVar1 != 3) {
    if (sVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_1408dcfc,DAT_1408dcf8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_1408dd04,DAT_1408dcf8,psVar2[1],*(uint *)(psVar2 + 2) & 0xffff);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x43,DAT_1408dd08,DAT_1408dcf8,psVar2[1],*(undefined4 *)(psVar2 + 2));
}

