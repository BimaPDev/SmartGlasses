/* FUN_100fb070 @ 0x100fb070 */

undefined2 FUN_100fb070(int *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_14 [4];
  
  uVar4 = param_1[1];
  iVar3 = param_1[2];
  *param_2 = 0;
  if (uVar4 <= iVar3 + 1U) {
LAB_100fb0a8:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    puVar2 = (undefined1 *)(*param_1 + iVar3);
    uVar1 = 0;
    if (puVar2 == (undefined1 *)0x0) goto LAB_100fb0a0;
  }
  else {
    iVar3 = (*(code *)param_1[5])(param_1,iVar3,local_14,2);
    if (iVar3 != 2) goto LAB_100fb0a8;
    iVar3 = param_1[2];
    puVar2 = local_14;
  }
  uVar1 = CONCAT11(*puVar2,puVar2[1]);
LAB_100fb0a0:
  param_1[2] = iVar3 + 2;
  return uVar1;
}

