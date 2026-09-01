/* FUN_100bfa44 @ 0x100bfa44 */

void FUN_100bfa44(undefined1 *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  uVar3 = (DAT_100bfae0 - DAT_100bfadc) * 0x20 & 0xff00;
  puVar1 = PTR_s_disconnected_10189aa3_8_100bfaec;
  if (param_2 != 0) {
    puVar1 = PTR_s_connected_10189a91_8_100bfae8;
  }
  FUN_100a5b78(DAT_100bfae4 | uVar3,PTR_s_stream_ble_connect_cb_100bfaf0,DAT_100bfaf4,puVar1);
  FUN_100a5b78(uVar3 | 0x1680036,PTR_s_stream_ble_connect_cb_100bfaf0,DAT_100bfaf8,*param_1,
               param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
  FUN_1011dbf4(DAT_100bfafc,0xffffffff);
  if (param_2 == 0) {
    iVar2 = 0;
    piVar5 = DAT_100bfb00;
    do {
      if (*piVar5 != 0) {
        iVar4 = *(int *)(*piVar5 + 0x54);
        if (*(char *)(iVar4 + 0x2c) == '\x02') {
          *(undefined1 *)(iVar4 + 0x2c) = 0;
          FUN_10113fd0(iVar4 + 0x54);
          if (*(code **)(iVar4 + 0x28) != (code *)0x0) {
            (**(code **)(iVar4 + 0x28))(0,2);
          }
        }
      }
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 != 5);
  }
  thunk_FUN_10113e2c(DAT_100bfafc);
  return;
}

