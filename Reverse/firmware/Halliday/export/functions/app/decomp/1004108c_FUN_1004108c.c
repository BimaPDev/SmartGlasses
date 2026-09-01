/* FUN_1004108c @ 0x1004108c */

void FUN_1004108c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_114 [264];
  int local_c;
  
  local_c = *DAT_100410bc;
  iVar1 = FUN_1006c468(param_1,auStack_114,param_3,0);
  if (*DAT_100410bc != local_c) {
    FUN_1013cdc0(iVar1 == 0);
  }
  return;
}

