/* FUN_101077a0 @ 0x101077a0 */

void FUN_101077a0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar3 = (undefined4 *)param_1[0x4b];
  uVar4 = *(undefined4 *)(*param_1 + 100);
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = puVar3[2];
    puVar3[0x6f] = 0;
    FUN_100fb5cc(uVar1,puVar3[6]);
    puVar3[5] = 0;
    puVar3[6] = 0;
    FUN_100fb5cc(uVar1,puVar3[0x6e]);
    puVar3[0x6d] = 0;
    puVar3[0x6e] = 0;
    puVar3[0x6c] = 0;
    FUN_100fb5cc(uVar1,puVar3[99]);
    puVar3[0x62] = 0;
    puVar3[99] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    FUN_100fb5cc(uVar1,puVar3);
    param_1[0x4b] = 0;
  }
  FUN_100fb5cc(uVar4,param_1[0x3f]);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_100fb5cc(uVar4,param_1[0x41]);
  iVar2 = param_1[0x42];
  param_1[0x41] = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  if (iVar2 != 0) {
    FUN_100fb5cc(iVar2,param_1[0x49]);
    param_1[0x49] = 0;
    FUN_100fb5cc(iVar2,param_1[0x48]);
    param_1[0x48] = 0;
    FUN_100fb5cc(iVar2,param_1[0x46]);
    param_1[0x46] = 0;
    FUN_100fb5cc(iVar2,param_1[0x45]);
    param_1[0x45] = 0;
    FUN_100fb5cc(iVar2,param_1[0x47]);
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x47] = 0;
    param_1[0x44] = 0;
  }
  FUN_100fb5cc(uVar4,param_1[0x21]);
  param_1[0x21] = 0;
  FUN_100fb5cc(uVar4,param_1[0x24]);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x4c] = -1;
  param_1[0x4d] = -1;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}

