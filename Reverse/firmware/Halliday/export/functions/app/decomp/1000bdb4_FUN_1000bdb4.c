/* FUN_1000bdb4 @ 0x1000bdb4 */

void FUN_1000bdb4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  
  local_c = *DAT_1000bde8;
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = FUN_1000bd68(param_1,&local_14,param_3,0,param_1);
  if ((iVar1 == 0) && ((char)local_14 != '\x05')) {
    iVar1 = 10;
  }
  if (*DAT_1000bde8 != local_c) {
    FUN_1013cdc0(iVar1);
  }
  return;
}

