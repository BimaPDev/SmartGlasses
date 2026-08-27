/* FUN_2c4ab2e8 @ 0x2c4ab2e8 */

int FUN_2c4ab2e8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ushort local_26;
  int local_24;
  
  local_24 = *DAT_2c4ab430;
  iVar4 = FUN_2c4ab27c();
  if (iVar4 < 0) {
    local_26 = 0;
    (**(code **)(param_1 + 0x33c))(param_1,*(undefined1 *)(param_1 + 0x2c0),&local_26);
    uVar3 = DAT_2c4ab448;
    uVar2 = DAT_2c4ab444;
    uVar1 = DAT_2c4ab434;
    uVar5 = (uint)local_26 & ~(uint)*(ushort *)(param_1 + 0x2c4);
    local_26 = (ushort)uVar5;
    if (uVar5 == *(uint *)(param_1 + 0x2c8)) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x385,DAT_2c4ab438,DAT_2c4ab434,DAT_2c4ab440,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4ab43c);
    }
    (**(code **)(param_1 + 0x340))
              (param_1,*(undefined1 *)(param_1 + 0x2c0),(uint)*(ushort *)(param_1 + 0x2c4),
               *(uint *)(param_1 + 0x2c8) & 0xffff);
    iVar4 = FUN_2c4ab1f4(param_1);
    if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x361,DAT_2c4ab438,uVar1,uVar3,*(undefined1 *)(param_1 + 0xa0),uVar2);
    }
    (**(code **)(param_1 + 0x340))
              (param_1,*(undefined1 *)(param_1 + 0x2c0),*(undefined2 *)(param_1 + 0x2c4),
               *(undefined2 *)(param_1 + 0x2cc));
    uVar3 = DAT_2c4ab44c;
    uVar2 = DAT_2c4ab444;
    uVar1 = DAT_2c4ab434;
    if (iVar4 == 0) {
      FUN_2c6444fc(2);
      iVar4 = FUN_2c4ab27c(param_1);
      if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x371,DAT_2c4ab438,uVar1,uVar3,*(undefined1 *)(param_1 + 0xa0),uVar2);
      }
    }
  }
  if (*DAT_2c4ab430 == local_24) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

