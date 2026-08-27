/* FUN_2c5737f0 @ 0x2c5737f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c5737f0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar5 = **(int **)(param_2 + 0x10);
  iStack_1c = *_LAB_2c5738b8;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uVar1 = registry_lookup(0x6212,param_2,0);
  uVar4 = *(undefined4 *)(iVar5 + 0xb8);
  uVar6 = *(undefined4 *)(iVar5 + 0xbc);
  uVar8 = *(undefined4 *)(iVar5 + 0xc0);
  uVar2 = func_0x2c573794(*(undefined4 *)(iVar5 + 0xd0));
  puVar7 = param_1 + 2;
  FUN_2c66b4b8(&uStack_3c,_LAB_2c5738bc,uVar1,uVar4,uVar6,uVar8,uVar2,*(undefined4 *)(iVar5 + 0xc4),
               *(undefined4 *)(iVar5 + 200));
  *param_1 = puVar7;
  uVar3 = FUN_2c66c4ec(&uStack_3c);
  uStack_40 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 2) = (undefined1)uStack_3c;
      goto LAB_2c573870;
    }
    if (uVar3 == 0) goto LAB_2c573870;
  }
  else {
    puVar7 = (undefined4 *)FUN_2c573300(&uStack_40,0);
    *param_1 = puVar7;
    param_1[2] = uStack_40;
  }
  FUN_2c674668(puVar7,&uStack_3c,uVar3);
  puVar7 = (undefined4 *)*param_1;
LAB_2c573870:
  param_1[1] = uStack_40;
  *(undefined1 *)((int)puVar7 + uStack_40) = 0;
  if (*_LAB_2c5738b8 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

