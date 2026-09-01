/* FUN_100ccfb0 @ 0x100ccfb0 */

int FUN_100ccfb0(undefined4 param_1,undefined2 param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  
  iVar2 = FUN_100cc790();
  if ((iVar2 == 0) || (-1 < (int)((uint)*(byte *)(iVar2 + 8) << 0x1d))) goto LAB_100ccfea;
  iVar3 = FUN_100ca700(param_1);
  iVar2 = DAT_100cd0d0;
  iVar4 = *(int *)(DAT_100cd0d0 + iVar3 * 4);
  if (iVar4 == 0) {
LAB_100ccfd6:
    iVar4 = FUN_100cfd10(param_1,0x23,*(ushort *)(param_3 + 0xc) + 4);
    *(int *)(iVar2 + iVar3 * 4) = iVar4;
    if (iVar4 == 0) goto LAB_100ccfea;
    *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(param_3 + 0x14);
  }
  else {
    uVar5 = FUN_10132790(iVar4 + 8);
    if (((uVar5 < *(ushort *)(param_3 + 0xc) + 4) ||
        (iVar4 = *(int *)(iVar2 + iVar3 * 4), *(int *)(iVar4 + 0x14) != *(int *)(param_3 + 0x10)))
       || (*(int *)(iVar4 + 0x18) != *(int *)(param_3 + 0x14))) {
      iVar4 = FUN_10134596(param_1,iVar2 + iVar3 * 4);
      if (iVar4 < 0) {
        if (iVar4 != -0xc) {
          return iVar4;
        }
        goto LAB_100ccfea;
      }
      if (*(int *)(iVar2 + iVar3 * 4) == 0) goto LAB_100ccfd6;
    }
  }
  puVar6 = (undefined2 *)FUN_100c1fe4(*(int *)(iVar2 + iVar3 * 4) + 8,4);
  uVar1 = *(undefined2 *)(param_3 + 0xc);
  *puVar6 = param_2;
  puVar6[1] = uVar1;
  FUN_100c1fe4(*(int *)(iVar2 + iVar3 * 4) + 8);
  FUN_1011ea40(puVar6 + 2,*(undefined4 *)(param_3 + 8),*(undefined2 *)(param_3 + 0xc));
  FUN_101144f8(DAT_100cd0e8);
LAB_100ccfea:
  iVar2 = FUN_100cfd10(param_1,0x1b,*(ushort *)(param_3 + 0xc) + 2);
  if (iVar2 == 0) {
    FUN_100a5b78(DAT_100cd0dc | (DAT_100cd0d8 - DAT_100cd0d4) * 0x20 & 0xff00U,DAT_100cd0e4,
                 DAT_100cd0e0);
    return -0xc;
  }
  puVar6 = (undefined2 *)FUN_100c1fe4(iVar2 + 8,2);
  uVar1 = *(undefined2 *)(param_3 + 0xc);
  *puVar6 = param_2;
  FUN_100c1fe4(iVar2 + 8,uVar1);
  FUN_1011ea40(puVar6 + 1,*(undefined4 *)(param_3 + 8),*(undefined2 *)(param_3 + 0xc));
  iVar2 = FUN_100d04d8(param_1,iVar2,*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14)
                      );
  return iVar2;
}

