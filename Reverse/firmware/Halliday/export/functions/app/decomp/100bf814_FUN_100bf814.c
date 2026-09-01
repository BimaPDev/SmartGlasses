/* FUN_100bf814 @ 0x100bf814 */

void FUN_100bf814(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  FUN_1011dbf4(DAT_100bf8b0,0xffffffff);
  iVar2 = 0;
  piVar5 = DAT_100bf8c8;
  while( true ) {
    iVar4 = *piVar5;
    if ((iVar4 != 0) &&
       (iVar1 = FUN_1011ea30(**(undefined4 **)(iVar4 + 0x54),param_2,0x10), iVar1 == 0)) break;
    iVar2 = iVar2 + 1;
    piVar5 = piVar5 + 1;
    if (iVar2 == 5) {
      thunk_FUN_10113e2c(DAT_100bf8b0);
      iVar4 = 0;
LAB_100bf846:
      uVar3 = ((int)PTR_DAT_100bf8b8 - (int)PTR_DAT_100bf8b4) * 0x20 & 0xff00;
      FUN_100a5b78(uVar3 | 0xd80031,PTR_s_stream_spp_connected_cb_100bf8c0,
                   PTR_s_channel__d_10183f7b_0x1b_100bf8bc,param_1);
      if ((iVar4 != 0) && (iVar2 = *(int *)(iVar4 + 0x54), iVar2 != 0)) {
        *(char *)(iVar2 + 0x2d) = (char)param_1;
        if (*(char *)(iVar2 + 0x2c) != '\0') {
          FUN_100a5b78(uVar3 | 0xe30021,PTR_s_stream_spp_connected_cb_100bf8c0,
                       PTR_s_Had_connecte___d_100bf8c4);
          return;
        }
        *(undefined1 *)(iVar2 + 0x2c) = 1;
        if (*(code **)(iVar2 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100bf884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar2 + 0x28))(1);
          return;
        }
      }
      return;
    }
  }
  thunk_FUN_10113e2c(DAT_100bf8b0);
  goto LAB_100bf846;
}

