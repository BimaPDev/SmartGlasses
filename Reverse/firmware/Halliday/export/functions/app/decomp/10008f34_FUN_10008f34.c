/* FUN_10008f34 @ 0x10008f34 */

uint FUN_10008f34(undefined4 param_1,undefined2 param_2,uint param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ushort uVar7;
  ushort extraout_r3;
  int iVar8;
  byte *unaff_r8;
  
  iVar8 = *DAT_10008fc8;
  piVar3 = (int *)FUN_1000afdc();
  pbVar2 = DAT_10008fe8;
  iVar4 = *piVar3;
  if (iVar4 == 0) {
    param_3 = 0xffffffea;
  }
  else {
    uVar7 = (ushort)*DAT_10008fe8;
    unaff_r8 = DAT_10008fe8;
    if (*DAT_10008fe8 == 0) goto LAB_10008f7c;
    FUN_10119dc2(DAT_10008fcc);
    FUN_10119dc2(DAT_10008fd0,param_3);
    param_3 = 0xfffffff0;
    unaff_r8 = pbVar2;
  }
  while( true ) {
    if (*DAT_10008fc8 == iVar8) break;
    iVar4 = FUN_1013cdc0();
    uVar7 = extraout_r3;
LAB_10008f7c:
    puVar1 = DAT_10008fd4;
    *(ushort *)((int)DAT_10008fd4 + 0xe) = uVar7;
    *(ushort *)((int)puVar1 + 6) = uVar7;
    uVar5 = DAT_10008fd8;
    *(short *)(puVar1 + 1) = (short)param_3;
    puVar1[2] = param_1;
    *(undefined2 *)(puVar1 + 3) = param_2;
    *puVar1 = uVar5;
    param_3 = FUN_1013253c(iVar4,puVar1);
    uVar5 = DAT_10008fe0;
    if (param_3 == 0) {
      *unaff_r8 = 1;
      FUN_10119dc2(uVar5);
      uVar6 = (uint)*(ushort *)(puVar1 + 1);
      uVar5 = DAT_10008fe4;
    }
    else {
      FUN_10119dc2(DAT_10008fcc);
      uVar5 = DAT_10008fdc;
      uVar6 = param_3;
    }
    FUN_10119dc2(uVar5,uVar6);
  }
  return param_3;
}

