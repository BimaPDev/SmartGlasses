/* FUN_1000a4cc @ 0x1000a4cc */

void FUN_1000a4cc(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = DAT_1000a584;
  iVar5 = *DAT_1000a580;
  *DAT_1000a584 = DAT_1000a588;
  *(undefined2 *)(puVar1 + 3) = 1;
  uVar4 = param_1;
  uVar2 = FUN_1000a894();
  *(undefined2 *)((int)puVar1 + 10) = uVar2;
  uVar2 = FUN_1000a864();
  *(undefined2 *)(puVar1 + 2) = uVar2;
  puVar1[4] = puVar1[4] | 1;
  FUN_10119dc2(DAT_1000a58c);
  FUN_10119dc2(DAT_1000a590,*(undefined2 *)((int)puVar1 + 10),*(undefined2 *)(puVar1 + 2),param_2,
               uVar4);
  if (param_2 == 0) {
    iVar3 = FUN_10132580(param_1,puVar1);
    if (iVar3 == 0) {
      FUN_10119dc2(DAT_1000a58c);
      uVar4 = DAT_1000a5a4;
      goto LAB_1000a556;
    }
    FUN_10119dc2(DAT_1000a594);
    uVar4 = DAT_1000a5a0;
  }
  else {
    iVar3 = FUN_1013255e();
    if (iVar3 == 0) goto LAB_1000a54e;
    if (iVar3 == -0x78) goto LAB_1000a54e;
    FUN_10119dc2(DAT_1000a594);
    uVar4 = DAT_1000a598;
  }
  FUN_10119dc2(uVar4,iVar3);
  while (*DAT_1000a580 != iVar5) {
    FUN_1013cdc0(iVar3 != 0);
LAB_1000a54e:
    FUN_10119dc2(DAT_1000a58c);
    uVar4 = DAT_1000a59c;
LAB_1000a556:
    FUN_10119dc2(uVar4);
  }
  return;
}

