/* FUN_1013160e @ 0x1013160e */

undefined4 FUN_1013160e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined6 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_1;
  local_c = param_2;
  uVar2 = FUN_100bdaec();
  if ((undefined1 *)uVar2 == (undefined1 *)0x0) {
    uVar1 = 0xfffffffb;
  }
  else {
    local_10 = CONCAT31(local_10._1_3_,*(undefined1 *)uVar2);
    local_10 = CONCAT22((short)((uint6)uVar2 >> 0x20),(undefined2)local_10);
    local_c = param_3;
    uVar1 = FUN_10136b5e(&local_10);
  }
  return uVar1;
}

