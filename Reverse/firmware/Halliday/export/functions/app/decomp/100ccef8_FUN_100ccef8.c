/* FUN_100ccef8 @ 0x100ccef8 */

int FUN_100ccef8(undefined4 param_1,undefined2 param_2,int param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  
  uVar1 = *(ushort *)(param_3 + 0x14);
  iVar4 = FUN_100d023c(30000,0);
  iVar6 = uVar1 + 2;
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0xc) = 0;
    uVar3 = DAT_100ccf98;
    *(int *)(iVar4 + 0x14) = iVar6;
    *(undefined1 *)(iVar4 + 0x11) = 0x1d;
    *(undefined4 *)(iVar4 + 4) = uVar3;
    *(int *)(iVar4 + 0x18) = param_3;
    iVar6 = FUN_100cfd10(param_1,0x1d,iVar6);
    if (iVar6 != 0) {
      puVar5 = (undefined2 *)FUN_100c1fe4(iVar6 + 8,2);
      uVar2 = *(undefined2 *)(param_3 + 0x14);
      *puVar5 = param_2;
      FUN_100c1fe4(iVar6 + 8,uVar2);
      FUN_1011ea40(puVar5 + 1,*(undefined4 *)(param_3 + 0x10),*(undefined2 *)(param_3 + 0x14));
      *(int *)(iVar4 + 8) = iVar6;
      iVar6 = FUN_100d05b8(param_1,iVar4);
      if (iVar6 == 0) {
        return 0;
      }
      FUN_100d0268(iVar4);
      return iVar6;
    }
    FUN_100a5b78(DAT_100ccfa4 | (DAT_100ccfa0 - DAT_100ccf9c) * 0x20 & 0xff00U,DAT_100ccfac,
                 DAT_100ccfa8);
    FUN_100d0268(iVar4);
  }
  return -0xc;
}

