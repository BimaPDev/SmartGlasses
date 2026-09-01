/* FUN_1003633c @ 0x1003633c */

void FUN_1003633c(char *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *param_1;
  iVar1 = *(int *)PTR_DAT_100363b0;
  if ((cVar2 == -0x45) && (param_1[1] == -0x78)) {
    cVar2 = param_1[6];
  }
  FUN_100a5b78(((int)PTR_DAT_100363b8 - (int)PTR_DAT_100363b4) * 0x20 & 0xff00U | 0x2140031,
               PTR_s_ring_protocol_recv_100363c0,PTR_s_ring_protocol_recv_cmd_0x_x__100363bc,cVar2,
               param_1,iVar1,param_3);
  if ((byte)(cVar2 + 0x10) < 4) {
    if (*(int *)PTR_DAT_100363b0 == iVar1) goto LAB_1003638e;
  }
  else if (*(int *)PTR_DAT_100363b0 == iVar1) {
    return;
  }
  FUN_1013cdc0();
LAB_1003638e:
                    /* WARNING: Could not recover jumptable at 0x100363a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_PTR_100363c4 + (uint)(byte)(cVar2 + 0x10) * 4))(param_1 + 7,param_2 + -7);
  return;
}

