/* FUN_101358ac @ 0x101358ac */

undefined4
FUN_101358ac(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  iVar1 = FUN_10135838(param_1,0xd,param_3,param_4,param_4);
  if (iVar1 == 0) {
    uVar3 = 8;
  }
  else {
    puVar2 = (undefined4 *)FUN_100c1fe4(iVar1 + 8,0x10);
    puVar5 = param_2 + 4;
    do {
      uVar3 = *param_2;
      uVar4 = param_2[1];
      param_2 = param_2 + 2;
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2 = puVar2 + 2;
    } while (param_2 != puVar5);
    FUN_10135546(param_1,iVar1,0);
    uVar3 = 0;
  }
  return uVar3;
}

