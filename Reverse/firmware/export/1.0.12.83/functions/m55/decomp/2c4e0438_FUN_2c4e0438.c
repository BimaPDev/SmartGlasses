/* FUN_2c4e0438 @ 0x2c4e0438 */

void FUN_2c4e0438(undefined4 param_1,byte param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  byte local_18;
  byte local_17;
  undefined1 local_16;
  byte local_15;
  undefined1 local_14;
  int *local_10;
  int local_c;
  
  local_30 = (uint)param_2;
  local_c = *DAT_2c4e04fc;
  puVar1 = (undefined4 *)*param_3;
  *param_3 = (int)(puVar1 + 1);
  local_38 = *puVar1;
  *param_3 = (int)(puVar1 + 2);
  local_34 = puVar1[1];
  *param_3 = (int)(puVar1 + 3);
  local_2c = param_1;
  uVar5 = FUN_2c4e0400(puVar1[2]);
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  local_28 = (undefined4)uVar5;
  *param_3 = iVar2 + 0x10;
  local_24 = *(undefined4 *)(iVar2 + 0xc);
  *param_3 = iVar2 + 0x14;
  uVar5 = FUN_2c4e0418(*(undefined4 *)(iVar2 + 0x10));
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  local_20 = (undefined4)uVar5;
  *param_3 = iVar2 + 0x18;
  uVar4 = *(uint *)(iVar2 + 0x14);
  if ((uVar4 & 0x800) == 0) {
    local_16 = 0;
    local_14 = 0;
    local_17 = (byte)((uVar4 << 0x16) >> 0x1f);
    local_18 = (byte)((uVar4 << 0x17) >> 0x1f);
    local_15 = (byte)((uVar4 << 0x13) >> 0x1f);
    *param_3 = iVar2 + 0x1c;
    if ((int)(uVar4 << 0x15) < 0) {
      uVar3 = *(undefined4 *)(iVar2 + 0x18);
      *param_3 = iVar2 + 0x20;
      FUN_2c4dd908(DAT_2c4e0500,&local_38,uVar3,*(undefined4 *)(iVar2 + 0x1c),0);
    }
    else {
      local_1c = *(undefined4 *)(iVar2 + 0x18);
      local_10 = param_3;
      FUN_2c4dd950(DAT_2c4e0500,&local_38);
    }
  }
  if (*DAT_2c4e04fc != local_c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

