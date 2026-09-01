/* FUN_100bd9c0 @ 0x100bd9c0 */

int FUN_100bd9c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  local_20 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  FUN_1011dbf4(DAT_100bda7c,0xffffffff);
  iVar1 = FUN_100bd864(0,param_1);
  if (iVar1 == 0) {
    pbVar2 = (byte *)FUN_100bd864(0,0);
    if (pbVar2 == (byte *)0x0) {
      FUN_100a5b78(((int)PTR_DAT_100bda84 - (int)PTR_DAT_100bda80) * 0x20 & 0xff00U | 0x5b0031,
                   PTR_s_bt_manager_spp_reg_uuid_100bda8c,PTR_s_Not_more_100bda90);
      iVar1 = -0xc;
    }
    else {
      *(undefined4 *)(pbVar2 + 4) = param_1;
      *(undefined4 *)(pbVar2 + 8) = param_2;
      *pbVar2 = *pbVar2 & 0xfe;
      local_20 = CONCAT31(local_20._1_3_,pbVar2[1]);
      local_1c = param_1;
      iVar1 = FUN_10136b9a(&local_20);
      if (iVar1 != 0) {
        FUN_10131520(pbVar2);
        FUN_100a5b78(((int)PTR_DAT_100bda84 - (int)PTR_DAT_100bda80) * 0x20 & 0xff00U | 0x690031,
                     PTR_s_bt_manager_spp_reg_uuid_100bda8c,DAT_100bda94,iVar1);
      }
    }
  }
  else {
    FUN_100a5b78(((int)PTR_DAT_100bda84 - (int)PTR_DAT_100bda80) * 0x20 & 0xff00U | 0x540031,
                 PTR_s_bt_manager_spp_reg_uuid_100bda8c,PTR_s_Already_register_100bda88);
    iVar1 = -0x78;
  }
  FUN_10113e2c(DAT_100bda7c);
  return iVar1;
}

