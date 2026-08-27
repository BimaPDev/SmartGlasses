/* FUN_2c646f9c @ 0x2c646f9c */

undefined4 FUN_2c646f9c(byte *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort *puVar5;
  
  uVar4 = param_4;
  if ((param_1 == (byte *)0x0) || (uVar4 = (uint)*param_1, uVar4 != 0xf6)) {
    FUN_2c643b3c(param_1,0xfffffffc,param_3,uVar4,param_4);
    return 0xfffffffc;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_2c643b60(param_1,*(undefined2 *)(param_1 + 0xc));
    uVar3 = FUN_2c645b54(param_1);
    FUN_2c64621c(uVar3,0,1);
    FUN_2c643b54(param_1,*(undefined2 *)(param_1 + 0xc));
    return 0;
  }
  puVar5 = (ushort *)(param_1 + 0xc);
  do {
    ExclusiveAccess(puVar5);
    uVar1 = *puVar5;
    if (*(ushort *)(param_1 + 0xe) <= uVar1) {
      ClearExclusiveLocal();
      goto LAB_2c646fec;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar2);
  *puVar5 = uVar1 + 1;
LAB_2c646fec:
  if (uVar1 < *(ushort *)(param_1 + 0xe)) {
    FUN_2c643b60(param_1,*(undefined2 *)(param_1 + 0xc));
    return 0;
  }
  FUN_2c643b3c(param_1,0xffffffef,*(ushort *)(param_1 + 0xe),uVar1,param_4);
  return 0xfffffffd;
}

