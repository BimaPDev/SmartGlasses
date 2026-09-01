/* FUN_10133a74 @ 0x10133a74 */

undefined4
FUN_10133a74(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  
  if ((*(char *)(param_1 + 1) == '\x02') && (*(char *)((int)param_1 + 0xd) == '\a')) {
    if (((*(byte *)(param_1 + 0x5a) & 0xf) == 2) ||
       (((int)((uint)*(byte *)(param_1 + 0x5a) << 0x1b) < 0 &&
        (iVar3 = FUN_101334c0(), (uint)(iVar3 - *(int *)(param_1 + 0x5c)) < 2000)))) {
      uVar2 = 0;
    }
    else {
      *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) | 0x10;
      uVar2 = FUN_101334c0();
      *(undefined4 *)(param_1 + 0x5c) = uVar2;
      iVar3 = FUN_100c5d4c(0x803,10);
      if (iVar3 != 0) {
        puVar4 = (undefined2 *)FUN_100c1fe4(iVar3 + 8,10);
        uVar1 = *param_1;
        *(undefined1 *)(puVar4 + 3) = 4;
        *puVar4 = uVar1;
        puVar4[1] = param_3;
        puVar4[2] = param_2;
        *(undefined1 *)((int)puVar4 + 7) = 0;
        *(undefined1 *)((int)puVar4 + 9) = 0;
        *(undefined1 *)(puVar4 + 4) = 1;
        uVar2 = FUN_100c756c(0x803,iVar3,1,param_4);
        return uVar2;
      }
      uVar2 = 0xfffffff4;
    }
  }
  else {
    uVar2 = 0xfffffffb;
  }
  return uVar2;
}

