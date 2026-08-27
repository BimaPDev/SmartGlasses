/* FUN_2c508910 @ 0x2c508910 */

void FUN_2c508910(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar3 = param_1 + param_2 * 4;
  FUN_2c50826c();
  puVar4 = *(undefined4 **)(iVar3 + 0x28);
  uVar1 = FUN_2c606a10(*(undefined4 *)(param_1 + 0x24));
  uVar2 = DAT_2c508a9c;
  *puVar4 = uVar1;
  FUN_2c603a04(**(undefined4 **)(iVar3 + 0x28),0,uVar2);
  FUN_2c607048(**(undefined4 **)(iVar3 + 0x28),0x8c,0x27d1);
  FUN_2c606d24(**(undefined4 **)(iVar3 + 0x28),0xc,0);
  FUN_2c606e68(**(undefined4 **)(iVar3 + 0x28),0xc,0);
  uVar5 = *DAT_2c508aa0;
  FUN_2c606d60(**(undefined4 **)(iVar3 + 0x28),uVar5,0);
  FUN_2c606d6c(**(undefined4 **)(iVar3 + 0x28),0);
  FUN_2c606d9c(**(undefined4 **)(iVar3 + 0x28),1,0);
  FUN_2c606d84(**(undefined4 **)(iVar3 + 0x28),uVar5,0);
  FUN_2c606d90(**(undefined4 **)(iVar3 + 0x28),0x4c,0);
  puVar4 = *(undefined4 **)(iVar3 + 0x28);
  uVar2 = FUN_2c6313f4(*puVar4);
  puVar4[1] = uVar2;
  FUN_2c63140c(*(undefined4 *)(*(int *)(iVar3 + 0x28) + 4),
               *(undefined4 *)(*(int *)(iVar3 + 0x28) + 0x14));
  FUN_2c6072bc(*(undefined4 *)(*(int *)(iVar3 + 0x28) + 4),2,0,0x10);
  puVar4 = *(undefined4 **)(iVar3 + 0x28);
  uVar2 = FUN_2c637344(*puVar4);
  puVar4[2] = uVar2;
  uVar2 = DAT_2c508aa4;
  FUN_2c6072bc(*(undefined4 *)(*(int *)(iVar3 + 0x28) + 8),2,0,0x38);
  FUN_2c6388dc(*(undefined4 *)(*(int *)(iVar3 + 0x28) + 8),0);
  FUN_2c6070bc(*(undefined4 *)(*(int *)(iVar3 + 0x28) + 8),0x7c);
  FUN_2c606e20(*(undefined4 *)(*(int *)(iVar3 + 0x28) + 8),uVar5,0);
  FUN_2c606e5c(*(undefined4 *)(*(int *)(iVar3 + 0x28) + 8),2,0);
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x28) + 8);
  uVar1 = FUN_2c5e2e80(uVar2);
  FUN_2c606e38(uVar6,uVar1,0);
  FUN_2c638730(*(undefined4 *)(*(int *)(iVar3 + 0x28) + 8),
               *(undefined4 *)(*(int *)(iVar3 + 0x28) + 0x18));
  puVar4 = *(undefined4 **)(iVar3 + 0x28);
  uVar1 = FUN_2c637344(*puVar4);
  puVar4[3] = uVar1;
  FUN_2c608808(*(undefined4 *)(*(int *)(iVar3 + 0x28) + 0xc),
               *(undefined4 *)(*(int *)(iVar3 + 0x28) + 8),0xd,0,8);
  FUN_2c6388dc(*(undefined4 *)(*(int *)(iVar3 + 0x28) + 0xc),0);
  FUN_2c6070bc(*(undefined4 *)(*(int *)(iVar3 + 0x28) + 0xc),0x7c);
  FUN_2c606e20(*(undefined4 *)(*(int *)(iVar3 + 0x28) + 0xc),uVar5,0);
  FUN_2c606e5c(*(undefined4 *)(*(int *)(iVar3 + 0x28) + 0xc),2,0);
  uVar1 = *(undefined4 *)(*(int *)(iVar3 + 0x28) + 0xc);
  uVar2 = FUN_2c5e2e80(uVar2);
  FUN_2c606e38(uVar1,uVar2,0);
  FUN_2c606e2c(*(undefined4 *)(*(int *)(iVar3 + 0x28) + 0xc),0x66,0);
  FUN_2c638730(*(undefined4 *)(*(int *)(iVar3 + 0x28) + 0xc),*(int *)(iVar3 + 0x28) + 0x1c);
  return;
}

