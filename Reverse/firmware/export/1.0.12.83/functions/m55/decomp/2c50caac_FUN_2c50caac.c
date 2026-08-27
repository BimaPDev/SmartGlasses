/* FUN_2c50caac @ 0x2c50caac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50caac(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ushort uStack_20;
  undefined4 uStack_1c;
  
  uStack_1c = *_LAB_2c50cd30;
  *(undefined1 *)(param_1 + 0x54) = 0;
  puVar1 = _LAB_2c50cd34;
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  FUN_2c50c96c(param_1);
  uVar3 = FUN_2c637344(uVar2);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  FUN_2c6072bc(uVar3,2,0,0x1c);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x20),0x27d1,0x1c);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x20),*puVar1,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x20),2,0);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = FUN_2c5e2e80(_LAB_2c50cd38);
  FUN_2c606e38(uVar4,uVar3,0);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = registry_lookup(_LAB_2c50cd3c);
  FUN_2c638730(uVar4,uVar3);
  if (*(int *)(param_1 + 0x20) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x20),1);
  }
  uVar4 = FUN_2c606a10(uVar2);
  uVar3 = _DAT_2c50cd40;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  FUN_2c603a04(uVar4,0,uVar3);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x24),0x27d1,0x2c);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x24),2,0,0x158);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  FUN_2c606d30(uVar3,10,0);
  FUN_2c606d3c(uVar3,10,0);
  FUN_2c606d18(uVar3,10,0);
  FUN_2c606d24(uVar3,10,0);
  FUN_2c6036dc(*(undefined4 *)(param_1 + 0x24),param_1 + 0x18,0);
  FUN_2c6036dc(*(undefined4 *)(param_1 + 0x24),param_1 + 0x10,0);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x24),*puVar1,0);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x24),0x19,0);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x24),1);
    uVar3 = *(undefined4 *)(param_1 + 0x24);
  }
  uVar3 = FUN_2c637344(uVar3);
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  FUN_2c607048(uVar3,0x27d1,0x1c);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x28),*puVar1,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x28),2,0);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = FUN_2c5e2e80(_LAB_2c50cd38);
  FUN_2c606e38(uVar4,uVar3,0);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = registry_lookup(_LAB_2c50cd44);
  FUN_2c638730(uVar4,uVar3);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x28),9,0);
  if (*(int *)(param_1 + 0x28) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x28),1);
  }
  uVar2 = FUN_2c637344(uVar2);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  FUN_2c6072bc(uVar2,2,0,0x1ac);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x2c),0x27d1,0x18);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x2c),*puVar1,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x2c),2,0);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = FUN_2c5e2e80(_LAB_2c50cd38);
  FUN_2c606e38(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar2 = registry_lookup(_LAB_2c50cd48);
  FUN_2c638730(uVar3,uVar2);
  if (*(int *)(param_1 + 0x2c) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x2c),1);
  }
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  func_0x2c5d6324(&uStack_44);
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  func_0x2c5d636c(&uStack_30);
  uStack_20 = uStack_20 & 0xff;
  uVar2 = func_0x2c5d62e0();
  uVar2 = FUN_2c5dc51c(uVar2,1);
  FUN_2c638730(*(undefined4 *)(*(int *)(param_1 + 0x30) + 4),uVar2);
  FUN_2c607048(*(undefined4 *)(*(int *)(param_1 + 0x30) + 4),0x1d2,0x1c);
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(4,uVar2);
}

