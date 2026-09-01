/* FUN_1000a5a8 @ 0x1000a5a8 */

void FUN_1000a5a8(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = DAT_1000a660;
  iVar5 = *DAT_1000a65c;
  *DAT_1000a660 = DAT_1000a664;
  *(undefined2 *)(puVar1 + 3) = 1;
  uVar4 = param_1;
  uVar2 = FUN_1000a920();
  *(undefined2 *)((int)puVar1 + 10) = uVar2;
  uVar2 = FUN_1000a8f0();
  *(undefined2 *)(puVar1 + 2) = uVar2;
  puVar1[4] = puVar1[4] | 1;
  FUN_10119dc2(DAT_1000a668);
  FUN_10119dc2(DAT_1000a66c,*(undefined2 *)((int)puVar1 + 10),*(undefined2 *)(puVar1 + 2),param_2,
               uVar4);
  if (param_2 == 0) {
    iVar3 = FUN_10132580(param_1,puVar1);
    if (iVar3 == 0) {
      FUN_10119dc2(DAT_1000a668);
      uVar4 = DAT_1000a680;
      goto LAB_1000a632;
    }
    FUN_10119dc2(DAT_1000a670);
    uVar4 = DAT_1000a67c;
  }
  else {
    iVar3 = FUN_1013255e();
    if (iVar3 == 0) goto LAB_1000a62a;
    if (iVar3 == -0x78) goto LAB_1000a62a;
    FUN_10119dc2(DAT_1000a670);
    uVar4 = DAT_1000a674;
  }
  FUN_10119dc2(uVar4,iVar3);
  while (*DAT_1000a65c != iVar5) {
    FUN_1013cdc0(iVar3 != 0);
LAB_1000a62a:
    FUN_10119dc2(DAT_1000a668);
    uVar4 = DAT_1000a678;
LAB_1000a632:
    FUN_10119dc2(uVar4);
  }
  return;
}

