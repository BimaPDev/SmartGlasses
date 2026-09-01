/* FUN_101335d6 @ 0x101335d6 */

undefined4
FUN_101335d6(undefined2 *param_1,undefined4 *param_2,undefined2 *param_3,undefined4 param_4,
            uint param_5)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_100c5d4c(0x2019,0x1c);
  if (iVar1 != 0) {
    puVar2 = (undefined2 *)FUN_100c1fe4(iVar1 + 8,0x1c);
    *puVar2 = *param_1;
    *(undefined4 *)(puVar2 + 1) = *param_2;
    *(undefined4 *)(puVar2 + 3) = param_2[1];
    puVar2[5] = *param_3;
    FUN_1011ea40(puVar2 + 6,param_4,param_5);
    if (param_5 < 0x10) {
      FUN_1011ea48((int)(puVar2 + 6) + param_5,0,0x10 - param_5);
    }
    uVar3 = FUN_100c5e48(0x2019,iVar1,0);
    return uVar3;
  }
  return 0xffffff97;
}

