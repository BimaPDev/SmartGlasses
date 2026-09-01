/* FUN_10011e4c @ 0x10011e4c */

undefined4 FUN_10011e4c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = *DAT_10011e78;
  pcVar2 = *(code **)(*(int *)(param_1 + 8) + 0xc);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1,param_2,0,pcVar2,param_1,iVar1,param_3);
  }
  if (*DAT_10011e78 != iVar1) {
    FUN_1013cdc0();
  }
  return 0;
}

