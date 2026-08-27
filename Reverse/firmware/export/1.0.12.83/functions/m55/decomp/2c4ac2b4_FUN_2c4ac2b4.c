/* FUN_2c4ac2b4 @ 0x2c4ac2b4 */

undefined4 FUN_2c4ac2b4(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort local_16;
  int local_14;
  
  local_14 = *DAT_2c4ac3f8;
  local_16 = 0;
  if (param_3 == 0) {
    iVar3 = (**(code **)(param_1 + 0x33c))(param_1,*(undefined1 *)(param_1 + 0x234),&local_16);
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x2b7,DAT_2c4ac408,DAT_2c4ac404,DAT_2c4ac40c,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4ac3fc,*(undefined4 *)(param_1 + 0x234));
    }
    local_16 = local_16 & (ushort)*(undefined4 *)(param_1 + 0x240) | *(ushort *)(param_1 + 0x2ec);
    iVar3 = (**(code **)(param_1 + 0x338))(param_1,*(undefined1 *)(param_1 + 0x234));
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x2c1,DAT_2c4ac408,DAT_2c4ac404,DAT_2c4ac400,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4ac3fc,*(undefined4 *)(param_1 + 0x234));
    }
  }
  else {
    if (param_2 == 0) {
      uVar1 = *(ushort *)(param_1 + 0x238);
    }
    else {
      uVar1 = *(ushort *)(param_1 + 0x23c);
    }
    iVar3 = (**(code **)(param_1 + 0x33c))(param_1,*(undefined1 *)(param_1 + 0x234),&local_16);
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x2a4,DAT_2c4ac408,DAT_2c4ac404,DAT_2c4ac40c,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4ac3fc,*(undefined4 *)(param_1 + 0x234));
    }
    uVar2 = local_16 & ~*(ushort *)(param_1 + 0x240);
    local_16 = *(ushort *)(param_1 + 0x240) & local_16 | uVar1;
    *(ushort *)(param_1 + 0x2ec) = uVar2;
    iVar3 = (**(code **)(param_1 + 0x338))(param_1,*(undefined1 *)(param_1 + 0x234));
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x2af,DAT_2c4ac408,DAT_2c4ac404,DAT_2c4ac400,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4ac3fc,*(undefined4 *)(param_1 + 0x234));
    }
  }
  if (*DAT_2c4ac3f8 == local_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

