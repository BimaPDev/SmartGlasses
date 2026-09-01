/* FUN_1000a6b0 @ 0x1000a6b0 */

void FUN_1000a6b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  ushort uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  int iVar8;
  ushort uVar9;
  
  pbVar2 = DAT_1000a724;
  uVar9 = (ushort)*DAT_1000a724;
  iVar8 = *DAT_1000a728;
  if (uVar9 == 0) goto LAB_1000a6e2;
  FUN_10119dc2(DAT_1000a72c,param_2,param_3,0);
  FUN_10119dc2(DAT_1000a730);
  uVar4 = 0;
  while (*DAT_1000a728 != iVar8) {
    FUN_1013cdc0(uVar4);
    param_2 = extraout_r1;
    param_3 = extraout_r2;
LAB_1000a6e2:
    puVar3 = DAT_1000a734;
    DAT_1000a734[2] = param_2;
    *(short *)(puVar3 + 3) = (short)param_3;
    uVar5 = FUN_1000a8c0();
    uVar7 = DAT_1000a738;
    *(undefined2 *)(puVar3 + 1) = uVar5;
    *(ushort *)((int)puVar3 + 6) = uVar9;
    *puVar3 = uVar7;
    iVar6 = FUN_1013253c(param_4,puVar3);
    uVar7 = DAT_1000a73c;
    uVar4 = uVar9;
    if (iVar6 == 0) {
      uVar4 = 1;
      *pbVar2 = 1;
      FUN_10119dc2(uVar7);
      bVar1 = *pbVar2;
      uVar7 = FUN_1000a8c0();
      FUN_10119dc2(DAT_1000a740,bVar1,uVar7);
      uVar9 = uVar4;
    }
  }
  return;
}

