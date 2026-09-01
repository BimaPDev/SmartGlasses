/* FUN_10015058 @ 0x10015058 */

undefined4 FUN_10015058(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined2 local_18;
  int local_14;
  
  local_14 = *DAT_100150e8;
  local_24 = 0;
  uStack_20 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar1 = FUN_1013d44e(param_1,DAT_100150ec);
  uVar2 = DAT_100150f0;
  if (iVar1 == 0) goto LAB_100150c2;
  while( true ) {
    FUN_1011e9f0(&local_24,uVar2);
    uVar2 = thunk_FUN_1009efa0(&local_24,param_2,0x1c);
    param_1 = (DAT_100150f4 - DAT_100150f8) * 0x20 & 0xff00;
    FUN_100a5b78(param_1 | 0x3b0032,DAT_10015100,DAT_100150fc,*param_2,param_2[1]);
    if (*DAT_100150e8 == local_14) break;
    FUN_1013cdc0();
LAB_100150c2:
    iVar1 = FUN_1013d44e(param_1,DAT_10015104);
    uVar2 = DAT_10015108;
    if ((iVar1 == 0) &&
       (iVar1 = FUN_1013d44e(param_1,DAT_1001510c), uVar2 = DAT_10015114, iVar1 != 0)) {
      uVar2 = DAT_10015110;
    }
  }
  return uVar2;
}

