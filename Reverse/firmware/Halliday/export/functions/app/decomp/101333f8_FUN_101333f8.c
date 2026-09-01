/* FUN_101333f8 @ 0x101333f8 */

undefined4 FUN_101333f8(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [180];
  
  FUN_100c9aac(auStack_d0,param_1);
  iVar2 = FUN_10063690(auStack_c0,auStack_d0);
  if (iVar2 != 0) {
    FUN_100c9aac(auStack_d0,param_2);
    iVar2 = FUN_10063738(param_3,auStack_d0,auStack_c0);
    if (iVar2 != 0) {
      puVar4 = (undefined1 *)(param_3 + -1);
      puVar3 = (undefined1 *)(param_3 + 0x10);
      do {
        puVar4 = puVar4 + 1;
        uVar1 = *puVar4;
        puVar3 = puVar3 + -1;
        *puVar4 = *puVar3;
        *puVar3 = uVar1;
      } while (puVar4 != (undefined1 *)(param_3 + 7));
      return 0;
    }
  }
  return 0xffffffea;
}

