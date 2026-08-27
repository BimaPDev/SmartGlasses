/* FUN_140e09e8 @ 0x140e09e8 */

undefined4 FUN_140e09e8(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((param_3 & 3) != 0) {
    param_2 = FUN_140e06a8(param_1,param_2,*(undefined4 *)(DAT_140e0a90 + ((param_3 & 3) - 1) * 4),0
                           ,param_4);
  }
  iVar3 = (int)param_3 >> 2;
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      puVar1 = (undefined4 *)FUN_140db6f0(0x10);
      *(undefined4 **)(param_1 + 0x24) = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)FUN_140da8c8(DAT_140e0a98,0x1ae,0,DAT_140e0a94);
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
    }
    iVar5 = *(int *)(param_1 + 0x24);
    puVar1 = *(undefined4 **)(iVar5 + 8);
    uVar4 = param_2;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_140e086c(param_1,0x271);
      *(undefined4 **)(iVar5 + 8) = puVar1;
      *puVar1 = 0;
    }
    while( true ) {
      puVar2 = puVar1;
      param_2 = uVar4;
      if (iVar3 << 0x1f < 0) {
        param_2 = FUN_140e0898(param_1,uVar4,puVar2);
        FUN_140e0664(param_1,uVar4);
      }
      iVar3 = iVar3 >> 1;
      if (iVar3 == 0) break;
      puVar1 = (undefined4 *)*puVar2;
      uVar4 = param_2;
      if ((undefined4 *)*puVar2 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)FUN_140e0898(param_1,puVar2,puVar2);
        *puVar2 = puVar1;
        *puVar1 = 0;
      }
    }
  }
  return param_2;
}

