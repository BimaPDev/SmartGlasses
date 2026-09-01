/* FUN_1000fe34 @ 0x1000fe34 */

void FUN_1000fe34(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *DAT_1000fe90;
  uVar4 = (DAT_1000fe94 - DAT_1000fe98) * 0x20 & 0xff00;
  FUN_100a5b78(uVar4 | 0x610031,DAT_1000fe9c,DAT_1000fea0,DAT_1000fe98,param_1);
  iVar1 = FUN_100b64fc(DAT_1000fea8,DAT_1000fea4);
  if (iVar1 != 0) goto LAB_1000fe88;
  FUN_100a5b78(uVar4 | 0x650031,DAT_1000fe9c,DAT_1000feac);
  uVar2 = 0xffffffed;
  while( true ) {
    if (*DAT_1000fe90 == iVar3) break;
    FUN_1013cdc0(uVar2);
LAB_1000fe88:
    uVar2 = 0;
  }
  return;
}

