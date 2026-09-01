/* FUN_10035220 @ 0x10035220 */

undefined4 FUN_10035220(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint in_fpscr;
  undefined4 uVar6;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24 [2];
  
  local_24[0] = *DAT_10035358;
  uVar5 = (DAT_1003535c - DAT_10035360) * 0x20 & 0xff00;
  if (param_1 != 0) goto LAB_10035266;
  FUN_100a5b78(uVar5 | 0x3a80011,DAT_10035368,DAT_10035364);
  uVar6 = DAT_1003536c;
  while (*DAT_10035358 != local_24[0]) {
    FUN_1013cdc0();
LAB_10035266:
    local_40 = 0;
    uStack_3c = 0;
    local_38 = 0;
    FUN_1011ea48(&local_34,0,0x10);
    FUN_10033ec4(10000,0);
    iVar1 = FUN_10034e64(&local_40,param_1);
    if (iVar1 == 0) {
      FUN_1006bd24(&local_40,0,0);
      iVar1 = FUN_1006bc84(&local_40,&local_34,0x10);
      if (iVar1 != 0x10) {
        FUN_100a5b78(uVar5 | 0x3b80012,DAT_10035368,DAT_10035370,param_1,iVar1);
        FUN_1011ea48(&local_34,0,0x10);
      }
    }
    uVar2 = FUN_1003507c(param_1);
    if (local_30 != uVar2) {
      local_34 = 0;
      local_2c = 0;
      local_30 = uVar2;
      local_28 = DAT_10035374;
    }
    uVar6 = DAT_1003536c;
    if (local_30 != 0) {
      uVar6 = VectorUnsignedToFloat((uint)(local_34 * 100) / local_30,(byte)(in_fpscr >> 0x16) & 3);
    }
    piVar4 = &local_34;
    do {
      iVar1 = *piVar4;
      iVar3 = piVar4[1];
      piVar4 = piVar4 + 2;
      *param_2 = iVar1;
      param_2[1] = iVar3;
      param_2 = param_2 + 2;
    } while (piVar4 != local_24);
    FUN_1006bc30(&local_40);
    FUN_10033e94();
    FUN_10003a58(uVar6);
    param_2 = (int *)(DAT_10035378 | uVar5);
    FUN_100a5b78(param_2,DAT_10035368,DAT_1003537c,param_1,uVar2,local_2c,local_34);
  }
  return uVar6;
}

