/* FUN_1406a740 @ 0x1406a740 */

void FUN_1406a740(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_14066108(param_2);
  if (iVar1 != 0) {
    iVar2 = FUN_1406d4e0();
    FUN_140680a4(*(undefined2 *)(iVar2 + 0x2a),param_3,param_1,*(undefined2 *)(iVar1 + 4),param_2,
                 param_4);
  }
  return;
}

