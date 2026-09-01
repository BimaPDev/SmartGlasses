/* FUN_1013156e @ 0x1013156e */

undefined4 FUN_1013156e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_28;
  undefined1 local_27;
  int local_24;
  undefined4 uStack_20;
  
  uVar2 = FUN_100bdaa4();
  local_24 = (int)((ulonglong)uVar2 >> 0x20);
  if ((local_24 == 0) || ((undefined1 *)uVar2 == (undefined1 *)0x0)) {
    uVar1 = 0xfffffffb;
  }
  else {
    local_28 = 3;
    local_27 = *(undefined1 *)uVar2;
    uStack_20 = param_3;
    uVar1 = FUN_10136b82(&local_28);
  }
  return uVar1;
}

