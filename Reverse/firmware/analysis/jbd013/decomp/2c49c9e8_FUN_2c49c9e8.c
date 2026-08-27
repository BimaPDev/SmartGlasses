/* FUN_2c49c9e8 @ 0x2c49c9e8 */

undefined4 FUN_2c49c9e8(int param_1,undefined1 param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_21;
  undefined2 local_20;
  int local_1c;
  
  local_20 = 0;
  local_1c = *DAT_2c49cb2c;
  local_21 = param_2;
  iVar2 = FUN_2c4bd450(*(undefined1 *)(param_1 + 4),*(undefined2 *)(param_1 + 8),&local_21,1,
                       &local_20,2);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x107,DAT_2c49cb34,DAT_2c49cb38,DAT_2c49cb3c,local_21,iVar2);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  uVar3 = (uint)(byte)local_20;
  uVar4 = (uint)local_20._1_1_;
  local_20 = 0;
  FUN_2c6444fc(4);
  iVar2 = FUN_2c4bd450(*(undefined1 *)(param_1 + 4),*(undefined2 *)(param_1 + 8),&local_21,1,
                       &local_20,2);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x115,DAT_2c49cb34,DAT_2c49cb38,DAT_2c49cb30,local_21,iVar2);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (uVar4 + uVar3 * 0x100 != (uint)local_20._1_1_ + (uint)(byte)local_20 * 0x100) {
    local_20 = 0;
    FUN_2c6444fc(4);
    iVar2 = FUN_2c4bd450(*(undefined1 *)(param_1 + 4),*(undefined2 *)(param_1 + 8),&local_21,1,
                         &local_20,2);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x124,DAT_2c49cb34,DAT_2c49cb38,DAT_2c49cb40,local_21,iVar2);
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  param_3[1] = local_20._1_1_;
  piVar1 = DAT_2c49cb2c;
  *param_3 = (byte)local_20;
  if (*piVar1 != local_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

