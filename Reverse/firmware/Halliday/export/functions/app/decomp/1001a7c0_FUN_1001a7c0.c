/* FUN_1001a7c0 @ 0x1001a7c0 */

void FUN_1001a7c0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 local_14;
  uint local_10;
  int local_c;
  
  local_c = *DAT_1001a7f4;
  local_14 = DAT_1001a7f8;
  local_10 = param_3 & 0xffffff00;
  FUN_1001a758(param_1,&local_14,5,0,param_1);
  if (*DAT_1001a7f4 != local_c) {
    FUN_1013cdc0();
  }
  return;
}

