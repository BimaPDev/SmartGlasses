/* FUN_2c14185c @ 0x2c14185c */

undefined4 FUN_2c14185c(byte *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  ushort *puVar4;
  uint uVar5;
  
  uVar5 = param_4;
  if ((param_1 == (byte *)0x0) || (uVar5 = (uint)*param_1, uVar5 != 0xf6)) {
    FUN_2c13eec0(param_1,0xfffffffc,param_3,uVar5,param_4);
    return 0xfffffffc;
  }
  if (*(int *)(param_1 + 8) != 0) {
    func_0x2c13eee4(param_1,*(undefined2 *)(param_1 + 0xc));
    uVar3 = FUN_2c14089c(param_1);
    FUN_2c140ec8(uVar3,0,1);
    FUN_2c13eed8(param_1,*(undefined2 *)(param_1 + 0xc));
    return 0;
  }
  puVar4 = (ushort *)(param_1 + 0xc);
  do {
    ExclusiveAccess(puVar4);
    uVar1 = *puVar4;
    if (*(ushort *)(param_1 + 0xe) <= uVar1) {
      ClearExclusiveLocal();
      goto LAB_2c1418ac;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar2);
  *puVar4 = uVar1 + 1;
LAB_2c1418ac:
  if (uVar1 < *(ushort *)(param_1 + 0xe)) {
    func_0x2c13eee4(param_1,*(undefined2 *)(param_1 + 0xc));
    return 0;
  }
  FUN_2c13eec0(param_1,0xffffffef,*(ushort *)(param_1 + 0xe),uVar1,param_4);
  return 0xfffffffd;
}

