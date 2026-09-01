/* FUN_10042a74 @ 0x10042a74 */

void FUN_10042a74(undefined4 param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_10042ad0;
  iVar3 = *DAT_10042acc;
  if (*DAT_10042ad0 == '\0') {
    FUN_100a5b78((DAT_10042ad8 - DAT_10042ad4) * 0x20 & 0xff00U | 0x6c0031,DAT_10042ae0,DAT_10042adc
                 ,DAT_10042ad4,param_1);
    piVar1 = DAT_10042acc;
    *pcVar2 = '\x01';
    if (*piVar1 == iVar3) goto LAB_10042ab4;
  }
  else if (*DAT_10042acc == iVar3) {
    return;
  }
  FUN_1013cdc0();
LAB_10042ab4:
  FUN_1011aab8();
  return;
}

