/* FUN_2c52e934 @ 0x2c52e934 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c52e934(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  int iStack_44;
  undefined4 auStack_40 [4];
  int *piStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar2 = _LAB_2c52ea6c;
  iStack_24 = *_LAB_2c52ea60;
  *param_1 = _LAB_2c52ea6c;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[1] = param_1 + 3;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_1;
  param_1[0xb] = 0;
  param_1[0xc] = param_1;
  func_0x2c56332c(&uStack_4c,param_2,0);
  puVar3 = (undefined4 *)param_1[1];
  if (puStack_48 == auStack_40) {
    if (iStack_44 != 0) {
      if (iStack_44 == 1) {
        *(undefined1 *)puVar3 = (undefined1)auStack_40[0];
        puVar3 = (undefined4 *)param_1[1];
      }
      else {
        FUN_2c674668(puVar3,auStack_40);
        puVar3 = (undefined4 *)param_1[1];
      }
    }
    param_1[2] = iStack_44;
    *(undefined1 *)((int)puVar3 + iStack_44) = 0;
  }
  else if (param_1 + 3 == puVar3) {
    param_1[1] = puStack_48;
    param_1[2] = iStack_44;
    param_1[3] = auStack_40[0];
    puStack_48 = auStack_40;
  }
  else {
    param_1[1] = puStack_48;
    param_1[2] = iStack_44;
    uVar4 = param_1[3];
    param_1[3] = auStack_40[0];
    puStack_48 = auStack_40;
    if (puVar3 != (undefined4 *)0x0) {
      puStack_48 = puVar3;
      auStack_40[0] = uVar4;
    }
  }
  iStack_44 = 0;
  *(undefined1 *)puStack_48 = 0;
  uVar4 = uStack_28;
  piVar5 = piStack_2c;
  piVar7 = (int *)param_1[7];
  piVar6 = (int *)param_1[8];
  param_1[7] = piStack_30;
  piStack_30 = (int *)0x0;
  piStack_2c = (int *)0x0;
  uStack_28 = 0;
  param_1[9] = uVar4;
  param_1[8] = piVar5;
  piVar1 = piStack_2c;
  for (piVar5 = piVar7; piStack_2c = piVar1, piVar5 != piVar6; piVar5 = piVar5 + 0x2f) {
    (**(code **)(*piVar5 + 4))(piVar5);
    piVar1 = piStack_2c;
  }
  uStack_4c = uVar2;
  uVar2 = _DAT_2c52ea68;
  piVar5 = piVar1;
  piVar6 = piStack_30;
  if (piVar7 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar7);
  }
  for (; _DAT_2c52ea68 = uVar2, piVar6 != piVar1; piVar6 = piVar6 + 0x2f) {
    (**(code **)(*piVar6 + 4))(piVar6);
    uVar2 = _DAT_2c52ea68;
    piVar5 = piStack_30;
  }
  if (piVar5 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar5);
  }
  if (puStack_48 != auStack_40) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  param_1[0xd] = _DAT_2c52ea64;
  piVar5 = _LAB_2c52ea60;
  param_1[0xb] = uVar2;
  if (*piVar5 != iStack_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

