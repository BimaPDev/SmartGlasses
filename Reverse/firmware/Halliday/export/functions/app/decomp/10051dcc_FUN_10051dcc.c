/* FUN_10051dcc @ 0x10051dcc */

void FUN_10051dcc(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = *DAT_10051e60;
  uVar6 = (DAT_10051e64 - DAT_10051e68) * 0x20 & 0xff00;
  FUN_100a5b78(uVar6 | 0x1060031,DAT_10051e70,DAT_10051e6c,DAT_10051e68,param_1);
  iVar2 = thunk_FUN_1009f30c(0xa4,DAT_10051e74);
  piVar1 = DAT_10051e78;
  *DAT_10051e78 = iVar2;
  if (iVar2 == 0) goto LAB_10051e54;
  FUN_1011ea48(iVar2,0,0xa4);
  uVar3 = FUN_100527d4(DAT_10051e7c);
  iVar5 = *piVar1;
  *(undefined4 *)(iVar2 + 0x10) = uVar3;
  if (*(int *)(iVar5 + 0x10) == 0) {
    FUN_100a5b78(uVar6 | 0x1100011,DAT_10051e70,DAT_10051e80,0,param_1);
  }
  iVar2 = FUN_1009e9f8(DAT_10051e84);
  if (iVar2 == 0) {
    FUN_1009e86c(DAT_10051e84);
  }
  FUN_100a5b78(DAT_10051e88 | uVar6,DAT_10051e70,DAT_10051e8c);
  uVar3 = 0;
  while( true ) {
    if (*DAT_10051e60 == iVar4) break;
    FUN_1013cdc0(uVar3);
LAB_10051e54:
    uVar3 = 0xfffffff4;
  }
  return;
}

