/* FUN_100f1034 @ 0x100f1034 */

undefined4 FUN_100f1034(int param_1,short param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar4 = FUN_1013938e();
  iVar3 = DAT_100f1148;
  if (iVar4 == 0) {
    return 0xffffffea;
  }
  uVar5 = (int)(short)(param_2 + 1) & 0xfffffffe;
  if (((int)*(short *)(param_1 + 8) == uVar5) && (*(short *)(param_1 + 10) == param_3)) {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x14);
  FUN_1011dbf4(DAT_100f1148 + 0x6c,0xffffffff);
  if ((bVar1 & 0xd) != 8) {
    FUN_1011e50a(param_1 + 8,uVar5,param_3);
    goto LAB_100f1086;
  }
  iVar6 = param_1 + 8;
  iVar4 = FUN_1013d990(&local_28,iVar6,iVar3 + 8);
  if (iVar4 == 0) {
    FUN_1011e50a(iVar6,uVar5,param_3);
    iVar4 = FUN_1013d990(&local_28,iVar6,iVar3 + 8);
    if (iVar4 == 0) goto LAB_100f1086;
LAB_100f10d8:
    iVar4 = FUN_1013938e();
    puVar2 = DAT_100f1144;
    if (iVar4 == 0) {
      *DAT_100f1144 = local_28;
      puVar2[1] = uStack_24;
    }
    else {
      FUN_1011e51c(DAT_100f1144,DAT_100f1144,&local_28);
    }
  }
  else {
    iVar4 = FUN_1013938e();
    if (iVar4 == 0) {
      *(undefined4 *)(iVar3 + 0x10) = local_28;
      *(undefined4 *)(iVar3 + 0x14) = uStack_24;
    }
    else {
      FUN_1011e51c(iVar3 + 0x10,iVar3 + 0x10,&local_28);
    }
    FUN_1011e50a(iVar6,uVar5,param_3);
    iVar4 = FUN_1013d990(&local_28,iVar6,DAT_100f1140);
    if (iVar4 != 0) goto LAB_100f10d8;
  }
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | 1;
  *(byte *)(iVar3 + 0x62) = *(byte *)(iVar3 + 0x62) | 1;
LAB_100f1086:
  FUN_10113e2c(DAT_100f113c);
  return 0;
}

