/* FUN_100b51d8 @ 0x100b51d8 */

int FUN_100b51d8(char *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  byte *pbVar5;
  code *pcVar6;
  char local_28;
  byte local_27;
  char local_26;
  undefined2 local_25;
  
  if (*param_1 == '\0') {
    iVar2 = FUN_100b4740(param_1 + 0x24,&local_28,5);
    if (iVar2 == 0) {
      *param_1 = '\x01';
      uVar1 = DAT_100b52e8;
      puVar4 = PTR_s_invalid_svc_id___d_100b52e4;
      if ((local_28 != '\t') || (uVar1 = DAT_100b52f0, puVar4 = DAT_100b52ec, local_26 != -0x80)) {
        FUN_100a5b78(uVar1 | (DAT_100b52d0 - DAT_100b52cc) * 0x20 & 0xff00U,
                     PTR_s_process_command_100b52dc,puVar4);
        return -5;
      }
      iVar2 = 0;
      pbVar5 = DAT_100b52f4;
      do {
        if (*pbVar5 == local_27) {
          pcVar6 = *(code **)(pbVar5 + 4);
          iVar3 = (*pcVar6)(param_1,local_25);
          if (param_2 != (uint *)0x0) {
            *param_2 = (uint)local_27;
          }
          if (iVar3 != 0) {
            FUN_100a5b78(DAT_100b52f8 | (DAT_100b52d0 - DAT_100b52cc) * 0x20 & 0xff00U,
                         PTR_s_process_command_100b52dc,DAT_100b52fc,pcVar6,iVar3);
            return iVar3;
          }
        }
        iVar2 = iVar2 + 1;
        pbVar5 = pbVar5 + 8;
        if (iVar2 == 5) {
          *param_1 = '\0';
          return 0;
        }
      } while( true );
    }
    uVar1 = (DAT_100b52d0 - DAT_100b52cc) * 0x20 & 0xff00U | 0x2c80011;
    puVar4 = PTR_s_cannot_read_head_bytes_100b52e0;
  }
  else {
    uVar1 = DAT_100b52d4 | (DAT_100b52d0 - DAT_100b52cc) * 0x20 & 0xff00U;
    puVar4 = PTR_s_current_state_is_not_idle_100b52d8;
  }
  FUN_100a5b78(uVar1,PTR_s_process_command_100b52dc,puVar4);
  return -5;
}

