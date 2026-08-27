/* FUN_14094d20 @ 0x14094d20 */

undefined4 FUN_14094d20(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_14096b4c();
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x18), iVar1 != 0)) {
    FUN_140755e4();
    *(undefined2 *)(iVar1 + 0x18) = *param_2;
    *(undefined2 *)(iVar1 + 0x1a) = param_2[1];
    *(undefined2 *)(iVar1 + 0x1c) = param_2[2];
    *(undefined2 *)(iVar1 + 0x1e) = param_2[3];
    FUN_1407561c();
    return 0;
  }
  return 0xe;
}

