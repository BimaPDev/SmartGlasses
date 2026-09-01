/* FUN_10082294 @ 0x10082294 */

undefined4 FUN_10082294(undefined4 param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_10061948();
  pcVar1 = DAT_1008231c;
  if (*DAT_1008231c != '\0') {
    FUN_10119dc2(DAT_10082320);
    iVar3 = FUN_10122088(DAT_10082324,0xe00);
    if (*DAT_10082328 != iVar3) {
      FUN_10119dc2(DAT_1008232c,*DAT_10082328,iVar3);
      return 0xffffffff;
    }
    *pcVar1 = '\0';
    FUN_1013cbb6(DAT_10082334,DAT_10082330,1000,0);
  }
  iVar3 = FUN_10082018(param_1);
  uVar4 = DAT_10082338;
  if ((iVar3 == 0) && (iVar3 = FUN_1011ff14(param_1), uVar4 = DAT_1008233c, iVar3 == 0)) {
    if (*DAT_10082340 != '\0') {
      *DAT_10082340 = '\0';
    }
    *DAT_10082344 = 1;
    iVar3 = FUN_10061948();
    FUN_10119dc2(DAT_10082348,(uint)(iVar3 - iVar2) >> 5);
    return 0;
  }
  FUN_10119dc2(uVar4);
  return 0xffffffff;
}

