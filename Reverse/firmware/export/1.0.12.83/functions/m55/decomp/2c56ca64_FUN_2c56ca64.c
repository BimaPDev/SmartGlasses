/* FUN_2c56ca64 @ 0x2c56ca64 */

int * FUN_2c56ca64(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = DAT_2c56cb14 + 0x28;
  *param_1 = DAT_2c56cb14;
  param_1[0x21] = iVar2;
  if (param_1[1] != 0) {
    FUN_2c6043d8();
    param_1[1] = 0;
  }
  iVar2 = param_1[0x1e];
  iVar5 = param_1[0x1f];
  param_1[0x11] = DAT_2c56cb18;
  uVar1 = DAT_2c56cb1c;
  if (iVar2 != iVar5) {
    iVar4 = iVar2 + 0x10;
    do {
      *(undefined4 *)(iVar4 + -0x10) = uVar1;
      iVar3 = iVar2 + 0x2c;
      bVar6 = *(int *)(iVar2 + 8) != iVar4;
      iVar4 = iVar4 + 0x2c;
      if (bVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      iVar2 = iVar3;
    } while (iVar5 != iVar3);
    iVar5 = param_1[0x1e];
  }
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,iVar5);
  }
  if ((int *)param_1[0x18] != param_1 + 0x1a) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((int *)param_1[0x12] != param_1 + 0x14) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (param_1[0x10] != 0) {
    thunk_FUN_2c669588();
  }
  if (param_1[0xf] != 0) {
    thunk_FUN_2c669588();
  }
  if (param_1[0xe] != 0) {
    thunk_FUN_2c669588();
  }
  if (param_1[0xd] != 0) {
    thunk_FUN_2c669588();
  }
  if (param_1[0xc] != 0) {
    thunk_FUN_2c669588();
  }
  if (param_1[0xb] != 0) {
    thunk_FUN_2c669588();
  }
  return param_1;
}

