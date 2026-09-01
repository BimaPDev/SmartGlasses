/* FUN_100db250 @ 0x100db250 */

void FUN_100db250(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int local_48;
  undefined1 auStack_44 [44];
  
  FUN_1011ea48(&local_48,0,0x30);
  FUN_100a5b78(((int)PTR_DAT_100db2c8 - (int)PTR_DAT_100db2cc) * 0x20 & 0xff00U | 0x970033,
               PTR_s__btsrv_hfp_clip_cb_100db2d4,PTR_s_phone_number__s__type__d_phone_n_100db2d0,
               param_2,param_3,param_4);
  local_48 = param_1;
  sVar1 = FUN_10118a1c(auStack_44,0x2c,PTR_DAT_100db2d8,param_2);
  FUN_100d44e4(0xcc,0x37,&local_48,sVar1 + 4,0);
  if (((param_4 != 0) && (iVar2 = FUN_1011ea10(param_4), iVar2 != 0)) &&
     (iVar2 = FUN_10136574(), param_1 == iVar2)) {
    FUN_100db1c4(param_4);
  }
  return;
}

