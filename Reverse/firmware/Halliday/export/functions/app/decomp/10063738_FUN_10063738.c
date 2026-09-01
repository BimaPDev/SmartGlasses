/* FUN_10063738 @ 0x10063738 */

undefined4 FUN_10063738(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte local_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [8];
  
  iVar1 = DAT_10063808;
  uVar2 = 0;
  if (param_1 != 0) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else if (param_3 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_1011c59a(local_40,0x10,param_2);
      FUN_1011d3c2(local_40,param_3);
      iVar5 = param_3 + 0x10;
      do {
        iVar4 = 0x10;
        pbVar3 = local_40;
        do {
          iVar4 = iVar4 + -1;
          *pbVar3 = *(byte *)(iVar1 + (uint)*pbVar3);
          pbVar3 = pbVar3 + 1;
        } while (iVar4 != 0);
        FUN_1011d44c(local_40);
        FUN_1011d4be(auStack_30,local_40);
        FUN_1011d4be(auStack_2c,auStack_3c);
        FUN_1011d4be(auStack_28,auStack_38);
        FUN_1011d4be(auStack_24,auStack_34);
        FUN_1011c59a(local_40,0x10,auStack_30);
        iVar4 = iVar5 + 0x10;
        FUN_1011d3c2(local_40,iVar5);
        iVar5 = iVar4;
      } while (iVar4 != param_3 + 0xa0);
      iVar5 = 0x10;
      pbVar3 = local_40;
      do {
        iVar5 = iVar5 + -1;
        *pbVar3 = *(byte *)(iVar1 + (uint)*pbVar3);
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != 0);
      FUN_1011d44c(local_40);
      FUN_1011d3c2(local_40,param_3 + 0xa0);
      FUN_1011c59a(param_1,0x10,local_40);
      thunk_FUN_1011ea48(local_40,0,0x10);
      uVar2 = 1;
    }
  }
  return uVar2;
}

