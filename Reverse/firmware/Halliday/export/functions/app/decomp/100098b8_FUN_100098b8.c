/* FUN_100098b8 @ 0x100098b8 */

int FUN_100098b8(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = DAT_1000996c;
  iVar5 = *DAT_10009968;
  *DAT_1000996c = DAT_10009970;
  *(undefined2 *)(puVar1 + 3) = 1;
  uVar4 = param_1;
  uVar2 = FUN_10009af4();
  *(undefined2 *)((int)puVar1 + 10) = uVar2;
  uVar2 = FUN_10009ac4();
  *(undefined2 *)(puVar1 + 2) = uVar2;
  puVar1[4] = puVar1[4] | 1;
  FUN_10119dc2(DAT_10009974);
  FUN_10119dc2(DAT_10009978,*(undefined2 *)((int)puVar1 + 10),*(undefined2 *)(puVar1 + 2),param_2,
               uVar4);
  if (param_2 == 0) {
    iVar3 = FUN_10132580(param_1,puVar1);
    if (iVar3 == 0) {
      FUN_10119dc2(DAT_10009974);
      uVar4 = DAT_1000998c;
      goto LAB_1000993c;
    }
    FUN_10119dc2(DAT_1000997c);
    uVar4 = DAT_10009988;
  }
  else {
    iVar3 = FUN_1013255e();
    if (iVar3 == 0) goto LAB_10009934;
    if (iVar3 == -0x78) goto LAB_10009934;
    FUN_10119dc2(DAT_1000997c);
    uVar4 = DAT_10009980;
  }
  FUN_10119dc2(uVar4,iVar3);
  while (*DAT_10009968 != iVar5) {
    FUN_1013cdc0();
LAB_10009934:
    FUN_10119dc2(DAT_10009974);
    uVar4 = DAT_10009984;
LAB_1000993c:
    FUN_10119dc2(uVar4);
  }
  return iVar3;
}

