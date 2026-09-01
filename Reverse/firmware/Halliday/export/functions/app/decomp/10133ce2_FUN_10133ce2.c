/* FUN_10133ce2 @ 0x10133ce2 */

undefined4 FUN_10133ce2(int param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *extraout_r2;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar2 = FUN_101334a4(param_1 + 0xcc);
    if (((int)uVar2 != 0) && (*(char *)(param_1 + 0xd) == '\a')) {
      if (*(char *)(param_1 + 2) == '\x04') {
        *(undefined1 *)((ulonglong)uVar2 >> 0x20) = 0;
        *extraout_r2 = (char)*(undefined2 *)(param_1 + 0x96);
        return 0;
      }
      if (*(char *)(param_1 + 2) == '\x02') {
        uVar1 = FUN_1013344a(param_1 + 0x38);
        *param_2 = uVar1;
        uVar1 = FUN_1013348a(param_1);
        *param_3 = uVar1;
        return 0;
      }
    }
  }
  *param_2 = 0;
  *param_3 = 0;
  return 0xfffffffb;
}

