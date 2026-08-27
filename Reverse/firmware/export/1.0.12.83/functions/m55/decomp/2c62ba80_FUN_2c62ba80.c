/* FUN_2c62ba80 @ 0x2c62ba80 */

void FUN_2c62ba80(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar6;
  undefined1 *puVar5;
  
  if (param_1 != 0) {
    if ((param_3 != 0) && (iVar1 = FUN_2c66c4ec(param_3), iVar1 != 0)) {
      iVar2 = FUN_2c66c4ec(param_1);
      iVar3 = (*(code *)*DAT_2c62bae8)(param_1,param_2);
      if ((undefined1 *)(iVar1 + iVar3) <= (undefined1 *)(iVar2 + iVar1)) {
        puVar6 = (undefined1 *)(iVar2 + iVar1) + param_1 + 1;
        puVar5 = (undefined1 *)(param_1 + iVar2);
        do {
          puVar4 = puVar5 + -1;
          puVar6 = puVar6 + -1;
          *puVar6 = *puVar5;
          puVar5 = puVar4;
        } while ((undefined1 *)(iVar1 + iVar3) <= puVar4 + (iVar1 - param_1));
      }
      puVar6 = (undefined1 *)(param_3 + -1);
      puVar5 = (undefined1 *)(param_1 + iVar3);
      do {
        puVar6 = puVar6 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = *puVar6;
        puVar5 = puVar4;
      } while ((undefined1 *)(param_1 + iVar3) + iVar1 != puVar4);
    }
    return;
  }
  return;
}

