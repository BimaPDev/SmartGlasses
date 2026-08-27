/* FUN_140a35e4 @ 0x140a35e4 */

undefined4 FUN_140a35e4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 local_a8;
  undefined2 local_a6;
  int local_a4;
  undefined4 local_a0;
  undefined1 auStack_9c [128];
  int local_1c;
  
  local_1c = *DAT_140a3668;
  FUN_140e5658(&local_a0,0,0x84);
  local_a8 = (undefined2)param_1;
  local_a6 = (undefined2)param_4;
  if (param_3 == 0) {
    uVar1 = 8;
    uVar2 = 8;
    local_a4 = 0;
  }
  else {
    uVar2 = param_3 + 0xc;
    local_a4 = param_3 + 4;
    local_a0 = param_4;
    FUN_140e5278(auStack_9c,param_2,param_3);
    uVar1 = uVar2 & 0xffff;
  }
  FUN_140a5058(1,0x16,&local_a8,uVar1);
  FUN_1402a6e8(4,0x34,DAT_140a3678,DAT_140a3674,DAT_140a366c,DAT_140a3670,param_1,param_4,uVar2);
  if (*DAT_140a3668 == local_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

