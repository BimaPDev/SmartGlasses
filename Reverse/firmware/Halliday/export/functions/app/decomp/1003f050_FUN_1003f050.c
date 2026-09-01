/* FUN_1003f050 @ 0x1003f050 */

void FUN_1003f050(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_3c;
  undefined1 auStack_38 [28];
  int local_1c;
  
  local_1c = *(int *)PTR_DAT_1003f0d0;
  if ((((param_1 != (undefined4 *)0x0) && (param_2 != 0)) && (iVar1 = FUN_1011ea10(), iVar1 != 0))
     && (iVar1 = FUN_1011ea10(param_2), iVar1 != 0)) {
    puVar3 = &local_3c;
    local_3c = 0;
    FUN_1011ea48(auStack_38,0,0x1a);
    FUN_1001bf4c(param_1,puVar3);
    FUN_100a5b78(((int)PTR_DAT_1003f0d4 - (int)PTR_DAT_1003f0d8) * 0x20 & 0xff00U | 0x410032,
                 PTR_s_bt_send_message_to_phone_1003f0dc,
                 PTR_s_bt_send_message_to_phone_phone___1003f0e0,param_1,puVar3);
    uVar2 = FUN_1011ea10(puVar3);
    if (uVar2 < 2) {
      puVar3 = param_1;
    }
    FUN_100485d8(puVar3,param_2);
  }
  if (*(int *)PTR_DAT_1003f0d0 != local_1c) {
    FUN_1013cdc0();
  }
  return;
}

