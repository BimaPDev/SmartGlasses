/* FUN_1003efd4 @ 0x1003efd4 */

void FUN_1003efd4(int param_1)

{
  undefined4 uVar1;
  undefined4 local_38;
  undefined1 auStack_34 [32];
  int local_14;
  
  local_14 = *(int *)PTR_DAT_1003f03c;
  if (param_1 != 0) {
    local_38 = 0;
    FUN_1011ea48(auStack_34,0,0x1d,0);
    FUN_100c2338(&local_38,0x21);
    FUN_100a5b78(((int)PTR_DAT_1003f040 - (int)PTR_DAT_1003f044) * 0x20 & 0xff00U | 0x350031,
                 PTR_s_system_get_device_name_1003f04c,PTR_s_system_get_name__s_1003f048,&local_38);
    uVar1 = FUN_1011ea10(&local_38);
    FUN_1011ea40(param_1,&local_38,uVar1);
  }
  if (*(int *)PTR_DAT_1003f03c != local_14) {
    FUN_1013cdc0();
  }
  return;
}

