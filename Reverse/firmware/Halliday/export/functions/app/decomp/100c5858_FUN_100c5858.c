/* FUN_100c5858 @ 0x100c5858 */

void FUN_100c5858(uint param_1,int param_2,byte *param_3,int param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  
  pbVar3 = param_3 + param_4 * 8;
  do {
    if (*param_3 == param_1) {
      if (*(ushort *)(param_2 + 0xc) < (ushort)param_3[1]) {
        FUN_100a5b78((DAT_100c58cc - DAT_100c58d0) * 0x20 & 0xff00U | 0x10a0012,
                     PTR_s_handle_event_100c58dc,PTR_s_Too_small___u_bytes__event_0x_02_100c58e0,
                     *(ushort *)(param_2 + 0xc),param_1,param_2);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x100c58ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 4))();
      return;
    }
    param_3 = param_3 + 8;
  } while (pbVar3 != param_3);
  uVar1 = *(undefined2 *)(param_2 + 0xc);
  uVar2 = FUN_100d3218(*(undefined4 *)(param_2 + 8),uVar1,param_3,pbVar3,param_1);
  FUN_100a5b78(DAT_100c58d4 | (DAT_100c58cc - DAT_100c58d0) * 0x20 & 0xff00U,
               PTR_s_handle_event_100c58dc,PTR_s_Unhandled_event_0x_02x_len__u____100c58d8,param_1,
               uVar1,uVar2);
  return;
}

