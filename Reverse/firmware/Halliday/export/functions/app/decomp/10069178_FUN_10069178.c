/* FUN_10069178 @ 0x10069178 */

void FUN_10069178(uint param_1,uint param_2)

{
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  uint local_19;
  uint local_15;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_1 < param_2)) {
    local_1c = 0x4d;
    local_1b = 1;
    local_1a = 0;
    local_19 = param_1;
    local_15 = param_2;
    (**(code **)(DAT_100691b8 + 8))(&local_1c,0xb);
    FUN_10069168(param_1,param_2 - param_1);
  }
  return;
}

