/* FUN_1406d0c0 @ 0x1406d0c0 */

int FUN_1406d0c0(undefined4 param_1,int param_2,undefined1 *param_3,undefined4 param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = FUN_14068890(param_1,*(undefined1 *)(param_2 + 0x10),*(undefined2 *)(param_2 + 0x14),
                       param_3,param_4);
  if ((iVar2 == 0) && (param_5 != 0)) {
    *(undefined1 *)(param_2 + 0x1a) = *param_3;
    uVar1 = FUN_14069108(param_1,*(undefined1 *)(param_2 + 0x10));
    *(undefined2 *)(param_2 + 0x18) = uVar1;
    FUN_14058860(param_2 + 8,30000);
    *(int *)(param_2 + 0x1c) = param_5;
  }
  return iVar2;
}

