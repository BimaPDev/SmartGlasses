/* FUN_1406a9b8 @ 0x1406a9b8 */

undefined2 FUN_1406a9b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    puVar3 = (undefined2 *)0x0;
  }
  else {
    puVar3 = (undefined2 *)(*(ushort *)(iVar2 + 6) + 0x30 + iVar2);
  }
  uVar1 = *puVar3;
  FUN_140736fc(iVar2,2,param_3,puVar3,param_4);
  if ((*(int *)(param_1 + 0x18) == 0) || (*(short *)(*(int *)(param_1 + 0x18) + 4) == 0)) {
    FUN_140735a8();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return uVar1;
}

