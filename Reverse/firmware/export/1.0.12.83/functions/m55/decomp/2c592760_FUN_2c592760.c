/* FUN_2c592760 @ 0x2c592760 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c592760(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  uint *local_a0;
  int local_9c;
  uint local_98 [4];
  undefined4 local_88;
  uint *local_84;
  int local_80;
  uint local_7c [4];
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined2 local_62;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  undefined1 local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined1 local_34 [16];
  undefined4 local_24;
  
  local_58 = local_50;
  local_24 = *DAT_2c5928c8;
  local_80 = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  local_3c = local_34;
  local_6c = 0;
  local_68 = 0;
  local_54 = 0;
  local_50[0] = 0;
  local_38 = 0;
  local_34[0] = 0;
  local_64 = 0xb;
  local_5c = DAT_2c5928e0;
  local_60 = 0xffffffff;
  local_62 = 0x67;
  local_88 = DAT_2c5928cc;
  local_84 = local_7c;
  FUN_2c52f5f4(&local_3c,param_3,0);
  local_40 = param_2;
  FUN_2c58c9d8(&local_a0,&local_5c);
  uVar2 = local_7c[0];
  puVar1 = local_84;
  if (local_a0 == local_98) {
    if (local_9c != 0) {
      if (local_9c == 1) {
        *(undefined1 *)local_84 = (undefined1)local_98[0];
      }
      else {
        FUN_2c674668(local_84,local_98);
      }
    }
    *(undefined1 *)((int)local_84 + local_9c) = 0;
    local_80 = local_9c;
  }
  else {
    bVar3 = local_84 != local_7c;
    local_84 = local_a0;
    if (bVar3) {
      local_80 = local_9c;
      local_7c[0] = local_98[0];
      if (puVar1 != (uint *)0x0) {
        local_98[0] = uVar2;
        local_a0 = puVar1;
        goto LAB_2c5927f0;
      }
    }
    local_7c[0] = local_98[0];
    local_80 = local_9c;
    local_a0 = local_98;
  }
LAB_2c5927f0:
  local_9c = 0;
  *(undefined1 *)local_a0 = 0;
  if (local_a0 == local_98) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680();
}

