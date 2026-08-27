/* FUN_2c4bdf08 @ 0x2c4bdf08 */

void FUN_2c4bdf08(uint param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *extraout_r1;
  ushort local_16;
  uint local_14;
  
  local_14 = *DAT_2c4bdf98;
  puVar5 = param_2;
  if ((param_1 < 8) && (((int)(uint)*DAT_2c4bdf9c >> (param_1 & 0xff)) << 0x1f < 0)) {
    FUN_2c673e88(0x52,&local_16);
    puVar5 = (undefined2 *)(1 << (param_1 & 0xff));
    if (((uint)local_16 & (uint)puVar5) != 0) {
      iVar3 = FUN_2c674018((uint)puVar5 & 0xffff);
      if (iVar3 != 0) {
        FUN_2c673d68(0x52,(uint)puVar5 & 0xffff);
      }
      FUN_2c673e88(param_1 + 0x56,&local_16);
      uVar2 = 1;
      uVar4 = (1 << *DAT_2c4bdfa0) - 1U & (uint)local_16;
      local_16 = (ushort)uVar4;
      uVar1 = FUN_2c4bd9a4(uVar4,param_1);
      *param_2 = uVar1;
      puVar5 = extraout_r1;
      goto LAB_2c4bdf28;
    }
  }
  uVar2 = 0;
LAB_2c4bdf28:
  if ((*DAT_2c4bdf98 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar2,puVar5,*DAT_2c4bdf98 ^ local_14,0);
}

