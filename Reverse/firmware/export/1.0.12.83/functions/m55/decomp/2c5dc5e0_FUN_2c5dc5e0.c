/* FUN_2c5dc5e0 @ 0x2c5dc5e0 */

void FUN_2c5dc5e0(byte *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_58 [2];
  byte *local_50;
  undefined4 local_14;
  
  local_14 = *DAT_2c5dc6d4;
  if (param_1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x33,DAT_2c5dc6e4,DAT_2c5dc6e0,DAT_2c5dc6f4);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar3 = *param_1 - 1 & 0xff;
    uVar2 = DAT_2c5dc6f0;
    if (uVar3 < 0x16) {
      uVar2 = *(undefined4 *)(DAT_2c5dc6d8 + uVar3 * 4);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x37,DAT_2c5dc6e4,DAT_2c5dc6e0,DAT_2c5dc6ec,uVar2);
  }
  FUN_2c62c3b0(local_58,0x44);
  local_58[0] = 0xb;
  local_50 = param_1;
  iVar1 = FUN_2c6419a8(local_58);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,*(undefined4 *)(param_1 + 0xc));
  }
  uVar3 = *param_1 - 1 & 0xff;
  uVar2 = DAT_2c5dc6f0;
  if (uVar3 < 0x16) {
    uVar2 = *(undefined4 *)(DAT_2c5dc6d8 + uVar3 * 4);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x40,DAT_2c5dc6e4,DAT_2c5dc6e0,DAT_2c5dc6dc,uVar2,*(undefined4 *)(param_1 + 4));
}

