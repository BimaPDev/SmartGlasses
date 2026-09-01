/* FUN_10122f62 @ 0x10122f62 */

uint FUN_10122f62(int *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(*param_1 + 0x10);
  uVar1 = FUN_10122322(iVar3);
  *(char *)(iVar3 + 2) = (char)uVar1;
  *(char *)(iVar3 + 3) = (char)((ushort)uVar1 >> 8);
  uVar4 = (uint)*(byte *)(iVar3 + 1);
  uVar2 = FUN_10122840(param_1,param_1[0x13]);
  while ((uVar2 == 0 && (uVar2 = FUN_10122662(*param_1,param_1[0xe]), uVar2 == 0))) {
    FUN_10122580(param_1[0xf],iVar3,0x20);
    *(undefined1 *)(*param_1 + 3) = 1;
    if (uVar4 == 0) break;
    uVar2 = FUN_10122d32(param_1,0);
    iVar3 = iVar3 + 0x20;
    uVar4 = uVar4 - 1;
  }
  if (1 < uVar2) {
    uVar2 = 2;
  }
  return uVar2 & 0xff;
}

