/* FUN_10133b08 @ 0x10133b08 */

undefined4
FUN_10133b08(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 extraout_r2;
  
  if ((*(char *)(param_1 + 1) == '\x02') && (*(char *)((int)param_1 + 0xd) == '\a')) {
    if ((*(byte *)(param_1 + 0x5a) & 0x1f) == 0) {
      uVar1 = 0xffffff88;
    }
    else if ((((*(byte *)(param_1 + 0x5a) & 0x1f) == 0x10) &&
             (iVar2 = FUN_101334c0(), (uint)(iVar2 - *(int *)(param_1 + 0x5c)) < 2000)) ||
            (((int)((uint)*(byte *)(param_1 + 0x5a) << 0x1a) < 0 &&
             (iVar2 = FUN_101334c0(), (uint)(iVar2 - *(int *)(param_1 + 0x5e)) < 2000)))) {
      uVar1 = 0xfffffff0;
    }
    else {
      *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) | 0x20;
      uVar1 = FUN_101334c0();
      *(undefined4 *)(param_1 + 0x5e) = uVar1;
      iVar2 = FUN_100c5d4c(0x804,2);
      if (iVar2 != 0) {
        puVar3 = (undefined2 *)FUN_100c1fe4(iVar2 + 8,2);
        *puVar3 = *param_1;
        uVar1 = FUN_100c756c(0x804,iVar2,extraout_r2,param_4);
        return uVar1;
      }
      uVar1 = 0xfffffff4;
    }
  }
  else {
    uVar1 = 0xfffffffb;
  }
  return uVar1;
}

