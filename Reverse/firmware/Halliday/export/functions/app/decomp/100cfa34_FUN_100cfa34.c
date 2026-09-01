/* FUN_100cfa34 @ 0x100cfa34 */

int FUN_100cfa34(int param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((uint)*(ushort *)(param_1 + 0x66) < param_3 + 1U) {
    FUN_100a5b78((DAT_100cfac4 - DAT_100cfac0) * 0x20 & 0xff00U | 0x19e0022,DAT_100cfacc,
                 DAT_100cfac8,(uint)*(ushort *)(param_1 + 0x66),param_3 + 1U,param_2,param_3);
    iVar4 = 0;
  }
  else {
    uVar5 = param_2;
    iVar4 = FUN_10134e80(param_2);
    if ((iVar4 == 2) || (iVar4 == 4)) {
      uVar2 = 30000;
      uVar3 = 0;
    }
    else {
      uVar2 = 0xffffffff;
      uVar3 = 0xffffffff;
    }
    iVar4 = FUN_1013401c(0,0,uVar2,uVar3,param_1);
    if (iVar4 == 0) {
      FUN_100a5b78((DAT_100cfac4 - DAT_100cfac0) * 0x20 & 0xff00U | 0x1ae0011,DAT_100cfacc,
                   DAT_100cfad0,param_2,param_1,uVar5,param_3);
    }
    else {
      puVar1 = (undefined1 *)FUN_100c1fe4(iVar4 + 8,1);
      *puVar1 = (char)param_2;
    }
  }
  return iVar4;
}

