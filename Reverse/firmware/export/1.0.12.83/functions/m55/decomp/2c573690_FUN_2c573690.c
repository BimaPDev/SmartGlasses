/* FUN_2c573690 @ 0x2c573690 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c573690(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uStack_40;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar3 = *(int *)(*(int *)(param_2 + 0x10) + param_3 * 4);
  iStack_1c = *_LAB_2c57378c;
  iVar4 = *(int *)(iVar3 + 0xb8);
  iVar6 = *(int *)(iVar3 + 0xd4);
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uVar7 = FUN_2c5c561c(param_1,0);
  uStack_40 = FUN_2c672a48((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
  iVar1 = FUN_2c669224(&uStack_40);
  iVar1 = *(int *)(iVar1 + 0x14) + 0x76c;
  if ((((iVar4 != iVar1) || (iVar6 != iVar1)) || (*(int *)(iVar3 + 0xc0) != *(int *)(iVar3 + 0xdc)))
     || (*(int *)(iVar3 + 0xbc) != *(int *)(iVar3 + 0xd8))) {
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = param_1 + 2;
    param_1[1] = 0;
    goto LAB_2c57374a;
  }
  puVar5 = param_1 + 2;
  FUN_2c66b4b8(&uStack_34,_LAB_2c573790,*(undefined4 *)(iVar3 + 0xc4),*(undefined4 *)(iVar3 + 200),
               *(undefined4 *)(iVar3 + 0xe0),*(undefined4 *)(iVar3 + 0xe4));
  *param_1 = puVar5;
  uVar2 = FUN_2c66c4ec(&uStack_34);
  uStack_40._0_4_ = uVar2;
  if (uVar2 < 0x10) {
    if (uVar2 == 1) {
      *(undefined1 *)(param_1 + 2) = (undefined1)uStack_34;
    }
    else if (uVar2 != 0) goto LAB_2c573770;
  }
  else {
    puVar5 = (undefined4 *)FUN_2c573300(&uStack_40,0);
    *param_1 = puVar5;
    param_1[2] = (uint)uStack_40;
LAB_2c573770:
    FUN_2c674668(puVar5,&uStack_34,uVar2);
    puVar5 = (undefined4 *)*param_1;
  }
  param_1[1] = (uint)uStack_40;
  *(undefined1 *)((int)puVar5 + (uint)uStack_40) = 0;
LAB_2c57374a:
  if (*_LAB_2c57378c != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

