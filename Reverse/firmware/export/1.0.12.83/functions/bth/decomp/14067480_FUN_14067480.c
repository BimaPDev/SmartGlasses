/* FUN_14067480 @ 0x14067480 */

void FUN_14067480(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 local_12 [3];
  
  local_12[0] = param_2;
  iVar1 = FUN_140670b4(0xff,*(undefined1 *)(param_1 + 4),*(undefined2 *)(param_1 + 2),DAT_140674b4);
  if (iVar1 == 0) {
    return;
  }
  FUN_14066334(0xff,*(undefined1 *)(param_1 + 4),*(undefined2 *)(param_1 + 2),iVar1,local_12);
  return;
}

