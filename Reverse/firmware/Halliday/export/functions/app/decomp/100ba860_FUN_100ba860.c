/* FUN_100ba860 @ 0x100ba860 */

undefined4 FUN_100ba860(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 extraout_r2;
  int iVar5;
  
  iVar5 = (uint)*(byte *)(DAT_100ba870 + 1) << 0x1e;
  if (iVar5 < 0) {
    uVar2 = FUN_10136444();
    uVar3 = FUN_10132658(param_1);
    FUN_10136462(uVar2);
    return uVar3;
  }
  iVar1 = FUN_100728f4(param_1,param_2,param_1);
  if (iVar1 != 0) {
    puVar4 = (undefined1 *)*DAT_10072938;
    *puVar4 = 0x30;
    puVar4[3] = extraout_r2;
    puVar4[1] = 0xfc;
    puVar4[2] = 1;
    uVar2 = FUN_1007172c(1,puVar4,4,iVar5);
    return uVar2;
  }
  return 0xfffffffb;
}

