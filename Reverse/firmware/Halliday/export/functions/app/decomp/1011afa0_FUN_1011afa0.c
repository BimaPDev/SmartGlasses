/* FUN_1011afa0 @ 0x1011afa0 */

void FUN_1011afa0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 local_1c [4];
  
  iVar1 = *(int *)(param_1 + 8);
  if ((*(int *)(iVar1 + 0x260) << 0x1e < 0) && (*(byte *)(iVar1 + 0x2e) != param_2)) {
    local_1c[0] = *(undefined2 *)(iVar1 + 0x2e);
    FUN_100598fc();
    FUN_100593bc(*(undefined4 *)(param_1 + 0x14),param_3,param_4);
    FUN_10059944(param_1,local_1c);
  }
  else {
    FUN_100593bc(*(undefined4 *)(param_1 + 0x14),param_3);
  }
  return;
}

