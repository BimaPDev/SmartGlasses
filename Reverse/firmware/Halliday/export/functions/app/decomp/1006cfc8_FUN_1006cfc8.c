/* FUN_1006cfc8 @ 0x1006cfc8 */

bool FUN_1006cfc8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iStack_10;
  int local_c;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iStack_10 = param_1;
  local_c = param_2;
  if (*(int *)(iVar1 + 0x14) == 0) {
    FUN_10119dc2(DAT_1006d010,DAT_1006d00c,DAT_1006d008,0x25c,param_1,param_2);
    FUN_10119dc2(DAT_1006d014);
    FUN_1011a1f0(DAT_1006d008,0x25c,param_3,0);
  }
  FUN_1011ee5e(*(undefined4 *)(iVar1 + 0x14),*(undefined1 *)(iVar1 + 0x18),&iStack_10);
  return local_c == 0;
}

