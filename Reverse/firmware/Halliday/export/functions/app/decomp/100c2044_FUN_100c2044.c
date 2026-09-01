/* FUN_100c2044 @ 0x100c2044 */

int FUN_100c2044(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,code *param_7,undefined4 param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_3;
  iVar1 = FUN_100c1d54();
  iVar3 = 0;
  while( true ) {
    uVar2 = FUN_10132790(iVar1 + 8);
    if (param_2 < uVar2) {
      uVar2 = param_2;
    }
    uVar2 = uVar2 & 0xffff;
    FUN_101327a0(iVar1 + 8,param_3);
    param_2 = param_2 - uVar2;
    param_3 = param_3 + uVar2;
    iVar3 = iVar3 + uVar2;
    if (param_2 == 0) {
      return iVar3;
    }
    if (param_7 == (code *)0x0) {
      iVar1 = FUN_100c19e4((uint)*(byte *)(param_1 + 6) * 0x2c + DAT_100c20c0,param_2,param_5,
                           param_6,param_3,uVar2,iVar4);
    }
    else {
      iVar1 = (*param_7)(param_5,param_6,param_8);
    }
    if (iVar1 == 0) break;
    FUN_100c1df0(param_1,iVar1);
  }
  return iVar3;
}

