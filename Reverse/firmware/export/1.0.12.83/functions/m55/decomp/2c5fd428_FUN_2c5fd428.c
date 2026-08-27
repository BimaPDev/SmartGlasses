/* FUN_2c5fd428 @ 0x2c5fd428 */

void FUN_2c5fd428(int param_1,ushort param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = DAT_2c5fd4e4;
  if (0xf < (param_2 & 0xff)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x255,DAT_2c5fd504,DAT_2c5fd500,DAT_2c5fd508,DAT_2c5fd4f8);
  }
  FUN_2c644044(*DAT_2c5fd4e4,0xffffffff);
  iVar2 = DAT_2c5fd4ec;
  if ((*DAT_2c5fd4e8 != 0) && (*DAT_2c5fd4e8 == param_1)) {
    iVar5 = (int)(short)param_2;
    iVar6 = *(int *)(DAT_2c5fd4ec + iVar5 * 4);
    if (iVar6 != 0) {
      iVar3 = FUN_2c66b624(*(undefined4 *)(iVar6 + 0x1c),DAT_2c5fd4f0);
      if ((iVar3 == 0) && (*DAT_2c5fd4f4 != '\0')) {
        *DAT_2c5fd4f4 = '\0';
      }
      *(undefined1 *)(iVar6 + 0x14) = 0;
      FUN_2c5fc7c4(*(undefined4 *)(iVar2 + iVar5 * 4));
      uVar4 = *puVar1;
      *(undefined4 *)(iVar2 + iVar5 * 4) = 0;
      FUN_2c644080(uVar4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x262,DAT_2c5fd504,DAT_2c5fd500,DAT_2c5fd50c,DAT_2c5fd4f8);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x25c,DAT_2c5fd504,DAT_2c5fd500,DAT_2c5fd4fc,DAT_2c5fd4f8);
}

