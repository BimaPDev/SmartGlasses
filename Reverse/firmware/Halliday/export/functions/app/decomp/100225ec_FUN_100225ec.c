/* FUN_100225ec @ 0x100225ec */

void FUN_100225ec(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  byte bVar5;
  uint uVar6;
  undefined1 auStack_6c [64];
  undefined1 local_2c;
  int local_24;
  
  local_24 = *(int *)PTR_DAT_100226b4;
  FUN_1011ea48(auStack_6c,0,0x45,0);
  iVar1 = FUN_10020860(param_3);
  uVar6 = ((int)PTR_DAT_100226b8 - (int)PTR_DAT_100226bc) * 0x20 & 0xff00;
  iVar3 = iVar1;
  if ((iVar1 - 1U & 0xff) < 0x19) goto LAB_1002264c;
  FUN_100a5b78(uVar6 | 0x2500031,PTR_s_appNotifyCfg_updata_config_100226c4,
               PTR_s_appid__s_is_invalid_100226c0,param_3);
  uVar2 = 0xffffffff;
  while (*(int *)PTR_DAT_100226b4 != local_24) {
    iVar3 = FUN_1013cdc0(uVar2);
LAB_1002264c:
    puVar4 = (undefined1 *)FUN_10025948(*DAT_100226c8,param_2,iVar3);
    FUN_100a5b78(DAT_100226cc | uVar6,PTR_s_appNotifyCfg_updata_config_100226c4,DAT_100226d0,puVar4,
                 param_3,param_2,param_1);
    if (puVar4 == (undefined1 *)0x0) {
      local_2c = (undefined1)iVar1;
      FUN_10118a1c(auStack_6c,0x40,DAT_100226d4,param_2);
      puVar4 = auStack_6c;
    }
    bVar5 = puVar4[0x41];
    if (param_1 == 1) {
      bVar5 = bVar5 | 2;
    }
    else if (param_1 == 2) {
      bVar5 = bVar5 | 4;
    }
    else {
      bVar5 = bVar5 | 8;
    }
    puVar4[0x41] = bVar5;
    FUN_10022538(puVar4);
    uVar2 = 0;
  }
  return;
}

