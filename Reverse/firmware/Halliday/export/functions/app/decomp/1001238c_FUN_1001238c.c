/* FUN_1001238c @ 0x1001238c */

void FUN_1001238c(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  uint local_10;
  int local_c;
  
  local_c = *DAT_100123d8;
  local_14 = 0;
  local_10 = param_3 & 0xffff0000;
  thunk_FUN_1009efa0(DAT_100123dc,&local_14,5,0,param_1);
  uVar1 = FUN_1011ea10(DAT_100123e0);
  iVar2 = FUN_1011ea30(&local_14,DAT_100123e0,uVar1);
  if (*DAT_100123d8 != local_c) {
    FUN_1013cdc0(iVar2 == 0);
  }
  return;
}

