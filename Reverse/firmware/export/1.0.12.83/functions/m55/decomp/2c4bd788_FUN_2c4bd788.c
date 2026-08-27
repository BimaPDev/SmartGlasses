/* FUN_2c4bd788 @ 0x2c4bd788 */

void FUN_2c4bd788(uint param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ushort local_16;
  int local_14;
  
  puVar1 = DAT_2c4bd82c;
  local_14 = *DAT_2c4bd828;
  if (param_2 == 0) {
    uVar4 = (uint)*DAT_2c4bd82c & ~(1 << (param_1 & 0xff));
    *DAT_2c4bd82c = (ushort)uVar4;
    if (uVar4 == 0) {
      FUN_2c4be7f8(0);
    }
  }
  else {
    uVar2 = *DAT_2c4bd82c;
    if (uVar2 == 0) {
      FUN_2c4be7a8();
      uVar2 = *puVar1;
    }
    *puVar1 = (ushort)(1 << (param_1 & 0xff)) | uVar2;
  }
  if ((param_1 != 7) && (iVar3 = FUN_2c673fd8(param_1,param_2), iVar3 != 0)) {
    FUN_2c673e88(0x24,&local_16);
    if (param_2 == 0) {
      local_16 = local_16 & ~((ushort)(1 << (param_1 & 0xff)) & 0xff);
    }
    else {
      local_16 = (ushort)(1 << (param_1 & 0xff)) & 0xff | local_16;
    }
    FUN_2c673d68(0x24);
  }
  if (*DAT_2c4bd828 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

