/* FUN_2c5f03f4 @ 0x2c5f03f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5f03f4(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int aiStack_38 [2];
  undefined1 auStack_30 [4];
  int iStack_2c;
  int iStack_24;
  
  iStack_24 = *_LAB_2c5f04e0;
  if (param_2 == 0) {
    if (*_LAB_2c5f04e0 == iStack_24) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  iVar5 = param_1 + 0x30;
  FUN_2c66c568(iVar5,param_2,0x10,0);
  if (*(int *)(param_1 + 0x28) != 0) {
    aiStack_38[0] = _LAB_2c5f04e4;
    aiStack_38[1] = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5f04ec,0x75,_LAB_2c5f04e8);
  }
  uVar2 = FUN_2c637344(param_1);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  lv_obj_add_flag_invalidate(uVar2,1);
  registry_lookup(3);
  iVar3 = FUN_2c66c4ec();
  iVar4 = FUN_2c66c4ec(iVar5);
  iStack_2c = iVar4 + iVar3 + 1;
  iVar3 = -(iVar4 + iVar3 + 8U & 0xfffffff8);
  puVar1 = auStack_30 + iVar3;
  FUN_2c62c3b0(puVar1);
  uVar2 = registry_lookup(3);
  *(int *)((int)aiStack_38 + iVar3) = iVar5;
  FUN_2c62dbd4(puVar1,iStack_2c,_LAB_2c5f04f0,uVar2);
  FUN_2c606e74(*(undefined4 *)(param_1 + 0x28),0x66,0);
  *(undefined4 *)((int)aiStack_38 + iVar3) = _LAB_2c5f04f4;
  *(undefined1 **)(auStack_30 + iVar3 + -4) = puVar1;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5f04ec,0x6d,_LAB_2c5f04e8);
}

