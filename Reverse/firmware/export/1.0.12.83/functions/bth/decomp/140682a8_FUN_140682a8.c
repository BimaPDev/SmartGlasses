/* FUN_140682a8 @ 0x140682a8 */

void FUN_140682a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  iVar2 = FUN_1406d034();
  if (iVar2 != 0) {
    if (param_5 != 0) {
      uVar5 = *(byte *)((uint)*(ushort *)(param_5 + 6) + param_5 + 0x30) & 0x3f;
      iVar3 = FUN_14066098(*(undefined1 *)(iVar2 + 0x13));
      if ((iVar3 != 0) &&
         (puVar4 = (undefined4 *)FUN_14066108(*(undefined1 *)(iVar2 + 0x13)),
         puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)
                  (param_1,*(undefined1 *)(iVar2 + 0x13),*(undefined2 *)(iVar2 + 0x16),param_4);
      }
      if (uVar5 < 0x24) {
        uVar1 = *(ushort *)(DAT_14068320 + uVar5 * 8 + 4);
        if (uVar1 < *(ushort *)(param_5 + 4)) {
          FUN_140736fc(param_5,uVar1 + 1);
        }
      }
    }
    FUN_1406d210(param_1,iVar2,3,param_4);
    return;
  }
  return;
}

