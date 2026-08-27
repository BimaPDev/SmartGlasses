/* FUN_2c53daf4 @ 0x2c53daf4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c53daf4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar2 = _LAB_2c53db88;
  puVar3 = (undefined4 *)param_1[0xd];
  if (param_1[1] != param_1[2]) {
    param_1[2] = param_1[1];
  }
  *param_1 = uVar2;
  for (; puVar3 != param_1 + 0xb; puVar3 = (undefined4 *)thunk_FUN_2c64e43a(puVar3)) {
    FUN_2c5315e0(puVar3 + 10);
  }
  iVar1 = param_1[0xc];
  while (iVar1 != 0) {
    FUN_2c53d948(*(undefined4 *)(iVar1 + 0xc));
    iVar4 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x10) != iVar1 + 0x18) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    thunk_FUN_2c669588(iVar1,0x2c);
    iVar1 = iVar4;
  }
  iVar1 = param_1[6];
  while (iVar1 != 0) {
    FUN_2c53d79c(*(undefined4 *)(iVar1 + 0xc));
    iVar4 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x14) != iVar1 + 0x1c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    thunk_FUN_2c669588(iVar1,0x2c);
    iVar1 = iVar4;
  }
  if (param_1[1] == 0) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

