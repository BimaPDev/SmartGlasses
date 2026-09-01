/* FUN_10043a8c @ 0x10043a8c */

undefined4 FUN_10043a8c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  
  puVar1 = PTR_DAT_10043afc;
  iVar4 = *(int *)PTR_DAT_10043af4;
  pcVar5 = *(code **)(PTR_DAT_10043af8 + 8);
  uVar2 = (*pcVar5)();
  FUN_100a5b78(((int)puVar1 - (int)PTR_DAT_10043b00) * 0x20 & 0xff00U | 0xf10032,
               PTR_s_hal_tp_event_handle_10043b08,PTR_s_hal_tp_event_handle____d___d_10043b04,
               param_1,uVar2,param_2,param_3);
  iVar3 = FUN_1004b7d8();
  if (iVar3 != 0) goto LAB_10043ad4;
  iVar3 = (*pcVar5)();
  if (iVar3 != 0) goto LAB_10043ad4;
  if (param_1 != 0x8b) goto LAB_10043ae2;
  uVar2 = 1;
  do {
    FUN_1009df28(uVar2);
LAB_10043ad4:
    do {
      if (*(int *)PTR_DAT_10043af4 == iVar4) {
        return 1;
      }
      FUN_1013cdc0();
LAB_10043ae2:
    } while (param_1 != 0x8c);
    uVar2 = 0xffffffff;
  } while( true );
}

