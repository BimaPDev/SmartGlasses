/* FUN_10133846 @ 0x10133846 */

undefined4
FUN_10133846(undefined2 *param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_100c5d4c(0x2013,0xe);
  if (iVar1 != 0) {
    puVar2 = (undefined2 *)FUN_100c1fe4(iVar1 + 8,0xe);
    FUN_1011ea48(puVar2,0,0xe);
    *puVar2 = *param_1;
    puVar2[1] = *param_2;
    puVar2[2] = param_2[1];
    puVar2[3] = param_2[2];
    puVar2[4] = param_2[3];
    uVar3 = FUN_100c5e48(0x2013,iVar1,0,param_4);
    return uVar3;
  }
  return 0xffffff97;
}

