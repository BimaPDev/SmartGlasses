/* FUN_10009990 @ 0x10009990 */

int FUN_10009990(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = DAT_10009a50;
  iVar5 = *DAT_10009a4c;
  DAT_10009a50[1] = DAT_10009a54;
  *puVar1 = DAT_10009a58;
  *(undefined2 *)(puVar1 + 3) = 1;
  uVar4 = param_1;
  uVar2 = FUN_10009b50();
  *(undefined2 *)((int)puVar1 + 10) = uVar2;
  uVar2 = FUN_10009b20();
  *(undefined2 *)(puVar1 + 2) = uVar2;
  puVar1[4] = puVar1[4] | 1;
  FUN_10119dc2(DAT_10009a5c);
  FUN_10119dc2(DAT_10009a60,*(undefined2 *)((int)puVar1 + 10),*(undefined2 *)(puVar1 + 2),param_2,
               uVar4);
  if (param_2 == 0) {
    iVar3 = FUN_10132580(param_1,puVar1);
    if (iVar3 == 0) {
      *DAT_10009a6c = 0;
      FUN_10119dc2(DAT_10009a64);
      uVar4 = DAT_10009a78;
      goto LAB_10009a1e;
    }
    FUN_10119dc2(DAT_10009a64);
    uVar4 = DAT_10009a74;
  }
  else {
    iVar3 = FUN_1013255e();
    if (iVar3 == 0) goto LAB_10009a10;
    if (iVar3 == -0x78) goto LAB_10009a10;
    FUN_10119dc2(DAT_10009a64);
    uVar4 = DAT_10009a68;
  }
  FUN_10119dc2(uVar4,iVar3);
  while (*DAT_10009a4c != iVar5) {
    FUN_1013cdc0();
LAB_10009a10:
    uVar4 = DAT_10009a64;
    *DAT_10009a6c = 1;
    FUN_10119dc2(uVar4);
    uVar4 = DAT_10009a70;
LAB_10009a1e:
    FUN_10119dc2(uVar4);
  }
  return iVar3;
}

