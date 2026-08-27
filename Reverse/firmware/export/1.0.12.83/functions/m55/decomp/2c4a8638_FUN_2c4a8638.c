/* FUN_2c4a8638 @ 0x2c4a8638 */

int FUN_2c4a8638(int param_1,undefined4 param_2,ushort *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort local_38 [2];
  int local_34;
  
  uVar3 = DAT_2c4a8700;
  uVar2 = DAT_2c4a86fc;
  uVar1 = DAT_2c4a86ec;
  local_34 = *DAT_2c4a86e8;
  local_38[0] = 0;
  iVar4 = (**(code **)(param_1 + 0x18))(*(undefined1 *)(param_1 + 0xd),param_2,local_38,2);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x34,DAT_2c4a86f0,uVar1,uVar3,*(undefined1 *)(param_1 + 0xc),uVar2,
          *(undefined1 *)(param_1 + 0xd),param_2);
  }
  *param_3 = local_38[0] << 8 | local_38[0] >> 8;
  if (*DAT_2c4a86e8 == local_34) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

