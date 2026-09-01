/* FUN_10020dac @ 0x10020dac */

void FUN_10020dac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  char cVar5;
  int iVar6;
  
  puVar1 = DAT_10020e0c;
  iVar6 = *DAT_10020e08;
  cVar5 = '\x1a';
  puVar4 = DAT_10020e0c;
  do {
    cVar5 = cVar5 + -1;
    *puVar4 = 1;
    puVar4 = puVar4 + 1;
  } while (cVar5 != '\0');
  puVar1[1] = 1;
  puVar3 = PTR_DAT_10020e14;
  puVar2 = PTR_DAT_10020e10;
  *puVar1 = 0x10;
  FUN_100a5b78(((int)puVar3 - (int)puVar2) * 0x20 & 0xff00U | 0x12a0031,
               PTR_s_Notify_EnableDefault_10020e1c,PTR_s_Notify_EnableDefaultnotify_enabl_10020e18,
               0x10,param_1,iVar6,param_3);
  if (*DAT_10020e08 != iVar6) {
    FUN_1013cdc0();
  }
  FUN_1002061c();
  return;
}

