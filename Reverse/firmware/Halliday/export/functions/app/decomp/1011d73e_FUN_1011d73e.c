/* FUN_1011d73e @ 0x1011d73e */

undefined4 FUN_1011d73e(int param_1,undefined1 *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (param_2 == (undefined1 *)0x0) {
      uVar1 = 0;
    }
    else {
      if (param_3 != 0) {
        iVar6 = param_1 + 0x28;
        puVar4 = param_2;
        while (param_2 + param_3 != puVar4) {
          iVar3 = *(int *)(param_1 + 0x68);
          uVar2 = iVar3 + 1;
          *(uint *)(param_1 + 0x68) = uVar2;
          puVar5 = puVar4 + 1;
          iVar3 = iVar3 + param_1;
          *(undefined1 *)(iVar3 + 0x28) = *puVar4;
          puVar4 = puVar5;
          if (0x3f < uVar2) {
            param_1 = FUN_1006380c(param_1,iVar6,uVar2,iVar3,param_4);
            uVar2 = *(uint *)(param_1 + 0x20);
            *(uint *)(param_1 + 0x20) = uVar2 + 0x200;
            *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uint)(0xfffffdff < uVar2);
            *(undefined4 *)(param_1 + 0x68) = 0;
          }
        }
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}

