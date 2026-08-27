/* FUN_14035854 @ 0x14035854 */

void FUN_14035854(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ushort local_20;
  ushort local_1e;
  int local_1c;
  
  local_1c = *DAT_140359a0;
  FUN_140e5338(0xd,&local_20,param_3,0);
  FUN_140e5338(0xe,&local_1e);
  local_20 = local_20 >> 0xf;
  uVar6 = (local_1e & 0xfff) >> 0xb;
  local_1e = (ushort)(((uint)local_1e << 0x14) >> 0x1f);
  uVar4 = (uint)local_20 | uVar6 << 1;
  uVar6 = (uint)local_20 | uVar6 << 1;
  if (uVar6 == 0) {
    FUN_1402a6e8(4,0x1d1,DAT_140359b0,DAT_140359ac,DAT_140359a8,DAT_140359a4,0,0);
    uVar5 = DAT_140359b8;
    FUN_1402a6e8(4,0x1df,DAT_140359b0,DAT_140359ac,DAT_140359c8,DAT_140359b8);
  }
  else {
    uVar5 = 1;
    if (uVar4 != 1) {
      if (uVar4 == 2) {
        uVar5 = 2;
      }
      else {
        uVar5 = 3;
      }
    }
    FUN_1402a6e8(4,0x1d1,DAT_140359b0,DAT_140359ac,DAT_140359a8,DAT_140359a4,uVar5,uVar6);
    FUN_1402e1fc(0x209b,&local_1e);
    local_1e = local_1e | 0x1fc0;
    FUN_1402e37c(0x209b);
    FUN_1402e1fc(0x209d,&local_1e);
    local_1e = local_1e & 0xfff8 | 5;
    FUN_1402e37c(0x209d);
    uVar5 = DAT_140359b8;
    *DAT_140359b4 = 1;
  }
  puVar1 = DAT_140359bc;
  FUN_1402e1fc(0x209b,DAT_140359bc);
  puVar3 = DAT_140359c4;
  uVar2 = DAT_140359c0;
  FUN_1402a6e8(4,0x1ee,DAT_140359b0,DAT_140359ac,DAT_140359c0,uVar5,0x9b,*puVar1);
  FUN_1402e1fc(0x209d,puVar3);
  FUN_1402a6e8(4,0x1f1,DAT_140359b0,DAT_140359ac,uVar2,uVar5,0x9d,*puVar3);
  if (*DAT_140359a0 != local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

