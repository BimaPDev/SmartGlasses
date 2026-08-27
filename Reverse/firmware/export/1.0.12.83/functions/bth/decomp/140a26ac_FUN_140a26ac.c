/* FUN_140a26ac @ 0x140a26ac */

int * FUN_140a26ac(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_1402a6e8(4,0x164,DAT_140a2730,DAT_140a272c,DAT_140a2728,DAT_140a2724,param_1,param_2);
  uVar2 = param_1 + param_2 & 0xfffffffc;
  if (0x2f < uVar2 - param_1) {
    piVar1 = (int *)(param_1 + 3U & 0xfffffffc);
    *piVar1 = (int)(piVar1 + 7);
    uVar2 = uVar2 - 8;
    piVar1[4] = uVar2;
    *(uint *)(param_1 + 0x20) = uVar2 | 1;
    puVar3 = (undefined4 *)piVar1[4];
    *(undefined4 **)(param_1 + 0x24) = puVar3;
    *puVar3 = 1;
    *(undefined4 *)(piVar1[4] + 4) = 0;
    iVar4 = (param_2 & 0xfffffffc) - 0x2c;
    piVar1[5] = param_1 + 0x20U | 1;
    piVar1[6] = param_1 + 0x20U;
    piVar1[2] = iVar4;
    piVar1[3] = iVar4;
    piVar1[1] = param_2 & 0xfffffffc;
    return piVar1;
  }
  return (int *)0x0;
}

