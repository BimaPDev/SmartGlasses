/* FUN_1001c1d0 @ 0x1001c1d0 */

uint FUN_1001c1d0(void)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 local_64;
  undefined1 auStack_60 [36];
  undefined4 local_3c;
  undefined1 auStack_38 [36];
  int local_14;
  
  local_14 = *(int *)PTR_DAT_1001c27c;
  local_64 = 0;
  FUN_1011ea48(auStack_60,0,0x24,0);
  uVar3 = thunk_FUN_1009efa0(PTR_DAT_1001c280,&local_64,0x28);
  uVar6 = ((int)PTR_DAT_1001c284 - (int)PTR_DAT_1001c288) * 0x20 & 0xff00;
  if (0 < (int)uVar3) goto LAB_1001c268;
  bVar1 = FUN_1001c0e8(&local_64);
  uVar3 = (uint)bVar1;
  thunk_FUN_1007375c(PTR_DAT_1001c280,&local_64,uVar3);
  uVar4 = uVar6 | 0x550000;
  puVar5 = PTR_s_xs_sn_info_not_exist___s_len__d_1001c28c;
  while( true ) {
    FUN_100a5b78(uVar4 | 0x32,PTR_s_xs_set_sn_info_1001c290,puVar5,&local_64,uVar3);
    local_3c = 0;
    FUN_1011ea48(auStack_38,0,0x24);
    uVar2 = thunk_FUN_1009efa0(PTR_s_SN_NUM_1001c294,&local_3c,0x28);
    FUN_100a5b78(uVar6 | 0x5e0032,PTR_s_xs_set_sn_info_1001c290,
                 PTR_s_Device_SN___s_sn_len__d_1001c298,&local_3c,uVar2);
    if (*(int *)PTR_DAT_1001c27c == local_14) break;
    FUN_1013cdc0();
LAB_1001c268:
    uVar4 = uVar6 | 0x590000;
    puVar5 = PTR_s_xs_sn_info_exist___s_len__d_1001c29c;
  }
  return uVar3;
}

